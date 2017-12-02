#ifndef _aspose_system_reflection_method_base_h_
#define _aspose_system_reflection_method_base_h_

#include "system/reflection/member_info.h"

namespace System { namespace Reflection {

        class MethodBase : public MemberInfo
        {
            FRIEND_FUNCTION_System_MakeObject;
            //friend System::SharedPtr<System::Reflection::MethodBase> System::MakeObject<System::Reflection::MethodBase, System::String>(System::String);
        private:
            MethodBase(const String& full_name);
        };

}}

#endif