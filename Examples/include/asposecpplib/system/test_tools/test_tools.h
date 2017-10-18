#ifndef _TestTools_h_
#define _TestTools_h_

#include <functional>
#include <iterator>

#include "system/object.h"
#include "system/object_ext.h"
#include "system/string.h"
#include "system/text/string_builder.h"
#include "system/collections/icollection.h"
#include "system/collections/ienumerable.h"
#include "system/collections/dictionary.h"
#include "system/collections/keyvalue_pair.h"

namespace System {

//TT - tuple type
template<typename TT>
class IEnumeratorIterator : public std::iterator<std::input_iterator_tag, TT> {
public:
    using T = typename std::tuple_element<0, TT>::type;

    IEnumeratorIterator(System::SharedPtr<System::Collections::Generic::IEnumerator<T>> data) : m_data(data) {};
    IEnumeratorIterator(const IEnumeratorIterator& o) : m_data(o.m_data) {};

    IEnumeratorIterator& operator++() { if (!m_data->MoveNext()) m_data = nullptr; return *this; }
    TT operator*() { return TT(m_data->get_Current()); };

    bool operator==(const IEnumeratorIterator& o) const { return m_data == o.m_data; }
    bool operator!=(const IEnumeratorIterator& o) const { return m_data != o.m_data; }

private:
    System::SharedPtr<System::Collections::Generic::IEnumerator<T>> m_data;
};

template<typename TT>
class IEnumerableAdapter
{
public:
    using value_type = TT;
    using T = typename std::tuple_element<0, TT>::type;
    using const_iterator = IEnumeratorIterator<TT>;

    IEnumerableAdapter() : m_data(nullptr) {}
    IEnumerableAdapter(System::SharedPtr<System::Collections::Generic::IEnumerable<T>> data) : m_data(data->GetEnumerator()) {};

    IEnumeratorIterator<TT> begin() const { return m_data->MoveNext() ? IEnumeratorIterator<TT>(m_data) : IEnumeratorIterator<TT>(nullptr); }
    IEnumeratorIterator<TT> end()   const { return IEnumeratorIterator<TT>(nullptr); }

private:
    System::SharedPtr<System::Collections::Generic::IEnumerator<T>> m_data;
};

struct TestTools
{
    template <typename T>
    static typename std::enable_if<std::is_arithmetic<T>::value, bool>::type IsNull(T obj)
    {
        (void)obj;
        return false;
    }

    template <typename T>
    static typename std::enable_if<!std::is_arithmetic<T>::value, bool>::type IsNull(T obj)
    {
        return obj == nullptr;
    }

    template <typename T>
    static bool IsNull(SharedPtr<T> obj)
    {
        return obj.get() == nullptr;
    }

    template<typename K, typename V>
    static  bool IsNull(System::Collections::Generic::KeyValuePair<K, V> & kvp)
    {
        return (bool)kvp;
    }

    static bool IsEmpty(System::String str)
    {
        return str.IsEmpty();
    }

    template <typename T>
    static typename std::enable_if<!std::is_same<decltype(std::declval<System::SharedPtr<T>>()->get_Count()), void>::value, bool>::type IsEmpty(SharedPtr<T> collection)
    {
        return collection->get_Count() == 0;
    }

    template <typename T>
    static typename std::enable_if<std::is_same<decltype(std::declval<System::SharedPtr<T>>()->get_Count()), void>::value, bool>::type IsEmpty(SharedPtr<T> collection)
    {
        return collection->data().size() == 0;
    }

    template <typename T>
    static bool IsNullOrEmpty(SharedPtr<T> collection)
    {
        return collection.get() == nullptr || collection->data().size() == 0;
    }

    static bool IsNullOrEmpty(System::String str)
    {
        return str.IsNullOrEmpty();
    }
    static bool IsNull(System::String str)
    {
        return str.IsNull();
    }
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
};

struct CollectionAssertHelper
{
    // For every element of each collection as key resulting value will be 
    // positive if element occures more times in "expected" collection,
    // negative if element occures more times in "actual" collection,
    // and zero if element occures equal times in each collection.
    template <typename T1, typename T2>
    static System::SharedPtr<System::Collections::Generic::Dictionary<T1, int32_t>> MakeDiff(System::SharedPtr<System::Collections::Generic::IEnumerable<T1>> expected, System::SharedPtr<System::Collections::Generic::IEnumerable<T2>> actual)
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
            if (diff->TryGetValue(a, v))
            {
                diff->idx_set(a, v - 1);
            }
            else
            {
                diff->Add(a, -1);
            }
        }
        return diff;
    }

    static bool CheckDiffForAll(std::function<bool(int)> pred, System::SharedPtr<System::Collections::Generic::ICollection<int32_t>> values)
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

    static bool CheckDiffForAny(std::function<bool(int)> pred, System::SharedPtr<System::Collections::Generic::ICollection<int32_t>> values)
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

    template <typename T>
    static System::String IEnumerableToStr(System::SharedPtr<System::Collections::Generic::IEnumerable<T>> ie)
    {
        if (ie == nullptr || !ie->GetEnumerator()->MoveNext())
        {
            return L"";
        }

        System::SharedPtr<System::Text::StringBuilder> sb = System::MakeObject<System::Text::StringBuilder>();

        auto e_enumerator = (ie)->GetEnumerator();
        decltype(e_enumerator->get_Current()) e;
        while (e_enumerator->MoveNext() && (e = e_enumerator->get_Current(), true))
        {
            sb->Append(System::ObjectExt::ToString(e))->Append(L", ");
        }

        sb->Remove(sb->get_Length() - 2, 2);

        return sb->ToString();
    }

    template <typename T1, typename T2>
    static System::String CollectionsToMsg(System::String extra_msg,
                                        System::SharedPtr<System::Collections::Generic::IEnumerable<T1>> expected,
                                        System::SharedPtr<System::Collections::Generic::IEnumerable<T2>> actual)
    {
        return L"\r\nExpected: " + extra_msg + L"< " + IEnumerableToStr(expected) + L" >" + 
               L"\r\nActual: < " + IEnumerableToStr(actual) + L" >";
    }


    static System::String ToFullMessage(System::String message = L"")
    {
        return System::String(L"Message: ") + (message.IsEmpty() ? L"<empty>" : message);
    }
};

} // namespace System

#define COLLECTION_ASSERT_MAKE_DIFF(expected, actual) ((System::CollectionAssertHelper::MakeDiff<decltype((expected)->GetEnumerator()->get_Current()), decltype((actual)->GetEnumerator()->get_Current())>((expected), (actual)))->get_Values())
#define COLLECTION_ASSERT_COLLECTIONS_TO_MSG(str, expected, actual) (System::CollectionAssertHelper::CollectionsToMsg<decltype((expected)->GetEnumerator()->get_Current()), decltype((actual)->GetEnumerator()->get_Current())>((str), (expected), (actual)))

#define COLLECTION_ASSERT_ARE_EQUIVALENT(expected, actual, ...) {\
    if (!System::CollectionAssertHelper::CheckDiffForAll([](int32_t v) {return v == 0;}, COLLECTION_ASSERT_MAKE_DIFF(expected, actual)))\
        FAIL() << (System::CollectionAssertHelper::ToFullMessage(__VA_ARGS__) + COLLECTION_ASSERT_COLLECTIONS_TO_MSG(L"equivalent to ", expected, actual)).ToUtf8String();\
}

#define COLLECTION_ASSERT_ARE_NOT_EQUIVALENT(expected, actual, ...) {\
    if (!System::CollectionAssertHelper::CheckDiffForAny([](int32_t v) {return v != 0;}, COLLECTION_ASSERT_MAKE_DIFF(expected, actual)))\
        FAIL() << (System::CollectionAssertHelper::ToFullMessage(__VA_ARGS__) + COLLECTION_ASSERT_COLLECTIONS_TO_MSG(L"not equivalent to ", expected, actual)).ToUtf8String();\
}

#define COLLECTION_ASSERT_IS_SUBSET_OF(subset, superset, ...) {\
    if (!System::CollectionAssertHelper::CheckDiffForAll([](int32_t v) {return v >= 0;}, COLLECTION_ASSERT_MAKE_DIFF(superset, subset)))\
        FAIL() << (System::CollectionAssertHelper::ToFullMessage(__VA_ARGS__) + COLLECTION_ASSERT_COLLECTIONS_TO_MSG(L"subset of ", superset, subset)).ToUtf8String();\
}

#define COLLECTION_ASSERT_IS_NOT_SUBSET_OF(subset, superset, ...) {\
    if (!System::CollectionAssertHelper::CheckDiffForAny([](int32_t v) {return v < 0;}, COLLECTION_ASSERT_MAKE_DIFF(superset, subset)))\
        FAIL() << (System::CollectionAssertHelper::ToFullMessage(__VA_ARGS__) + COLLECTION_ASSERT_COLLECTIONS_TO_MSG(L"not subset of ", superset, subset)).ToUtf8String();\
}

// TEST_IF_CASE_HAS(field, foo)
// generates has_field<T> template
#define TEST_IF_CASE_HAS(member, name) \
    template<typename T> struct has_##member \
    { \
    private: \
        static int detect(...); \
        template<typename U> static decltype(void(std::declval<U>().name)) detect(const U&); \
    public: \
        static constexpr bool value = std::is_same<void, decltype(detect(std::declval<T>()))>::value; \
    };


#define TEST_IF_STATIC_METHOD(name) \
    template<typename T> struct is_static_method \
    { \
    private: \
        static int detect(...); \
        template<typename U> static typename std::enable_if<std::is_function<decltype(U::name)>::value, bool>::type detect(const U&); \
    public: \
        static constexpr bool value = std::is_same<bool, decltype(detect(std::declval<T>()))>::value; \
    };\

#endif // _TestTools_h_
