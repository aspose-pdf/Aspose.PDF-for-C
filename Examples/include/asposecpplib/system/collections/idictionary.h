#ifndef _aspose_system_collections_idictionary_h_
#define _aspose_system_collections_idictionary_h_

#include <system/collections/ikvcollection.h>
#include <system/collections/keyvalue_pair.h>
#include <system/array.h>

namespace System {
namespace Collections {
namespace Generic {

    template<typename TKey, typename TValue>
    class IDictionary : public ICollection<KeyValuePair<TKey, TValue>>
    {
    public:
        typedef ICollection<KeyValuePair<TKey, TValue>> BaseType;
        typedef KeyValuePair<TKey, TValue>  KeyValuePairType;

        using ICollection<KeyValuePair<TKey, TValue>>::Add;
        using ICollection<KeyValuePair<TKey, TValue>>::Remove;

        virtual void Add(const TKey& key, const TValue& value) = 0;
        virtual bool ContainsKey(const TKey& key) const = 0;
        virtual bool Remove(const TKey& key) = 0;
        virtual bool TryGetValue(const TKey& key, TValue& value) = 0;

        virtual TValue idx_get(const TKey& key) const = 0;
        virtual void idx_set(const TKey& key, TValue value) = 0;

        SharedPtr<ICollection<TKey>> get_Keys() const { return get_KeysInternal(); }
        SharedPtr<ICollection<TValue>> get_Values() const { return get_ValuesInternal(); }

        bool get_IsFixedSize() const { return false; }

        // ICollection interface

        bool get_IsSynchronized() const { return false; }

        SharedPtr<Object> get_SyncRoot()
        {
            return System::MakeSharedPtr(this);
        }

        using BaseType::get_Count;
        virtual void CopyTo(ArrayPtr<KeyValuePair<TKey, TValue>> arr, int index) override
        {
            if (!arr)
                throw ArgumentNullException();

            if (index < 0)
                throw ArgumentOutOfRangeException();

            if (index + get_Count() > arr->get_Length())
                throw ArgumentException();

            SharedPtr<IEnumerator<KeyValuePair<TKey, TValue>>> e = this->GetEnumerator();
            while (e->MoveNext())
                (*arr)[index++] = e->get_Current();
        }


    protected:
        virtual SharedPtr<ICollection<TKey>> get_KeysInternal() const = 0;
        virtual SharedPtr<ICollection<TValue>> get_ValuesInternal() const = 0;
    };

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_idictionary_h_
