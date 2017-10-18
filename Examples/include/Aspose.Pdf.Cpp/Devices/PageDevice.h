#ifndef _Aspose_Pdf_Devices_PageDevice_h_
#define _Aspose_Pdf_Devices_PageDevice_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <drawing/graphics.h>

#include "Devices/Device.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfConverter; } } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Abstract class for all devices which is used to process certain page the pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT PageDevice : public Aspose::Pdf::Devices::Device
{
    typedef PageDevice ThisType;
    typedef Aspose::Pdf::Devices::Device BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfConverter;
    
public:

    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output) = 0;
    void Process(System::SharedPtr<Page> page, System::String outputFileName);
    
protected:

    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::Drawing::Graphics> gr);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PageDevice"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_PageDevice_h_

