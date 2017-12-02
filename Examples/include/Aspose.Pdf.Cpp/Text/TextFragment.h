#ifndef _Aspose_Pdf_Text_TextFragment_h_
#define _Aspose_Pdf_Text_TextFragment_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/eventhandler.h>
#include <system/eventargs.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "Text/TextState_.h"
#include "Text/TextSegmentCollection.h"
#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { class Note; } }
namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextPostReplaceFixer; } } }
namespace Aspose { namespace Pdf { class Heading; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentState; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class NewParagraphPlacementInfo; } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextReplaceOptions; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment_SegmentsGroupState; } } } } } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { namespace Text { class Position; } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents fragment of Pdf text.
/// </summary>
/// <remarks>
/// In a few words, <see cref="TextFragment"/> object contains list of <see cref="TextSegment"/> objects.
/// In details:
/// Text of pdf document in <see cref="Aspose.Pdf"/> is represented by two basic objects: <see cref="TextFragment"/> and <see cref="TextSegment"/>
/// The differences between them is mostly context-dependent.
/// Let's consider following scenario. User searches text "hello world" to operate with it, change it's properties, look etc.
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
class ASPOSE_PDF_SHARED_API TextFragment : public Aspose::Pdf::BaseParagraph
{
    typedef TextFragment ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Note;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::ApsToPdfConverter;
    
public:

    /// <summary>
    /// Gets or sets <see cref="string"/> text object that the <see cref="TextFragment"/> object represents.
    /// </summary>
    /// <example>
    /// The example demonstrates how to search a text and replace first occurrence represented with <see cref="TextFragment"/> object .
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // Change font of the first text occurrence
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"hi world");
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    System::String get_Text();
    /// <summary>
    /// Gets or sets <see cref="string"/> text object that the <see cref="TextFragment"/> object represents.
    /// </summary>
    /// <example>
    /// The example demonstrates how to search a text and replace first occurrence represented with <see cref="TextFragment"/> object .
    /// 
    /// <code>
    /// // Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // Change font of the first text occurrence
    /// absorber->get_TextFragments()->idx_get(1)->set_Text(L"hi world");
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    void set_Text(System::String value);
    /// <summary>
    /// Gets or sets a horizontal alignment of text fragment. 
    /// </summary>
    virtual Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Gets or sets a horizontal alignment of text fragment. 
    /// </summary>
    virtual void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets or sets text state for the text that <see cref="TextFragment"/> object represents.
    /// </summary>
    /// <remarks>
    /// Provides a way to change following properties of the text:
    ///    Font
    ///    FontSize
    ///    FontStyle
    ///    ForegroundColor
    ///    BackgroundColor
    /// </remarks>
    /// <example>
    /// The example demonstrates how to change text color and font size of the text with <see cref="TextState"/> object.
    /// 
    ///	<code>
    ///	// Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // Change foreground color of the first text occurrence
    /// absorber->get_TextFragments()->idx_get(1)->get_TextState()->set_ForegroundColor(Color::FromRgb(System::Drawing::Color::get_Red()));
    /// // Change font size of the first text occurrence
    /// absorber->get_TextFragments()->idx_get(1)->get_TextState()->set_FontSize(15);
    /// // Save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    System::SharedPtr<TextFragmentState> get_TextState();
    /// <summary>
    /// Gets text segments for current <see cref="TextFragment"/>.
    /// </summary>
    /// <remarks>
    /// In a few words, <see cref="TextSegment"/> objects are children of <see cref="TextFragment"/> object.
    /// Advanced users may access segments directly to perform more complex text edit scenarios.
    /// For details, please look at <see cref="TextFragment"/> object description.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to navigate all <see cref="TextSegment"/> objects inside <see cref="TextFragment"/>.
    /// 
    ///	<code>
    ///	// Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // Navigate all text segments and out their text and placement info
    /// auto segment_enumerator = (absorber->get_TextFragments()->idx_get(1)->get_Segments())->GetEnumerator();
    /// decltype(segment_enumerator->get_Current()) segment;
    /// while (segment_enumerator->MoveNext() && (segment = segment_enumerator->get_Current(), true))
    /// {
    ///     System::Console::get_Out()->WriteLine(System::String::Format(L"segment text: {0}", segment->get_Text()));
    ///     System::Console::get_Out()->WriteLine(System::String::Format(L"segment X indent: {0}", segment->get_Position()->get_XIndent()));
    ///     System::Console::get_Out()->WriteLine(System::String::Format(L"segment Y indent: {0}", segment->get_Position()->get_YIndent()));
    /// }
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    /// <seealso cref="TextSegment"/> 
    System::SharedPtr<TextSegmentCollection> get_Segments();
    /// <summary>
    /// Gets text segments for current <see cref="TextFragment"/>.
    /// </summary>
    /// <remarks>
    /// In a few words, <see cref="TextSegment"/> objects are children of <see cref="TextFragment"/> object.
    /// Advanced users may access segments directly to perform more complex text edit scenarios.
    /// For details, please look at <see cref="TextFragment"/> object description.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to navigate all <see cref="TextSegment"/> objects inside <see cref="TextFragment"/>.
    /// 
    ///	<code>
    ///	// Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // Navigate all text segments and out their text and placement info
    /// auto segment_enumerator = (absorber->get_TextFragments()->idx_get(1)->get_Segments())->GetEnumerator();
    /// decltype(segment_enumerator->get_Current()) segment;
    /// while (segment_enumerator->MoveNext() && (segment = segment_enumerator->get_Current(), true))
    /// {
    ///     System::Console::get_Out()->WriteLine(System::String::Format(L"segment text: {0}", segment->get_Text()));
    ///     System::Console::get_Out()->WriteLine(System::String::Format(L"segment X indent: {0}", segment->get_Position()->get_XIndent()));
    ///     System::Console::get_Out()->WriteLine(System::String::Format(L"segment Y indent: {0}", segment->get_Position()->get_YIndent()));
    /// }
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    /// <seealso cref="TextSegment"/> 
    void set_Segments(System::SharedPtr<TextSegmentCollection> value);
    /// <summary>
    /// Gets or sets text position for text, represented with <see cref="TextFragment"/> object.
    /// </summary>
    /// <example>
    /// The example demonstrates how to view placement of a text, represented by <see cref="TextFragment"/> object.
    /// 
    ///	<code>
    ///	// Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // View text and placement info of first text occurrence
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragment> firstOccurrence = absorber->get_TextFragments()->idx_get(1);
    /// System::Console::get_Out()->WriteLine(System::String::Format(L"fragment text: {0}", firstOccurrence->get_Text()));
    /// System::Console::get_Out()->WriteLine(System::String::Format(L"fragment X indent: {0}", firstOccurrence->get_Position()->get_XIndent()));
    /// System::Console::get_Out()->WriteLine(System::String::Format(L"fragment Y indent: {0}", firstOccurrence->get_Position()->get_YIndent()));
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    /// <seealso cref="TextSegment"/> 
    System::SharedPtr<Aspose::Pdf::Text::Position> get_Position();
    /// <summary>
    /// Gets or sets text position for text, represented with <see cref="TextFragment"/> object.
    /// </summary>
    /// <example>
    /// The example demonstrates how to view placement of a text, represented by <see cref="TextFragment"/> object.
    /// 
    ///	<code>
    ///	// Open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // Accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // View text and placement info of first text occurrence
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragment> firstOccurrence = absorber->get_TextFragments()->idx_get(1);
    /// System::Console::get_Out()->WriteLine(System::String::Format(L"fragment text: {0}", firstOccurrence->get_Text()));
    /// System::Console::get_Out()->WriteLine(System::String::Format(L"fragment X indent: {0}", firstOccurrence->get_Position()->get_XIndent()));
    /// System::Console::get_Out()->WriteLine(System::String::Format(L"fragment Y indent: {0}", firstOccurrence->get_Position()->get_YIndent()));
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    /// <seealso cref="TextSegment"/> 
    void set_Position(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextFragment"/> object.
    /// The YIndent of the Position structure represents baseline coordinate of the text fragment.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::Position> get_BaselinePosition();
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextFragment"/> object.
    /// The YIndent of the Position structure represents baseline coordinate of the text fragment.
    /// </summary>
    void set_BaselinePosition(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    /// <summary>
    /// Gets rectangle of the TextFragment
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets page that contains the TextFragment
    /// </summary>
    /// <remarks>
    /// The value can be null in case the TextFragment object doesn't belong to any page.
    /// </remarks>
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    /// <summary>
    /// Gets form object that contains the TextFragment
    /// </summary>
    /// <remarks>
    /// The value can be null in case the TextFragment object doesn't belong to a form.
    /// </remarks>
    System::SharedPtr<XForm> get_Form();
    /// <summary>
    /// Gets or sets placement info
    /// </summary>
    System::SharedPtr<NewParagraphPlacementInfo> get_PlacementInfo();
    /// <summary>
    /// Gets or sets placement info
    /// </summary>
    void set_PlacementInfo(System::SharedPtr<NewParagraphPlacementInfo> value);
    /// <summary>
    /// Gets or sets the paragraph end note.(for pdf generation only)
    /// </summary>
    System::SharedPtr<Note> get_EndNote();
    /// <summary>
    /// Gets or sets the paragraph end note.(for pdf generation only)
    /// </summary>
    void set_EndNote(System::SharedPtr<Note> value);
    /// <summary>
    /// Gets or sets the paragraph foot note.(for pdf generation only)
    /// </summary>
    System::SharedPtr<Note> get_FootNote();
    /// <summary>
    /// Gets or sets the paragraph foot note.(for pdf generation only)
    /// </summary>
    void set_FootNote(System::SharedPtr<Note> value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextFragment"/> object.
    /// </summary>
    TextFragment();
    /// <summary>
    /// Creates <see cref="TextFragment"/> object with single <see cref="TextSegment"/> object inside. 
    /// Specifies text string inside the segment.
    /// </summary>
    /// <param name="text">Text fragment's text.</param>
    TextFragment(System::String text);
    
protected:

    Aspose::Pdf::Text::TextState::AttachState get_AttachedState();
    void set_AttachedState(Aspose::Pdf::Text::TextState::AttachState value);
    System::SharedPtr<TextOptions::TextReplaceOptions> get_ReplaceOptions();
    void set_ReplaceOptions(System::SharedPtr<TextOptions::TextReplaceOptions> value);
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment_SegmentsGroupState> get_SegmentsGroupState();
    void set_SegmentsGroupState(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment_SegmentsGroupState> value);
    /// <summary>
    /// Gets or sets a vertical alignment of text fragment. 
    /// </summary>
    virtual Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Gets or sets a vertical alignment of text fragment. 
    /// </summary>
    virtual void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// Gets or sets collection that contains current fragment
    /// </summary>
    System::SharedPtr<TextFragmentCollection> get_Fragments();
    /// <summary>
    /// Gets or sets collection that contains current fragment
    /// </summary>
    void set_Fragments(System::SharedPtr<TextFragmentCollection> value);
    
    System::EventHandler<System::SharedPtr<System::EventArgs>> OnRectChanged;
    
    /// <summary>
    /// Sets font and indices inside the font
    /// </summary>
    /// <param name="font">Font of the fragment.</param>
    /// <param name="text">Text value.</param>
    /// <param name="indices">Glyph indices inside the font.</param>
    void SetEncodedTextProperties(System::SharedPtr<Font> font, System::String text, System::ArrayPtr<int32_t> indices);
    /// <summary>
    /// Attaches to the segmenter
    /// </summary>
    /// <param name="segmenter"></param>
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter);
    /// <summary>
    /// Isolates segments to single segment for simpler editing.
    /// </summary>
    void IsolateToSingleSegment();
    /// <summary>
    /// Isolates segments to segment that represent the text only.
    /// i.e. we Trim from beginning and end
    /// </summary>
    void IsolateToText();
    static System::SharedPtr<Aspose::Pdf::Rectangle> GetGroupRectangle(System::SharedPtr<TextSegmentCollection> segments, int32_t firstSegmentBeginIndex, int32_t lastSegmentEndIndex, bool measureLastTechnicalSpacings);
    System::SharedPtr<Aspose::Pdf::Rectangle> ComputeUnderlineRectangle();
    System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment>> GetAttachedPhysicalSegmentsArray(int32_t& firstSegmentIndex, int32_t& lastSegmentIndex);
    
    TextFragment(System::String text, System::SharedPtr<TextSegmentCollection> segments);
    TextFragment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, System::String text, System::SharedPtr<TextSegmentCollection> segments);
    
    void SyncVerticalAlignment(Aspose::Pdf::VerticalAlignment verticalAlignment);
    void SyncHorizontalAlignment(Aspose::Pdf::HorizontalAlignment horizontalAlignment1);
    /// <summary>
    /// Set text with no adjustment.
    /// </summary>
    /// <param name="inText">String representing new text value.</param>
    void LightWeightTextSetter(System::String inText);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment>>> GetLineSegments(double x_indent, double y_indent);
    double GetHeight();
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String text;
    System::ArrayPtr<int32_t> indices;
    System::SharedPtr<TextFragmentState> textState;
    System::SharedPtr<TextSegmentCollection> segments;
    System::WeakPtr<TextFragmentCollection> fragments;
    Aspose::Pdf::Text::TextState::AttachState pr_AttachedState;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    System::SharedPtr<Aspose::Pdf::Rectangle> underlineRectangle;
    System::SharedPtr<Aspose::Pdf::Page> page;
    System::SharedPtr<XForm> form;
    System::SharedPtr<NewParagraphPlacementInfo> placementInfo;
    System::SharedPtr<Note> endNote;
    System::SharedPtr<Note> footNote;
    System::SharedPtr<TextOptions::TextReplaceOptions> pr_ReplaceOptions;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment_SegmentsGroupState> _segmentsGroupState;
    
    /// <summary>
    /// initializes the object
    /// </summary>
    /// <param name="text"></param>
    void InitializeDetachedFragment(System::String text);
    /// <summary>
    /// initielizes the object
    /// </summary>
    void InitializeAttachedFragment(System::String text, System::SharedPtr<TextSegmentCollection> segments);
    void OnSegmentAdded(System::SharedPtr<System::Object> sender, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs> args);
    /// <summary>
    /// Registers the text segment within the text fragment
    /// </summary>
    /// <param name="textSegment"></param>
    void RegisterSegment(System::SharedPtr<TextSegment> textSegment);
    void OnSegmentRemoved(System::SharedPtr<System::Object> sender, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs> args);
    void OnSegmentPositionChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> args);
    void OnSegmentTextChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> args);
    void UpdateTextWithSegments();
    void ReComputeRectangle();
    void ComputeRectangle();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextFragment_h_

