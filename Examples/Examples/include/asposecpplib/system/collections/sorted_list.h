/// @file system/collections/sorted_list.h
#ifndef _aspose_system_collections_sorted_list_h_
#define _aspose_system_collections_sorted_list_h_

#include "system/object.h"
#include "system/collections/ilist.h"
#include "system/collections/icomparer.h"
#include "system/collections/base_dictionary.h"
#include "system/collections/keyvalue_list.h"
#include "system/exceptions.h"
#include "system/cycles_detection.h"

#include <vector>
#include <utility>
#include <algorithm>

namespace System {
namespace Collections {
namespace Generic {

namespace Detail {
    /// Flat map STL-like structure implemented as sorted vector of pairs.
    /// @tparam Key Key type.
    /// @tparam Mapped Value type.
    /// @tparam Comparer Comparer type.
    template <typename Key, typename Mapped, typename Comparer>
    class FlatMap
    {
    public:
        /// Key type.
        typedef Key key_type;
        /// Value type.
        typedef Mapped mapped_type;
        /// Key-value pair type.
        typedef std::pair<key_type, mapped_type> value_type;
        /// Comparer type.
        typedef Comparer comparer_type;
        /// Allocator type.
        typedef typename System::Details::CollectionHelpers::MapPointerMode<key_type, mapped_type>::allocator_type allocator_type;
        /// Underlying data type.
        typedef std::vector<value_type, allocator_type> vector_type;
        /// Iterator type.
        typedef typename vector_type::iterator iterator;
        /// Const iterator type.
        typedef typename vector_type::const_iterator const_iterator;
        /// Size type.
        typedef typename vector_type::size_type size_type;

        /// Constructs empty map.
        /// @param allocator Allocator to use.
        FlatMap(const allocator_type &allocator = allocator_type()) : m_data(allocator) {}
        /// Constructs empty map.
        /// @param cmp Comparer to use.
        /// @param allocator Allocator to use.
        FlatMap(const comparer_type &cmp, const allocator_type &allocator = allocator_type()) : m_data(allocator), m_comparer(cmp) {}
        /// Copy constructor.
        /// @param map Map to copy elements from.
        /// @param allocator Allocator to use.
        FlatMap(const FlatMap &map, const allocator_type &allocator) : m_data(map.m_data, allocator) {}

        /// Gets begin iterator.
        /// @return Iterator to the first element (if any) or to the end of container.
        iterator begin() { return m_data.begin(); }
        /// Gets end iterator.
        /// @return Iterator to container end (after the last element, if any).
        iterator end() { return m_data.end(); }
        /// Gets begin iterator.
        /// @return Iterator to the first element (if any) or to the end of container.
        const_iterator begin() const { return m_data.begin(); }
        /// Gets end iterator.
        /// @return Iterator to container end (after the last element, if any).
        const_iterator end() const { return m_data.end(); }

        /// Access operator.
        /// @param key Key to get element at.
        /// @return Reference to element at specified key, either existing or newly created.
        mapped_type& operator [] (const key_type &key)
        {
            const iterator position = std::lower_bound(begin(), end(), key, m_comparer);
            if (position != end() && !m_comparer(key, position->first))
                return position->second;

            return m_data.insert(position, value_type(key, mapped_type()))->second;
        }

        /// Erases element at specified position.
        /// @param position Position to erase element at.
        /// @return Iterator pointing to after erased element.
        iterator erase(const_iterator position) 
        { 
            return m_data.erase(position); 
        }
        /// Inserts element into container.
        /// @param pair Element to insert.
        /// @return Pair of iterator pointing to inserted element (if any) or existing element with same key and boolean value showing whether
        /// the element was inserted (true) or key collision happened (false).
        std::pair<iterator, bool> insert(const value_type &pair)
        {
            const iterator position = std::lower_bound(begin(), end(), pair, m_comparer);
            if (position != end() && !m_comparer(pair.first, position->first))
                return std::make_pair(position, false);

            return std::make_pair(m_data.insert(position, pair), true);
        }
        /// Looks for specific element.
        /// @param key Key to look for.
        /// @return Iterator to found element (if any) or end.
        iterator find(const key_type &key)
        {
            const iterator position = std::lower_bound(begin(), end(), key, m_comparer);
            if (position == end() || m_comparer(key, position->first))
                return end();
            else
                return position;
        }
        /// Looks for specific element.
        /// @param key Key to look for.
        /// @return Const iterator to found element (if any) or end.
        const_iterator find(const key_type &key) const
        {
            const const_iterator position = std::lower_bound(begin(), end(), key, m_comparer);
            if (position == end() || m_comparer(key, position->first))
                return end();
            else
                return position;
        }
        /// Counts occurances of specific key.
        /// @param key Key to look for.
        /// @return 1 if key is present and 0 otherwise.
        size_type count(const key_type &key) const
        {
            const const_iterator position = std::lower_bound(begin(), end(), key, m_comparer);
            if (position == end() || m_comparer(key, position->first))
                return 0;
            else
                return 1;
        }

        /// Deletes all elements in container.
        void clear()
        {
            m_data.clear();
        }
        /// Gets number of elements in container.
        /// @return Actual number of elements in container.
        size_type size() const
        {
            return m_data.size();
        }

        /// Reserves specific nubmer of elements.
        /// @param cnt Number of elements to reserve.
        void reserve(size_type cnt)
        {
            m_data.reserve(cnt);
        }
        /// Compares two FlatMaps.
        /// @param other Container to compare current one to.
        /// @return True if sizes and elements match, false otherwise.
        bool operator == (const FlatMap &other) const
        {
            return size() == other.size() && std::equal(begin(), end(), other.begin());
        }

        vector_type& data() noexcept
        {
            return m_data;
        }

        vector_type const& data() const noexcept
        {
            return m_data;
        }

    private:
        /// Comparator for keys or pairs.
        class value_type_comparer {
        public:
            /// Default constructor.
            inline value_type_comparer() {}
            /// Constructs comparator with specific key comparer to use.
            /// @param cmp Comparator to use.
            inline value_type_comparer(const comparer_type &cmp) : m_comparer(cmp) {}
            /// Compares two items.
            /// @param P LHS item type.
            /// @param Q RHS item type.
            /// @param a LHS item.
            /// @param b RHS item.
            /// @return Comparison result, as provided by key comparer.
            template <class P, class Q>
            inline bool operator () (const P &a, const Q &b) const
            {
                return m_comparer(getKey(a), getKey(b));
            }
        private:
            /// Extracts key from key.
            /// @param key Key to analyse.
            /// @return @p key reference, unchanged.
            static inline const key_type& getKey(const key_type &key) { return key; }
            /// Extracts key from pair.
            /// @param pair Pair to analyse.
            /// @return @p pair key reference, unchanged.
            static inline const key_type& getKey(const value_type &pair) { return pair.first; }
            /// Key comparer to use.
            comparer_type m_comparer;
        };

        /// Internal data structure.
        vector_type m_data;
        /// Comparer to use.
        value_type_comparer m_comparer;
    };

} // namespace Detail

/// This helper class is used to mask virtual fucntions 
/// get_Keys get_Values that come from IDictionary interface 
/// and substitute these to the  fucntions with different return type
template<typename TKey, typename TValue>
class SortedListHelper
{
public:
    SharedPtr<IList<TKey>> get_Keys() const
    {
        return get_KeysImpl();
    }
    SharedPtr<IList<TValue>> get_Values() const
    {
        return get_ValuesImpl();
    }
protected:
    virtual SharedPtr<IList<TKey>> get_KeysImpl() const = 0;
    virtual SharedPtr<IList<TValue>> get_ValuesImpl() const = 0;
};


/// Sorted list wrapping FlatMap structure.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam TKey Key type.
/// @tparam TValue Value type.
template<typename TKey, typename TValue>
class SortedList
    : public SortedListHelper<TKey, TValue>, public BaseDictionary<Detail::FlatMap<TKey, TValue, ComparerAdapter<TKey> > >
{
    /// This type.
    typedef SortedList<TKey, TValue> _ThisType;
    /// Implementation type.
    /// Helper base class
    typedef SortedListHelper<TKey, TValue> _HelperType;
    typedef BaseDictionary<Detail::FlatMap<TKey, TValue, ComparerAdapter<TKey> > > _BaseType;
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(_ThisType, System::BaseTypesInfo<_BaseType>);

public:
    /// Key collection type.
    typedef ICollection<TKey>   KeyCollection;
    /// Value collection type.
    typedef ICollection<TValue> ValueCollection;
    /// Underlying data type.
    typedef Detail::FlatMap<TKey, TValue, ComparerAdapter<TKey> > map_t;
    /// This type.
    typedef SortedList<TKey, TValue> this_t;
    /// Pointer type.
    typedef SharedPtr<this_t> Ptr;
    /// Key value pair type.
    typedef KeyValuePair<TKey, TValue> KVPair;
    /// Collection of same pairs type.
    typedef SharedPtr< IEnumerable<KVPair> > IEnumerablePtr;
    /// Enumerator type.
    typedef SharedPtr< IEnumerator<KVPair> > IEnumeratorPtr;

    /// Constructs empty list.
    SortedList()
        : _BaseType(0, ComparerAdapter<TKey>(GetDefaultComparer<TKey>()))
    {}
    /// Constructs empty list.
    /// @param comparer Comparer to use.
    SortedList(const SharedPtr<IComparer<TKey> >& comparer)
        : _BaseType(0, ComparerAdapter<TKey>(comparer)) // use forwarding ctor
    {}
    /// Copy constructor.
    /// @param src Dictionary to copy data from.
    SortedList(const SharedPtr<IDictionary<TKey, TValue> >& src)
        : _BaseType(src.get())
    {}
    /// Copy constructor.
    /// @param map Map tp copy data from.
    SortedList(const map_t& map)
        : _BaseType(0, map) // 0 - use forwarding ctor
    {}
    /// Constructs empty list.
    /// @param capacity Number of elements to reserve.
    SortedList(int capacity)
    {
        this->m_map.reserve(static_cast<typename map_t::size_type>(capacity));
    }
    /// Gets current list capacity.
    /// @return Actual capacity of current list.
    int get_Capacity() const
    {
        return static_cast<int>(this->m_map.capacity());
    }
    /// Sets current list capacity.
    /// @param capacity Capacity to set.
    void set_Capacity(int capacity)
    {
        this->m_map.reserve(capacity);
    }

    /// Removes item at specified position.
    /// @param index Index to remove element at.
    void RemoveAt(int index)
    {
        this->m_map.erase(this->m_map.begin() + index);
    }
    /// Looks for specific key.
    /// @param key Key to look for.
    /// @return index of speified key or -1 if not found.
    int IndexOfKey(TKey key) const
    {
        auto iter = this->m_map.find(key);
        if (iter == this->m_map.end())
            return -1;
        return ASPOSECPP_CHECKED_CAST(int, std::distance(this->m_map.begin(), iter));
    }
    /// Looks for specific value.
    /// @param value Value to look for.
    /// @return Index of the first occurrance of specified value or -1 if not found.
    int IndexOfValue(TValue value) const
    {
        auto iter = std::find_if(this->m_map.begin(), this->m_map.end(), typename _BaseType::CheckValue(value));
        if (iter == this->m_map.end())
            return -1;
        return ASPOSECPP_CHECKED_CAST(int, std::distance(this->m_map.begin(), iter));
    }

    /// Enumerator class to iterate through list.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class Enumerator : virtual public Object, public SimpleEnumerator<map_t, KVPair>
    {
    public:
        /// Creates enumerator iterating through specific dictionary.
        Enumerator(const Ptr& dict) : SimpleEnumerator<map_t, KVPair>(dict, dict->m_map) { }
        /// Enumerator type alias.
        typedef typename SortedList<TKey, TValue>::Enumerator EnumeratorType;
        /// RTTI information.
        RTTI_INFO_TEMPLATE_CLASS(EnumeratorType, System::BaseTypesInfo<System::Object>);
    };
    /// Gets enumerator iterating through current list.
    /// @return Pointer to newly created enumerator iterating through current list.
    IEnumeratorPtr GetEnumerator() override
    {
        return MakeObject<Enumerator>(MakeSharedPtr(this));
    }

    /// Returns an iterator to the first element of the container.
    /// If the container is empty, the returned iterator will be equal to end().
    KVPairIterator<KVPair, map_t> begin() noexcept
    {
        return this->m_map.begin();
    }

    /// Returns an iterator to the element following the last element of the container.
    /// This element acts as a placeholder; attempting to access it results in undefined behavior.
    KVPairIterator<KVPair, map_t> end() noexcept
    {
        return this->m_map.end();
    }

protected:
    /// Implementation of get_Keys() method.
    /// @return Wrapper to access dictionary keys through.
    virtual SharedPtr<KeyCollection> get_KeysInternal() const override
    {
        return get_Keys();
    }
    /// Implementation of get_Values() method.
    /// @return Wrapper to access dictionary values through.
    virtual SharedPtr<ValueCollection> get_ValuesInternal() const override
    {
        return get_Values();
    }
    /// Allows loop reference lookup for SortedList type.
    DEFINE_GET_SHARED_MEMBERS(_BaseType::m_map)

public:
    using _HelperType::get_Values;
    using _HelperType::get_Keys;
protected:
    SharedPtr<IList<TKey>> get_KeysImpl() const
    {
        return MakeObject<_KeyList<SortedList<TKey, TValue>>>(MakeSharedPtr(this));
    }
    SharedPtr<IList<TValue>> get_ValuesImpl() const
    {
        return MakeObject<_ValueList<SortedList<TKey, TValue>>>(MakeSharedPtr(this));
    }

private:
    /// Comparer class using CompareTo method.
    /// @tparam T Compared type.
    template<typename T>
    class DefaultComparer : public IComparer<T>
    {
    public:
#ifdef ASPOSE_COMPARE_BY_REF
        /// Comparison argument type
        typedef const T& args_type;
#else
        /// Comparison argument type
        typedef T args_type;
#endif
        /// Actual comparison function.
        /// @param c1 LHS comparee.
        /// @param c2 RHS comparee.
        /// @return Comparison result as provided by CompareTo method.
        int32_t Compare(args_type c1, args_type c2) ASPOSE_CONST override
        {
            return c1->CompareTo(c2);
        }
    };
    /// Gets default comparer for elements implementing CompareTo methods.
    /// @tparam Compared element type.
    /// @return Newly created comparer.
    template<typename T>
    typename std::enable_if<detail::has_method_compareto<T>::value, SharedPtr<IComparer<T>> >::type GetDefaultComparer()
    {
        return MakeObject<DefaultComparer<T>>();
    }
    /// Gets default comparer for elements not implementing CompareTo methods.
    /// @tparam Compared element type.
    /// @return Null pointer as comparing such elements is not supported.
    template<typename T>
    typename std::enable_if<!detail::has_method_compareto<T>::value, SharedPtr<IComparer<T>> >::type GetDefaultComparer()
    {
        return SharedPtr<IComparer<T> >();
    }
};

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_sorted_list_h_
