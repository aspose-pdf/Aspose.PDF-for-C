#ifndef _Aspose_Pdf_Facades_Stamp_h_
#define _Aspose_Pdf_Facades_Stamp_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfFileStamp; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormattedText; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Facades { enum class BlendingColorSpace; } } }
namespace Aspose { namespace Pdf { class Stamp; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { enum class Rotation; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class represeting stamp. 
/// </summary>
class ASPOSE_PDF_SHARED_API Stamp FINAL : public System::Object
{
    typedef Stamp ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileStamp;
    
public:

    int32_t get_StampId();
    void set_StampId(int32_t value);
    int32_t get_Quality();
    void set_Quality(int32_t value);
    float get_Opacity();
    void set_Opacity(float value);
    int32_t get_PageNumber();
    void set_PageNumber(int32_t value);
    System::ArrayPtr<int32_t> get_Pages();
    void set_Pages(System::ArrayPtr<int32_t> value);
    float get_Rotation();
    void set_Rotation(float value);
    bool get_IsBackground();
    void set_IsBackground(bool value);
    BlendingColorSpace get_BlendingSpace();
    void set_BlendingSpace(BlendingColorSpace value);
    
    Stamp();
    
    void BindPdf(System::String pdfFile, int32_t pageNumber);
    void BindPdf(System::SharedPtr<System::IO::Stream> pdfStream, int32_t pageNumber);
    void BindImage(System::String imageFile);
    void BindLogo(System::SharedPtr<FormattedText> formattedText);
    void SetOrigin(float originX, float originY);
    void SetImageSize(float width, float height);
    void BindImage(System::SharedPtr<System::IO::Stream> image);
    
protected:

    System::SharedPtr<Aspose::Pdf::Stamp> translate();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Stamp"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::ArrayPtr<int32_t> pages;
    int32_t pageNumber;
    int32_t _pageNumber;
    System::SharedPtr<FormattedText> text;
    System::SharedPtr<System::IO::Stream> image;
    System::String imageName;
    System::String pdfFile;
    System::SharedPtr<System::IO::Stream> pdfStream;
    System::SharedPtr<Page> page;
    double originX;
    double originY;
    double imageWidth;
    double imageHeight;
    double opacity;
    bool background;
    float rotation;
    int32_t stampId;
    int32_t quality;
    BlendingColorSpace blendingColorSpace;
    
    void reset();
    void setPage(System::SharedPtr<Document> doc, int32_t pageNumber);
    bool isValidAngle(float angle);
    Aspose::Pdf::Rotation translateRotation();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_Stamp_h_

