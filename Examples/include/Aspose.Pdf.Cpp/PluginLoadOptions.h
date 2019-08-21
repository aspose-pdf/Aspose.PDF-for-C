#pragma once

#include <system/string.h>

#include "LoadOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {


// C# preprocessor directive: #if UNIT_TEST


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

/// <summary>
/// Represents options for document loading/importing with the aid of a plugin.
/// </summary>
class ASPOSE_PDF_SHARED_API PluginLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef PluginLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets name of plugin used.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Sets name of plugin used.
    /// </summary>
    void set_Name(System::String value);
    /// <summary>
    /// Gets version of plugin used.
    /// </summary>
    System::String get_Version();
    /// <summary>
    /// Sets version of plugin used.
    /// </summary>
    void set_Version(System::String value);
    
    /// <summary>
    /// Creates default load options for converting with the aid of a plugin. 
    /// </summary>
    PluginLoadOptions();
    /// <summary>
    /// Creates load options for converting with the aid of the plugin specified by name and version. 
    /// </summary>
    /// <param name="pluginName">The string representing name of plugin used.</param>
    /// <param name="pluginVersion">The string representing version of plugin used.</param>
    PluginLoadOptions(System::String pluginName, System::String pluginVersion);
    
private:

    System::String _name;
    System::String _version;
    
};

} // namespace Pdf
} // namespace Aspose


