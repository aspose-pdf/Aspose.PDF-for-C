#ifndef _Aspose_Pdf_Text_CharInfo_h_
#define _Aspose_Pdf_Text_CharInfo_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }
namespace Aspose { namespace Pdf { namespace Text { class Position; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a character info object.
/// Provides character positioning information.
/// </summary>
class ASPOSE_PDF_SHARED_API CharInfo FINAL : public System::Object
{
    typedef CharInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextSegment;
    
public:

    System::SharedPtr<Aspose::Pdf::Text::Position> get_Position();
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    
protected:

    CharInfo(System::SharedPtr<Aspose::Pdf::Text::Position> position, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CharInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Text::Position> position;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_CharInfo_h_

