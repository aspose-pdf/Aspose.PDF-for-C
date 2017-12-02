#ifndef _Aspose_Pdf_Devices_TextDevice_h_
#define _Aspose_Pdf_Devices_TextDevice_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/text/encoding.h>

#include "Devices/PageDevice.h"

namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextExtractionOptions; } } } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {


// C# preprocessor directive: #if __cplusplus && UNIT_TEST 


// C# preprocessor directive: #endif 

/// <summary>
/// Represents class for converting pdf document pages into text.
/// </summary>
/// <remarks>
/// The <see cref="TextDevice"/> object is basically used to extract text from pdf page.
/// </remarks>
/// <example>
/// The example demonstrates how to extract text on the first PDF document page.
/// 
/// <code>
/// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
/// System::String extractedText;
/// {
///     System::SharedPtr<System::IO::MemoryStream> ms = System::MakeObject<System::IO::MemoryStream>();
///     // create text device
///     System::SharedPtr<Aspose::Pdf::Devices::TextDevice> device = System::MakeObject<Aspose::Pdf::Devices::TextDevice>();
///     // convert the page and save text to the stream
///     device->Process(doc->get_Pages()->idx_get(1), ms);
///     // use the extracted text
///     ms->Close();
///     extractedText = System::Text::Encoding::get_Unicode()->GetString(ms->ToArray());
/// }
/// </code> 
/// </example>
class ASPOSE_PDF_SHARED_API TextDevice FINAL : public Aspose::Pdf::Devices::PageDevice
{
    typedef TextDevice ThisType;
    typedef Aspose::Pdf::Devices::PageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets text extraction options.
    /// </summary>
    /// <example>
    /// The example demonstrates how to extracted text in raw order.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// System::String extractedText;
    /// // create text device
    /// System::SharedPtr<Aspose::Pdf::Devices::TextDevice> device = System::MakeObject<Aspose::Pdf::Devices::TextDevice>(System::MakeObject<Aspose::Pdf::Text::TextOptions::TextExtractionOptions>(Aspose::Pdf::Text::TextOptions::TextExtractionOptions::TextFormattingMode::Raw));
    /// // convert the page and save text to the stream
    /// System::StaticCast<Devices::PageDevice>(device)->Process(doc->get_Pages()->idx_get(1), outFile);
    /// // use the extracted text
    /// extractedText = System::IO::File::ReadAllText(outFile, System::Text::Encoding::get_Unicode());
    /// </code> 
    /// </example>
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> get_ExtractionOptions();
    /// <summary>
    /// Gets or sets text extraction options.
    /// </summary>
    /// <example>
    /// The example demonstrates how to extracted text in raw order.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// System::String extractedText;
    /// // create text device
    /// System::SharedPtr<Aspose::Pdf::Devices::TextDevice> device = System::MakeObject<Aspose::Pdf::Devices::TextDevice>(System::MakeObject<Aspose::Pdf::Text::TextOptions::TextExtractionOptions>(Aspose::Pdf::Text::TextOptions::TextExtractionOptions::TextFormattingMode::Raw));
    /// // convert the page and save text to the stream
    /// System::StaticCast<Devices::PageDevice>(device)->Process(doc->get_Pages()->idx_get(1), outFile);
    /// // use the extracted text
    /// extractedText = System::IO::File::ReadAllText(outFile, System::Text::Encoding::get_Unicode());
    /// </code> 
    /// </example>
    void set_ExtractionOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> value);
    /// <summary>
    /// Gets or sets encoding of extracted text.
    /// </summary>
    /// <example>
    /// The example demonstrates how to represent extracted text in UTF-8 encoding.
    /// 
    /// <code>
    /// System::String inFile = L"", outFile = L"";
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// System::String extractedText;
    /// // create text device
    /// System::SharedPtr<Aspose::Pdf::Devices::TextDevice> device = System::MakeObject<Aspose::Pdf::Devices::TextDevice>(System::Text::Encoding::get_UTF8());
    /// // convert the page and save text to the stream
    /// System::StaticCast<Devices::PageDevice>(device)->Process(doc->get_Pages()->idx_get(1), outFile);
    /// // use the extracted text
    /// extractedText = System::IO::File::ReadAllText(outFile, System::Text::Encoding::get_UTF8());
    /// </code> 
    /// </example>
    System::SharedPtr<System::Text::Encoding> get_Encoding();
    /// <summary>
    /// Gets or sets encoding of extracted text.
    /// </summary>
    /// <example>
    /// The example demonstrates how to represent extracted text in UTF-8 encoding.
    /// 
    /// <code>
    /// System::String inFile = L"", outFile = L"";
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// System::String extractedText;
    /// // create text device
    /// System::SharedPtr<Aspose::Pdf::Devices::TextDevice> device = System::MakeObject<Aspose::Pdf::Devices::TextDevice>(System::Text::Encoding::get_UTF8());
    /// // convert the page and save text to the stream
    /// System::StaticCast<Devices::PageDevice>(device)->Process(doc->get_Pages()->idx_get(1), outFile);
    /// // use the extracted text
    /// extractedText = System::IO::File::ReadAllText(outFile, System::Text::Encoding::get_UTF8());
    /// </code> 
    /// </example>
    void set_Encoding(System::SharedPtr<System::Text::Encoding> value);
    
    /// <summary>
    /// Convert page and save it as text stream.
    /// </summary>
    /// <example>
    /// The example demonstrates how to extract text on the first PDF document page.
    /// 
    /// <code>
    /// System::SharedPtr<System::IO::MemoryStream> ms = System::MakeObject<System::IO::MemoryStream>();
    /// // create text device
    /// System::SharedPtr<Aspose::Pdf::Devices::TextDevice> device = System::MakeObject<Aspose::Pdf::Devices::TextDevice>();
    /// // convert the page and save text to the stream
    /// device->Process(doc->get_Pages()->idx_get(1), ms);
    /// // use the extracted text
    /// ms->Close();
    /// extractedText = System::Text::Encoding::get_Unicode()->GetString(ms->ToArray());
    /// </code> 
    /// </example>
    /// <param name="page">
    /// The page to convert.
    /// </param>
    /// <param name="output">
    /// Result stream.
    /// </param>
    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextDevice"/> with text extraction options.
    /// </summary>
    /// <param name="extractionOptions">
    /// Text extraction options.
    /// </param>
    TextDevice(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> extractionOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextDevice"/> with the Raw text formatting mode and Unicode text encoding.
    /// </summary>
    TextDevice();
    /// <summary>
    /// Initializes a new instance of the <see cref="TextDevice"/> for the specified encoding.
    /// </summary>
    /// <param name="encoding">
    /// Encoding of extracted text
    /// </param>
    TextDevice(System::SharedPtr<System::Text::Encoding> encoding);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextDevice"/> for the specified encoding with text extraction options.
    /// </summary>
    /// <param name="extractionOptions">
    /// Text extraction options.
    /// </param>
    /// <param name="encoding">
    /// Encoding of extracted text.
    /// </param>
    TextDevice(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> extractionOptions, System::SharedPtr<System::Text::Encoding> encoding);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> extractionOptions;
    System::SharedPtr<System::Text::Encoding> encoding;
    
    void Initialize(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> extractionOptions, System::SharedPtr<System::Text::Encoding> encoding);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_TextDevice_h_

