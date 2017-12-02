#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FileFontSource_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FileFontSource_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

///<summary>
/// Represents single font file source.
/// </summary>
class ASPOSE_PDF_SHARED_API FileFontSource FINAL : public Aspose::Pdf::Text::FontSource
{
    typedef FileFontSource ThisType;
    typedef Aspose::Pdf::Text::FontSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Path to the font file. 
    /// </summary>
    System::String get_FilePath();
    /// <summary>
    /// Path to the font file. 
    /// </summary>
    void set_FilePath(System::String value);
    
    /// <summary> 
    /// Initializes a new instance of <see cref="FileFontSource"/> class.
    /// </summary>
    /// <param name="filePath">Path to the font file.</param>
    FileFontSource(System::String filePath);
    
    /// <summary>
    /// Check if font file source objects are equal.
    /// </summary>
    /// <param name="obj">Font file source object which will be compared.</param>
    /// <returns>True if both objects are font file sources targeted to the same file.</returns>
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    
protected:

    virtual System::ArrayPtr<System::SharedPtr<Aspose::Fonts::Sources::FontDefinition>> GetFontDefinitions();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String filePath;
    System::ArrayPtr<System::SharedPtr<Aspose::Fonts::Sources::FontDefinition>> fonts;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FileFontSource_h_

