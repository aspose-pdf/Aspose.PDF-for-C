#ifndef _aspose_system_colllections_base_kv_collection_h_
#define _aspose_system_colllections_base_kv_collection_h_

#include <system/collections/ikvcollection.h>

namespace System { namespace Collections { namespace Generic {

template <typename Dict, typename KV>
class BaseKVCollection : public IKVCollection<KV>
{
public:

    BaseKVCollection(const typename Dict::Ptr& dict) : m_dict(dict) {}

    // ICollection

    virtual int get_Count() const override
    {
        return m_dict->get_Count();
    }

    virtual void CopyTo(ArrayPtr<KV> arr, int index) override
    {
        if (!arr)
            throw ArgumentNullException();

        if (index < 0)
            throw ArgumentOutOfRangeException();

        if (index + get_Count() > arr->get_Length())
            throw ArgumentException();

        SharedPtr<IEnumerator<KV>> e = this->GetEnumerator();
        while(e->MoveNext())
            (*arr)[index++] = e->get_Current();
    }
    using ICollection<KV>::CopyTo;

protected:

    typename Dict::Ptr m_dict;
};

}}} // namespace System::Collections::Generic

#endif // _aspose_system_colllections_base_kv_collection_h_
