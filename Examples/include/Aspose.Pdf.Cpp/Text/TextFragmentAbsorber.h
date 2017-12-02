#ifndef _Aspose_Pdf_Text_TextFragmentAbsorber_h_
#define _Aspose_Pdf_Text_TextFragmentAbsorber_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Text/TextAbsorber.h"

namespace Aspose { namespace Pdf { namespace Text { class TextFragmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextEditOptions; } } } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextSearchOptions; } } } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextReplaceOptions; } } } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextExtractionOptions; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter_SearchResult; } } } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace Text { class OnSegmentChangedEventArgs; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of text fragments.
/// Performs text search and provides access to search results via <see cref="TextFragmentAbsorber.TextFragments"/> collection.
/// </summary>
/// <remarks>
/// The <see cref="TextFragmentAbsorber"/> object is basically used in text search scenario.
/// When the search is completed the occurrences are represented with <see cref="TextFragment"/> objects that the <see cref="TextFragmentAbsorber.TextFragments"/> collection contains.
/// The <see cref="TextFragment"/> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
/// </remarks>
/// <example>
/// The example demonstrates how to find text on the first PDF document page and replace the text and it's font.
/// 
/// <code>
/// // Open document
/// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
/// // Find font that will be used to change document text font
/// System::SharedPtr<Aspose::Pdf::Text::Font> font = Aspose::Pdf::Text::FontRepository::FindFont(L"Arial");
/// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
/// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
/// // Accept the absorber for first page
/// doc->get_Pages()->idx_get(1)->Accept(absorber);
/// // Change text and font of the first text occurrence
/// absorber->get_TextFragments()->idx_get(1)->set_Text(L"hi world");
/// absorber->get_TextFragments()->idx_get(1)->get_TextState()->set_Font(font);
/// // Save document
/// doc->Save(L"D:\\Tests\\output.pdf");
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
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Find font that will be used to change document text font
    /// System::SharedPtr<Aspose::Pdf::Text::Font> font = Aspose::Pdf::Text::FontRepository::FindFont(L"Arial");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // Change text of all search occurrences
    /// auto textFragment_enumerator = (absorber->get_TextFragments())->GetEnumerator();
    /// decltype(textFragment_enumerator->get_Current()) textFragment;
    /// while (textFragment_enumerator->MoveNext() && (textFragment = textFragment_enumerator->get_Current(), true))
    /// {
    ///     textFragment->set_Text(L"hi world");
    /// }
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code>
    /// </example>
    System::SharedPtr<TextFragmentCollection> get_TextFragments();
    /// <summary>
    /// Gets collection of search occurrences that are presented with <see cref="TextFragment"/> objects.
    /// </summary>
    /// <example>
    /// The example demonstrates how to find text on the first PDF document page and replace all search occurrences with new text.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Find font that will be used to change document text font
    /// System::SharedPtr<Aspose::Pdf::Text::Font> font = Aspose::Pdf::Text::FontRepository::FindFont(L"Arial");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // Change text of all search occurrences
    /// auto textFragment_enumerator = (absorber->get_TextFragments())->GetEnumerator();
    /// decltype(textFragment_enumerator->get_Current()) textFragment;
    /// while (textFragment_enumerator->MoveNext() && (textFragment = textFragment_enumerator->get_Current(), true))
    /// {
    ///     textFragment->set_Text(L"hi world");
    /// }
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code>
    /// </example>
    void set_TextFragments(System::SharedPtr<TextFragmentCollection> value);
    /// <summary>
    /// Gets or sets phrase that the <see cref="TextFragmentAbsorber"/> searches on the PDF document or page.
    /// </summary>
    /// <example>
    /// The example demonstrates how to perform search text several times and perform text replacements.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object to find all "hello" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello");
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"Hi");
    /// // search another word and replace it
    /// absorber->set_Phrase(L"world");
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"John");
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code>
    /// </example>
    System::String get_Phrase();
    /// <summary>
    /// Gets or sets phrase that the <see cref="TextFragmentAbsorber"/> searches on the PDF document or page.
    /// </summary>
    /// <example>
    /// The example demonstrates how to perform search text several times and perform text replacements.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object to find all "hello" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello");
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"Hi");
    /// // search another word and replace it
    /// absorber->set_Phrase(L"world");
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"John");
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code>
    /// </example>
    void set_Phrase(System::String value);
    /// <summary>
    /// Gets or sets search options. The options enable search using regular expressions.
    /// </summary>
    /// <example>
    /// The example demonstrates how to perform search text using regular expression.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>();
    /// // make the absorber to search all words starting 'h' and ending 'o' using regular expression.
    /// absorber->set_Phrase(L"h\\w*?o");
    /// absorber->set_TextSearchOptions(System::MakeObject<Aspose::Pdf::Text::TextOptions::TextSearchOptions>(true));
    /// // we should find "hello" word and replace it with "Hi"
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"Hi");
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> get_TextSearchOptions();
    /// <summary>
    /// Gets or sets search options. The options enable search using regular expressions.
    /// </summary>
    /// <example>
    /// The example demonstrates how to perform search text using regular expression.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>();
    /// // make the absorber to search all words starting 'h' and ending 'o' using regular expression.
    /// absorber->set_Phrase(L"h\\w*?o");
    /// absorber->set_TextSearchOptions(System::MakeObject<Aspose::Pdf::Text::TextOptions::TextSearchOptions>(true));
    /// // we should find "hello" word and replace it with "Hi"
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"Hi");
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code>
    /// </example>
    void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> value);
    /// <summary>
    /// Gets or sets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> get_TextEditOptions();
    /// <summary>
    /// Gets or sets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> value);
    /// <summary>
    /// Gets or sets text replace options. The options define behavior when text fragment is replaced to more short.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextReplaceOptions> get_TextReplaceOptions();
    /// <summary>
    /// Gets or sets text replace options. The options define behavior when text fragment is replaced to more short.
    /// </summary>
    void set_TextReplaceOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextReplaceOptions> value);
    /// <summary>
    /// Gets or sets text extraction options.
    /// </summary>
    virtual System::SharedPtr<TextOptions::TextExtractionOptions> get_ExtractionOptions();
    /// <summary>
    /// Gets or sets text extraction options.
    /// </summary>
    virtual void set_ExtractionOptions(System::SharedPtr<TextOptions::TextExtractionOptions> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> that performs search of all text segments of the document or page.
    /// </summary>
    /// <remarks>
    /// Performs text search and provides access to search results via <see cref="TextFragmentAbsorber.TextFragments"/> collection. 
    /// </remarks>
    /// <example>
    /// The example demonstrates how to find text on the first PDF document page and replace the text.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Find font that will be used to change document text font
    /// System::SharedPtr<Aspose::Pdf::Text::Font> font = Aspose::Pdf::Text::FontRepository::FindFont(L"Arial");
    /// // Create TextFragmentAbsorber object
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>();
    /// // Make the absorber to search all "hello world" text occurrences
    /// absorber->set_Phrase(L"hello world");
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // Change text of the first text occurrence
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"hi world");
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code> 
    /// </example>
    TextFragmentAbsorber();
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> with text edit options, that performs search of all text segments of the document or page.  
    /// </summary>
    /// <remarks>
    /// Performs text search and provides access to search results via <see cref="TextFragmentAbsorber.TextFragments"/> collection. 
    /// </remarks>
    /// <example>
    /// The example demonstrates how to find all text fragments on the first PDF document page and replace font for them.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(System::MakeObject<Aspose::Pdf::Text::TextOptions::TextEditOptions>(Aspose::Pdf::Text::TextOptions::TextEditOptions::FontReplace::RemoveUnusedFonts));
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // Find Courier font
    /// System::SharedPtr<Pdf::Text::Font> font = Aspose::Pdf::Text::FontRepository::FindFont(L"Courier");
    /// // Set the font for all the text fragments
    /// auto textFragment_enumerator = (absorber->get_TextFragments())->GetEnumerator();
    /// decltype(textFragment_enumerator->get_Current()) textFragment;
    /// while (textFragment_enumerator->MoveNext() && (textFragment = textFragment_enumerator->get_Current(), true))
    /// {
    ///     textFragment->get_TextState()->set_Font(font);
    /// }
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code> 
    /// </example>
    /// <param name="textEditOptions">Text edit options (Allows to turn on some edit features).</param>
    TextFragmentAbsorber(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> class for the specified text phrase.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber.TextFragments"/> collection.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to find text on the first PDF document page and replace the text and it's font.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Find font that will be used to change document text font
    /// System::SharedPtr<Aspose::Pdf::Text::Font> font = Aspose::Pdf::Text::FontRepository::FindFont(L"Arial");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // Change text and font of the first text occurrence
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"hi world");
    /// absorber->get_TextFragments()->idx_get(1)->get_TextState()->set_Font(font);
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code> 
    /// </example>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"/> searches</param>
    TextFragmentAbsorber(System::String phrase);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> class for the specified text phrase and text search options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber.TextFragments"/> collection.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to find text with regular expression on the first PDF document page and replace the text.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object that seatches all words starting 'h' and ending 'o' using regular expression.
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"h\\w*?o", System::MakeObject<Aspose::Pdf::Text::TextOptions::TextSearchOptions>(true));
    /// // we should find "hello" word and replace it with "Hi"
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"Hi");
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code> 
    /// </example>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"/> searches</param>
    /// <param name="textSearchOptions">Text search options (Allows to turn on some search features. For example, search with regular expression)</param>
    TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> class for the specified text phrase, text search options and text edit options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber.TextFragments"/> collection.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to find text with regular expression on the first PDF document page and replace the text.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object that seatches all words starting 'h' and ending 'o' using regular expression.
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"h\\w*?o", System::MakeObject<Aspose::Pdf::Text::TextOptions::TextSearchOptions>(true));
    /// // we should find "hello" word and replace it with "Hi"
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"Hi");
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code> 
    /// </example>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"/> searches</param>
    /// <param name="textSearchOptions">Text search options (Allows to turn on some search features. For example, search with regular expression)</param>
    /// <param name="textEditOptions">Text edit options (Allows to turn on some edit features).</param>
    TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"/> class for the specified text phrase and text edit options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber.TextFragments"/> collection.
    /// </remarks>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"/> searches</param>
    /// <param name="textEditOptions">Text edit options (Allows to turn on some edit features).</param>
    TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions);
    
    /// <summary>
    /// Performs search on the specified page.
    /// </summary>
    /// <example>
    /// The example demonstrates how to find text on the first PDF document page and replace the text.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Find font that will be used to change document text font
    /// System::SharedPtr<Aspose::Pdf::Text::Font> font = Aspose::Pdf::Text::FontRepository::FindFont(L"Arial");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// absorber->Visit(doc->get_Pages()->idx_get(1));
    /// // Change text of all search occurrences
    /// auto textFragment_enumerator = (absorber->get_TextFragments())->GetEnumerator();
    /// decltype(textFragment_enumerator->get_Current()) textFragment;
    /// while (textFragment_enumerator->MoveNext() && (textFragment = textFragment_enumerator->get_Current(), true))
    /// {
    ///     textFragment->set_Text(L"hi world");
    /// }
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code> 
    /// </example>
    /// <param name="page">Pdf pocument page object.</param>
    virtual void Visit(System::SharedPtr<Page> page);
    /// <summary>
    /// Performs search on the specified document.
    /// </summary>
    /// <example>
    /// The example demonstrates how to find text on PDF document and replace text of all search occurrences.
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Find font that will be used to change document text font
    /// System::SharedPtr<Aspose::Pdf::Text::Font> font = Aspose::Pdf::Text::FontRepository::FindFont(L"Arial");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// absorber->Visit(doc);
    /// // Change text of the first text occurrence
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"hi world");
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code> 
    /// </example>
    /// <param name="pdf">Pdf pocument object.</param>
    virtual void Visit(System::SharedPtr<Document> pdf);
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
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextReplaceOptions> textTextReplaceOptions;
    
    void Init(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions);
    void AddPhysicalSegmentsAsFragments(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter_SearchResult>> physicalSegments);
    void AddPhysicalSegments(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter_SearchResult>> physicalSegments);
    void OnSegmentChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<OnSegmentChangedEventArgs> args);
    /// <summary>
    /// Register event handler for segments those are reference on single physical text segment
    /// </summary>
    void RegisterEventHandlerForSeveralOccurences();
    /// <summary>
    /// Register event handler for segments that contains desired text
    /// </summary>
    void RegisterEventHandlerForAllSegmentsFound();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextFragmentAbsorber_h_

