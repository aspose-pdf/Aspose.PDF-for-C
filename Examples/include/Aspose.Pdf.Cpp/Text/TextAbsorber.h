#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/text/string_builder.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextExtractionOptions; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSearchOptions; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextExtractionError; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of a text.
/// Performs text extraction and provides access to the result via <see cref="TextAbsorber::Text"/> object.
/// </summary>
/// <remarks>
/// The <see cref="TextAbsorber"/> object is used to extract text from a Pdf document or the document's page. 
/// </remarks>
/// <example>
/// The example demonstrates how to extract text on the first PDF document page.
/// <code lang="C#"> 
/// // open document
/// Document doc = new Document(inFile);
/// 
/// // create TextAbsorber object to extract text
/// TextAbsorber absorber = new TextAbsorber();
/// 
/// // accept the absorber for first page
/// doc.Pages[1].Accept(absorber);
/// 
/// // get the extracted text
/// string extractedText = absorber.Text;
/// 
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
    /// <code lang="C#"> 
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // create TextAbsorber object to extract text
    /// TextAbsorber absorber = new TextAbsorber();
    /// 
    /// // accept the absorber for all document's pages
    /// doc.Pages.Accept(absorber);
    /// 
    /// // get the extracted text
    /// string extractedText = absorber.Text;
    /// 
    /// </code> 
    /// </example>
    virtual System::String get_Text();
    /// <summary>
    /// Value indicates whether errors were found during text extraction.
    /// Searching for errors will performed only if TextSearchOptions.LogTextExtractionErrors = true; And it may decrease performance.
    /// </summary>
    bool get_HasErrors();
    /// <summary>
    /// List of <see cref="TextExtractionError"/> objects. It contain information about errors were found during text extraction.
    /// Searching for errors will performed only if TextSearchOptions.LogTextExtractionErrors = true; And it may decrease performance.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextExtractionError>>> get_Errors();
    /// <summary>
    /// Gets text extraction options.
    /// </summary>
    /// <remarks>
    /// Allows to define text formatting mode <see cref="TextExtractionOptions"/> during extraction.
    /// The default mode is <see cref="TextExtractionOptions::TextFormattingMode::Pure"/>
    /// </remarks>
    /// <example>
    /// The example demonstrates how to set Pure text formatting mode and perform text extraction.
    /// <code lang="C#"> 
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // create TextAbsorber object to extract text with formatting
    /// TextAbsorber absorber = new TextAbsorber();
    /// 
    /// // set pure text formatting mode
    /// absorber.ExtractionOptions = new TextExtractionOptions(TextExtractionOptions.TextFormattingMode.Pure);
    /// 
    /// // accept the absorber for all document's pages
    /// doc.Pages.Accept(absorber);
    /// 
    /// // get the extracted text
    /// string extractedText = absorber.Text;
    /// </code> 
    /// </example>
    virtual System::SharedPtr<TextExtractionOptions> get_ExtractionOptions();
    /// <summary>
    /// Sets text extraction options.
    /// </summary>
    /// <remarks>
    /// Allows to define text formatting mode <see cref="TextExtractionOptions"/> during extraction.
    /// The default mode is <see cref="TextExtractionOptions::TextFormattingMode::Pure"/>
    /// </remarks>
    /// <example>
    /// The example demonstrates how to set Pure text formatting mode and perform text extraction.
    /// <code lang="C#"> 
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // create TextAbsorber object to extract text with formatting
    /// TextAbsorber absorber = new TextAbsorber();
    /// 
    /// // set pure text formatting mode
    /// absorber.ExtractionOptions = new TextExtractionOptions(TextExtractionOptions.TextFormattingMode.Pure);
    /// 
    /// // accept the absorber for all document's pages
    /// doc.Pages.Accept(absorber);
    /// 
    /// // get the extracted text
    /// string extractedText = absorber.Text;
    /// </code> 
    /// </example>
    virtual void set_ExtractionOptions(System::SharedPtr<TextExtractionOptions> value);
    /// <summary>
    /// Gets text search options.
    /// </summary>
    /// <remarks>
    /// Allows to define rectangle which delimits the extracted text.
    /// By default the rectangle is empty. That means page boundaries only defines the text extraction region.
    /// </remarks>
    virtual System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> get_TextSearchOptions();
    /// <summary>
    /// Sets text search options.
    /// </summary>
    /// <remarks>
    /// Allows to define rectangle which delimits the extracted text.
    /// By default the rectangle is empty. That means page boundaries only defines the text extraction region.
    /// </remarks>
    virtual void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> value);
    
    /// <summary>
    /// Extracts text on the specified page
    /// </summary>
    /// <example>
    /// The example demonstrates how to extract text on the first PDF document page.
    /// <code lang="C#"> 
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // create TextAbsorber object to extract text
    /// TextAbsorber absorber = new TextAbsorber();
    /// 
    /// // accept the absorber for all document's pages
    /// absorber.Visit(doc.Pages[1]);
    /// 
    /// // get the extracted text
    /// string extractedText = absorber.Text;
    /// </code> 
    /// </example>
    /// <param name="page">Pdf pocument page object.</param>
    virtual void Visit(System::SharedPtr<Page> page);
    /// <summary>
    /// Extracts text on the specified XForm.
    /// </summary>
    /// <example>
    /// The example demonstrates how to extract text on the first PDF document page.
    /// <code lang="C#"> 
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // create TextAbsorber object to extract text
    /// TextAbsorber absorber = new TextAbsorber();
    /// 
    /// // accept the absorber for all document's pages
    /// absorber.Visit(doc.Pages[1].Resources.Forms["Xform1"]);
    /// 
    /// // get the extracted text
    /// string extractedText = absorber.Text;
    /// </code> 
    /// </example>
    /// <param name="form">Pdf form object.</param>
    virtual void Visit(System::SharedPtr<XForm> form);
    /// <summary>
    /// Extracts text on the specified document
    /// </summary>
    /// <example>
    /// The example demonstrates how to extract text on PDF document.
    /// <code lang="C#"> 
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // create TextAbsorber object to extract text
    /// TextAbsorber absorber = new TextAbsorber();
    /// 
    /// // accept the absorber for all document's pages
    /// absorber.Visit(doc);
    /// 
    /// // get the extracted text
    /// string extractedText = absorber.Text;
    /// </code> 
    /// </example>
    /// <param name="pdf">Pdf pocument object.</param>
    virtual void Visit(System::SharedPtr<Document> pdf);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"/>.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber::Text"/> object.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to extract text from all pages of the PDF document.
    /// <code lang="C#"> 
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // create TextAbsorber object to extract text
    /// TextAbsorber absorber = new TextAbsorber();
    /// 
    /// // accept the absorber for all document's pages
    /// doc.Pages.Accept(absorber);
    /// 
    /// // get the extracted text
    /// string extractedText = absorber.Text;
    /// 
    /// </code> 
    /// </example>
    TextAbsorber();
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"/> with extraction options.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber::Text"/> object.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to extract text from all pages of the PDF document.
    /// <code lang="C#"> 
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // create TextAbsorber object to extract text with formatting
    /// TextAbsorber absorber = new TextAbsorber(new TextExtractionOptions(TextExtractionOptions.TextFormattingMode.Pure));
    /// 
    /// // accept the absorber for all document's pages
    /// doc.Pages.Accept(absorber);
    /// 
    /// // get the extracted text
    /// string extractedText = absorber.Text;
    /// 
    /// </code> 
    /// </example>
    /// <param name="extractionOptions">Text extraction options</param>
    TextAbsorber(System::SharedPtr<TextExtractionOptions> extractionOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"/> with extraction and text search options.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber::Text"/> object.
    /// </remarks>
    /// <param name="extractionOptions">Text extraction options</param>
    /// <param name="textSearchOptions">Text search options</param>
    TextAbsorber(System::SharedPtr<TextExtractionOptions> extractionOptions, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"/> with text search options.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber::Text"/> object.
    /// </remarks>
    /// <param name="textSearchOptions">Text search options</param>
    TextAbsorber(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions);
    
protected:

    System::SharedPtr<System::Text::StringBuilder> extractedText;
    
    System::String GetTotalText(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, bool isFormatted);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static const int32_t EvaluationCharsCount;
    System::SharedPtr<TextExtractionOptions> extractionOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions;
    bool _hasErrors;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextExtractionError>>> _errors;
    
    void Init();
    System::String GetExtractedText(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, bool isFormatted);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


