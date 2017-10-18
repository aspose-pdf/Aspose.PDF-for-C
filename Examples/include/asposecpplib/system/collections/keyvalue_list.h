#ifndef _aspose_system_collections_key_value_list_h_
#define _aspose_system_collections_key_value_list_h_

#include <system/collections/keyvalue_collection.h>

namespace System { namespace Collections { namespace Generic {

template <typename Dict>
class _KeyList : public _KeyCollection<Dict>
{
public:

    typedef typename Dict::map_t::key_type TKey;

    _KeyList(const typename Dict::Ptr& dict) : _KeyCollection<Dict>(dict) {}

    // IList

    virtual TKey idx_get(int index) const { return (this->m_dict->data().begin() + index)->first; }
};


template <typename Dict>
class _ValueList : public _ValueCollection<Dict>
{
public:

    typedef typename Dict::map_t::mapped_type TValue;

    _ValueList(const typename Dict::Ptr& dict) : _ValueCollection<Dict>(dict) {}

    // IList

    virtual TValue idx_get(int index) const { return (this->m_dict->data().begin() + index)->second; }
};

}}}

#endif // _aspose_system_collections_key_value_list_h_
