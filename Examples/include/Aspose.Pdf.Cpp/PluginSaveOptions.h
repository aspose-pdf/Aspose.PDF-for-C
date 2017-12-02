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
    /// <summary>
    /// Gets or sets version of plugin used.
    /// </summary>
    System::String get_Version();
    /// <summary>
    /// Gets or sets version of plugin used.
    /// </summary>
    void set_Version(System::String value);
    
    /// <summary>
    /// Creates default save options for exporting with the aid of a plugin.
    /// </summary>
    PluginSaveOptions();
    /// <summary>
    /// Creates save options for exporting with the aid of the plugin specified by name and version. 
    /// </summary>
    /// <param name="pluginName">The string representing name of plugin used.</param>
    /// <param name="pluginVersion">The string representing version of plugin used.</param>
    PluginSaveOptions(System::String pluginName, System::String pluginVersion);
    
private:

    System::String _name;
    System::String _version;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PluginSaveOptions_h_

