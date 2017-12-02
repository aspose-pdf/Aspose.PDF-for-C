#ifndef _Aspose_Pdf_Facades_PdfProducer_h_
#define _Aspose_Pdf_Facades_PdfProducer_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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
/// <code></code>
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

    /// <summary>
    /// Produce the PDF stream using specified import format.
    /// <example>This sample shows how to produce Pdf stream from CGM stream.
    /// <code></code>
    /// </example>
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="format">Import format.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Input or output stream is null</exception>
    static void Produce(System::SharedPtr<System::IO::Stream> inputStream, ImportFormat format, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Produce the PDF stream using specified import format.
    /// <example>This sample shows how to produce Pdf stream from CGM file.
    /// <code></code>
    /// </example>
    /// </summary>
    /// <param name="inputFileName">Input file name.</param>
    /// <param name="format">Import format.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Output stream is null</exception>
    /// <exception cref="ArgumentException">Input file name is an empty string</exception>
    static void Produce(System::String inputFileName, ImportFormat format, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Produce the PDF file using specified import format.
    /// <example>This sample shows how to produce Pdf file from CGM stream.
    /// <code></code>
    /// </example>
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="format">Import format.</param>
    /// <param name="outputFileName">Output PDF file</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Input stream is null</exception>
    /// <exception cref="ArgumentException">Output file name is an empty string</exception>
    static void Produce(System::SharedPtr<System::IO::Stream> inputStream, ImportFormat format, System::String outputFileName);
    /// <summary>
    /// Produce the PDF file using specified import format.
    /// <example>This sample shows how to produce Pdf file from CGM file.
    /// <code></code>
    /// </example>
    /// </summary>
    /// <param name="inputFileName">Input file name.</param>
    /// <param name="format">Import format.</param>
    /// <param name="outputFileName">Output PDF file</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentException">Input or output file name is an empty string</exception>
    static void Produce(System::String inputFileName, ImportFormat format, System::String outputFileName);
    /// <summary>
    /// Produce the PDF stream using specified import option.
    /// <example>This sample shows how to produce Pdf stream from CGM file.
    /// <code></code>
    /// </example>
    /// </summary>
    /// <param name="inputFileName">Input file name.</param>
    /// <param name="options">Import option.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Output stream is null</exception>
    /// <exception cref="ArgumentException">Input file name is an empty string</exception>
    static void Produce(System::String inputFileName, System::SharedPtr<ImportOptions> options, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Produce the PDF file using specified import option.
    /// <example>This sample shows how to produce Pdf file from CGM stream.
    /// <code></code>
    /// </example>
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="options">Import option.</param>
    /// <param name="outputFileName">Output PDF file.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Input stream is null</exception>
    /// <exception cref="ArgumentException">Output file name is an empty string</exception>
    static void Produce(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<ImportOptions> options, System::String outputFileName);
    /// <summary>
    /// Produce the PDF file using specified import option.
    /// <example>This sample shows how to produce Pdf file from CGM file.
    /// <code></code>
    /// </example>
    /// </summary>
    /// <param name="inputFileName">Input file name.</param>
    /// <param name="options">Import option.</param>
    /// <param name="outputFileName">Output PDF stream.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentException">Input or output file name is an empty string</exception>
    static void Produce(System::String inputFileName, System::SharedPtr<ImportOptions> options, System::String outputFileName);
    /// <summary>
    /// Produce the PDF file using specified import option.
    /// <example>This sample shows how to produce Pdf stream from CGM stream.
    /// <code></code>
    /// </example>
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="options">Import option.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Input or output stream is null.</exception>
    static void Produce(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<ImportOptions> options, System::SharedPtr<System::IO::Stream> outputStream);
    
protected:

    System::SharedPtr<ImportOptions> options;
    
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="options">Import option.</param>
    PdfProducer(System::SharedPtr<ImportOptions> options);
    
    /// <summary>
    /// Produce the PDF stream from specified stream.
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    virtual void Produce(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream) = 0;
    /// <summary>
    /// Get the producer for specified import option.
    /// </summary>
    /// <param name="options">Import option</param>
    /// <returns>PDF producer.</returns>
    static System::SharedPtr<PdfProducer> GetProducer(System::SharedPtr<ImportOptions> options);
    /// <summary>
    /// Get the producer for specified import format.
    /// </summary>
    /// <param name="format">Import option</param>
    /// <returns>PDF producer.</returns>
    static System::SharedPtr<PdfProducer> GetProducer(ImportFormat format);
    /// <summary>
    /// Get the <see cref="ImportOptions"/> for specified import format.
    /// </summary>
    /// <param name="format">Import format.</param>
    /// <returns>Import option.</returns>
    static System::SharedPtr<ImportOptions> GetImportOptions(ImportFormat format);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static void ProduceInternal(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<ImportOptions> options, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Checks an argument isn't null. Throw <see cref="System.ArgumentNullException"/> is argument equal null.
    /// </summary>
    /// <param name="argumentValue">The argument value to check.</param>
    /// <param name="argumentName">The name of the argument.</param>
    static void GuardArgumentNotNull(System::SharedPtr<System::Object> argumentValue, System::String argumentName);
    /// <summary>
    /// Checks an argument isn't null. Throw <see cref="System.ArgumentNullException"/> is argument equal null.
    /// </summary>
    /// <param name="argumentValue">The argument value to check.</param>
    /// <param name="argumentName">The name of the argument.</param>
    static void GuardArgumentException(System::String argumentValue, System::String argumentName);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfProducer_h_

