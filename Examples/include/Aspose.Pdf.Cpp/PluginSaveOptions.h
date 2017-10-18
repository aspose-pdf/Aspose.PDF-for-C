#ifndef _Aspose_Pdf_PluginSaveOptions_h_
#define _Aspose_Pdf_PluginSaveOptions_h_

#include <system/string.h>

#include "SaveOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {


// C# preprocessor directive: #if UNIT_TEST 


// C# preprocessor directive: #else 


// C# preprocessor directive: #endif 

/// <summary>
/// Save options for export to format that defined by a plugin
/// </summary>
class ASPOSE_PDF_SHARED_API PluginSaveOptions : public Aspose::Pdf::SaveOptions
{
    typedef PluginSaveOptions ThisType;
    typedef Aspose::Pdf::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_Name();
    void set_Name(System::String value);
    System::String get_Version();
    void set_Version(System::String value);
    
    PluginSaveOptions();
    PluginSaveOptions(System::String pluginName, System::String pluginVersion);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PluginSaveOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _name;
    System::String _version;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PluginSaveOptions_h_

