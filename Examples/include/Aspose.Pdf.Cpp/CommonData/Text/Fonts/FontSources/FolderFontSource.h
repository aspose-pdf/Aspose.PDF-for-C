#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>

#include "CommonData/Text/Fonts/FontSources/FontSource.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Fonts { namespace Sources { class FontDefinition; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents the folder that contains font files. 
/// </summary>
class ASPOSE_PDF_SHARED_API FolderFontSource FINAL : public Aspose::Pdf::Text::FontSource
{
    typedef FolderFontSource ThisType;
    typedef Aspose::Pdf::Text::FontSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Path to the folder that contains font files. 
    /// </summary>
    System::String get_FolderPath();
    /// <summary>
    /// Path to the folder that contains font files. 
    /// </summary>
    void set_FolderPath(System::String value);
    
    /// <summary> 
    /// Initializes a new instance of <see cref="FolderFontSource"/> class.
    /// </summary>
    /// <param name="folderPath">Path to the folder.</param>
    FolderFontSource(System::String folderPath);
    
    /// <summary>
    /// Check if folder font source objects are equal.
    /// </summary>
    /// <param name="obj">Folder font source object which will be compared.</param>
    /// <returns>True if both objects are folder font sources targeted to the same folder.</returns>
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    
protected:

    virtual System::ArrayPtr<System::SharedPtr<Aspose::Fonts::Sources::FontDefinition>> GetFontDefinitions();
    
private:

    System::String folderPath;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


