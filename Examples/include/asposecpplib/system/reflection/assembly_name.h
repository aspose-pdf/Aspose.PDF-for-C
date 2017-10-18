#ifndef _system_reflection_assembly_name_h_
#define _system_reflection_assembly_name_h_

#include "system/object.h"
#include "system/string.h"

namespace System{ namespace Reflection{

    class AssemblyName FINAL : public System::Object 
    {
    public:
        AssemblyName();
        AssemblyName(String name);

        String get_Name();
        void set_Name(String name);

    private:
        String m_name;
    };

}} // namespace System{ namespace Reflection{

#endif