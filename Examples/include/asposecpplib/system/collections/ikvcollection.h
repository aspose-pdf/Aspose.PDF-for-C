#ifndef _aspose_system_collections_ikvcollection_h_
#define _aspose_system_collections_ikvcollection_h_

#include <system/array.h>
#include <system/collections/ilist.h>

namespace System { namespace Collections { namespace Generic {

template <typename T>
class IKVCollection : public IList<T>
{
public:

    // IEnumerable

    virtual SharedPtr<IEnumerator<T> > GetEnumerator() = 0;

    // ICollection

    virtual int get_Count() const = 0;

    virtual void Add(const T& item) override { throw MakeReadonlyException(); }
    virtual void Clear() override { throw MakeReadonlyException(); }
    virtual bool Contains(const T& item) const override { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
    virtual bool Remove(const T& item) override { throw MakeReadonlyException(); }

    virtual bool get_IsReadOnly() const { return true; }

    // IList

    virtual int IndexOf(const T& item) const override { throw System::NotSupportedException(ASPOSE_CURRENT_FUNCTION); }

    virtual void Insert(int index, const T& item) override { throw MakeReadonlyException(); }
    virtual void RemoveAt(int index) override { throw MakeReadonlyException(); }

    virtual T idx_get(int index) const = 0;
    virtual void idx_set(int index, T value) override { throw MakeReadonlyException(); }

protected:

    static System::NotSupportedException MakeReadonlyException()
    {
        return System::NotSupportedException(L"The collection is readonly.");
    }
};

} } }

#endif // _aspose_system_collections_ikvcollection_h_
