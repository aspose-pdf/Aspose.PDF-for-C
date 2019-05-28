/// @file system/collections/sorted_dictionary.h
#ifndef _aspose_system_collections_sorted_dictionary_h_
#define _aspose_system_collections_sorted_dictionary_h_

#include "system/object.h"
#include "system/collections/base_dictionary.h"
#include "system/collections/keyvalue_collection.h"
#include "system/cycles_detection.h"

#include <map>

namespace System {
namespace Collections {
namespace Generic {

/// Sorted dictionary type forward declaration.
template<typename T, typename V> class SortedDictionary;

/// Sorted dictionary pointer with access operators.
/// This type is a pointer to manage other object's deletion.
/// It should be allocated on stack and passed to functions either by value or by const reference.
template<typename T, typename V>
class SortedDictionaryPtr : public SharedPtr<SortedDictionary<T, V> >
{
public:
    /// Constructs null pointer.
    SortedDictionaryPtr() 
    { }
    /// Constructs pointer to specified sorted dictionary.
    /// @param obj Dictionary to point to.
    SortedDictionaryPtr(const SharedPtr<SortedDictionary<T, V> >& obj) : SharedPtr<SortedDictionary<T, V> >(obj)
    { }

    /// Accessor function.
    /// @param key Key to access element at.
    /// @return Reference to element at specified key.
    V& operator[] (const T& key) const
    {
        return (*(this->GetPointer()))[key];
    }
};

/// Sorted dictionary class wrapping STL map.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam TKey Key type.
/// @tparam TValue Value type.
template<typename TKey, typename TValue>
class SortedDictionary
    : virtual public System::Object
    , public BaseDictionary<std::map<TKey, TValue, ComparerAdapter<TKey>, typename System::Details::CollectionHelpers::MapPointerMode<TKey, TValue>::allocator_type > >
{
    /// This type.
    typedef SortedDictionary<TKey, TValue> _ThisType;
    /// Implementation type.
    typedef BaseDictionary<std::map<TKey, TValue, ComparerAdapter<TKey>, typename System::Details::CollectionHelpers::MapPointerMode<TKey, TValue>::allocator_type > > _BaseType;
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(_ThisType, System::BaseTypesInfo<_BaseType>);

public:
    /// Key collection type.
    typedef ICollection<TKey>   KeyCollection;
    /// Value collection type.
    typedef ICollection<TValue> ValueCollection;
    /// Underlying data type.
    typedef std::map<TKey, TValue, ComparerAdapter<TKey>, typename System::Details::CollectionHelpers::MapPointerMode<TKey, TValue>::allocator_type > map_t;
    /// Self type.
    typedef SortedDictionary<TKey, TValue> this_t;
    /// Pointer type.
    typedef SharedPtr<this_t> Ptr;
    /// Key-value pair type.
    typedef KeyValuePair<TKey, TValue> KVPair;
    /// Collection of same elements.
    typedef SharedPtr< IEnumerable<KVPair> > IEnumerablePtr;
    /// Enumerator type.
    typedef SharedPtr< IEnumerator<KVPair> > IEnumeratorPtr;

    /// Constructs empty dictionary.
    SortedDictionary() {}
    /// Constructs empty dictionary.
    /// @param comparer Comparer to use.
    SortedDictionary(const SharedPtr<IComparer<TKey> >& comparer)
        : _BaseType(0, ComparerAdapter<TKey>(comparer))
    {}
    /// Copy constructor.
    /// @param src Source dictionary to copy data from.
    SortedDictionary(const SharedPtr<IDictionary<TKey, TValue> >& src)
        : _BaseType(src.get())
    {
    }

    /// Enumerator type to iterate through dictionary.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class Enumerator : virtual public Object, public SimpleEnumerator<map_t, KVPair>
    {
    public:
        /// Constructs enumerator over specific dictionary.
        /// @param dict Dictionary to iterate through.
        Enumerator(const Ptr& dict) : SimpleEnumerator<map_t, KVPair>(dict, dict->m_map) { }
        /// Enumerator type alias.
        typedef typename SortedDictionary<TKey, TValue>::Enumerator EnumeratorType;
        /// RTTI information.
        RTTI_INFO_TEMPLATE_CLASS(Enumerator, System::BaseTypesInfo<System::Object>);
    };
    /// Gets enumerator to iterate through current dictionary.
    /// @return Pointer to newly created enumerator.
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
    /// Implementation of get_KeysInternal() method.
    /// @return Created key collection wrapper.
    SharedPtr<KeyCollection> get_KeysInternal() const override
    {
        return MakeObject<_KeyCollection<SortedDictionary<TKey, TValue>>>(MakeSharedPtr(this));
    }
    /// Implementation of get_ValuesInternal() method.
    /// @return Created value collection wrapper.
    SharedPtr<ValueCollection> get_ValuesInternal() const override
    {
        return MakeObject<_ValueCollection<SortedDictionary<TKey, TValue>>>(MakeSharedPtr(this));
    }
    /// Implements loop refernces lookup for sorted dictionary type.
    DEFINE_GET_SHARED_MEMBERS(_BaseType::m_map)
};

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_sorted_dictionary_h_
