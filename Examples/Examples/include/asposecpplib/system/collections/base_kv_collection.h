/// @file system/collections/base_kv_collection.h
#ifndef _aspose_system_colllections_base_kv_collection_h_
#define _aspose_system_colllections_base_kv_collection_h_

#include <system/collections/ikvcollection.h>

namespace System { namespace Collections { namespace Generic {

/// Holds common code for collections of keys or values.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam Dict Dictionary type.
/// @tparam KV Key or value type, whichever the interface is used for.
template <typename Dict, typename KV>
class BaseKVCollection : public IKVCollection<KV>
{
public:
    /// Creates collection.
    /// @param dict Dictionary pointer to hold.
    BaseKVCollection(const typename Dict::Ptr& dict) : m_dict(dict) {}

    // ICollection
    /// Gets number of elements.
    /// @return Number of elements in wrapped dictionary.
    virtual int get_Count() const override
    {
        return m_dict->get_Count();
    }
    /// Copies data to existing array elements.
    /// @param arr Destination array with sufficient size.
    /// @param index Start index in destination array.
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
    /// Other CopyTo overloads shouldn't be hidden.
    using ICollection<KV>::CopyTo;

    /// Enables compilation, but doesn't actually do anything as this structure doesn't own data.
    /// @param argument Unused value.
    void SetTemplateWeakPtr(unsigned int argument) override
    {
        assert(!"BaseKVCollection doesn't own data structures so it can't be used to store Weak pointers");
    }

protected:
    /// Dictionary to wrap.
    typename Dict::Ptr m_dict;
};

}}} // namespace System::Collections::Generic

#endif // _aspose_system_colllections_base_kv_collection_h_
