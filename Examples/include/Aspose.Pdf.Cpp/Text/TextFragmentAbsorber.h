#ifndef _Aspose_Pdf_Text_TextFragmentAbsorber_h_
#define _Aspose_Pdf_Text_TextFragmentAbsorber_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// // Find font that will be used to change document text font
/// Aspose.Pdf.Txt.Font font = FontRepository.FindFont("Arial");
/// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
/// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
/// // Accept the absorber for first page
/// doc.Pages[1].Accept(absorber);
/// // Change text and font of the first text occurrence
/// absorber.TextFragments[1].Text = "hi world";
/// absorber.TextFragments[1].TextState.Font = font;
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

    System::SharedPtr<TextFragmentCollection> get_TextFragments();
    void set_TextFragments(System::SharedPtr<TextFragmentCollection> value);
    System::String get_Phrase();
    void set_Phrase(System::String value);
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> get_TextSearchOptions();
    void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> value);
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> get_TextEditOptions();
    void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> value);
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextReplaceOptions> get_TextReplaceOptions();
    void set_TextReplaceOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextReplaceOptions> value);
    virtual System::SharedPtr<TextOptions::TextExtractionOptions> get_ExtractionOptions();
    virtual void set_ExtractionOptions(System::SharedPtr<TextOptions::TextExtractionOptions> value);
    
    TextFragmentAbsorber();
    TextFragmentAbsorber(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions);
    TextFragmentAbsorber(System::String phrase);
    TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions);
    TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions);
    TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions);
    
    virtual void Visit(System::SharedPtr<Page> page);
    virtual void Visit(System::SharedPtr<Document> pdf);
    void Visit(System::SharedPtr<XForm> xForm);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextFragmentAbsorber"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    void RegisterEventHandlerForSeveralOccurences();
    void RegisterEventHandlerForAllSegmentsFound();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextFragmentAbsorber_h_

