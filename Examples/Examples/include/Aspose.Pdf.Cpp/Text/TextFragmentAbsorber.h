#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/dictionary.h>
#include <system/array.h>

#include "Text/TextAbsorber.h"

namespace Aspose { namespace Pdf { namespace Text { class TextFragmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextEditOptions; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSearchOptions; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextReplaceOptions; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextExtractionError; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextExtractionOptions; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenterSearchResult; } } } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace Text { class OnSegmentChangedEventArgs; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of text fragments.
/// Performs text search and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"/> collection.
/// </summary>
/// <remarks>
/// The <see cref="TextFragmentAbsorber"/> object is basically used in text search scenario.
/// When the search is completed the occurrences are represented with <see cref="TextFragment"/> objects that the <see cref="TextFragmentAbsorber::TextFragments"/> collection contains.
/// The <see cref="TextFragment"/> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
/// </remarks>
/// <example>
/// The example demonstrates how to find text on the first PDF document page and replace the text and it's font.
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// 
/// // Find font that will be used to change document text font
/// Aspose.Pdf.Txt.Font font = FontRepository.FindFont("Arial");
/// 
/// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
/// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
/// 
/// // Accept the absorber for first page
/// doc.Pages[1].Accept(absorber);
/// 
/// // Change text and font of the first text occurrence
/// absorber.TextFragments[1].Text = "hi world";
/// absorber.TextFragments[1].TextState.Font = font;
/// 
/// // Save document
/// doc.Save(@"D:\Tests\output.pdf");  
/// </code> 
/// </example>
class ASPOSE_PDF_SHARED_API TextFragmentAbsorber FINAL : public Aspose::Pdf::Text::TextAbsorber
{
    typedef TextFragmentAbsorber ThisType;
    typedef Aspose::Pdf::Text::TextAbsorber BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets collection of search occurrences that are presented with <see cref="TextFragment"/> objects.
    /// </summary>
    /// <example>
    /// The example demonstrates how to find text on the first PDF document page and replace all search occurrences with new text.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Find font that will be used to change document text font
    /// Aspose.Pdf.Txt.Font font = FontRepository.FindFont("Arial");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change text of all search occurrences
    /// foreach (TextFragment textFragment in absorber.TextFragments)
    /// {
    ///     textFragment.Text = "hi world";
    /// }
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    /// </code>
    /// </example>
    System::SharedPtr<TextFragmentCollection> get_TextFragments();
    /// <summary>
    /// Gets collection of search occurrences that are presented with <see cref="TextFragment"/> objects.
    /// </summary>
    /// <example>
    /// The example demonstrates how to find text on the first PDF document page and replace all search occurrences with new text.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Find font that will be used to change document text font
    /// Aspose.Pdf.Txt.Font font = FontRepository.FindFont("Arial");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change text of all search occurrences
    /// foreach (TextFragment textFragment in absorber.TextFragments)
    /// {
    ///     textFragment.Text = "hi world";
    /// }
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    /// </code>
    /// </example>
    void set_TextFragments(System::SharedPtr<TextFragmentCollection> value);
    /// <summary>
    /// Gets or sets phrase that the <see cref="TextFragmentAbsorber"/> searches on the PDF document or page.
    /// </summary>
    /// <example>
    /// The example demonstrates how to perform search text several times and perform text replacements.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello");
    /// 
    /// doc.Pages[1].Accept(absorber);
    /// absorber.TextFragments[1].Text = "Hi";
    /// 
    /// // search another word and replace it
    /// absorber.Phrase = "world";
    /// 
    /// doc.Pages[1].Accept(absorber);
    /// absorber.TextFragments[1].Text = "John";
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    /// </code>
    /// </example>
    System::String get_Phrase();
    /// <summary>
    /// Gets or sets phrase that the <see cref="TextFragmentAbsorber"/> searches on the PDF document or page.
    /// </summary>
    /// <example>
    /// The example demonstrates how to perform search text several times and perform text replacements.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello");
    /// 
    /// doc.Pages[1].Accept(absorber);
    /// absorber.TextFragments[1].Text = "Hi";
    /// 
    /// // search another word and replace it
    /// absorber.Phrase = "world";
    /// 
    /// doc.Pages[1].Accept(absorber);
    /// absorber.TextFragments[1].Text = "John";
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    /// </code>
    /// </example>
    void set_Phrase(System::String value);
    /// <summary>
    /// Gets or sets search options. The options enable search using regular expressions.
    /// </summary>
    /// <example>
    /// The example demonstrates how to perform search text using regular expression.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber();
    /// 
    /// // make the absorber to search all words starting 'h' and ending 'o' using regular expression.
    /// absorber.Phrase = @"h\w*?o";
    /// absorber.TextSearchOptions = new TextSearchOptions(true);
    /// 
    /// // we should find "hello" word and replace it with "Hi"
    /// doc.Pages[1].Accept(absorber);
    /// absorber.TextFragments[1].Text = "Hi"; 
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
    /// </code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> get_TextSearchOptions();
    /// <summary>
    /// Gets or sets search options. The options enable search using regular expressions.
    /// </summary>
    /// <example>
    /// The example demonstrates how to perform search text using regular expression.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber();
    /// 
    /// // make the absorber to search all words starting 'h' and ending 'o' using regular expression.
    /// absorber.Phrase = @"h\w*?o";
    /// absorber.TextSearchOptions = new TextSearchOptions(true);
    /// 
    /// // we should find "hello" word and replace it with "Hi"
    /// doc.Pages[1].Accept(absorber);
    /// absorber.TextFragments[1].Text = "Hi"; 
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
    /// </code>
    /// </example>
    void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> value);
    /// <summary>
    /// Gets or sets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> get_TextEditOptions();
    /// <summary>
    /// Gets or sets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> value);
    /// <summary>
    /// Gets or sets text replace options. The options define behavior when text fragment is replaced to more short.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> get_TextReplaceOptions();
    /// <summary>
    /// Gets or sets text replace options. The options define behavior when text fragment is replaced to more short.
    /// </summary>
    void set_TextReplaceOptions(System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> value);
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
    /// Gets extracted text that the <see cref="TextAbsorber"/> extracts on the PDF document or page.
    /// </summary>
    virtual System::String get_Text();
    /// <summary>
    /// Gets or sets text extraction options.
    /// </summary>
    virtual System::SharedPtr<TextExtractionOptions> get_ExtractionOptions();
    /// <summary>
    /// Gets or sets text extraction options.
    /// </summary>
    virtual void set_ExtractionOptions(System::SharedPtr<TextExtractionOptions> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> that performs search of all text segments of the document or page.
    /// </summary>
    /// <remarks>
    /// Performs text search and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"/> collection. 
    /// </remarks>
    /// <example>
    /// The example demonstrates how to find text on the first PDF document page and replace the text.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Find font that will be used to change document text font
    /// Aspose.Pdf.Txt.Font font = FontRepository.FindFont("Arial");
    /// 
    /// // Create TextFragmentAbsorber object
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber();
    /// 
    /// // Make the absorber to search all "hello world" text occurrences
    /// absorber.Phrase = "hello world";
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change text of the first text occurrence
    /// absorber.TextFragments[1].Text = "hi world";
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    /// </code> 
    /// </example>
    TextFragmentAbsorber();
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> with text edit options, that performs search of all text segments of the document or page.  
    /// </summary>
    /// <remarks>
    /// Performs text search and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"/> collection. 
    /// </remarks>
    /// 
    /// <example>
    /// The example demonstrates how to find all text fragments on the first PDF document page and replace font for them.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber(new TextEditOptions(TextEditOptions.FontReplace.RemoveUnusedFonts));
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Find Courier font
    /// Pdf.Text.Font font = FontRepository.FindFont("Courier");
    /// 
    /// // Set the font for all the text fragments
    /// foreach (TextFragment textFragment in absorber.TextFragments)
    /// {
    ///     textFragment.TextState.Font = font;
    /// }
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");
    /// </code> 
    /// </example>
    /// <param name="textEditOptions">Text edit options (Allows to turn on some edit features).</param>
    TextFragmentAbsorber(System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> class for the specified text phrase.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"/> collection.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to find text on the first PDF document page and replace the text and it's font.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Find font that will be used to change document text font
    /// Aspose.Pdf.Txt.Font font = FontRepository.FindFont("Arial");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change text and font of the first text occurrence
    /// absorber.TextFragments[1].Text = "hi world";
    /// absorber.TextFragments[1].TextState.Font = font;
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    /// </code> 
    /// </example>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"/> searches</param>
    TextFragmentAbsorber(System::String phrase);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> class for the specified text phrase and text search options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"/> collection.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to find text with regular expression on the first PDF document page and replace the text.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object that searches all words starting 'h' and ending 'o' using regular expression.
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber(@"h\w*?o", new TextSearchOptions(true));
    /// 
    /// // we should find "hello" word and replace it with "Hi"
    /// doc.Pages[1].Accept(absorber);
    /// absorber.TextFragments[1].Text = "Hi"; 
    ///  
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    /// </code> 
    /// </example>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"/> searches</param>
    /// <param name="textSearchOptions">Text search options (Allows to turn on some search features. For example, search with regular expression)</param>
    TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> class for the specified text phrase, text search options and text edit options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"/> collection.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to find text with regular expression on the first PDF document page and replace the text.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object that searches all words starting 'h' and ending 'o' using regular expression.
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber(@"h\w*?o", new TextSearchOptions(true));
    /// 
    /// // we should find "hello" word and replace it with "Hi"
    /// doc.Pages[1].Accept(absorber);
    /// absorber.TextFragments[1].Text = "Hi"; 
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    /// </code> 
    /// </example>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"/> searches</param>
    /// <param name="textSearchOptions">Text search options (Allows to turn on some search features. For example, search with regular expression)</param>
    /// <param name="textEditOptions">Text edit options (Allows to turn on some edit features).</param>
    TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> class for the specified text phrase and text edit options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"/> collection.
    /// </remarks>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"/> searches</param>
    /// <param name="textEditOptions">Text edit options (Allows to turn on some edit features).</param>
    TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    
    /// <summary>
    /// Performs search on the specified page.
    /// </summary>
    /// <example>
    /// The example demonstrates how to find text on the first PDF document page and replace the text.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Find font that will be used to change document text font
    /// Aspose.Pdf.Txt.Font font = FontRepository.FindFont("Arial");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// absorber.Visit(doc.Pages[1]);
    /// 
    /// // Change text of all search occurrences
    /// foreach (TextFragment textFragment in absorber.TextFragments)
    /// {
    ///     textFragment.Text = "hi world";
    /// }
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    /// </code> 
    /// </example>
    /// <param name="page">PDF document page object.</param>
    virtual void Visit(System::SharedPtr<Page> page);
    /// <summary>
    /// Performs search on the specified document.
    /// </summary>
    /// <example>
    /// The example demonstrates how to find text on PDF document and replace text of all search occurrences.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Find font that will be used to change document text font
    /// Aspose.Pdf.Txt.Font font = FontRepository.FindFont("Arial");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// absorber.Visit(doc);
    /// 
    /// // Change text of the first text occurrence
    /// absorber.TextFragments[1].Text = "hi world";
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    /// </code> 
    /// </example>
    /// <param name="pdf">PDF document object.</param>
    virtual void Visit(System::SharedPtr<Document> pdf);
    /// <summary>
    /// Applies font for all text fragments that were absorbed. It works faster than looping through the fragments if all fragments on the page(s) were absorbed. Otherwise it works similar with looping.
    /// </summary>
    /// <param name="font"><see cref="Font"/>of the text.</param>
    void ApplyForAllFragments(System::SharedPtr<Font> font);
    /// <summary>
    /// Applies font size for all text fragments that were absorbed. It works faster than looping through the fragments if all fragments on the page(s) were absorbed. Otherwise it works similar with looping.
    /// </summary>
    /// <param name="fontSize">Font size of the text.</param>
    void ApplyForAllFragments(float fontSize);
    /// <summary>
    /// Applies font and size for all text fragments that were absorbed. It works faster than looping through the fragments if all fragments on the page(s) were absorbed. Otherwise it works similar with looping.
    /// </summary>
    /// <param name="font"><see cref="Font"/>of the text.</param>
    /// <param name="fontSize">Font size of the text.</param>
    void ApplyForAllFragments(System::SharedPtr<Font> font, float fontSize);
    /// <summary>
    /// Clears TextFragments collection of this <see cref="TextFragmentAbsorber"/> object.
    /// </summary>
    void Reset();
    /// <summary>
    /// Removes all text from the specified page.
    /// </summary>
    /// <param name="page">PDF document page object.</param>
    void RemoveAllText(System::SharedPtr<Page> page);
    /// <summary>
    /// Removes text inside the specified rectangle from the specified page.
    /// </summary>
    /// <param name="page">PDF document page object.</param>
    /// <param name="rect"><see cref="Rectangle"/> to remove text inside.</param>
    void RemoveAllText(System::SharedPtr<Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Removes all text from the document.
    /// </summary>
    /// <param name="document">PDF document object.</param>
    void RemoveAllText(System::SharedPtr<Document> document);
    /// <summary>
    /// Performs search on the specified form object.
    /// </summary>
    /// <param name="xForm">Pdf form object.</param>
    void Visit(System::SharedPtr<XForm> xForm);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String phrase;
    System::SharedPtr<TextFragmentCollection> selected;
    System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> textTextReplaceOptions;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<int32_t>>>>>> processedObjects;
    bool _isCollectionChangedFromLastGettingText;
    bool _hasErrors;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextExtractionError>>> _errors;
    
    void Init(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    void AddPhysicalSegmentsAsFragments(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult>> searchResults);
    void AddPhysicalSegments(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult>> searchResults);
    static void RemoveEndLineMarkers(System::String& inLine);
    void OnSegmentChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<OnSegmentChangedEventArgs> args);
    /// <summary>
    /// Register event handler for segments those are reference on single physical text segment
    /// </summary>
    void RegisterEventHandlerForSeveralOccurences();
    /// <summary>
    /// Register event handler for segments that contains desired text
    /// </summary>
    void RegisterEventHandlerForAllSegmentsFound();
    /// <summary>
    /// Returns true if SearchResult is originated from XForm and duplicates one of the processed.
    /// The difference from RemoveAlreadyProcessedSegmentsFrom() method is that this one for processing search results containing only several segments.
    /// </summary>
    bool IsAlreadyProcessed(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult> searchResult);
    /// <summary>
    /// Removes from the search result segments that are originated from XForm and duplicates one of the processed.
    /// The difference from IsAlreadyProcessed() method is that this one for processing search results containing multitude of segments.
    /// </summary>
    void RemoveAlreadyProcessedSegmentsFrom(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult> searchResult);
    System::String GetShape(System::String input);
    void FixSegmentsOrderInResults(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult>> searchResults);
    void CheckSegmentsOrderInResult(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult> result);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


