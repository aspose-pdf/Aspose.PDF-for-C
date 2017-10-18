#ifndef _aspose_system_collections_ienumerator_h_
#define _aspose_system_collections_ienumerator_h_

#include <system/object.h>
#include <system/shared_ptr.h>
#include <defines.h>
#include <system/exceptions.h>

namespace System {
namespace Collections {
namespace Generic {

    template<typename T>
    class IEnumerator: virtual public Object
    {
    public:
        typedef T ValueType;

        // There no need to define an empty virtual dtor, virtual dtor for inheritance already defined in the Object class
        virtual T Current() ASPOSE_CONST { return get_Current(); }
        virtual T get_Current() ASPOSE_CONST = 0;
        virtual bool MoveNext() = 0;
        virtual void Reset() { throw System::NotImplementedException(); }
    };

} // namespace Generic
} // namespace Collections
} // namespace System
#endif // _aspose_system_collections_ienumerator_h_
