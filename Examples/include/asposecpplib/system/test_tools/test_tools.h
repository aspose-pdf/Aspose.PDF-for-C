/// @file system/test_tools/test_tools.h
#ifndef _TestTools_h_
#define _TestTools_h_

#include <functional>
#include <iterator>

#include "system/object.h"
#include "system/object_ext.h"
#include "system/string.h"
#include "system/constraints.h"
#include "system/text/string_builder.h"
#include "system/collections/icollection.h"
#include "system/collections/ienumerable.h"
#include "system/collections/dictionary.h"
#include "system/collections/keyvalue_pair.h"

namespace System {

/// Adapter to use IEnumerator in STL-like iterations.
/// Used by NUnit TestCaseSource attribute translation.
/// @tparam TT Release type of test method arguments.
/// @tparam T Source type of test method arguments.
template <typename TT, typename T>
class IEnumeratorIterator : public std::iterator<std::input_iterator_tag, TT> {
public:
    /// Constructor.
    /// @param data Container to iterate through.
    IEnumeratorIterator(const System::SharedPtr<System::Collections::Generic::IEnumerator<T>>& data) : m_data(data) {};
    /// Copy constructor.
    /// @param o Iterator to copy position from.
    IEnumeratorIterator(const IEnumeratorIterator& o) : m_data(o.m_data) {};

    /// C++-style iteration wrapper.
    /// @return Self reference.
    IEnumeratorIterator& operator++() { if (!m_data->MoveNext()) m_data = nullptr; return *this; }
    /// C++-style iterator dereference.
    /// @return Current element value.
    TT operator*() { return TT(m_data->get_Current()); };

    /// Iterator comparison.
    /// @param o iterator to compare with.
    /// @return True if iterators point same enumerator or both had finished iteration, false otherwise.
    bool operator==(const IEnumeratorIterator& o) const { return m_data == o.m_data; }
    /// Iterator comparison.
    /// @param o iterator to compare with.
    /// @return False if iterators point same enumerator or both had finished iteration, true otherwise.
    bool operator!=(const IEnumeratorIterator& o) const { return m_data != o.m_data; }

private:
    /// Enumerator to wrap; set to nullptr once end is hit.
    System::SharedPtr<System::Collections::Generic::IEnumerator<T>> m_data;
};

/// Adapter to use IEnumerable in STL-like iterations.
/// Used by NUnit TestCaseSource attribute translation.
/// @tparam TT Release type of test method arguments.
/// @tparam T Source type of test method arguments.
template <typename TT, typename T>
class IEnumerableAdapter
{
public:
    /// Type of elements.
    using value_type = TT;
    /// Iterator type.
    using const_iterator = IEnumeratorIterator<TT, T>;

    /// Constructs empty wrapper.
    IEnumerableAdapter() : m_data(nullptr) {}
    /// Constructs wrapper around existing C#-style container.
    /// @param data Container to wrap.
    IEnumerableAdapter(const System::SharedPtr<System::Collections::Generic::IEnumerable<T>>& data) : m_data(data->GetEnumerator()) {};

    /// Iteration begin.
    /// @return Iterator pointing the first element available.
    IEnumeratorIterator<TT, T> begin() const
    {
        return m_data->MoveNext() ? IEnumeratorIterator<TT, T>(m_data) : IEnumeratorIterator<TT, T>(nullptr);
    }
    /// Iteration end.
    /// @return Iterator pointing after the last element available.
    IEnumeratorIterator<TT, T> end() const { return IEnumeratorIterator<TT, T>(nullptr); }

private:
    /// Wrapped container.
    System::SharedPtr<System::Collections::Generic::IEnumerator<T>> m_data;
};

/// Adapter to use IEnumerable in STL-like iterations.
/// Used by NUnit TestCaseSource attribute translation.
/// @tparam TT Tuple of test method arguments.
/// @tparam Guard Service type argument whose purpose is to ensure that @p TT is tuple type
/// @tparam T First argument type of @p TT.
template <typename TT, class Guard = typename std::enable_if<System::Constraints::IsStdTuple<TT>::value>::type,
          typename T = typename std::tuple_element<0, TT>::type>
class IEnumerableTupleAdapter : public IEnumerableAdapter<TT, T>
{
public:
    /// Constructs wrapper around existing C#-style container.
    /// @param data Container to wrap.
    IEnumerableTupleAdapter(const System::SharedPtr<System::Collections::Generic::IEnumerable<T>>& data) :
        IEnumerableAdapter<TT, T>(data)
    {
    }
};

/// Adapter to use IEnumerable in STL-like iterations.
/// Used by NUnit TestCaseSource attribute translation.
/// @tparam T Container of test method arguments.
template <typename T>
class IEnumerableDefaultAdapter : public IEnumerableAdapter<T, T>
{
public:
    /// Constructs wrapper around existing C#-style container.
    /// @param data Container to wrap.
    IEnumerableDefaultAdapter(const System::SharedPtr<System::Collections::Generic::IEnumerable<T>>& data) :
        IEnumerableAdapter<T, T>(data)
    {
    }
};

/// Provides a set of useful methods that check some basic properties of different types and functions. 
struct TestTools
{

/// Checks if specific value is null.
/// Version for arithmetic types.
/// @tparam T Type of value being checked.
/// @param obj Value to check for null.
/// @return Always returns false.
template <typename T>
static typename std::enable_if<std::is_arithmetic<T>::value, bool>::type IsNull(T obj)
{
    return false;
}
/// Checks if specific value is null.
/// Version for non-arithmetic value types.
/// @tparam T Type of value being checked.
/// @param obj Value to check for null.
/// @return True if object is compared to nullptr as true, false otherwise.
template <typename T>
static typename std::enable_if<!std::is_arithmetic<T>::value, bool>::type IsNull(const T &obj)
{
    return obj == nullptr;
}
/// Checks if specific value is null.
/// Version for non-arithmetic value types.
/// @tparam T Type of value being checked.
/// @param obj Value to check for null.
/// @return True if object is compared to nullptr as true, false otherwise.
template <typename T>
static bool IsNull(const SharedPtr<T>& obj)
{
    return obj == nullptr;
}
/// Checks if specific value is null.
/// Version for key-value pairs.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param kvp Pair object.
/// @return True if pair is considered null, false otherwise.
template<typename K, typename V>
static  bool IsNull(System::Collections::Generic::KeyValuePair<K, V> & kvp)
{
    return kvp == nullptr;
}

/// Checks if string is empty.
/// @param str String to check for being empty.
/// @return True if string is empty (null-length), false otherwise.
static bool IsEmpty(const System::String& str)
{
    return str.IsEmpty();
}
/// Checks if collection is empty.
/// @tparam T Collection type.
/// @param collection Collection to check.
/// @return True if collection has zero element count, false otherwise.
template <typename T>
static bool IsEmpty(const SharedPtr<T>& collection)
{
    return collection->get_Count() == 0;
}

/// Checks if collection is null or empty.
/// @tparam T Collection type.
/// @param collection Collection to check.
/// @return True if collection is null or has zero element count, false otherwise.
template <typename T>
static bool IsNullOrEmpty(const SharedPtr<T>& collection)
{
    return collection == nullptr || collection->get_Count() == 0;
}
/// Checks if string is null or empty.
/// @param str String to check.
/// @return True if string is null or has zero length, false otherwise.
static bool IsNullOrEmpty(const System::String& str)
{
    return str.IsNullOrEmpty();
}

/// Checks if string is null.
/// @param str String to check.
/// @return True if string is considered null, false otherwise.
static bool IsNull(const System::String& str)
{
    return str.IsNull();
}

/// Checks if function throws exception of any type.
/// @param func Function to check for throwing.
/// @return True if function throws, false otherwise.
static bool AssertThrows(std::function<void()> func)
{
    try
    {
        func();
    }
    catch (...) {
        return true;
    }
    return false;
}

}; // namespace TestTools

/// Heler API for collection-related operations.
struct CollectionAssertHelper
{
    /// Calculates 'diff' between two collections.
    /// For every element of each collection as key resulting value will be positive if element occures more times in "expected" collection,
    /// negative if element occures more times in "actual" collection, and zero if element occures equal times in each collection.
    /// @tparam T1 Expected collection element type.
    /// @tparam T2 Actual collection element type.
    /// @param expected Expected collection.
    /// @param actual Actual collecion.
    /// @returns Map of per-value comparison results as per rules above.
    template <typename T1, typename T2>
    static System::SharedPtr<System::Collections::Generic::Dictionary<T1, int32_t>> MakeDiff(const System::SharedPtr<System::Collections::Generic::IEnumerable<T1>>& expected, const System::SharedPtr<System::Collections::Generic::IEnumerable<T2>>& actual)
    {
        System::SharedPtr<System::Collections::Generic::Dictionary<T1, int32_t>> diff = System::MakeObject<System::Collections::Generic::Dictionary<T1, int32_t>>();

        auto e_enumerator = (expected)->GetEnumerator();
        decltype(e_enumerator->get_Current()) e;
        while (e_enumerator->MoveNext() && (e = e_enumerator->get_Current(), true))
        {
            int32_t v;
            if (diff->TryGetValue(e, v))
            {
                diff->idx_set(e, v + 1);
            }
            else
            {
                diff->Add(e, 1);
            }
        }

        auto a_enumerator = (actual)->GetEnumerator();
        decltype(a_enumerator->get_Current()) a;
        while (a_enumerator->MoveNext() && (a = a_enumerator->get_Current(), true))
        {
            int32_t v;
            const T1 aa = static_cast<T1>(a);
            if (diff->TryGetValue(aa, v))
            {
                diff->idx_set(aa, v - 1);
            }
            else
            {
                diff->Add(aa, -1);
            }
        }
        return diff;
    }

    /// Checks that all collection elements adhere the predicate.
    /// @param pred Predicate to check.
    /// @param values Values to check.
    /// @return False if check fails for any element, true if all pass.
    static bool CheckDiffForAll(std::function<bool(int)> pred, const System::SharedPtr<System::Collections::Generic::ICollection<int32_t>>& values)
    {
        auto v_enumerator = (values)->GetEnumerator();
        int32_t v;
        while (v_enumerator->MoveNext() && (v = v_enumerator->get_Current(), true))
        {
            if (!pred(v))
            {
                return false;
            }
        }
        return true;
    }
    /// Checks that any collection element adheres the predicate.
    /// @param pred Predicate to check.
    /// @param values Values to check.
    /// @return True if check suceeds for any element, false if all pass.
    static bool CheckDiffForAny(std::function<bool(int)> pred, const System::SharedPtr<System::Collections::Generic::ICollection<int32_t>>& values)
    {
        auto v_enumerator = (values)->GetEnumerator();
        int32_t v;
        while (v_enumerator->MoveNext() && (v = v_enumerator->get_Current(), true))
        {
            if (pred(v))
            {
                return true;
            }
        }
        return false;
    }

    /// Converts collection to string by joining string representations of elements.
    /// @tparam T Collection element type.
    /// @param ie Collection to check.
    /// @return Joint values of collection.
    template <typename T>
    static System::String IEnumerableToStr(const System::SharedPtr<System::Collections::Generic::IEnumerable<T>>& ie)
    {
        if (ie == nullptr || !ie->GetEnumerator()->MoveNext())
        {
            return u"";
        }

        System::SharedPtr<System::Text::StringBuilder> sb = System::MakeObject<System::Text::StringBuilder>();

        auto e_enumerator = (ie)->GetEnumerator();
        decltype(e_enumerator->get_Current()) e;
        while (e_enumerator->MoveNext() && (e = e_enumerator->get_Current(), true))
        {
            sb->Append(System::ObjectExt::ToString(e))->Append(u", ");
        }

        sb->Remove(sb->get_Length() - 2, 2);

        return sb->ToString();
    }

    /// Serializes two collections for message representation.
    /// @tparam T1 Expected collection element type.
    /// @tparam T2 Actual collection element type.
    /// @param extra_msg A custom string which is inserted before the expected value in the resulting
    /// message
    /// @param expected Expected collection.
    /// @param actual Actual collection.
    /// @return User-friendly message on collections' contents.
    template <typename T1, typename T2>
    static System::String CollectionsToMsg(const System::String& extra_msg,
                                        const System::SharedPtr<System::Collections::Generic::IEnumerable<T1>>& expected,
                                        const System::SharedPtr<System::Collections::Generic::IEnumerable<T2>>& actual)
    {
        return u"\r\nExpected: " + extra_msg + u"< " + IEnumerableToStr(expected) + u" >" + 
               u"\r\nActual: < " + IEnumerableToStr(actual) + u" >";
    }

    /// Formats string to be used as message text.
    /// @param message String to format.
    /// @return String prefixed with 'Message: ' text and replaced with '\<empty\>' if empty.
    static System::String ToFullMessage(System::String message = u"")
    {
        return System::String(u"Message: ") + (message.IsEmpty() ? u"<empty>" : message);
    }
};

} // namespace System

/// Calls CollectionAssertHelper::MakeDiff on two collections with proper arguments.
/// @param expected Expected collection.
/// @param actual Actual collection.
#define COLLECTION_ASSERT_MAKE_DIFF(expected, actual) ((System::CollectionAssertHelper::MakeDiff<decltype((expected)->GetEnumerator()->get_Current()), decltype((actual)->GetEnumerator()->get_Current())>((expected), (actual)))->get_Values())
/// Calls CollectionAssertHelper::CollectionToMsg on two collections with proper arguments.
/// @param str Extra message.
/// @param expected Expected collection.
/// @param actual Actual collection.
#define COLLECTION_ASSERT_COLLECTIONS_TO_MSG(str, expected, actual) (System::CollectionAssertHelper::CollectionsToMsg<decltype((expected)->GetEnumerator()->get_Current()), decltype((actual)->GetEnumerator()->get_Current())>((str), (expected), (actual)))

/// Equivalent-compares collections.
/// @param expected Expected collection.
/// @param actual Actual collection.
#define COLLECTION_ASSERT_ARE_EQUIVALENT(expected, actual, ...) {\
    if (!System::CollectionAssertHelper::CheckDiffForAll([](int32_t v) {return v == 0;}, COLLECTION_ASSERT_MAKE_DIFF(expected, actual)))\
        FAIL() << (System::CollectionAssertHelper::ToFullMessage(__VA_ARGS__) + COLLECTION_ASSERT_COLLECTIONS_TO_MSG(u"equivalent to ", expected, actual)).ToUtf8String();\
}

/// Not-equivalent-compares collections.
/// @param expected Expected collection.
/// @param actual Actual collection.
#define COLLECTION_ASSERT_ARE_NOT_EQUIVALENT(expected, actual, ...) {\
    if (!System::CollectionAssertHelper::CheckDiffForAny([](int32_t v) {return v != 0;}, COLLECTION_ASSERT_MAKE_DIFF(expected, actual)))\
        FAIL() << (System::CollectionAssertHelper::ToFullMessage(__VA_ARGS__) + COLLECTION_ASSERT_COLLECTIONS_TO_MSG(u"not equivalent to ", expected, actual)).ToUtf8String();\
}

/// Subset-of-compares collections.
/// @param subset Collection which is checked to be a subset.
/// @param superset Collection which is checked to be a superset.
#define COLLECTION_ASSERT_IS_SUBSET_OF(subset, superset, ...) {\
    if (!System::CollectionAssertHelper::CheckDiffForAll([](int32_t v) {return v >= 0;}, COLLECTION_ASSERT_MAKE_DIFF(superset, subset)))\
        FAIL() << (System::CollectionAssertHelper::ToFullMessage(__VA_ARGS__) + COLLECTION_ASSERT_COLLECTIONS_TO_MSG(u"subset of ", superset, subset)).ToUtf8String();\
}

/// Not-subset-of-compares collections.
/// @param subset Collection which is checked to be a subset.
/// @param superset Collection which is checked to be a superset.
#define COLLECTION_ASSERT_IS_NOT_SUBSET_OF(subset, superset, ...) {\
    if (!System::CollectionAssertHelper::CheckDiffForAny([](int32_t v) {return v < 0;}, COLLECTION_ASSERT_MAKE_DIFF(superset, subset)))\
        FAIL() << (System::CollectionAssertHelper::ToFullMessage(__VA_ARGS__) + COLLECTION_ASSERT_COLLECTIONS_TO_MSG(u"not subset of ", superset, subset)).ToUtf8String();\
}

/// Generates structure that checks types if they have specific instance members.
/// @param member Suffix for checker structure name to be used after 'has_'.
/// @param name Member to look for.
#define TEST_IF_CASE_HAS(member, name) \
    template<typename T> struct has_##member \
    { \
    private: \
        static int detect(...); \
        template<typename U> static decltype(void(std::declval<U>().name)) detect(const U&); \
    public: \
        static constexpr bool value = std::is_same<void, decltype(detect(std::declval<T>()))>::value; \
    };


/// Generates structure that checks types if they have specific static members.
/// @param name Member to look for.
#define TEST_IF_STATIC_METHOD(name) \
    template<typename T> struct is_static_method \
    { \
    private: \
        static int detect(...); \
        template<typename U> static typename std::enable_if<std::is_function<decltype(U::name)>::value, bool>::type detect(const U&); \
    public: \
        static constexpr bool value = std::is_same<bool, decltype(detect(std::declval<T>()))>::value; \
    };\

/// Generates structure that checks types if they have specific static members.
/// @param name Member to look for.
#define TEST_IF_STATIC_METHOD_NAMED(name) \
    template<typename T> struct is_static_method_##name \
    { \
    private: \
        static int detect(...); \
        template<typename U> static typename std::enable_if<std::is_function<decltype(U::name)>::value, bool>::type detect(const U&); \
    public: \
        static constexpr bool value = std::is_same<bool, decltype(detect(std::declval<T>()))>::value; \
    };\

#endif // _TestTools_h_
