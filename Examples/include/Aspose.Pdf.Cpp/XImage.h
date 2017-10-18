#ifndef _Aspose_Pdf_XImage_h_
#define _Aspose_Pdf_XImage_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <drawing/imaging/image_format.h>
#include <drawing/image.h>
#include <drawing/color.h>
#include <drawing/bitmap.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Redaction; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class ImageElement; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfExtractor; } } }
namespace Aspose { namespace Pdf { class ImageStamp; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class SignatureField; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class ImagePlacement; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class XImageCollection; } }
namespace Aspose { namespace Pdf { class DataUtils; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDataStream; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { enum class ColorType; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing image X-Object.
/// </summary>
class ASPOSE_PDF_SHARED_API XImage FINAL : public System::Object
{
    typedef XImage ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Redaction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::SignatureField;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacement;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::DataUtils;
    
public:

    static int32_t DefaultResolution;
    
    bool get_ContainsTransparency();
    System::SharedPtr<System::Drawing::Image> get_Grayscaled();
    int32_t get_Width();
    int32_t get_Height();
    System::String get_Name();
    void set_Name(System::String value);
    
    void Save(System::SharedPtr<System::IO::Stream> stream);
    void Save(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    void Save(System::SharedPtr<System::IO::Stream> stream, int32_t resolution);
    void Save(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t resolution);
    ColorType GetColorType();
    
protected:

    System::SharedPtr<XImageCollection> get_Parent();
    
    System::SharedPtr<Engine::Data::IPdfDataStream> EngineImg;
    
    static System::SharedPtr<System::Drawing::Imaging::ImageFormat> get_DefaultImageFormat();
    
    XImage(System::SharedPtr<Engine::Data::IPdfDataStream> image, System::SharedPtr<XImageCollection> parent);
    
    void Delete();
    void Replace(System::SharedPtr<System::IO::Stream> image);
    
    XImage(System::SharedPtr<Engine::Data::IPdfDataStream> image);
    
    System::SharedPtr<System::Drawing::Image> GetImage();
    static bool IsImage(System::SharedPtr<Engine::Data::IPdfPrimitive> primitive);
    static int32_t GetRgbDelta(System::Drawing::Color color);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XImage"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::WeakPtr<XImageCollection> _parent;
    
    System::SharedPtr<System::Drawing::Bitmap> MakeGrayscale(System::SharedPtr<System::Drawing::Bitmap> original);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XImage_h_

