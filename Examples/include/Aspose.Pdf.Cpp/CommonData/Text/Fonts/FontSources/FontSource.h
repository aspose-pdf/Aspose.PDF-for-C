#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FontSource_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FontSource_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class FontRegistry; } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Fonts { class FontSourceTests; } } } }
namespace Aspose { namespace Fonts { namespace Sources { class FontDefinition; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

///<summary>
/// Represents a base class fot font source.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT FontSource : public virtual System::Object
{
    typedef FontSource ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::FontRegistry;
    friend class Aspose::Pdf::Tests::Fonts::FontSourceTests;
    
protected:

    FontSource();
    
    virtual System::ArrayPtr<System::SharedPtr<Aspose::Fonts::Sources::FontDefinition>> GetFontDefinitions() = 0;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FontSource"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FontSource_h_

