#ifndef _aspose_system_resource_manager_h_
#define _aspose_system_resource_manager_h_

#include <system/object.h>
#include <system/string.h>
#include <system/exceptions.h>
#include <system/reflection/assembly.h>
#include <system/globalization/culture_info.h>

namespace System { namespace Resources {

class ResourceManager : public System::Object
{
    RTTI_INFO(ResourceManager, ::System::BaseTypesInfo<System::Object>)
public:
    ResourceManager(String baseName, SharedPtr<Reflection::Assembly> assembly);

    // GetObject replacement (issue with GetObjectA)
    virtual SharedPtr<Object> GetObject__(String name);
            
    virtual SharedPtr<Object> GetObject__(String name, SharedPtr<System::Globalization::CultureInfo> culture);
        
    virtual String GetString(String name);
            
    virtual String GetString(String name, SharedPtr<System::Globalization::CultureInfo> culture);
};

}}

#endif //_aspose_system_resource_manager_h_