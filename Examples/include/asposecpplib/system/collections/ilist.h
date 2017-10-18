#ifndef _aspose_system_collections_ilist_h_
#define _aspose_system_collections_ilist_h_

#include <system/collections/icollection.h>
#include <system/exceptions.h>

namespace System {
namespace Collections {
namespace Generic {

    template<typename T>
    class IList : public System::Collections::Generic::ICollection<T>
    {
    public:

        typedef ICollection<T> BaseType;
        typedef IList<T> ThisType;
        typedef T ValueType;

        virtual int IndexOf(const T& item) const = 0;
        virtual void Insert(int index, const T& item) = 0;
        virtual void RemoveAt(int index) = 0;

        virtual T idx_get(int index) const = 0;
        virtual void idx_set(int index, T value) = 0;
    };

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_ilist_h_
