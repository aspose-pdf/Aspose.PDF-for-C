#ifndef _iequality_comparer_h_
#define _iequality_comparer_h_

#include "system/object.h"

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

            return x == y; // std::equal_to approach
        }
    private:
        SharedPtr<IEqualityComparer<T>> m_comparator;
    };

    template <typename TKey, bool IsObject = std::is_base_of<System::Object, TKey>::value>
    struct DictionaryHashSelector
    {
        typedef std::hash<TKey> type;
    };

    template <typename TKey>
    struct DictionaryHashSelector<TKey, true>
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
