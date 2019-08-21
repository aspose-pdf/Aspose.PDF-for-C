/// @file system/collections/ienumerator.h
#ifndef _aspose_system_collections_ienumerator_h_
#define _aspose_system_collections_ienumerator_h_

#include <system/object.h>
#include <system/shared_ptr.h>
#include <defines.h>
#include <system/exceptions.h>

namespace System {
namespace Collections {
namespace Generic {

/// Interface of enumerator which can be used to iterate through some elements.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T Element type.
template<typename T>
class IEnumerator: virtual public Object
{
public:
    /// Value type.
    typedef T ValueType;

    // There no need to define an empty virtual dtor, virtual dtor for inheritance already defined in the Object class
    /// Gets current element.
    /// @return Currently referenced element copy.
    virtual T Current() ASPOSE_CONST { return get_Current(); }
    /// Gets current element.
    /// @return Currently referenced element copy.
    virtual T get_Current() ASPOSE_CONST = 0;
    /// Moves enumerator to the next element. If no element was referenced before, sets reference to the first element available.
    /// If container end was hit, does nothing.
    /// @return True if some element is available after call, false otherwise.
    virtual bool MoveNext() = 0;
    /// Resets enumerator to position before first element.
    virtual void Reset() { throw System::NotImplementedException(); }
};

} // namespace Generic
} // namespace Collections
} // namespace System
#endif // _aspose_system_collections_ienumerator_h_
