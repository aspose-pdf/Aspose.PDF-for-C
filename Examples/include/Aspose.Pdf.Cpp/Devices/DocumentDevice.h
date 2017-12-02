#ifndef _Aspose_Pdf_Devices_DocumentDevice_h_
#define _Aspose_Pdf_Devices_DocumentDevice_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Each device represents some operation on the document, e.g. we can convert pdf document into another format.
    /// </summary>
    /// <param name="document">
    /// The document to process.
    /// </param>
    /// <param name="fromPage">
    /// Defines the page from which to start processing.
    /// </param>
    /// <param name="toPage">
    /// Defines the last page to process.
    /// </param>
    /// <param name="output">
    /// Defines stream where the results of processing are stored.
    /// </param>
    virtual void Process(System::SharedPtr<Document> document, int32_t fromPage, int32_t toPage, System::SharedPtr<System::IO::Stream> output) = 0;
    /// <summary>
    /// Processes the whole document and saves results into stream.
    /// </summary>
    /// <param name="document">
    /// The document to process.
    /// </param>
    /// <param name="output">
    /// Defines stream where the results of processing are stored.
    /// </param>
    void Process(System::SharedPtr<Document> document, System::SharedPtr<System::IO::Stream> output);
    /// <summary>
    /// Processes the whole document and saves results into file.
    /// </summary>
    /// <param name="document">
    /// The document to process.
    /// </param>
    /// <param name="outputFileName">
    /// Defines file where the results of processing are stored.
    /// </param>
    void Process(System::SharedPtr<Document> document, System::String outputFileName);
    /// <summary>
    /// Processes certain pages of the document and saves results into file.
    /// </summary>
    /// <param name="document">
    /// The document to process.
    /// </param>
    /// <param name="fromPage">
    /// The first page to start processing.
    /// </param>
    /// <param name="toPage">
    /// The last page of processing.
    /// </param>
    /// <param name="outputFileName">
    /// Defines file where the results of processing are stored.
    /// </param>
    void Process(System::SharedPtr<Document> document, int32_t fromPage, int32_t toPage, System::String outputFileName);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_DocumentDevice_h_

