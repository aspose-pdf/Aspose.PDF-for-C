/// @file system/collections/keyvalue_list.h
#ifndef _aspose_system_collections_key_value_list_h_
#define _aspose_system_collections_key_value_list_h_

#include <system/collections/keyvalue_collection.h>

namespace System { namespace Collections { namespace Generic {

/// Implements list of dictionary's keys.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam Dict Dictionary type.
template <typename Dict>
class _KeyList : public _KeyCollection<Dict>
{
public:
    /// Key type.
    typedef typename Dict::map_t::key_type TKey;

    /// Initializes collection referencing specified dictionary.
    /// @param dict Dictionary to reference.
    _KeyList(const typename Dict::Ptr& dict) : _KeyCollection<Dict>(dict) {}

    // IList
    /// Gets key at specified position.
    /// @param index Index to get key from.
    /// @return Copy of key at specified position.
    virtual TKey idx_get(int index) const { return (this->m_dict->data().begin() + index)->first; }

    /// Checks if specified key is present in collection.
    /// @param item Key to look for.
    /// @return True if key is present, false otherwise.
    bool Contains(const TKey& item) const override
    {
        return this->m_dict->data().find(item) != this->m_dict->data().end();
    }
};

/// Implements list of dictionary's values.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam Dict Dictionary type.
template <typename Dict>
class _ValueList : public _ValueCollection<Dict>
{
public:
    /// Value type.
    typedef typename Dict::map_t::mapped_type TValue;

    /// Initializes collection referencing specified dictionary.
    /// @param dict Dictionary to reference.
    _ValueList(const typename Dict::Ptr& dict) : _ValueCollection<Dict>(dict) {}

    // IList
    /// Gets value at specified position.
    /// @param index Index to get value from.
    /// @return Copy of value at specified position.
    virtual TValue idx_get(int index) const { return (this->m_dict->data().begin() + index)->second; }
};

}}}

#endif // _aspose_system_collections_key_value_list_h_
