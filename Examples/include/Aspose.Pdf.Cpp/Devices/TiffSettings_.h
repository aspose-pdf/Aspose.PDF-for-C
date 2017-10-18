#ifndef _Aspose_Pdf_Devices_TiffSettings__h_
#define _Aspose_Pdf_Devices_TiffSettings__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Devices { class Margins; } } }
namespace Aspose { namespace Pdf { namespace Devices { enum class CompressionType; } } }
namespace Aspose { namespace Pdf { namespace Devices { enum class ColorDepth; } } }
namespace Aspose { namespace Pdf { namespace Devices { enum class ShapeType; } } }
namespace Aspose { namespace Pdf { enum class PageCoordinateType; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// This class represents settings for importing pdf to Tiff.
/// </summary>
class ASPOSE_PDF_SHARED_API TiffSettings FINAL : public System::Object
{
    typedef TiffSettings ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<Aspose::Pdf::Devices::Margins> get_Margins();
    bool get_SkipBlankPages();
    void set_SkipBlankPages(bool value);
    CompressionType get_Compression();
    void set_Compression(CompressionType value);
    ColorDepth get_Depth();
    void set_Depth(ColorDepth value);
    ShapeType get_Shape();
    void set_Shape(ShapeType value);
    float get_Brightness();
    void set_Brightness(float value);
    PageCoordinateType get_CoordinateType();
    void set_CoordinateType(PageCoordinateType value);
    
    TiffSettings();
    TiffSettings(ShapeType shapeType);
    TiffSettings(CompressionType compressionType);
    TiffSettings(ColorDepth colorDepth);
    TiffSettings(System::SharedPtr<Aspose::Pdf::Devices::Margins> margins);
    TiffSettings(CompressionType compressionType, ColorDepth colorDepth, System::SharedPtr<Aspose::Pdf::Devices::Margins> margins);
    TiffSettings(CompressionType compressionType, ColorDepth colorDepth, System::SharedPtr<Aspose::Pdf::Devices::Margins> margins, bool skipBlankPages);
    TiffSettings(CompressionType compressionType, ColorDepth colorDepth, System::SharedPtr<Aspose::Pdf::Devices::Margins> margins, bool skipBlankPages, ShapeType shapeType);
    TiffSettings(bool skipBlankPages);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TiffSettings"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Devices::Margins> margins;
    bool skipBlankPages;
    CompressionType compression;
    ColorDepth depth;
    ShapeType shape;
    float brightness;
    PageCoordinateType coordinateType;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_TiffSettings__h_

