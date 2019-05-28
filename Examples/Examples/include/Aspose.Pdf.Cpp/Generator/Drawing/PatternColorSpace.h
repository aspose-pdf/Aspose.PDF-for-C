#pragma once
/* Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved. */

#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/rectangle_f.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { class Color; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents base pattern class.
/// </summary>
class ASPOSE_PDF_SHARED_API PatternColorSpace : public System::Object
{
    typedef PatternColorSpace ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    
public:

    PatternColorSpace();
    
protected:

    System::SharedPtr<Color> get_BackgroundColor();
    void set_BackgroundColor(System::SharedPtr<Color> value);
    System::Drawing::RectangleF get_BoundingBox();
    void set_BoundingBox(System::Drawing::RectangleF value);
    bool get_Antilaliasing();
    void set_Antilaliasing(bool value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Color> backgroundColor;
    System::Drawing::RectangleF boundingBox;
    bool antilaliasing;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


