#ifndef _Aspose_Pdf_Facades_PdfProducer_h_
#define _Aspose_Pdf_Facades_PdfProducer_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if SUPPORT_ASPOSE_CGM 

/* C# INACTIVE CODE:
using Aspose.Pdf.Facades.PdfProducers;
*/

// C# preprocessor directive: #endif 


#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class PdfProducerTests; } } } }
namespace Aspose { namespace Pdf { class ImportOptions; } }
namespace Aspose { namespace Pdf { enum class ImportFormat; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to produce PDF from other formats.
/// <example>This sample shows how to produce Pdf file from CGM file.
/// <code>
/// string inputFile = "myImage.cgm";
/// string outputFile = "myPdf.pdf";
/// try
/// {
///     PdfProducer.Produce(inputFile, ImportFormat.Cgm, outputFile);
///     // Success produced pdf file.
/// }
/// catch (InvalidCgmFileFormatException e)
/// {
///     //  Do something...
/// }
/// </code>
/// </example>
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT PdfProducer : public System::Object
{
    typedef PdfProducer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tests::Facades::PdfProducerTests;
    
public:

    static void Produce(System::SharedPtr<System::IO::Stream> inputStream, ImportFormat format, System::SharedPtr<System::IO::Stream> outputStream);
    static void Produce(System::String inputFileName, ImportFormat format, System::SharedPtr<System::IO::Stream> outputStream);
    static void Produce(System::SharedPtr<System::IO::Stream> inputStream, ImportFormat format, System::String outputFileName);
    static void Produce(System::String inputFileName, ImportFormat format, System::String outputFileName);
    static void Produce(System::String inputFileName, System::SharedPtr<ImportOptions> options, System::SharedPtr<System::IO::Stream> outputStream);
    static void Produce(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<ImportOptions> options, System::String outputFileName);
    static void Produce(System::String inputFileName, System::SharedPtr<ImportOptions> options, System::String outputFileName);
    static void Produce(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<ImportOptions> options, System::SharedPtr<System::IO::Stream> outputStream);
    
protected:

    System::SharedPtr<ImportOptions> options;
    
    PdfProducer(System::SharedPtr<ImportOptions> options);
    
    virtual void Produce(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream) = 0;
    static System::SharedPtr<PdfProducer> GetProducer(System::SharedPtr<ImportOptions> options);
    static System::SharedPtr<PdfProducer> GetProducer(ImportFormat format);
    static System::SharedPtr<ImportOptions> GetImportOptions(ImportFormat format);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfProducer"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    static void ProduceInternal(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<ImportOptions> options, System::SharedPtr<System::IO::Stream> outputStream);
    static void GuardArgumentNotNull(System::SharedPtr<System::Object> argumentValue, System::String argumentName);
    static void GuardArgumentException(System::String argumentValue, System::String argumentName);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfProducer_h_

