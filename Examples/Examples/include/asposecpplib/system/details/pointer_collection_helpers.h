/// @file system/details/pointer_collection_helpers.h
#ifndef _aspose_system_detail_pointer_collection_helpers_h_
#define _aspose_system_detail_pointer_collection_helpers_h_


#include <system/shared_ptr.h>
#include <system/weak_ptr.h>
#include <system/exceptions.h>

#include <array>
#include <memory>
#include <tuple>
#include <utility>
#include <type_traits>
#include <iostream>
#include <typeinfo>


namespace System { namespace Details { namespace CollectionHelpers {

/// Makes pointer weak.
/// Dummy implementation for non-pointer types to compile.
/// @tparam T Non-pointer type.
template <typename T>
void SetWeakPointer(const T&)
{}
/// Makes pointer weak.
/// @tparam T Pointee type.
/// @param p Pointer to set to weak mode.
template <typename T>
void SetWeakPointer(SmartPtr<T> &p)
{
    p.set_Mode(SmartPtrMode::Weak);
}
/// Makes pointer weak.
/// Casting implementation for specific cases where const_cast is required.
/// @tparam T Pointee type.
/// @param p Pointer to set to weak mode.
template <typename T>
void SetWeakPointer(const SmartPtr<T> &p)
{
    const_cast<SmartPtr<T>&>(p).set_Mode(SmartPtrMode::Weak);
}

/// Sets specific argument of template type to weak pointer mode.
/// Dummy implementation for non-pointer types to compile.
/// @tparam T Non-pointer type.
/// @param argument Template argument index to make weak pointer.
template <typename T>
void SetWeakPointer(unsigned int argument, const T&)
{}
/// Sets specific argument of template type to weak pointer mode.
/// @tparam T Non-pointer type.
/// @param argument Template argument index to make weak pointer.
/// @param p Pointer to template type object to set argument to weak mode.
template <typename T>
void SetWeakPointer(unsigned int argument, SmartPtr<T> &p)
{
    p->SetTemplateWeakPtr(argument);
}
/// Sets specific argument of template type to weak pointer mode.
/// @param argument Template argument index to make weak pointer.
/// @param o Template type object to set argument to weak mode.
inline void SetWeakPointer(unsigned int argument, Object &o)
{
    o.SetTemplateWeakPtr(argument);
}

/// Sets specific argument of member template type object to weak pointer mode.
/// @tparam T Non-pointer type type.
/// @param argument Template argument index to make weak pointer.
/// @param o Template type object to set argument to weak mode.
template <typename T, typename = typename std::enable_if<!System::IsSmartPtr<T>::value>::type>
void SetMemberWeakPointer(unsigned int argument, T &o)
{
    o.SetTemplateWeakPtr(argument);
}
/// Sets specific argument of member template type object to weak pointer mode.
/// Dummy implementation to use for pointer members which obey different rules.
/// @tparam T Pointer type.
template <typename T, typename = typename std::enable_if<System::IsSmartPtr<T>::value>::type>
void SetMemberWeakPointer(unsigned int, const T&, int = 0)
{}


/// Holds mode for contained pointers.
/// This specialization applies to non-pointers which don't have any pointer mode by definition.
/// @tparam T Element type.
template <typename T, bool = IsSmartPtr<T>::value && !IsWeakPtr<T>::value>
class ContainerPointerMode
{
public:
    /// Use default allocator for non-pointer types.
    typedef std::allocator<T> allocator_type;
    /// Gets allocator to initialize container with.
    /// @return Newly created allocator object.
    inline allocator_type GetAllocator() const
    { 
        return allocator_type();
    }
    /// Sets container elements to weak pointers.
    /// This implementation is for non-pointers, so this call is wrong by definition and present for compilability reasons only.
    template <typename Container>
    void SetWeak(unsigned int, const Container&)
    {
        assert(!"Applying weak pointer mode to container of non-pointers");
    }
};

/// Allocator to use with SmartPtr class.
/// Sets proper pointer mode when constructing SmartPtr object.
/// @tparam T Allocated type.
template <typename T>
class SmartPtrAllocator : public std::allocator<T>
{
public:
    /// Ensures using SmartPtrAllocator with different types.
    template <typename U> struct rebind
    {
        /// An alias for a SmartPtrAllocator for type argument of this template.
        using type = SmartPtrAllocator<U>;
    };

    /// Creates allocator referencing mode variable.
    /// @param mode Pointer to variable storing pointer mode associated with container.
    SmartPtrAllocator(const SmartPtrMode *mode)
        : m_mode(mode)
    {}
    /// Creates allocator constructing pointers of shared mode.
    SmartPtrAllocator()
        : m_mode(nullptr)
    {}
    /// Copy constructor.
    /// @tparam U Allocated type.
    /// @param allocator Allocator to copy mode variable pointer from.
    template <typename U>
    SmartPtrAllocator(const SmartPtrAllocator<U> &allocator)
        : m_mode(allocator.GetMode())
    {}
    
    /// Constructs unknown type.
    /// @tparam U Type to construct.
    /// @tparam Args Constructor argument types.
    /// @param p Pointer to object being constructed.
    /// @param args Constructor arguments.
    template <typename U, typename ...Args>
    void construct(U *p, Args &&...args)
    {
        std::allocator<T>::construct(p, std::forward<Args>(args)...);
    }
    /// Constructs smart pointer type.
    /// @tparam U Pointee type
    /// @tparam Args Constructor argument types.
    /// @param p Pointer to object being constructed.
    /// @param args Constructor arguments.
    template <typename U, typename ...Args>
    void construct(SmartPtr<U> *p, Args &&...args)
    {
        ::new ((void*)p) SmartPtr<U>(std::forward<Args&&>(args)..., m_mode ? *m_mode : SmartPtrMode::Shared);
    }
    /// Constructs smart pointer type.
    /// @tparam U Pointee type
    /// @tparam Args Constructor argument types.
    /// @param p Pointer to object being constructed.
    /// @param args Constructor arguments.
    template <typename U, typename ...Args>
    void construct(SmartPtr<U> *p, const Args &...args)
    {
        ::new ((void*)p) SmartPtr<U>(std::forward<const Args&>(args)..., m_mode ? *m_mode : SmartPtrMode::Shared);
    }

    /// Gets pointer to mode variable.
    /// @return Pointer to variable holding container mode.
    const SmartPtrMode* GetMode() const
    {
        return m_mode;
    }

private:
    /// Mode variable pointer.
    const SmartPtrMode *m_mode;
};

/// Specialization for containers of pointers.
template <typename T>
class ContainerPointerMode<T, true>
{
public:
    /// Use SmartPtrAllocator to set proper mode when constructing pointers.
    using allocator_type = SmartPtrAllocator<T>;

    /// Creates allocator used to construct pointers with proper mode.
    /// @return Newly created allocator.
    inline allocator_type GetAllocator() const
    { 
        return allocator_type(&m_mode);
    }

    /// Converts stored pointers to weak.
    /// @tparam Container Container type.
    /// @param argument Container type template argument to treat as weak pointer.
    /// @param container Container to switch to weak pointer mode.
    template <typename Container>
    void SetWeak(unsigned int argument, Container &container)
    {
        assert(argument == 0);

        if (m_mode == SmartPtrMode::Weak)
            return;

        m_mode = SmartPtrMode::Weak;
        for (auto &item : container)
            SetWeakPointer(item);
    }

private:
    /// Pointer mode to store.
    SmartPtrMode m_mode = SmartPtrMode::Shared;
};

/// Helper class to control pointer mode on map's keys or values separately.
/// Specialization for non-pointer elements.
/// @tparam T Key or value type.
template <typename T, bool = IsSmartPtr<T>::value && !IsWeakPtr<T>::value>
struct MapPointerHelper
{
    /// Helper class to store map keys or values pointers mode.
    typedef class 
    {
    public:
        /// Applies weak pointer mode to container of non-pointers.
        /// @tparam Container Container type.
        /// @tparam Element Element type.
        /// @tparam field Field to apply weak mode to.
        template <typename Container, typename Element, Element Container::value_type::*field>
        inline void SetWeak(const Container&)
        {
            assert(!"Applying weak pointer mode to non-pointer");
        }
    }
    storage_type;
    /// Helper class to prepare arguments for constructors invocations.
    typedef class StorageReference {
    public:
        /// Creates helper class responsible for preparing constructor arguments.
        inline StorageReference(const storage_type&) {}
        /// Packs arguments for constructor invocation.
        /// @tparam U Constructed type.
        /// @tparam Q Constructor arguments types.
        /// @param values Constructor arguments.
        /// @return Tuple of arguments to call constructor with.
        template <typename U, typename ...Q>
        inline std::tuple<const Q&...> Pack(const U*, const Q &...values) const
        {
            return std::tuple<const Q&...>(values...);
        }
        /// Packs arguments for constructor invocation.
        /// @tparam U Constructed type.
        /// @tparam Q Constructor arguments types.
        /// @param values Tuple of constructor arguments.
        /// @return Tuple of arguments to call constructor with.
        template <typename U, typename ...Q>
        inline std::tuple<Q...>&& Pack(const U*, std::tuple<Q...> &&values) const
        {
            return std::forward<std::tuple<Q...>>(values);
        }
        /// Sets mode of specified element.
        /// @tparam U Element type.
        template <typename U>
        inline void Set(const U&) const
        {}
    } storage_reference;
};
/// Specialization for smart pointers.
template <typename T>
struct MapPointerHelper<T, true>
{
    /// Helper class to store map keys or values pointers mode.
    typedef class {
    public:
        /// Applies weak pointer mode to container of non-pointers.
        /// @tparam Container Container type.
        /// @tparam Element Element type.
        /// @tparam field Field to apply weak mode to.
        /// @param container Container to apply weak pointer mode to elements of.
        template <typename Container, typename Element, Element Container::value_type::*field>
        inline void SetWeak(Container &container)
        {
            if (m_mode == SmartPtrMode::Weak)
                return;

            m_mode = SmartPtrMode::Weak;
            for (auto &item : container)
                SetWeakPointer(item.*field);
        }
        /// Gets pointer to mode variable.
        /// @return Pointer to variable storing pointer mode to use with container.
        inline const SmartPtrMode* GetReference() const
        {
            return &m_mode;
        }
    private:
        SmartPtrMode m_mode = SmartPtrMode::Shared;
    } storage_type;
    /// Helper class to prepare arguments for constructors invocations.
    typedef class StorageReference {
    public:
        /// Creates helper class responsible for preparing constructor arguments.
        /// @param storage Reference to pointer mode holder.
        inline StorageReference(const storage_type &storage) : m_mode(storage.GetReference()) {}

        /// Packs arguments for constructor invocation.
        /// @tparam U Constructed type.
        /// @tparam Q Constructor arguments types.
        /// @param values Constructor arguments.
        /// @return Tuple of arguments to call constructor with.
        template <typename U, typename ...Q>
        inline std::tuple<const Q&...> Pack(const U*, const Q &...values) const
        {
            return std::tuple<const Q&...>(values...);
        }
        /// Packs arguments for constructor invocation.
        /// @tparam U Constructed type.
        /// @tparam Q Constructor arguments types.
        /// @param values Constructor arguments tuple.
        /// @return Tuple of arguments to call constructor with.
        template <typename U, typename ...Q>
        inline std::tuple<Q...>&& Pack(const U*, std::tuple<Q...> &&values) const
        {
            return std::forward<std::tuple<Q...>>(values);
        }
        /// Packs arguments for constructor invocation.
        /// @tparam Q Constructor arguments types.
        /// @param values Constructor arguments.
        /// @return Tuple of arguments to call constructor with.
        template <typename ...Q>
        inline std::tuple<const Q&..., SmartPtrMode> Pack(const T*, const Q &...values) const
        {
            return std::tuple<const Q&..., SmartPtrMode>(values..., m_mode ? *m_mode : SmartPtrMode::Shared);
        }
        /// Packs arguments for constructor invocation.
        /// @tparam U Constructed type.
        /// @tparam Q Constructor arguments types.
        /// @param values Constructor arguments tuple.
        /// @return Tuple of arguments to call constructor with.
        template <typename ...Q>
        inline std::tuple<Q..., SmartPtrMode> Pack(const T*, std::tuple<Q...> &&values) const
        {
            return std::tuple_cat(std::forward<std::tuple<Q...>>(values), std::make_tuple(m_mode ? *m_mode : SmartPtrMode::Shared));
        }
        /// Sets mode of specified element.
        /// @tparam U Element type.
        template <typename U>
        inline void Set(const U&) const
        {}
        /// Sets mode of specified element.
        /// @param ptr Pointer to apply actual mode to.
        inline void Set(T &ptr) const
        {
            if (m_mode) ptr.set_Mode(*m_mode);
        }
        /// Sets mode of specified element.
        /// @param ptr Pointer to apply actual mode to.
        inline void Set(const T &ptr) const
        {
            if (m_mode) const_cast<T&>(ptr).set_Mode(*m_mode);
        }
    private:
        /// Pointer to variable storing actual pointer mode to use.
        const SmartPtrMode *const m_mode;
    } storage_reference;
};

/// Composite class storing independent pointer modes to use for map keys and map values and providing complex allocator initializing stored pointers as required.
/// Specialization for maps of non-pointer elements.
template <typename Key, typename Value, bool = (IsSmartPtr<Key>::value && !IsWeakPtr<Key>::value) || (IsSmartPtr<Value>::value && !IsWeakPtr<Value>::value)>
class MapPointerMode
{
public:
    /// Use default allocator.
    typedef std::allocator<std::pair<Key, Value>> allocator_type;
    /// Gets allocator to use with map.
    /// @return Newly created allocator.
    inline allocator_type GetAllocator() const
    { 
        return allocator_type();
    }
    /// Makes stored map keys or values weak pointers.
    /// @tparam Container Container type.
    template <typename Container>
    void SetWeak(unsigned int, const Container&)
    {
        assert(!"Applying weak pointer mode to container of non-pointers");
    }
};

/// Allocator to use with map-like data structures to control pointer modes of newly allocated keys and/or values.
/// @param T Allocated type.
/// @param Key Key type.
/// @param Value Value type.
template <typename T, typename Key, typename Value>
class SmartPtrPairAllocator : public std::allocator<T>
{
public:
    /// Use same allocator family with different types.
    template <typename U> struct rebind
    {
        /// An alias for a SmarPtrPairAllocator parameterized with @p U, @p Key and @p Value types.
        using type = SmartPtrPairAllocator<U, Key, Value>;
    };

    /// Creates allocator with controllable key and/or value pointer modes.
    /// @param key Reference to variable storing key pointer mode (if applicable).
    /// @param value Reference to variable storing value pointer mode (if applicable).
    SmartPtrPairAllocator(const typename MapPointerHelper<Key>::storage_reference &key, const typename MapPointerHelper<Value>::storage_reference &value)
        : m_key(key), m_value(value)
    {}
    /// Copy constructor.
    /// @tparam U Allocator type.
    /// @param other Allocator to get control variables pointers from.
    template <typename U>
    SmartPtrPairAllocator(const SmartPtrPairAllocator<U, Key, Value> &other)
        : m_key(other.GetKey()), m_value(other.GetValue())
    {}

    /// Constructs unknown type.
    /// @tparam U Type to construct.
    /// @tparam Args Constructor argument types.
    /// @param p Pointer to object being constructed.
    /// @param args Constructor arguments.
    template <typename U, typename ...Args>
    void construct(U *p, Args &&...args)
    {
        std::allocator<T>::construct(p, std::forward<Args>(args)...);
    }
    /// Copy-constructs key-value pair.
    /// @tparam K Destination key type.
    /// @tparam V Destination value type.
    /// @tparam K2 Source key type.
    /// @tparam V2 Source value type.
    /// @param p Destination pair.
    /// @param value Source pair.
    template <typename K, typename V, typename K2, typename V2>
    void construct(std::pair<K, V> *p, const std::pair<K2, V2> &value)
    {
        std::allocator<T>::construct(p, std::piecewise_construct, m_key.Pack(&value.first, value.first), m_value.Pack(&value.second, value.second));
    }
    /// Copy-constructs key-value pair.
    /// @tparam K Destination key type.
    /// @tparam V Destination value type.
    /// @tparam K2 Source key type.
    /// @tparam V2 Source value type.
    /// @param p Destination pair.
    /// @param value Source pair.
    template <typename K, typename V, typename K2, typename V2>
    void construct(std::pair<K, V> *p, std::pair<K2, V2> &value)
    {
        std::allocator<T>::construct(p, std::piecewise_construct, m_key.Pack(&value.first, value.first), m_value.Pack(&value.second, value.second));
    }
    /// Copy-constructs key-value pair.
    /// @tparam K Destination key type.
    /// @tparam V Destination value type.
    /// @tparam K2 Source key type.
    /// @tparam V2 Source value type.
    /// @param p Destination pair.
    /// @param value Source pair.
    template <typename K, typename V, typename K2, typename V2>
    void construct(std::pair<K, V> *p, std::pair<K2, V2> &&value)
    {
        std::allocator<T>::construct(p, std::piecewise_construct, m_key.Pack(&value.first, value.first), m_value.Pack(&value.second, value.second));
    }
    /// Constructs key-value pair.
    /// @tparam K Key type.
    /// @tparam V Value type.
    /// @param p Destination pair.
    /// @param key Key initializer.
    /// @param value Value initializer.
    template <typename K, typename V>
    void construct(std::pair<K, V> *p, K &&key, V &&value)
    {
        std::allocator<T>::construct(p, std::piecewise_construct, m_key.Pack(&key, key), m_value.Pack(&value, value));
    }
    /// Constructs key-value pair.
    /// @tparam K Key type.
    /// @tparam V Value type.
    /// @tparam Tuple1 Tuple of key constructor arguments.
    /// @tparam Tuple2 Tuple of value constructor arguments.
    /// @param p Destination pair.
    /// @param tuple1 Key constructor arguments.
    /// @param tuple2 Value constructor arguments.
    template <typename K, typename V, typename ...Tuple1, typename ...Tuple2>
    void construct(std::pair<K, V> *p, const decltype(std::piecewise_construct)&, const std::tuple<Tuple1...> &tuple1, const std::tuple<Tuple2...> &tuple2)
    {
        std::allocator<T>::construct(p, std::piecewise_construct, m_key.Pack(&p->first, tuple1), m_value.Pack(&p->second, tuple2));
    }
    /// Constructs key-value pair.
    /// @tparam K Key type.
    /// @tparam V Value type.
    /// @tparam Tuple1 Tuple of key constructor arguments.
    /// @tparam Tuple2 Tuple of value constructor arguments.
    /// @param p Destination pair.
    /// @param tuple1 Key constructor arguments.
    /// @param tuple2 Value constructor arguments.
    template <typename K, typename V, typename ...Tuple1, typename ...Tuple2>
    void construct(std::pair<K, V> *p, const decltype(std::piecewise_construct)&, std::tuple<Tuple1...> &&tuple1, std::tuple<Tuple2...> &&tuple2)
    {
        std::allocator<T>::construct(p, std::piecewise_construct, m_key.Pack(&p->first, std::forward<std::tuple<Tuple1...>>(tuple1)), m_value.Pack(&p->second, std::forward<std::tuple<Tuple2...>>(tuple2)));
    }
    /// Constructs key-value pair using unexpected set of construvtor arguments.
    /// Constructs pair first, then applies pointer types.
    /// @tparam K Key type.
    /// @tparam V Value type.
    /// @tparam Args Pair constructor arguments types.
    /// @param p Destination pair.
    /// @param args Pair constructor arguments.
    template <typename K, typename V, typename ...Args>
    void construct(std::pair<K, V> *p, Args &&...args)
    {
#ifdef _DEBUG
        std::cerr << "Using " << typeid(*this).name() << "::construct(std::pair<K,V>*, Args&&...) is not recommended. Define better overload if possible" << std::endl;
#endif
        std::allocator<T>::construct(p, std::forward<Args>(args)...);
        m_key.Set(p->first);
        m_value.Set(p->second);
    }

    /// Gets reference to key pointer mode variable (if applicable).
    /// @return Object incapsulating pointer to key pointer mode (if applicable).
    const typename MapPointerHelper<Key>::storage_reference GetKey() const
    {
        return m_key;
    }
    /// Gets reference to value pointer mode variable (if applicable).
    /// @return Object incapsulating pointer to value pointer mode (if applicable).
    const typename MapPointerHelper<Value>::storage_reference GetValue() const
    {
        return m_value;
    }

private:
    /// Stores reference to key pointer mode variable (if applicable).
    typename MapPointerHelper<Key>::storage_reference m_key;
    /// Stores reference to value pointer mode variable (if applicable).
    typename MapPointerHelper<Value>::storage_reference m_value;
};

/// Specialization for map where either keys or values or both are smart pointers.
/// @tparam Key Key type.
/// @tparam Value Value type.
template <typename Key, typename Value>
class MapPointerMode<Key, Value, true>
{
public:
    /// Use SmartPtrPairAllocator to set proper pointer modes to pairs being allocated.
    using allocator_type = SmartPtrPairAllocator<std::pair<Key, Value>, Key, Value>;
    /// Gets allocator to use on container.
    /// @return Newly created allocator.
    inline allocator_type GetAllocator() const
    { 
        return allocator_type(m_key, m_value);
    }

    /// Applies weak pointer mode to map keys or values.
    /// @tparam Container Map type.
    /// @param argument 0 for keys, 1 for values.
    /// @param container Container to change pointer types for.
    template <typename Container>
    void SetWeak(unsigned int argument, Container &container)
    {
        switch (argument)
        {
        case 0:
            m_key.template SetWeak<Container, decltype(Container::value_type::first), &Container::value_type::first>(container);
            break;
        case 1:
            m_value.template SetWeak<Container, decltype(Container::value_type::second), &Container::value_type::second>(container);
            break;
        default:
            assert(argument == 0 || argument == 1);
            break;
        }
    }

private:
    /// Stores key pointer type (if applicable).
    typename MapPointerHelper<Key>::storage_type m_key;
    /// Stores value pointer type (if applicable).
    typename MapPointerHelper<Value>::storage_type m_value;
};

} } } //System::Details::CollectionHelpers


#endif //_aspose_system_detail_pointer_collection_helpers_h_
