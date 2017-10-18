#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSources_SystemFontSource_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSources_SystemFontSource_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "CommonData/Text/Fonts/FontSources/FontSource.h"

namespace Aspose { namespace Fonts { namespace Sources { class FontDefinition; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

///<summary>
/// Represents all fonts installed to the system. 
/// </summary>
class ASPOSE_PDF_SHARED_API SystemFontSource FINAL : public Aspose::Pdf::Text::FontSource
{
    typedef SystemFontSource ThisType;
    typedef Aspose::Pdf::Text::FontSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    SystemFontSource();
    
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    
protected:

    virtual System::ArrayPtr<System::SharedPtr<Aspose::Fonts::Sources::FontDefinition>> GetFontDefinitions();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SystemFontSource"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSources_SystemFontSource_h_

