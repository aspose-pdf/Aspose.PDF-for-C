#ifndef _aspose_system_collections_ienumerable_h_
#define _aspose_system_collections_ienumerable_h_

#include <system/collections/ienumerator.h>

namespace System {
namespace Collections {
namespace Generic {

    template<typename T>
    class IEnumerable: virtual public Object
    {
    public:

        typedef IEnumerator<T> IEnumeratorType;

        // There no need to define an empty virtual dtor, virtual dtor for inheritance already defined in the Object class

        virtual SharedPtr<IEnumerator<T> > GetEnumerator() = 0;
    };

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_ienumerable_h_
