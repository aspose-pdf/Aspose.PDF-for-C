#ifndef _Aspose_Pdf_Watermark_h_
#define _Aspose_Pdf_Watermark_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/image.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a watermark of the page.
/// </summary>
class ASPOSE_PDF_SHARED_API Watermark : public System::Object
{
    typedef Watermark ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Page;
    
public:

    System::SharedPtr<System::Drawing::Image> get_Image();
    System::SharedPtr<Rectangle> get_Position();
    bool get_Available();
    
    Watermark(System::SharedPtr<System::Drawing::Image> image, System::SharedPtr<Rectangle> rect);
    Watermark(System::SharedPtr<System::Drawing::Image> image);
    
protected:

    Watermark();
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Watermark"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Drawing::Image> _image;
    System::SharedPtr<Rectangle> _rect;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Watermark_h_

