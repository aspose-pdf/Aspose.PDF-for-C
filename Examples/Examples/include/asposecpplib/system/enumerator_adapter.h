#pragma once

#include <system/smart_ptr.h>
#include <system/boxable_traits.h>
#include <system/object_ext.h>
#include <iterator>
#include <utility>
#include <type_traits>

namespace System { namespace Details {

/// Alias for Enumerator type of Enumerable
/// @tparam Enumerable Type which implements IEnumerable interface
template<typename Enumerable>
using EnumeratorOf = std::remove_reference_t<decltype(*(std::declval<Enumerable>().GetEnumerator()))>;

/// Alias for Value type of Enumerable
/// @tparam Enumerable Type which implements IEnumerable interface
template<typename Enumerable>
using ValueTypeOfEnumerable = decltype(std::declval<EnumeratorOf<Enumerable>>().get_Current());

/// Checks if a given type has begin() and end() methods
/// Can be used in std::enable_if
/// @tparam T Type under check
template <typename T, typename = void>
struct IsIterable : std::false_type {};
template <typename T>
struct IsIterable<T, decltype(std::declval<T>().begin(), std::declval<T>().end(), void())>
    : std::true_type {};

/// Alias for a value type of iterable of a given type
/// @tparam T Type with begin() method
template<typename T>
using IterableValueType = decltype(*(std::declval<T>().begin()));

/// Type trait which find return type for given T
/// Should return correct SmartPtr if T is derived from Object, or Value type overwise
/// @tparam T Type under check
template<typename T, typename = void>
struct ReturnTypeTrait {};

/// Specialization for T == SmartPtr<Something>
template<typename T>
struct ReturnTypeTrait<T, std::enable_if_t<IsSmartPtr<T>::value>>
{
    using Pointee = std::remove_reference_t<decltype(*(std::declval<T>()))>;
    using ReturnType = SmartPtr<Pointee>;
    static constexpr bool value = true;
};

/// Specialization for T != SmartPtr<Something> and if T boxable
template<typename T>
struct ReturnTypeTrait<T, std::enable_if_t<!IsSmartPtr<T>::value && IsBoxable<T>::value>>
{
    using Pointee = void;
    using ReturnType = T;
    static constexpr bool value = false;
};

/// Specialization for T != SmartPtr<Something> and if T derived from Object
template<typename T>
struct ReturnTypeTrait<T, std::enable_if_t<!IsSmartPtr<T>::value && !IsBoxable<T>::value>>
{
    using Pointee = T;
    using ReturnType = SmartPtr<Pointee>;
    static constexpr bool value = true;
};

/// Type trait which checks if any cast is required
/// Can be used in std::enable_if
/// @tparam D destination type
/// @tparam S source type
template<typename D, typename S>
using WithoutCast = std::integral_constant<bool, std::is_same<typename ReturnTypeTrait<D>::ReturnType, typename ReturnTypeTrait<S>::ReturnType>::value>;

/// Type trait which checks if a dynamic cast is required
/// Can be used in std::enable_if
/// @tparam D destination type
/// @tparam S source type
template<typename D, typename S>
using WithDynamicCast = std::integral_constant<bool, ReturnTypeTrait<D>::value && ReturnTypeTrait<S>::value && !std::is_same<typename ReturnTypeTrait<D>::Pointee, typename ReturnTypeTrait<S>::Pointee>::value>;

/// Type trait which checks if unboxing (from Object to Value type) is required
/// Can be used in std::enable_if
/// @tparam D destination type
/// @tparam S source type
template<typename D, typename S>
using WithUnboxing = std::integral_constant<bool, !ReturnTypeTrait<D>::value && ReturnTypeTrait<S>::value && std::is_same<typename ReturnTypeTrait<S>::Pointee, System::Object>::value>;

/// Type trait which checks if boxing (from ValueType to SmartPtr<Object> type) is required
/// Can be used in std::enable_if
/// @tparam D destination type
/// @tparam S source type
template<typename D, typename S>
using WithBoxing = std::integral_constant<bool, ReturnTypeTrait<D>::value && !ReturnTypeTrait<S>::value && std::is_same<typename ReturnTypeTrait<D>::Pointee, System::Object>::value>;

/// Wrapping iterator around IEnumerator
/// It satisfies Fowrard Iterator requirements
/// @tparam T target type which iterator has to return
/// @tparam Enumerator Wrapped enumerator type
template<typename T, typename Enumerator>
struct WrappingIterator
{
    using TargetType = T;
    using SourceType = typename Enumerator::ValueType;

    using iterator_category = std::forward_iterator_tag;
    using value_type = typename ReturnTypeTrait<TargetType>::ReturnType;
    using difference_type = std::ptrdiff_t;
    using pointer = value_type*;
    using reference = value_type&;

    WrappingIterator() : mIsEnd(true) {}
    WrappingIterator(SmartPtr<Enumerator> enumerator) 
        : mEnumerator(std::move(enumerator))
        , mIsEnd(!mEnumerator->MoveNext())
    {}

    WrappingIterator(const WrappingIterator& other) = default;
    WrappingIterator(WrappingIterator&& other) = default;
    WrappingIterator& operator=(const WrappingIterator& other) = default;
    WrappingIterator& operator=(WrappingIterator&& other) = default;
    ~WrappingIterator() = default;

    bool operator!=(const WrappingIterator& other) const
    {
        if (mIsEnd && other.mIsEnd) return false;

        if (mIsEnd || other.mIsEnd) return true;

        // The correct comparison, but we use this iterator only for range-based loops
        // so it doesn't matter
        // mEnumerator->get_Current() != other.mEnumerator->get_Current();
        return false;
    }

    template<typename Q = TargetType>
    std::enable_if_t<WithoutCast<Q, SourceType>::value, SourceType>
    operator*() const
    {
        return mEnumerator->get_Current();
    }

    template<typename Q = TargetType>
    std::enable_if_t<WithDynamicCast<Q, SourceType>::value, value_type>
    operator*() const
    {
        return System::DynamicCast<typename ReturnTypeTrait<Q>::Pointee>(mEnumerator->get_Current());
    }

    template<typename Q = TargetType>
    std::enable_if_t<WithUnboxing<Q, SourceType>::value, value_type>
    operator*() const
    {
        return ObjectExt::Unbox<typename ReturnTypeTrait<Q>::ReturnType>(mEnumerator->get_Current());
    }

    template<typename Q = TargetType>
    std::enable_if_t<WithBoxing<Q, SourceType>::value, value_type>
    operator*() const
    {
        return ObjectExt::Box(mEnumerator->get_Current());
    }

    WrappingIterator& operator++()
    {
        mIsEnd = ! mEnumerator->MoveNext();
        return *this;
    }

private:
    /// Wrapped enumerator
    SmartPtr<Enumerator> mEnumerator;
    /// End of iterator flag
    bool mIsEnd;
};

/// Enumerator adapter which impements begin() and end() methods
/// It keeps original enumerable object
/// It lifetype is extended until the end of the loop (according to C++ standard)
/// @tparam Enumerable The type of the Enumerable object
/// @tparam T The target type which has to be returned from iterator
/// @tparam Payload The payload type - can be SharedPtr or Pointer to Enumerable
template<typename Enumerable, typename T = ValueTypeOfEnumerable<Enumerable>, typename Payload = SmartPtr<Enumerable>>
struct EnumeratorAdapter
{
    using iterator = WrappingIterator<T, EnumeratorOf<Enumerable>>;

    EnumeratorAdapter(Payload enumerable) : mEnumerable(std::move(enumerable)) {}

    iterator begin()
    {
        return WrappingIterator<T, EnumeratorOf<Enumerable>>(mEnumerable->GetEnumerator());
    }

    iterator end()
    {
        return iterator();
    }

private:
    Payload mEnumerable;
};


/// Wraps other forward iterator inside
/// Property cast target type
/// @tparam T The target type which has to be returned from iterator
template<typename T, typename Iterator>
struct AdaptedIterator
{
    using TargetType = T;
    using SourceType = typename std::iterator_traits<Iterator>::value_type;

    using iterator_category = std::forward_iterator_tag;
    using value_type = typename ReturnTypeTrait<TargetType>::ReturnType;
    using difference_type = std::ptrdiff_t;
    using pointer = value_type*;
    using reference = value_type&;

    AdaptedIterator(Iterator origin_iterator)
        : mOriginIterator(std::move(origin_iterator))
    {
    }

    AdaptedIterator(const AdaptedIterator& other) = default;
    AdaptedIterator(AdaptedIterator&& other) = default;
    AdaptedIterator& operator=(const AdaptedIterator& other) = default;
    AdaptedIterator& operator=(AdaptedIterator&& other) = default;


    friend bool operator==(const AdaptedIterator& lhs, const AdaptedIterator& rhs)
    {
        return lhs.mOriginIterator == rhs.mOriginIterator;
    }

    friend bool operator!=(const AdaptedIterator& lhs, const AdaptedIterator& rhs)
    {
        return lhs.mOriginIterator != rhs.mOriginIterator;
    }

    template<typename Q = TargetType>
    std::enable_if_t<WithoutCast<Q, SourceType>::value, value_type>
    operator*() const
    {
        return *mOriginIterator;
    }

    template<typename Q = TargetType>
    std::enable_if_t<WithDynamicCast<Q, SourceType>::value, value_type>
    operator*() const
    {
        return System::DynamicCast<typename ReturnTypeTrait<Q>::Pointee>(*mOriginIterator);
    }

    template<typename Q = TargetType>
    std::enable_if_t<WithUnboxing<Q, SourceType>::value, value_type>
    operator*() const
    {
        return ObjectExt::Unbox<typename ReturnTypeTrait<Q>::ReturnType>(*mOriginIterator);
    }

    template<typename Q = TargetType>
    std::enable_if_t<WithBoxing<Q, SourceType>::value, value_type>
    operator*() const
    {
        return ObjectExt::Box(*mOriginIterator);
    }

    AdaptedIterator& operator++()
    {
        ++mOriginIterator;
        return *this;
    }

private:
    Iterator mOriginIterator;
};

/// Implements begin() and end() methods with required value type
/// @tparam Iterable The type which implements begin() and end() methods
/// @tparam T The target type which has to be returned from iterator
template<typename Iterable, typename T>
struct CppIteratorAdapter
{
    CppIteratorAdapter(SmartPtr<Iterable> enumerable) : mEnumerable(std::move(enumerable)) {}

    using origin_iterator = decltype(std::declval<Iterable>().begin());
    using iterator = AdaptedIterator<T, origin_iterator>;

    iterator begin()
    {
        return iterator(mEnumerable->begin());
    }

    iterator end()
    {
        return iterator(mEnumerable->end());
    }

private:
    SmartPtr<Iterable> mEnumerable;
};

}

/// This function property wraps enumerable (or iterable) object so it can be used with range-based for loop
/// This overload for Enumerable without begin(), end() methods with target type argument
/// for (auto& value : IterateOver<SomeType>(enumerable))
/// @tparam T The target type, it has to be returned from iterator
/// @tparam Enumerable The type of a wrapped object
template<typename T, typename Enumerable>
std::enable_if_t<!Details::IsIterable<Enumerable>::value, Details::EnumeratorAdapter<Enumerable, T>>
IterateOver(System::SmartPtr<Enumerable> enumerable)
{
    return Details::EnumeratorAdapter<Enumerable, T>(std::move(enumerable));
}

/// This function property wraps enumerable (or iterable) object so it can be used with range-based for loop
/// This overload for Enumerable without begin(), end() methods with default target type argument
/// for (auto& value : IterateOver(enumerable))
/// analog to the following C# code
/// foreach (var value in enumerable)
/// @tparam Enumerable The type of a wrapped object
template<typename Enumerable>
std::enable_if_t<!Details::IsIterable<Enumerable>::value, Details::EnumeratorAdapter<Enumerable>>
IterateOver(System::SmartPtr<Enumerable> enumerable)
{
    return Details::EnumeratorAdapter<Enumerable>(std::move(enumerable));
}

/// This function property wraps enumerable (or iterable) object so it can be used with range-based for loop
/// This overload for Enumerable with begin(), end() methods with default target type argument
/// for (auto& value : IterateOver(enumerable))
/// @tparam Enumerable The type of a wrapped object
template<typename Enumerable>
std::enable_if_t<Details::IsIterable<Enumerable>::value, System::SmartPtr<Enumerable>>
IterateOver(System::SmartPtr<Enumerable> enumerable)
{
    return enumerable;
}

/// This function property wraps enumerable (or iterable) object so it can be used with range-based for loop
/// This overload for Enumerable with begin(), end() methods with target type same as original value_type of iterator
/// @tparam Enumerable The type of a wrapped object
/// @tparam T The target type which has to returned from iterator
template<typename T, typename Enumerable>
std::enable_if_t<Details::IsIterable<Enumerable>::value && std::is_same<typename Details::ReturnTypeTrait<T>::ReturnType, Details::IterableValueType<Enumerable>>::value, System::SmartPtr<Enumerable>>
IterateOver(System::SmartPtr<Enumerable> enumerable)
{
    return enumerable;
}

/// This function property wraps enumerable (or iterable) object so it can be used with range-based for loop
/// This overload for Enumerable with begin(), end() methods with different target type and original value_type of iterator
/// @tparam Enumerable The type of a wrapped object
/// @tparam T The target type which has to returned from iterator
template<typename T, typename Enumerable>
std::enable_if_t<Details::IsIterable<Enumerable>::value && !std::is_same<typename Details::ReturnTypeTrait<T>::ReturnType, Details::IterableValueType<Enumerable>>::value, Details::CppIteratorAdapter<Enumerable, T>>
IterateOver(System::SmartPtr<Enumerable> enumerable)
{
    return Details::CppIteratorAdapter<Enumerable, T>(std::move(enumerable));
}

/// This function property wraps enumerable (or iterable) object so it can be used with range-based for loop
/// This overload for Enumerable this with default target type
/// @tparam Enumerable The type of a wrapped object
template<typename Enumerable>
std::enable_if_t<!IsSmartPtr<Enumerable>::value, Details::EnumeratorAdapter<Enumerable, Details::ValueTypeOfEnumerable<Enumerable>, Enumerable*>>
IterateOver(Enumerable* enumerable)
{
    return Details::EnumeratorAdapter<Enumerable, Details::ValueTypeOfEnumerable<Enumerable>, Enumerable*>(enumerable);
}

/// This function property wraps enumerable (or iterable) object so it can be used with range-based for loop
/// This overload for Enumerable without begin(), end() methods with target type argument
/// for (auto& value : IterateOver<SomeType>(enumerable))
/// @tparam T The target type, it has to be returned from iterator
/// @tparam Enumerable The type of a wrapped object
template<typename T, typename Enumerable>
std::enable_if_t<!IsSmartPtr<Enumerable>::value, Details::EnumeratorAdapter<Enumerable, T, Enumerable*>>
IterateOver(Enumerable* enumerable)
{
    return Details::EnumeratorAdapter<Enumerable, T, Enumerable*>(enumerable);
}

}
