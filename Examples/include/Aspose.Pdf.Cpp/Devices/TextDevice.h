#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/text/encoding.h>

#include "Devices/PageDevice.h"

namespace Aspose { namespace Pdf { namespace Text { class TextExtractionOptions; } } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents class for converting pdf document pages into text.
/// </summary>
/// <remarks>
/// The <see cref="TextDevice"/> object is basically used to extract text from pdf page.
/// </remarks>
/// <example>
/// The example demonstrates how to extract text on the first PDF document page.
/// <code lang="C#"> 
/// Document doc = new Document(inFile);
/// string extractedText;
/// 
/// using (MemoryStream ms = new MemoryStream())
/// {
///     // create text device
///     TextDevice device = new TextDevice();
/// 
///     // convert the page and save text to the stream
///     device.Process(doc.Pages[1], ms);
/// 
///     // use the extracted text
///     ms.Close();
///     extractedText = Encoding.Unicode.GetString(ms.ToArray());
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
    /// Gets text extraction options.
    /// </summary>
    /// <example>
    /// The example demonstrates how to extracted text in raw order.
    /// <code lang="C#"> 
    /// Document doc = new Document(inFile);
    /// string extractedText;
    /// 
    /// // create text device
    /// TextDevice device = new TextDevice(new TextExtractionOptions(TextExtractionOptions.TextFormattingMode.Raw));
    /// 
    /// // convert the page and save text to the stream
    /// device.Process(doc.Pages[1], outFile);
    /// 
    /// // use the extracted text
    /// extractedText = File.ReadAllText(outFile, Encoding.Unicode); 
    /// </code> 
    /// </example>
    System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> get_ExtractionOptions();
    /// <summary>
    /// Sets text extraction options.
    /// </summary>
    /// <example>
    /// The example demonstrates how to extracted text in raw order.
    /// <code lang="C#"> 
    /// Document doc = new Document(inFile);
    /// string extractedText;
    /// 
    /// // create text device
    /// TextDevice device = new TextDevice(new TextExtractionOptions(TextExtractionOptions.TextFormattingMode.Raw));
    /// 
    /// // convert the page and save text to the stream
    /// device.Process(doc.Pages[1], outFile);
    /// 
    /// // use the extracted text
    /// extractedText = File.ReadAllText(outFile, Encoding.Unicode); 
    /// </code> 
    /// </example>
    void set_ExtractionOptions(System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> value);
    /// <summary>
    /// Gets encoding of extracted text.
    /// </summary>
    /// <example>
    /// The example demonstrates how to represent extracted text in UTF-8 encoding.
    /// <code lang="C#"> 
    /// Document doc = new Document(inFile);
    /// string extractedText;
    /// 
    /// // create text device
    /// TextDevice device = new TextDevice(Encoding.UTF8);
    /// 
    /// // convert the page and save text to the stream
    /// device.Process(doc.Pages[1], outFile);
    /// 
    /// // use the extracted text
    /// extractedText = File.ReadAllText(outFile, Encoding.UTF8);
    /// </code> 
    /// </example>
    System::SharedPtr<System::Text::Encoding> get_Encoding();
    /// <summary>
    /// Sets encoding of extracted text.
    /// </summary>
    /// <example>
    /// The example demonstrates how to represent extracted text in UTF-8 encoding.
    /// <code lang="C#"> 
    /// Document doc = new Document(inFile);
    /// string extractedText;
    /// 
    /// // create text device
    /// TextDevice device = new TextDevice(Encoding.UTF8);
    /// 
    /// // convert the page and save text to the stream
    /// device.Process(doc.Pages[1], outFile);
    /// 
    /// // use the extracted text
    /// extractedText = File.ReadAllText(outFile, Encoding.UTF8);
    /// </code> 
    /// </example>
    void set_Encoding(System::SharedPtr<System::Text::Encoding> value);
    
    /// <summary>
    /// Convert page and save it as text stream.
    /// </summary>
    /// <example>
    /// The example demonstrates how to extract text on the first PDF document page.
    /// <code lang="C#"> 
    /// Document doc = new Document(inFile);
    /// string extractedText;
    /// 
    /// using (MemoryStream ms = new MemoryStream())
    /// {
    ///     // create text device
    ///     TextDevice device = new TextDevice();
    /// 
    ///     // convert the page and save text to the stream
    ///     device.Process(doc.Pages[1], ms);
    /// 
    ///     // use the extracted text
    ///     ms.Close();
    ///     extractedText = Encoding.Unicode.GetString(ms.ToArray());
    /// }
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
    TextDevice(System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> extractionOptions);
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
    TextDevice(System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> extractionOptions, System::SharedPtr<System::Text::Encoding> encoding);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> extractionOptions;
    System::SharedPtr<System::Text::Encoding> encoding;
    
    void Initialize(System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> extractionOptions, System::SharedPtr<System::Text::Encoding> encoding);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


