#ifndef _Aspose_Pdf_Text_TextAbsorber_h_
#define _Aspose_Pdf_Text_TextAbsorber_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/text/string_builder.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextExtractionOptions; } } } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextSearchOptions; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of a text.
/// Performs text extraction and provides access to the result via <see cref="TextAbsorber.Text"/> object.
/// </summary>
/// <remarks>
/// The <see cref="TextAbsorber"/> object is used to extract text from a Pdf document or the document's page. 
/// </remarks>
/// <example>
/// The example demonstrates how to extract text on the first PDF document page.
/// 
/// <code>
/// // open document
/// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
/// // create TextAbsorber object to extract text
/// System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextAbsorber>();
/// // accept the absorber for first page
/// doc->get_Pages()->idx_get(1)->Accept(absorber);
/// // get the extracted text
/// System::String extractedText = absorber->get_Text();
/// </code> 
/// </example>
class ASPOSE_PDF_SHARED_API TextAbsorber : public System::Object
{
    typedef TextAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets extracted text that the <see cref="TextAbsorber"/> extracts on the PDF document or page.
    /// </summary>
    /// <example>
    /// The example demonstrates how to extract text from all pages of the PDF document.
    /// 
    /// <code>
    /// // open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// // create TextAbsorber object to extract text
    /// System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextAbsorber>();
    /// // accept the absorber for all document's pages
    /// doc->get_Pages()->Accept(absorber);
    /// // get the extracted text
    /// System::String extractedText = absorber->get_Text();
    /// </code> 
    /// </example>
    System::String get_Text();
    /// <summary>
    /// Gets or sets text extraction options.
    /// </summary>
    /// <remarks>
    /// Allows to define text formatting mode <see cref="TextExtractionOptions"/> during extraction.
    /// The default mode is <see cref="TextExtractionOptions.TextFormattingMode.Pure"/>
    /// </remarks>
    /// <example>
    /// The example demonstrates how to set Pure text formatting mode and perform text extraction.
    /// 
    /// <code>
    /// // open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// // create TextAbsorber object to extract text with formatting
    /// System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextAbsorber>();
    /// // set pure text formatting mode
    /// absorber->set_ExtractionOptions(System::MakeObject<Aspose::Pdf::Text::TextOptions::TextExtractionOptions>(Aspose::Pdf::Text::TextOptions::TextExtractionOptions::TextFormattingMode::Pure));
    /// // accept the absorber for all document's pages
    /// doc->get_Pages()->Accept(absorber);
    /// // get the extracted text
    /// System::String extractedText = absorber->get_Text();
    /// </code> 
    /// </example>
    virtual System::SharedPtr<TextOptions::TextExtractionOptions> get_ExtractionOptions();
    /// <summary>
    /// Gets or sets text extraction options.
    /// </summary>
    /// <remarks>
    /// Allows to define text formatting mode <see cref="TextExtractionOptions"/> during extraction.
    /// The default mode is <see cref="TextExtractionOptions.TextFormattingMode.Pure"/>
    /// </remarks>
    /// <example>
    /// The example demonstrates how to set Pure text formatting mode and perform text extraction.
    /// 
    /// <code>
    /// // open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// // create TextAbsorber object to extract text with formatting
    /// System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextAbsorber>();
    /// // set pure text formatting mode
    /// absorber->set_ExtractionOptions(System::MakeObject<Aspose::Pdf::Text::TextOptions::TextExtractionOptions>(Aspose::Pdf::Text::TextOptions::TextExtractionOptions::TextFormattingMode::Pure));
    /// // accept the absorber for all document's pages
    /// doc->get_Pages()->Accept(absorber);
    /// // get the extracted text
    /// System::String extractedText = absorber->get_Text();
    /// </code> 
    /// </example>
    virtual void set_ExtractionOptions(System::SharedPtr<TextOptions::TextExtractionOptions> value);
    /// <summary>
    /// Gets or sets text search options.
    /// </summary>
    /// <remarks>
    /// Allows to define rectangle which delimits the extracted text.
    /// By default the rectangle is empty. That means page boundaries only defines the text extraction region.
    /// </remarks>
    virtual System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> get_TextSearchOptions();
    /// <summary>
    /// Gets or sets text search options.
    /// </summary>
    /// <remarks>
    /// Allows to define rectangle which delimits the extracted text.
    /// By default the rectangle is empty. That means page boundaries only defines the text extraction region.
    /// </remarks>
    virtual void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> value);
    
    /// <summary>
    /// Extracts text on the specified page
    /// </summary>
    /// <example>
    /// The example demonstrates how to extract text on the first PDF document page.
    /// 
    /// <code>
    /// // open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// // create TextAbsorber object to extract text
    /// System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextAbsorber>();
    /// // accept the absorber for all document's pages
    /// absorber->Visit(doc->get_Pages()->idx_get(1));
    /// // get the extracted text
    /// System::String extractedText = absorber->get_Text();
    /// </code> 
    /// </example>
    /// <param name="page">Pdf pocument page object.</param>
    virtual void Visit(System::SharedPtr<Page> page);
    /// <summary>
    /// Extracts text on the specified XForm.
    /// </summary>
    /// <example>
    /// The example demonstrates how to extract text on the first PDF document page.
    /// 
    /// <code>
    /// // open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// // create TextAbsorber object to extract text
    /// System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextAbsorber>();
    /// // accept the absorber for all document's pages
    /// absorber->Visit(doc->get_Pages()->idx_get(1)->get_Resources()->get_Forms()->idx_get(L"Xform1"));
    /// // get the extracted text
    /// System::String extractedText = absorber->get_Text();
    /// </code> 
    /// </example>
    /// <param name="form">Pdf form object.</param>
    virtual void Visit(System::SharedPtr<XForm> form);
    /// <summary>
    /// Extracts text on the specified document
    /// </summary>
    /// <example>
    /// The example demonstrates how to extract text on PDF document.
    /// 
    /// <code>
    /// // open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// // create TextAbsorber object to extract text
    /// System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextAbsorber>();
    /// // accept the absorber for all document's pages
    /// absorber->Visit(doc);
    /// // get the extracted text
    /// System::String extractedText = absorber->get_Text();
    /// </code> 
    /// </example>
    /// <param name="pdf">Pdf pocument object.</param>
    virtual void Visit(System::SharedPtr<Document> pdf);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"/>.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber.Text"/> object.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to extract text from all pages of the PDF document.
    /// 
    /// <code>
    /// // open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// // create TextAbsorber object to extract text
    /// System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextAbsorber>();
    /// // accept the absorber for all document's pages
    /// doc->get_Pages()->Accept(absorber);
    /// // get the extracted text
    /// System::String extractedText = absorber->get_Text();
    /// </code> 
    /// </example>
    TextAbsorber();
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"/> with extraction options.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber.Text"/> object.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to extract text from all pages of the PDF document.
    /// 
    /// <code>
    /// // open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// // create TextAbsorber object to extract text with formatting
    /// System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextAbsorber>(System::MakeObject<Aspose::Pdf::Text::TextOptions::TextExtractionOptions>(Aspose::Pdf::Text::TextOptions::TextExtractionOptions::TextFormattingMode::Pure));
    /// // accept the absorber for all document's pages
    /// doc->get_Pages()->Accept(absorber);
    /// // get the extracted text
    /// System::String extractedText = absorber->get_Text();
    /// </code> 
    /// </example>
    /// <param name="extractionOptions">Text extraction options</param>
    TextAbsorber(System::SharedPtr<TextOptions::TextExtractionOptions> extractionOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"/> with extraction and text search options.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber.Text"/> object.
    /// </remarks>
    /// <param name="extractionOptions">Text extraction options</param>
    /// <param name="textSearchOptions">Text search options</param>
    TextAbsorber(System::SharedPtr<TextOptions::TextExtractionOptions> extractionOptions, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"/> with text search options.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber.Text"/> object.
    /// </remarks>
    /// <param name="textSearchOptions">Text search options</param>
    TextAbsorber(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Text::StringBuilder> extractedText;
    static const int32_t EvaluationCharsCount;
    System::SharedPtr<TextOptions::TextExtractionOptions> extractionOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions;
    
    void Init();
    System::String GetTotalText(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, bool isFormatted);
    System::String GetExtractedText(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, bool isFormatted);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextAbsorber_h_

