#ifndef _Aspose_Pdf_ImageStamp_h_
#define _Aspose_Pdf_ImageStamp_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <cstdint>

#include "Stamp_.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Reresents graphic stamp.
/// </summary>
class ASPOSE_PDF_SHARED_API ImageStamp FINAL : public Aspose::Pdf::Stamp
{
    typedef ImageStamp ThisType;
    typedef Aspose::Pdf::Stamp BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<System::IO::Stream> get_Image();
    double get_Width();
    void set_Width(double value);
    double get_Height();
    void set_Height(double value);
    int32_t get_Quality();
    void set_Quality(int32_t value);
    
    ImageStamp(System::SharedPtr<System::IO::Stream> image);
    
    virtual void Put(System::SharedPtr<Page> page);
    
    ImageStamp(System::String fileName);
    
protected:

    virtual void ClearCache();
    virtual System::SharedPtr<Rectangle> getRect();
    virtual System::SharedPtr<DOM::Matrix> getSizeMatrix();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ImageStamp"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::IO::Stream> _image;
    System::String _imageName;
    System::SharedPtr<Engine::Data::IPdfObject> _imageObject;
    double _width;
    double _height;
    int32_t _quality;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ImageStamp_h_

