/// @file system/resources/resource_manager.h
#ifndef _aspose_system_resource_manager_h_
#define _aspose_system_resource_manager_h_

#include <system/object.h>
#include <system/string.h>
#include <system/exceptions.h>
#include <system/reflection/assembly.h>
#include <system/globalization/culture_info.h>

namespace System { namespace Resources {

/// Provides API to manage resources. Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ResourceManager : public System::Object
{
    /// RTTI information.
    RTTI_INFO(ResourceManager, ::System::BaseTypesInfo<System::Object>)
public:
    /// Constructor.
    /// @param baseName Root name of resource file.
    /// @param assembly Assembly owning resources.
    ASPOSECPP_SHARED_API ResourceManager(const String& baseName, const SharedPtr<Reflection::Assembly>& assembly);

    /// Gets object from resource. Name is not GetObject() to deal with GetObjectA define issue.
    /// @param name Resource name.
    /// @return Requested resource.
    virtual ASPOSECPP_SHARED_API SharedPtr<Object> GetObject__(String name);
    /// Gets object from resource. Name is not GetObject() to deal with GetObjectA define issue.
    /// @param name Resource name.
    /// @param culture Culture to use when decoding names.
    /// @return Requested resource.
    virtual ASPOSECPP_SHARED_API SharedPtr<Object> GetObject__(String name, SharedPtr<System::Globalization::CultureInfo> culture);
        
    /// Gets string resource.
    /// @param name Resource name.
    /// @return String resource value.
    virtual ASPOSECPP_SHARED_API String GetString(String name);
    /// Gets string resource.
    /// @param name Resource name.
    /// @param culture Culture to use during resource lookup and decoding.
    /// @return String resource value.
    virtual ASPOSECPP_SHARED_API String GetString(String name, SharedPtr<System::Globalization::CultureInfo> culture);
};

}}

#endif //_aspose_system_resource_manager_h_
