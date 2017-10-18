#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FileFontSource_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FileFontSource_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::String get_FilePath();
    void set_FilePath(System::String value);
    
    FileFontSource(System::String filePath);
    
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    
protected:

    virtual System::ArrayPtr<System::SharedPtr<Aspose::Fonts::Sources::FontDefinition>> GetFontDefinitions();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FileFontSource"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String filePath;
    System::ArrayPtr<System::SharedPtr<Aspose::Fonts::Sources::FontDefinition>> fonts;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FileFontSource_h_

