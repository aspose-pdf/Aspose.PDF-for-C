/// @file system/collections/list.h
#ifndef _aspose_system_collection_list_h_
#define _aspose_system_collection_list_h_

#include <system/details/collections_helper.h>
#include <system/details/comparer_type.h>
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

/// List forward declaration.
template<typename T> class List;

/// List pointer with access operators.
/// This type is a pointer to manage other object's deletion.
/// It should be allocated on stack and passed to functions either by value or by const reference.
template<typename T>
class ListPtr : public SharedPtr<List<T>>
{
public:
    /// Initializes null-pointer.
    ListPtr() {}
    /// Initializes pointer to specified list.
    /// @param obj List to point to.
    ListPtr(const SharedPtr<List<T> >& obj) : SharedPtr<List<T>>(obj) { }

    /// Accessor.
    /// @param idx Index to access element from.
    /// @return Reference to specified element.
    typename std::vector<T>::reference operator[](int idx) { return (*this)->operator[](idx); }
    /// Accessor.
    /// @param idx Index to access element from.
    /// @return Const reference to specified element.
    typename std::vector<T>::const_reference operator[](int idx) const  { return (*this)->operator[](idx); }
};

/// List - wrapper around std::vector to be used in ported code.
/// Requires operator == to be impemented for element type.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T Element type.
template<typename T>
class List
    : virtual public Object
    , public System::Collections::Generic::IList<T>
{
public:
    /// This type.
    typedef T ValueType;
    /// Interface type.
    typedef IList<T> BaseType;

private:
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::List<T>, System::BaseTypesInfo<System::Object>);
    /// Type which stores information on stored pointers mode (weak/shared), if applicable.
    typedef System::Details::CollectionHelpers::ContainerPointerMode<ValueType> pointer_mode_t;
    /// Information on stored pointers mode (weak/shared), if applicable.
    pointer_mode_t m_pointer_mode;

public:
    /// Underlying data type.
    typedef std::vector<T, typename pointer_mode_t::allocator_type> vector_t;

protected:
    /// Pointer type.
    typedef SharedPtr<List<T> > ThisPtr;
    /// Iterator type.
    typedef typename vector_t::iterator iterator_t;
    /// Const iterator type.
    typedef typename vector_t::const_iterator const_iterator_t;
    /// Underlting data structure.
    vector_t m_data;

public:
    /// Container holding elements of same type we hold.
    typedef SharedPtr<IEnumerable<T> > IEnumerablePtr;
    /// Enumerator type.
    typedef SharedPtr<IEnumerator<T> > IEnumeratorPtr;

    /// Creates empty list.
    List() : m_data(m_pointer_mode.GetAllocator()) {}
    /// Creates list with pre-defined capacity.
    /// @param capacity Number of elements to reserve.
    List(int capacity) : m_data(m_pointer_mode.GetAllocator())
    {
        m_data.reserve(capacity);
    }
    /// Copy constructor.
    /// @param collection Collection to copy data from.
    List(IEnumerablePtr collection) : m_data(m_pointer_mode.GetAllocator())
    {
        AddRange(collection);
    }

    /// Adds elements to list; used when translating initializers.
    /// @param size Number of elements to insert.
    /// @param inits Elements to insert.
    void AddInitializer(int size, const T inits[])
    {
        for (int i = 0; i < size; ++i)
            m_data.push_back(inits[i]);
    }

    // IEnumerable<T> interface
    /// Enumerator to iterate through list elements.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class Enumerator : public SimpleEnumerator<vector_t>
    {
    public:
        /// Creates enumerator iterating through specific list.
        /// @param data List to iterate through.
        Enumerator(const ThisPtr& data) : SimpleEnumerator<vector_t>(data, data->m_data) { }
        /// RTTI information.
        RTTI_INFO_TEMPLATE_CLASS(List<T>::Enumerator, System::BaseTypesInfo<System::Object>);
    };
    /// Gets enumerator to iterate through list elements.
    /// @return Pointer to newly created enumerator.
    IEnumeratorPtr GetEnumerator() override
    {
        return MakeObject<Enumerator>(std::move(MakeSharedPtr(this)));
    }

    // end of IEnumerable<T> interface

    // ICollection<T> interface
    /// Gets number of elements in current list.
    /// @return Actual number of elements.
    int get_Count() const override
    {
        return (int)m_data.size();
    }
    /// Adds element to the end of list.
    /// @param item Item to add.
    void Add(const T& item) override
    {
        m_data.push_back(item);
    }
    /// Deletes all elements.
    void Clear() override
    {
        m_data.clear();
    }
    /// Checks if item is present in list.
    /// @param item Item to look for.
    /// @return True if item is found, false otherwise.
    bool Contains(const T& item) const override
    {
        return FindInData(m_data.begin(), m_data.end(), item) != m_data.end();
    }
    /// Removes first instance of specific item from list.
    /// @param item Item to remove.
    /// @return True if item was found and removed, false otherwise.
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
    /// Copies list elements into existing array elements.
    /// @param array Destination array.
    /// @param arrayIndex Destination array starting index.
    void CopyTo(System::ArrayPtr<T> array, int arrayIndex) override
    {
        this->CopyTo(0, array, arrayIndex, ASPOSECPP_CHECKED_CAST(int, m_data.size()));
    }

    // end of ICollection<T> interface

    // IList<T> interface
    /// Gets first index of specific item.
    /// @param item Item to look for.
    /// @return Index of first occurance of specified item or -1 if not found.
    int IndexOf(const T& item) const override
    {
        const_iterator_t it = FindInData(m_data.begin(), m_data.end(), item);
        if (it != m_data.end())
        {
            return ASPOSECPP_CHECKED_CAST(int, it - m_data.begin());
        }

        return -1;
    }
    /// Inserts item at specified position.
    /// @param index Index to insert item into.
    /// @param item Item to insert.
    void Insert(int index, const T& item) override
    {
        if (index < 0 || static_cast<size_t>(index) > m_data.size()) {
            throw ArgumentOutOfRangeException(u"index");
        }

        m_data.insert(m_data.begin() + index, item);
    }
    /// Removes item at specified position.
    /// @param index Index to delete item at.
    void RemoveAt(int index) override
    {
        if (Details::IsOutOfBounds(index, m_data)) {
            throw ArgumentOutOfRangeException(u"index");
        }
        m_data.erase(m_data.begin() + index);
    }

    /// Gets element at specific position.
    /// @param index Index to get element from.
    /// @return Copy of element at specified position.
    T idx_get(int index) const override
    {
        return operator[](index);
    }
    /// Sets element at specific position.
    /// @param index Index to set element at.
    /// @param value Value to set to specified position.
    void idx_set(int index, T value) override
    {
        operator[](index) = value;
    }

    // end of IList<T> interface
    /// Gets current list capacity.
    /// @return Capacity (not size) of the list.
    int get_Capacity() const
    {
        return (int)m_data.capacity();
    }
    /// Sets list capacity.
    /// @param capacity Capacity to set (can't be less than current size).
    void set_Capacity(int capacity)
    {
        if (capacity < (int)m_data.size()) {
            throw ArgumentOutOfRangeException(u"capacity");
        }
        m_data.reserve(capacity);
    }

    /// Adds all elements from collection (or itself) to the end of current list.
    /// @param collection Collection to copy elements from.
    void AddRange(IEnumerablePtr collection)
    {
        if (!collection)
        {
            throw ArgumentNullException(u"collection");
        }

        if (collection.GetObjectOrNull() == this)
        {
            size_t old_size = m_data.size();
            m_data.resize(old_size * 2);

            for (size_t i = 0; i < old_size; ++i)
            {
                m_data[old_size + i] = m_data[i];
            }
            return;
        }

        IEnumeratorPtr it = collection->GetEnumerator();
        while (it->MoveNext())
        {
            m_data.push_back(it->Current());
        }
    }

    /// Gets read-only reference to this collection.
    /// @return Newly created read-only wrapper around current list.
    SharedPtr<System::Collections::ObjectModel::ReadOnlyCollection<T>> AsReadOnly()
    {
        return MakeObject<System::Collections::ObjectModel::ReadOnlyCollection<T>>(this);
    }

    /// Looks for item in a sorted list.
    /// @param item Item to look for.
    /// @return Index of the item in sorted list or complement of closest index.
    int BinarySearch(const T &item) const
    {
        return _net_binnary_search(m_data, 0, m_data.size(), item);
    }
    /// Looks for item in a sorted list.
    /// @param item Item to look for.
    /// @param comparer Comparer to use.
    /// @return Index of the item in sorted list or complement of closest index.
    int BinarySearch(const T &item, const SharedPtr<System::Collections::Generic::IComparer<T> >& comparer) const
    {
        return _net_binnary_search(m_data, 0, m_data.size(), item, comparer);
    }
    /// Looks for item in a sorted list.
    /// @param index Range beginning.
    /// @param count Range size.
    /// @param item Item to look for.
    /// @param comparer Comparer to use.
    /// @return Index of the item in sorted list or complement of closest index.
    int BinarySearch(int index, int count, const T &item, const SharedPtr<System::Collections::Generic::IComparer<T> >& comparer) const
    {
        if (index < 0 || count < 0) {
            throw ArgumentOutOfRangeException(u"index or count");
        }

        if (Details::IsOutOfSize(index + count, m_data)) {
            throw ArgumentException(u"index or count");
        }

        return _net_binnary_search(m_data, index, count, item, comparer);
    }

    /// Creates a list of elements converted to different type.
    /// @tparam OutputType Output list element type.
    /// @param converter Converter to use for items conversion.
    /// @return A newly created list of converted elements.
    template <typename OutputType>
    SharedPtr<List<OutputType>> ConvertAll(Converter<T, OutputType> converter)
    {
        if (converter.IsNull()) {
            throw System::ArgumentNullException(u"converter");
        }
        SharedPtr<List<OutputType>> res = System::MakeObject<List<OutputType>>((int)m_data.size());
        for (size_t i = 0; i < m_data.size(); i++) {
            res->Add(converter(m_data[i]));
        }
        return res;
    }

    /// Copies all elements into existing array elements.
    /// @param array Array to copy elements into.
    void CopyTo(const System::ArrayPtr<T>& array)
    {
        this->CopyTo(0, array, 0, ASPOSECPP_CHECKED_CAST(int, m_data.size()));
    }
    /// Copies elements starting from the specified index into existing array elements.
    /// @param index A 0-based index of the element in the list represented by the current object to start
    /// copying from
    /// @param array Array to copy elements into.
    /// @param arrayIndex Beginning position in desitnation array.
    /// @param count Number of elements to copy.
    void CopyTo(int index, const System::ArrayPtr<T>& array, int arrayIndex, int count)
    {
        if (!array) {
            throw ArgumentNullException(u"array");
        }

        if (index < 0 || arrayIndex < 0 || count < 0) {
            throw ArgumentOutOfRangeException(u"index, arrayIndex or count");
        }

        if (Details::IsOutOfSize(index + count, m_data)
            || Details::IsOutOfSize(arrayIndex + count, array->data()) ) {
            throw ArgumentException(u"index, arrayIndex or count");
        }

        std::copy(m_data.begin() + index, m_data.begin() + index + count, array->data().begin() + arrayIndex);
    }

    /// Checks if element adhering to specific predicate exists in list.
    /// @param match Predicate to check elements with.
    /// @return True if matching element is found, false otherwise.
    bool Exists(System::Predicate<T> match)
    {
        if (match.IsNull()) {
            throw ArgumentNullException(u"match");
        }
        return FindIndex(match) != -1;
    }
    /// Looks for element adhering to specific predicate.
    /// @param predicate Predicate to check elements with.
    /// @return Value of matching element or nullprtr if not found.
    T Find(System::Predicate<T> predicate)
    {
        if (predicate.IsNull()) {
            throw ArgumentNullException(u"predicate");
        }
        for (iterator_t it = m_data.begin(); it != m_data.end(); it++)
        {
            if (predicate(*it))
                return (*it);
        }
        return nullptr;
    }
    /// Looks for elements adhering to specific predicate.
    /// @param match Predicate to check elements with.
    /// @return List of matching elements (if any) or empty list.
    ListPtr<T> FindAll(System::Predicate<T> match)
    {
        if (match.IsNull()) {
            throw ArgumentNullException(u"match");
        }
        ListPtr<T> list = MakeObject<List<T>>();
        for (iterator_t it = m_data.begin(); it != m_data.end(); it++)
        {
            if (match(*it))
                list->Add(*it);
        }
        return list;
    }
    /// Looks for element adhering to specific predicate.
    /// @param match Predicate to check elements with.
    /// @return Index of matching element or -1 if not found.
    int FindIndex(System::Predicate<T> match)
    {
        return FindIndex(0, m_data.size(), match);
    }
    /// Looks for element adhering to specific predicate.
    /// @param startIndex Index to start search from.
    /// @param match Predicate to check elements with.
    /// @return Index of matching element or -1 if not found.
    int FindIndex(int startIndex, System::Predicate<T> match)
    {
        return FindIndex(startIndex, m_data.size() - startIndex, match);
    }
    /// Looks for element adhering to specific predicate.
    /// @param startIndex Index to start search from.
    /// @param count Number of elements to look through.
    /// @param match Predicate to check elements with.
    /// @return Index of matching element or -1 if not found.
    int FindIndex(int startIndex, int count, System::Predicate<T> match)
    {
        if (match.IsNull()) {
            throw ArgumentNullException(u"match");
        }

        if (count < 0 || startIndex < 0
            || Details::IsOutOfSize(startIndex + count, m_data))
        {
            throw ArgumentOutOfRangeException(u"startIndex or count");
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
    /// Looks for last element adhering to specific predicate.
    /// @param match Predicate to check elements with.
    /// @return Value of matching element or nullptr if not found.
    T FindLast(System::Predicate<T> match)
    {
        if (match.IsNull()) {
            throw ArgumentNullException(u"match");
        }
        T res = nullptr;
        for (iterator_t it = m_data.begin(); it != m_data.end(); it++)
        {
            if (match(*it))
                res = (*it);
        }
        return res;
    }

    /// Applies action to all elements in list.
    /// @param action Action to apply.
    void ForEach(System::Action<T> action)
    {
        if (action.IsNull()) {
            throw ArgumentNullException(u"action");
        }
        for (iterator_t it = m_data.begin(); it != m_data.end(); it++)
        {
            action(*it);
        }
    }

    /// Creates slice of list.
    /// @param index Range start index.
    /// @param count Range size.
    /// @return List containing a slice of current list.
    ThisPtr GetRange(int index, int count)
    {
        if (index < 0 || count < 0) {
            throw ArgumentOutOfRangeException(u"index or count");
        }

        if (Details::IsOutOfSize(index + count, m_data)) {
            throw ArgumentException(u"index or count");
        }

        ThisPtr rv = MakeObject<List<T> >(count);
        for (auto i = index; i < (index + count); ++i)
        {
            rv->m_data.push_back(m_data[i]);
        }

        return rv;
    }

    /// Looks for specific item in list.
    /// @param item Item to look for.
    /// @param index Index to start lookup at.
    /// @return Index of first instance of specified item or -1 if not found.
    int IndexOf(const T& item, int index) const
    {
        if (Details::IsOutOfBounds(index, m_data)) {
            throw ArgumentOutOfRangeException(u"index");
        }
        auto it = FindInData(m_data.begin() + index, m_data.end(), item);
        if (it != m_data.end())
        {
            return it - m_data.begin();
        }

        return -1;
    }

    /// Inserts data range at specific position.
    /// @param index Index to insert data at.
    /// @param collection Collection of elements to insert.
    void InsertRange(int index, IEnumerablePtr collection)
    {
        if (!collection) {
            throw ArgumentNullException(u"action");
        }

        if (index < 0 || static_cast<size_t>(index) > m_data.size()) {
            throw ArgumentOutOfRangeException(u"index");
        }

        IEnumeratorPtr it = collection->GetEnumerator();
        while (it->MoveNext())
        {
            m_data.insert(m_data.begin() + index++, it->Current());
        }
    }

    /// Searches for the specified object and returns the zero-based index of the last occurrence within the entire list
    /// @param item The object to locate in the list
    /// @return The zero-based index of the last occurrence of item within the entire the List, if found; otherwise, -1.
    int32_t LastIndexOf(const T& item) const
    {
        auto rit = FindInData(m_data.rbegin(), m_data.rend(), item);
        if (rit != m_data.rend())
        {
            return ASPOSECPP_CHECKED_CAST(int, rit.base() - m_data.begin() - 1);
        }

        return -1;
    }
    
    /// Searches for the specified object and returns the zero-based index of the last occurrence within the range of elements
    /// in the List that extends from the first element to the specified index.
    /// @param item The object to locate in the list
    /// @param index The zero-based starting index of the backward search.
    /// @return The zero-based index of the last occurrence of item within the range of elements in the List that extends 
    /// from the first element to index, if found; otherwise, -1.
    int32_t LastIndexOf(const T& item, int32_t index) const
    {
        using namespace Collections::Generic::Details;
        if (index < 0 || IsOutOfBounds(index, m_data))
        {
            throw ArgumentOutOfRangeException(u"startIndex or count");
        }

        auto rbegin = m_data.rbegin() + m_data.size() - index - 1;
        auto rend = m_data.rend();
        auto rit = FindInData(rbegin, rend, item);
        if (rit != rend)
        {
            return ASPOSECPP_CHECKED_CAST(int, rit.base() - m_data.begin()) - 1;
        }
        return -1;
    }

    /// Searches for the specified object and returns the zero-based index of the last occurrence within the range of elements
    /// in the List that contains the specified number of elements and ends at the specified index.
    /// @param item The object to locate in the List
    /// @param index The zero-based starting index of the backward search.
    /// @param count The number of elements in the section to search.
    /// @return The zero-based index of the last occurrence of item within the range of elements in the List that contains 
    /// count number of elements and ends at index, if found; otherwise, -1.
    int32_t LastIndexOf(const T& item, int32_t index, int32_t count) const
    {
        using namespace Collections::Generic::Details;
        if (index < 0 || count < 0
                || IsOutOfBounds(index, m_data) || IsOutOfSize(count, m_data)
                || (index - count + 1) < 0)
        {
            throw ArgumentOutOfRangeException(u"index or count");
        }

        auto rbegin = m_data.rbegin() + m_data.size() - index - 1;
        auto rend = rbegin + count;
        auto rit = FindInData(rbegin, rend, item);

        if (rit != rend)
        {
            return ASPOSECPP_CHECKED_CAST(int, rit.base() - m_data.begin()) - 1;
        }
        return -1;
    }

    /// Removes all elements matching specific predicate.
    /// @param match Predicate to check elements with.
    /// @return Number of removed elements.
    int RemoveAll(Predicate<T> match)
    {
        if (match.IsNull()) {
            throw ArgumentNullException(u"match");
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

        return ASPOSECPP_CHECKED_CAST(int, removed);
    }
    /// Removes slice of list.
    /// @param index Slice beginning position.
    /// @param count Number of elements to remove.
    void RemoveRange(int index, int count)
    {
        if (index < 0 || count < 0) {
            throw ArgumentOutOfRangeException(u"index or count");
        }

        if (Details::IsOutOfSize(index + count, m_data)) {
            throw ArgumentException(u"index or count");
        }

        m_data.erase(m_data.begin() + index, m_data.begin() + index + count);
    }
    /// Reverses elements order of the whole list.
    void Reverse()
    {
        std::reverse(m_data.begin(), m_data.end());
    }
    /// Reverses elements order of the list slice.
    /// @param index Slice beginning index.
    /// @param count Slice size.
    void Reverse(int index, int count)
    {
        if (index < 0 || count < 0) {
            throw ArgumentOutOfRangeException(u"index or count");
        }

        if (Details::IsOutOfSize(index + count, m_data)) {
            throw ArgumentException(u"index or count");
        }

        std::reverse(m_data.begin() + index, m_data.begin() + index + count);
    }
    /// Sorts elements in the list.
    /// @param comparator Comparator to use.
    void Sort(const SharedPtr<System::Collections::Generic::IComparer<T> >& comparator)
    {
        ComparerAdapter<T> adapter(comparator);
        std::sort(m_data.begin(), m_data.end(), adapter);
    }
    /// Sorts elements in the list using default comparator.
    void Sort()
    {
        std::sort(m_data.begin(), m_data.end(), Details::ComparerType<ValueType>());
    }
    /// Sorts elements in the list slice.
    /// @param index Slice beginning index.
    /// @param count Slice size.
    /// @param comparator Comparator to use.
    void Sort(int index, int count, SharedPtr<System::Collections::Generic::IComparer<T> > comparator)
    {
        if (index < 0 || count < 0) {
            throw ArgumentOutOfRangeException(u"index or count");
        }

        if (Details::IsOutOfSize(index + count, m_data)) {
            throw ArgumentException(u"index or count");
        }

        ComparerAdapter<T> adapter(comparator);
        std::sort(m_data.begin() + index, m_data.begin() + index + count, adapter);
    }
    /// Sorts elements in the list.
    /// @param comparison Comparison to use.
    void Sort(Comparison<T> comparison, bool) //second (bool) param to solve ambiguous call issue
    {
        if (comparison.IsNull()) {
            throw ArgumentNullException(u"comparison");
        }
        std::sort(m_data.begin(), m_data.end(), comparison);
    }

    /// Converst list to array.
    /// @return Newly created array with copies of all elements.
    ArrayPtr<T> ToArray() const
    {
        typename vector_t::size_type size = m_data.size();
        return size>0 ? MakeObject<Array<T> >(ASPOSECPP_CHECKED_CAST(int, m_data.size()), &m_data[0]) : MakeObject<Array<T> >();
    }
    /// Makes list capacity to fit its size.
    void TrimExcess()
    {
        m_data.shrink_to_fit();
    }

    /// Accessor function.
    /// @param index Index to get element from.
    /// @return Reference to element at specified position.
    typename vector_t::reference operator[](int index)
    {
        if (Details::IsOutOfBounds(index, m_data)) {
            throw ArgumentOutOfRangeException(u"index");
        }
        return m_data[static_cast<typename vector_t::size_type>(index)];
    }
    /// Accessor function.
    /// @param index Index to get element from.
    /// @return Const reference to element at specified position.
    typename vector_t::const_reference operator[](int index) const
    {
        if (Details::IsOutOfBounds(index, m_data)) {
            throw ArgumentOutOfRangeException(u"index");
        }
        return m_data[static_cast<typename vector_t::size_type>(index)];
    }

    /// Underlying data structure access function.
    /// @return Reference to underlying vector.
    vector_t& data() { return m_data; }
    /// Underlying data structure access function.
    /// @return Const reference to underlying vector.
    const vector_t& data() const { return m_data; }
    /// C++ specific
    /// @param list Range to insert into container.
    void _add_range(std::initializer_list<T> list)
    {
        std::for_each(list.begin(), list.end(), [this](const T &v) { m_data.push_back(v); });
    }

    /// Makes list treat stored pointers as weak (if applicable).
    /// @param argument Should be 0 as there is only one template argument present.
    void SetTemplateWeakPtr(unsigned int argument) override
    {
        m_pointer_mode.SetWeak(argument, m_data);
    }

private:
    /// Data lookup function implementation for the types containing IsEqual method.
    /// @tparam Item type, same as @p T.
    /// @tparam I Iterator type.
    /// @param begin Range beginning.
    /// @param end Range end.
    /// @param item Item to look for.
    /// @return Iterator to found item or end if not found.
    template <typename Q, typename I>
    typename std::enable_if<Details::IsEqualExist<Q>::value, I>::type FindInData(I begin, I end, const Q &item) const
    {
        return std::find(begin, end, item);
    }
    /// Data lookup function implementation for the types not containing IsEqual method. Not implemented.
    /// @tparam Item type, same as @p T.
    /// @tparam I Iterator type.
    /// @param begin Range beginning.
    /// @param end Range end.
    /// @param item Item to look for.
    /// @return Iterator to found item or end if not found.
    template <typename Q, typename I>
    typename std::enable_if<!Details::IsEqualExist<Q>::value, I>::type FindInData(I begin, I end, const Q &item) const
    {
        throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }
    /// Data lookup function implementation for pointer types.
    /// @tparam Pointee type.
    /// @tparam I Iterator type.
    /// @param begin Range beginning.
    /// @param end Range end.
    /// @param item Item to look for.
    /// @return Iterator to found item or end if not found.
    template <typename Q, typename I>
    I FindInData(I begin, I end, const System::SharedPtr<Q> &item) const
    {
        return std::find_if(begin, end, [&item](const System::SharedPtr<Q> &element)
        {
            return element == nullptr ? item == nullptr : element.ToObjectPtr()->Equals(item.ToObjectPtr());
        });
    }

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        /// Applies visitor to container and elements.
        /// @param visitor Visitor to apply.
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            visitor.add_self(this);
            DBG::for_each_of_Object(this, m_data, visitor);
        }

        /// Gets class name.
        /// @return String literal pointer.
        const char* DBG_class_name() const override { return "List<T>"; }
        /// Marks class as known.
        /// @return Always returns false.
        bool DBG_unknown_type() const override { return false; }
#endif
protected:
    DEFINE_GET_SHARED_MEMBERS(m_data)
};

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collection_list_h_
