#ifndef _aspose_system_collections_icollection_h_
#define _aspose_system_collections_icollection_h_

#include <system/collections/ienumerable.h>

namespace System {

template<typename T> class Array;
template<typename T> class ArrayPtr;

namespace Collections {
namespace Generic {

    template<typename T>
    class ICollection : public System::Collections::Generic::IEnumerable<T>
    {
    public:

        typedef T ValueType;
        typedef ICollection<T> ThisType;

        virtual int get_Count() const = 0;
        virtual void Add(const T& item) = 0;
        virtual void Clear() = 0;
        virtual bool Contains(const T& item) const = 0;
        virtual bool Remove(const T& item) = 0;
        virtual bool get_IsReadOnly() const { return false; }


        virtual void CopyTo(System::ArrayPtr<T> array, int arrayIndex) = 0;
    };
} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_icollection_h_
