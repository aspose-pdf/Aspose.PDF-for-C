#ifndef _Aspose_Pdf_Devices_DocumentDevice_h_
#define _Aspose_Pdf_Devices_DocumentDevice_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <cstdint>

#include "Devices/Device.h"

namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Abstract class for all devices which is used to process the whole pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT DocumentDevice : public Aspose::Pdf::Devices::Device
{
    typedef DocumentDevice ThisType;
    typedef Aspose::Pdf::Devices::Device BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual void Process(System::SharedPtr<Document> document, int32_t fromPage, int32_t toPage, System::SharedPtr<System::IO::Stream> output) = 0;
    void Process(System::SharedPtr<Document> document, System::SharedPtr<System::IO::Stream> output);
    void Process(System::SharedPtr<Document> document, System::String outputFileName);
    void Process(System::SharedPtr<Document> document, int32_t fromPage, int32_t toPage, System::String outputFileName);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DocumentDevice"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_DocumentDevice_h_

