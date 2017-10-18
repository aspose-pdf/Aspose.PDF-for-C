#ifndef _Aspose_Pdf_Properties_AssemblyInfo_h_
#define _Aspose_Pdf_Properties_AssemblyInfo_h_


// General Information about an assembly is controlled through the following 
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.

// C# preprocessor directive: #if DEBUG 


// C# preprocessor directive: #endif 

// Setting ComVisible to false makes the types in this assembly not visible 
// to COM components.  If you need to access a type in this assembly from 
// COM, set the ComVisible attribute to true on that type.
// The following GUID is for the ID of the typelib if this project is exposed to COM
// Version information for an assembly consists of the following four values:
//      Major Version
//      Minor Version 
//      Build Number
//      Revision
// You can specify all the values or you can default the Build and Revision Numbers 
// by using the '*' as shown below:
// [assembly: AssemblyVersion("1.0.*")]

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Defines the constants that participate in the license check for the component.
/// These used to be defined directly as assembly attributes, but I moved them into
/// separate class because in .NET Compact Framework I cannot access assembly attributes.
/// Now the licensing code when compiled for the .NET Compact Framework uses these constants
/// instead of the assembly attributes.
/// </summary>
class ASPOSE_PDF_SHARED_API AssemblyConstants : public System::Object
{
    typedef AssemblyConstants ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static const System::String Title;
    static const System::String Product;
    static const System::String Version;
    static const System::String ReleaseDate;
    static const System::String Producer;
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "AssemblyConstants"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// This class provides information about current product build.
/// </summary>
class ASPOSE_PDF_SHARED_API BuildVersionInfo FINAL : public System::Object
{
    typedef BuildVersionInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static const System::String AssemblyVersion;
    static const System::String Product;
    static const System::String FileVersion;
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BuildVersionInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Properties_AssemblyInfo_h_

