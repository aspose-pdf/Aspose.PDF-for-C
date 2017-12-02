#ifndef _Aspose_Pdf_Facades_StampInfo_h_
#define _Aspose_Pdf_Facades_StampInfo_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets identifier of the stamp.
    /// </summary>
    int32_t get_StampId();
    /// <summary>
    /// Gets stamp index on the page.
    /// </summary>
    int32_t get_IndexOnPage();
    /// <summary>
    /// Gets stamp type (image / form).
    /// </summary>
    Aspose::Pdf::Facades::StampType get_StampType();
    /// <summary>
    /// Gets rectangle where stamp is placed.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets image of stamp. May be null if stamp does not contain images (for example for text stamp).
    /// </summary>
    System::SharedPtr<System::Drawing::Image> get_Image();
    /// <summary>
    /// Gets XForm of the stamp.
    /// </summary>
    System::SharedPtr<XForm> get_Form();
    /// <summary>
    /// Gets text in the stamp.
    /// </summary>
    System::String get_Text();
    /// <summary>
    /// Gets visibility of stamp. If false then stamp is hidden (with HideStampById). Hidden stamp may be restored by ShowStampById.
    /// </summary>
    bool get_Visible();
    
protected:

    /// <summary>
    /// Constructor of StampInfo class.
    /// </summary>
    /// <param name="stampId">Stamp identifier.</param>
    /// <param name="stampType">Stamp type.</param>
    /// <param name="index">Index of the stamp on the page.</param>
    StampInfo(int32_t stampId, Aspose::Pdf::Facades::StampType stampType, int32_t index, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<System::Drawing::Image> image, bool visible);
    StampInfo(int32_t stampId, Aspose::Pdf::Facades::StampType stampType, int32_t index, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<XForm> form, bool visible);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
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

