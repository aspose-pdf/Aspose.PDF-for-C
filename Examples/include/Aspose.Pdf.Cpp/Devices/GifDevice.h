#ifndef _Aspose_Pdf_Devices_GifDevice_h_
#define _Aspose_Pdf_Devices_GifDevice_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <cstdint>

#include "Devices/ImageDevice_.h"

namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { class PageSize; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents image device that helps to save pdf document pages into gif. 
/// </summary>
class ASPOSE_PDF_SHARED_API GifDevice FINAL : public Aspose::Pdf::Devices::ImageDevice
{
    typedef GifDevice ThisType;
    typedef Aspose::Pdf::Devices::ImageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    GifDevice();
    GifDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    GifDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    GifDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    
    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output);
    
    GifDevice(int32_t width, int32_t height);
    GifDevice(System::SharedPtr<PageSize> pageSize);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "GifDevice"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_GifDevice_h_

