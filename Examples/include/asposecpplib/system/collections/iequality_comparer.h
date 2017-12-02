#ifndef _iequality_comparer_h_
#define _iequality_comparer_h_

#include "system/object.h"
#include <system/details/equality_helper.h>

namespace System { namespace Collections { namespace Generic {

    template<typename T>
    class ABSTRACT IEqualityComparer: virtual public Object
    {
    public:
        RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::IEqualityComparer<T>, System::BaseTypesInfo<System::Object>);
    public:
        virtual bool Equals(T x, T y) ASPOSE_CONST = 0;

        virtual int GetHashCode(T obj) const = 0;
    };

    template<class T>
    struct EqualityComparerAdapter
    {
        EqualityComparerAdapter()
        {}
        EqualityComparerAdapter(SharedPtr<IEqualityComparer<T>> comparator)
            : m_comparator(comparator)
        {}

        void set_EqualityComparator(SharedPtr<IEqualityComparer<T>> comparator)
        {
            m_comparator = comparator;
        }

        bool operator()(const T &x, const T &y) const
        {
            if( m_comparator )
                return m_comparator->Equals(x, y);

            return System::Details::AreEqual(x, y);
        }

    private:
        SharedPtr<IEqualityComparer<T>> m_comparator;
    };

    template <typename TKey, bool IsObject = std::is_base_of<System::Object, TKey>::value, bool IsEnum = std::is_enum<TKey>::value>
    struct DictionaryHashSelector
    {
        typedef std::hash<TKey> type;
    };

    template <typename TKey>
    struct DictionaryHashSelector<TKey, true, false>
    {
        using type = struct
        {
            using argument_type = const TKey&;
            using result_type = std::size_t;

            std::size_t operator ()(const System::Object &obj) const
            {
                return obj.GetHashCode();
            }
        };
    };

    template <typename TKey>
    struct DictionaryHashSelector<TKey, false, true>
    {
        using type = struct
        {
            using argument_type = const TKey&;
            using result_type = std::size_t;

            std::size_t operator ()(const TKey &enum_) const
            {
                return static_cast<std::size_t>(enum_);
            }
        };
    };


    template<typename T>
    struct EqualityComparerHashAdapter
    {
        EqualityComparerHashAdapter()
        {}
        EqualityComparerHashAdapter(SharedPtr<IEqualityComparer<T>> comparator)
            : m_comparator(comparator)
        {}

        void set_EqualityComparator(SharedPtr<IEqualityComparer<T>> comparator)
        {
            m_comparator = comparator;
        }

        std::size_t operator ()(const T &x) const
        {
            if (m_comparator)
                return m_comparator->GetHashCode(x);

            typename DictionaryHashSelector<T>::type hash_selector;

            return hash_selector(x);
        }
    private:
        SharedPtr<IEqualityComparer<T>> m_comparator;
    };



}}}

#endif // _IEnumerator_h_
