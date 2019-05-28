/// @file system/reflection/method_base.h
#ifndef _aspose_system_reflection_method_base_h_
#define _aspose_system_reflection_method_base_h_

#include "system/shared_ptr.h"
#include "system/reflection/member_info.h"

namespace System { namespace Reflection {

/// Base information on method.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS MethodBase : public MemberInfo
{
    /// Makes constructor accessible.
    FRIEND_FUNCTION_System_MakeObject;
private:
    /// Constructor.
    /// @param full_name Method full name.
    ASPOSECPP_SHARED_API MethodBase(const String& full_name);
public:
    /// This method allows getting current method name.
    /// Porter substitutes ASPOSE_CURRENT_FUNCTION as parameter automatically. 
    static ASPOSECPP_SHARED_API System::SharedPtr<MemberInfo> GetCurrentMethod(const String& full_name);
};

}}

#endif
