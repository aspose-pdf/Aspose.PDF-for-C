#ifndef _aspose_system_collection_list_h_
#define _aspose_system_collection_list_h_

#include "../details/collections_helper.h"
#include "../details/comparer_type.h"
#include <system/object.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <system/exceptions.h>
#include <system/collections/base_enumerator.h>
#include <system/collections/icomparer.h>
#include <system/collections/algorithms.h>
#include <system/collections/read_only_collection.h>
#include <system/predicate.h>
#include <system/comparison.h>
#include <system/action.h>
#include <system/converter.h>
#include <system/cycles_detection.h>
#include <system/multicast_delegate.h>

#include <fwd.h>

#include <vector>
#include <algorithm>
#include <utility>

namespace System {
namespace Collections {
namespace Generic {

    template<typename T> class List;

    template<typename T>
    class ListPtr : public SharedPtr<List<T> >
    {
    public:

        ListPtr() {}
        ListPtr(const SharedPtr<List<T> >& obj) : SharedPtr<List<T> >(obj) { }

        typename std::vector<T>::reference operator[](int idx) { return this->get()->operator[](idx); }
        typename std::vector<T>::const_reference operator[](int idx) const  { return this->get()->operator[](idx); }
    };

    // NOTICE: need operator== impemented for type T
    template<typename T>
    class List
        : virtual public Object
        , public System::Collections::Generic::IList<T>
    {
        RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::List<T>, System::BaseTypesInfo<System::Object>);

    protected:

        typedef SharedPtr<List<T> > ThisPtr;
        typedef std::vector<T> vector_t;
        typedef typename vector_t::iterator iterator_t;
        typedef typename vector_t::const_iterator const_iterator_t;
        vector_t m_data;

    public:
        typedef T ValueType;
        typedef IList<T> BaseType;

    public:

        typedef SharedPtr<IEnumerable<T> > IEnumerablePtr;
        typedef SharedPtr<IEnumerator<T> > IEnumeratorPtr;

        List() {}

        List(int capacity)
        {
            m_data.reserve(capacity);
        }

        List(IEnumerablePtr collection)
        {
            AddRange(collection);
        }

        List(int size, const T inits[]) : m_data(size)
        {
            for (int i = 0; i < size; ++i)
                m_data[i] = inits[i];
        }

        // IEnumerable<T> interface

        class Enumerator : public SimpleEnumerator<std::vector<T> >
        {
        public:
            Enumerator(const ThisPtr& data) : SimpleEnumerator<std::vector<T>>(data, data->m_data) { }
            RTTI_INFO_TEMPLATE_CLASS(List<T>::Enumerator, System::BaseTypesInfo<System::Object>);
        };

        IEnumeratorPtr GetEnumerator() override
        {
            return MakeObject<Enumerator>(std::move(MakeSharedPtr(this)));
        }

        // end of IEnumerable<T> interface

        // ICollection<T> interface

        int get_Count() const override
        {
            return (int)m_data.size();
        }

        void Add(const T& item) override
        {
            m_data.push_back(item);
        }

        void Clear() override
        {
            m_data.clear();
        }

        bool Contains(const T& item) const override
        {
            return FindInData(m_data.begin(), m_data.end(), item) != m_data.end();
        }

        bool Remove(const T& item) override
        {
            iterator_t it = FindInData(m_data.begin(), m_data.end(), item);
            if (it != m_data.end())
            {
                m_data.erase(it);
                return true;
            }
            return false;
        }

        //inherits get_IsReadOnly()

        void CopyTo(System::ArrayPtr<T> array, int arrayIndex) override
        {
            this->CopyTo(0, array, arrayIndex, m_data.size());
        }

        // end of ICollection<T> interface

        // IList<T> interface

        int IndexOf(const T& item) const override
        {
            const_iterator_t it = FindInData(m_data.begin(), m_data.end(), item);
            if (it != m_data.end())
            {
                return it - m_data.begin();
            }

            return -1;
        }

        void Insert(int index, const T& item) override
        {
            if (index < 0 || static_cast<size_t>(index) > m_data.size()) {
                throw ArgumentOutOfRangeException(L"index");
            }

            m_data.insert(m_data.begin() + index, item);
        }

        void RemoveAt(int index) override
        {
            if (Details::IsOutOfBounds(index, m_data)) {
                throw ArgumentOutOfRangeException(L"index");
            }
            m_data.erase(m_data.begin() + index);
        }

        T idx_get(int index) const override
        {
            return operator[](index);
        }

        void idx_set(int index, T value) override
        {
            operator[](index) = value;
        }

        // end of IList<T> interface

        int get_Capacity() const
        {
            return (int)m_data.capacity();
        }

        void set_Capacity(int capacity)
        {
            if (capacity < (int)m_data.size()) {
                throw ArgumentOutOfRangeException(L"capacity");
            }
            m_data.reserve(capacity);
        }

        void AddRange(IEnumerablePtr collection)
        {
            if (!collection) {
                throw ArgumentNullException(L"collection");
            }
            IEnumeratorPtr it = collection->GetEnumerator();
            while (it->MoveNext())
            {
                m_data.push_back(it->Current());
            }
        }

        SharedPtr<System::Collections::ObjectModel::ReadOnlyCollection<T>> AsReadOnly()
        {
            return MakeObject<System::Collections::ObjectModel::ReadOnlyCollection<T>>(this);
        }

        int BinarySearch(const T &item)
        {
            return _net_binnary_search(m_data, 0, m_data.size(), item);
        }

        int BinarySearch(const T &item, SharedPtr<System::Collections::Generic::IComparer<T> > comparer)
        {
            return _net_binnary_search(m_data, 0, m_data.size(), item, comparer);
        }

        int BinarySearch(int index, int count, const T &item, SharedPtr<System::Collections::Generic::IComparer<T> > comparer)
        {
            if (index < 0 || count < 0) {
                throw ArgumentOutOfRangeException(L"index or count");
            }

            if (Details::IsOutOfSize(index + count, m_data)) {
                throw ArgumentException(L"index or count");
            }

            return _net_binnary_search(m_data, index, count, item, comparer);
        }

        template <typename OutputType>
        SharedPtr<List<OutputType>> ConvertAll(Converter<T, OutputType> converter)
        {
            if (converter.IsNull()) {
                throw System::ArgumentNullException(L"converter");
            }
            SharedPtr<List<OutputType>> res = System::MakeObject<List<OutputType>>((int)m_data.size());
            for (size_t i = 0; i < m_data.size(); i++) {
                res->Add(converter(m_data[i]));
            }
            return res;
        }

        void CopyTo(System::ArrayPtr<T> array)
        {
            this->CopyTo(0, array, 0, m_data.size());
        }

        void CopyTo(int index, System::ArrayPtr<T> array, int arrayIndex, int count)
        {
            if (!array) {
                throw ArgumentNullException(L"array");
            }

            if (index < 0 || arrayIndex < 0 || count < 0) {
                throw ArgumentOutOfRangeException(L"index, arrayIndex or count");
            }

            if (Details::IsOutOfSize(index + count, m_data)
                || Details::IsOutOfSize(arrayIndex + count, array->data()) ) {
                throw ArgumentException(L"index, arrayIndex or count");
            }

            std::copy(m_data.begin() + index, m_data.begin() + index + count, array->data().begin() + arrayIndex);
        }

        bool Exists(System::Predicate<T> match)
        {
            if (match.IsNull()) {
                throw ArgumentNullException(L"match");
            }
            return FindIndex(match) != -1;
        }

        T Find(System::Predicate<T> predicate)
        {
            if (predicate.IsNull()) {
                throw ArgumentNullException(L"predicate");
            }
            for (iterator_t it = m_data.begin(); it != m_data.end(); it++)
            {
                if (predicate(*it))
                    return (*it);
            }
            return nullptr;
        }

        ListPtr<T> FindAll(System::Predicate<T> match)
        {
            if (match.IsNull()) {
                throw ArgumentNullException(L"match");
            }
            ListPtr<T> list = MakeObject<List<T>>();
            for (iterator_t it = m_data.begin(); it != m_data.end(); it++)
            {
                if (match(*it))
                    list->Add(*it);
            }
            return list;
        }

        int FindIndex(System::Predicate<T> match)
        {
            return FindIndex(0, m_data.size(), match);
        }

        int FindIndex(int startIndex, System::Predicate<T> match)
        {
            return FindIndex(startIndex, m_data.size() - startIndex, match);
        }

        int FindIndex(int startIndex, int count, System::Predicate<T> match)
        {
            if (match.IsNull()) {
                throw ArgumentNullException(L"match");
            }

            if (count < 0 || startIndex < 0
                || Details::IsOutOfSize(startIndex + count, m_data))
            {
                throw ArgumentOutOfRangeException(L"startIndex or count");
            }

            if (m_data.empty()) {
                return -1;
            }

            int const num = startIndex + count;
            for (int index = startIndex; index < num; ++index)
            {
                auto& item = m_data[index];
                if (match(item)) {
                    return index;
                }
            }
            return -1;
        }

        T FindLast(System::Predicate<T> match)
        {
            if (match.IsNull()) {
                throw ArgumentNullException(L"match");
            }
            T res = nullptr;
            for (iterator_t it = m_data.begin(); it != m_data.end(); it++)
            {
                if (match(*it))
                    res = (*it);
            }
            return res;
        }

        void ForEach(System::Action<T> action)
        {
            if (action.IsNull()) {
                throw ArgumentNullException(L"action");
            }
            for (iterator_t it = m_data.begin(); it != m_data.end(); it++)
            {
                action(*it);
            }
        }

        ThisPtr GetRange(int index, int count)
        {
            if (index < 0 || count < 0) {
                throw ArgumentOutOfRangeException(L"index or count");
            }

            if (Details::IsOutOfSize(index + count, m_data)) {
                throw ArgumentException(L"index or count");
            }

            ThisPtr rv = MakeObject<List<T> >(count);
            for (auto i = index; i < (index + count); ++i)
            {
                rv->m_data.push_back(m_data[i]);
            }

            return rv;
        }

        int IndexOf(const T& item, int index) const
        {
            if (Details::IsOutOfBounds(index, m_data)) {
                throw ArgumentOutOfRangeException(L"index");
            }
            typename std::vector<T>::const_iterator it = FindInData(m_data.begin() + index, m_data.end(), item);
            if (it != m_data.end())
            {
                return it - m_data.begin();
            }

            return -1;
        }

        void InsertRange(int index, IEnumerablePtr collection)
        {
            if (!collection) {
                throw ArgumentNullException(L"action");
            }

            if (index < 0 || static_cast<size_t>(index) > m_data.size()) {
                throw ArgumentOutOfRangeException(L"index");
            }

            IEnumeratorPtr it = collection->GetEnumerator();
            while (it->MoveNext())
            {
                m_data.insert(m_data.begin() + index++, it->Current());
            }
        }

        int RemoveAll(Predicate<T> match)
        {
            if (match.IsNull()) {
                throw ArgumentNullException(L"match");
            }

            typename vector_t::size_type removed = 0;

            for (typename vector_t::size_type index = 0; index < m_data.size(); )
            {
                if (match(m_data[index]))
                {
                    m_data.erase(m_data.begin() + index);
                    ++removed;
                }
                else
                {
                    ++index;
                }
            }

            return removed;
        }

        void RemoveRange(int index, int count)
        {
            if (index < 0 || count < 0) {
                throw ArgumentOutOfRangeException(L"index or count");
            }

            if (Details::IsOutOfSize(index + count, m_data)) {
                throw ArgumentException(L"index or count");
            }

            m_data.erase(m_data.begin() + index, m_data.begin() + index + count);
        }

        void Reverse()
        {
            std::reverse(m_data.begin(), m_data.end());
        }

        void Reverse(int index, int count)
        {
            if (index < 0 || count < 0) {
                throw ArgumentOutOfRangeException(L"index or count");
            }

            if (Details::IsOutOfSize(index + count, m_data)) {
                throw ArgumentException(L"index or count");
            }

            std::reverse(m_data.begin() + index, m_data.begin() + index + count);
        }

        void Sort(SharedPtr<System::Collections::Generic::IComparer<T> > comparator)
        {
            ComparerAdapter<T> adapter(comparator);
            std::sort(m_data.begin(), m_data.end(), adapter);
        }

        void Sort()
        {
            std::sort(m_data.begin(), m_data.end(), Details::ComparerType<ValueType>());
        }

        void Sort(int index, int count, SharedPtr<System::Collections::Generic::IComparer<T> > comparator)
        {
            if (index < 0 || count < 0) {
                throw ArgumentOutOfRangeException(L"index or count");
            }

            if (Details::IsOutOfSize(index + count, m_data)) {
                throw ArgumentException(L"index or count");
            }

            ComparerAdapter<T> adapter(comparator);
            std::sort(m_data.begin() + index, m_data.begin() + index + count, adapter);
        }

        void Sort(Comparison<T> comparison, bool) //second (bool) param to solve ambiguous call issue
        {
            if (comparison.IsNull()) {
                throw ArgumentNullException(L"comparison");
            }
            std::sort(m_data.begin(), m_data.end(), comparison);
        }

        ArrayPtr<T> ToArray() const
        {
            typename vector_t::size_type size = m_data.size();
            return size>0 ? MakeObject<Array<T> >(m_data.size(), &m_data[0]) : MakeObject<Array<T> >();
        }

        void TrimExcess()
        {
            m_data.shrink_to_fit();
        }

        typename vector_t::reference operator[](int index)
        {
            if (Details::IsOutOfBounds(index, m_data)) {
                throw ArgumentOutOfRangeException(L"index");
            }
            return m_data[index];
        }

        typename vector_t::const_reference operator[](int index) const
        {
            if (Details::IsOutOfBounds(index, m_data)) {
                throw ArgumentOutOfRangeException(L"index");
            }
            return m_data[index];
        }

        std::vector<T>& data() { return m_data; }
        const std::vector<T>& data() const { return m_data; }

    private:
        template <typename Q, typename I>
        typename std::enable_if<Details::IsEqualExist<Q>::value, I>::type FindInData(I begin, I end, const Q &item) const
        {
            return std::find(begin, end, item);
        }
        template <typename Q, typename I>
        typename std::enable_if<!Details::IsEqualExist<Q>::value, I>::type FindInData(I begin, I end, const Q &item) const
        {
            throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }
        template <typename Q, typename I>
        I FindInData(I begin, I end, const System::SharedPtr<Q> &item) const
        {
            return std::find_if(begin, end, [&item](const System::SharedPtr<Q> &element) { return element == nullptr ? item == nullptr : element->Equals(item); });
        }

#ifdef __DBG_FOR_EACH_MEMEBR
        public:
            void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
            {
                visitor.add_self(this);
                DBG::for_each_of_Object(this, m_data, visitor);
            }

            const char* DBG_class_name() const override { return "List<T>"; }
            bool DBG_unknown_type() const override { return false; }
#endif
    protected:
        DEFINE_GET_SHARED_MEMBERS(m_data)
    };

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collection_list_h_
