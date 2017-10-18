#ifndef _Aspose_Pdf_Generator_LevelFormat_h_
#define _Aspose_Pdf_Generator_LevelFormat_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class MarginInfo; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents format of the table of contents.
/// </summary>
class ASPOSE_PDF_SHARED_API LevelFormat : public System::Object
{
    typedef LevelFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState();
    void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    System::SharedPtr<MarginInfo> get_Margin();
    void set_Margin(System::SharedPtr<MarginInfo> value);
    float get_SubsequentLinesIndent();
    void set_SubsequentLinesIndent(float value);
    
    LevelFormat();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "LevelFormat"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    System::SharedPtr<MarginInfo> marginInfo;
    float subsequentLinesIndent;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_LevelFormat_h_

