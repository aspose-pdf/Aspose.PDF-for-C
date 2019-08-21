/// @file system/collections/keyvalue_collection.h
#ifndef _aspose_system_colllections_keyvalue_collection_h_
#define _aspose_system_colllections_keyvalue_collection_h_

#include <system/collections/base_enumerator.h>
#include <system/collections/base_kv_collection.h>

namespace System { namespace Collections { namespace Generic {

/// Collection of Dictionary's keys. References collection, doesn't copy anything.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @param Dict Dictionary type.
template <typename Dict>
class _KeyCollection : public BaseKVCollection<Dict, typename Dict::map_t::key_type>
{
public:
    /// Key type.
    typedef typename Dict::map_t::key_type TKey;

    /// Initializes collection referencing specified dictionary.
    /// @param dict Dictionary to reference.
    _KeyCollection(const typename Dict::Ptr& dict) : BaseKVCollection<Dict, typename Dict::map_t::key_type>(dict) {}

    // IEnumerable
    /// Enumerator to iterate through keys.
    class Enumerator : public BaseEnumerator<typename Dict::map_t, TKey>
    {
    public:
        /// Creates key enumerator for specified dictionary.
        /// @param dict Dictionary to reference.
        Enumerator(const typename Dict::Ptr& dict) : BaseEnumerator<typename Dict::map_t, TKey>(dict, dict->data()) { }
        /// Gets current key.
        /// @return Current key.
        virtual TKey get_Current() ASPOSE_CONST { return this->IsValid() ? this->m_it->first : TKey(); }
    };
    /// Gets enumerator iterating through keys.
    /// @return Pointer to newly created enumerator.
    virtual SharedPtr<IEnumerator<TKey> > GetEnumerator() { return MakeObject<Enumerator>(this->m_dict); }

    // IList
    /// Implements IList method. Not supported.
    virtual TKey idx_get(int index) const { throw System::InvalidOperationException(); }
};


/// Collection of Dictionary's values. References collection, doesn't copy anything.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @param Dict Dictionary type.
template <typename Dict>
class _ValueCollection : public BaseKVCollection<Dict, typename Dict::map_t::mapped_type>
{
public:
    /// Value type.
    typedef typename Dict::map_t::mapped_type TValue;

    /// Initializes collection referencing specified dictionary.
    /// @param dict Dictionary to reference.
    _ValueCollection(const typename Dict::Ptr& dict) : BaseKVCollection<Dict, typename Dict::map_t::mapped_type>(dict) {}

    // IEnumerable
    /// Enumerator to iterate through values.
    class Enumerator : public BaseEnumerator<typename Dict::map_t, TValue>
    {
    public:
        /// Creates value enumerator for specified dictionary.
        /// @param dict Dictionary to reference.
        Enumerator(const typename Dict::Ptr& dict) : BaseEnumerator<typename Dict::map_t, TValue>(dict, dict->data()) { }
        /// Gets current value.
        /// @return Current value.
        virtual TValue get_Current() ASPOSE_CONST { return this->IsValid() ? this->m_it->second : TValue(); }
    };
    /// Gets enumerator iterating through values.
    /// @return Pointer to newly created enumerator.
    virtual SharedPtr<IEnumerator<TValue> > GetEnumerator() { return MakeObject<Enumerator>(this->m_dict); }

    // IList
    /// Implements IList method. Not supported.
    virtual TValue idx_get(int index) const { throw System::InvalidOperationException(); }
};

}}} // namespace System::Collections::Generic

#endif // _aspose_system_colllections_keyvalue_collection_h_
