#ifndef _Aspose_Pdf_Facades_StampInfo_h_
#define _Aspose_Pdf_Facades_StampInfo_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/image.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class StampType; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class representing stamp information.
/// </summary>
class ASPOSE_PDF_SHARED_API StampInfo FINAL : public System::Object
{
    typedef StampInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    
public:

    int32_t get_StampId();
    int32_t get_IndexOnPage();
    Aspose::Pdf::Facades::StampType get_StampType();
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    System::SharedPtr<System::Drawing::Image> get_Image();
    System::SharedPtr<XForm> get_Form();
    System::String get_Text();
    bool get_Visible();
    
protected:

    StampInfo(int32_t stampId, Aspose::Pdf::Facades::StampType stampType, int32_t index, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<System::Drawing::Image> image, bool visible);
    StampInfo(int32_t stampId, Aspose::Pdf::Facades::StampType stampType, int32_t index, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<XForm> form, bool visible);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "StampInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t _stampId;
    int32_t _indexOnPage;
    Aspose::Pdf::Facades::StampType _stampType;
    System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
    System::SharedPtr<System::Drawing::Image> _image;
    System::SharedPtr<XForm> _form;
    bool _visible;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_StampInfo_h_

