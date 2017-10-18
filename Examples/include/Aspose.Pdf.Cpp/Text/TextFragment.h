#ifndef _Aspose_Pdf_Text_TextFragment_h_
#define _Aspose_Pdf_Text_TextFragment_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
/// <code lang="C#">
/// Document doc = new Document(docFile);
/// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
/// doc.Pages[1].Accept(absorber);
/// </code>
/// Phisycally pdf text's representation is very complex.
/// The text "hello world" may consist of several phisycally independent text segments.
/// The Aspose.Pdf text model basically establishes that <see cref="TextFragment"/> object
/// provides single logic operation set over physical <see cref="TextSegment"/> objects set that represent user's query.
/// In text search scenario, <see cref="TextFragment"/> is logical "hello world" text representation,
/// and <see cref="TextSegment"/> object collection represents all physical segments that construct "hello world" text object.
/// So, <see cref="TextFragment"/> is close to logical text representation.
/// And <see cref="TextSegment"/> is close to physical text representation.
/// Obviously each <see cref="TextSegment"/> object may have it's own font, coloring, positioning properties.
/// <see cref="TextFragment"/> provides simple way to change text with it's properties: set font, set font size, set font color etc.
/// Meanwhile <see cref="TextSegment"/> objects are accessible and users are able to operate with <see cref="TextSegment"/> objects independently.
/// Note that changing TextFragment properties may change inner <see cref="Segments"/> collection because TextFragment is an aggregate object 
/// and it may rearrange internal segments or merge them into single segment.
/// If your requirement is to leave the <see cref="Segments"/> collection unchanged, please change inner segments individually.
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

    System::String get_Text();
    void set_Text(System::String value);
    virtual Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    virtual void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    System::SharedPtr<TextFragmentState> get_TextState();
    System::SharedPtr<TextSegmentCollection> get_Segments();
    void set_Segments(System::SharedPtr<TextSegmentCollection> value);
    System::SharedPtr<Aspose::Pdf::Text::Position> get_Position();
    void set_Position(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    System::SharedPtr<Aspose::Pdf::Text::Position> get_BaselinePosition();
    void set_BaselinePosition(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    System::SharedPtr<XForm> get_Form();
    System::SharedPtr<NewParagraphPlacementInfo> get_PlacementInfo();
    void set_PlacementInfo(System::SharedPtr<NewParagraphPlacementInfo> value);
    System::SharedPtr<Note> get_EndNote();
    void set_EndNote(System::SharedPtr<Note> value);
    System::SharedPtr<Note> get_FootNote();
    void set_FootNote(System::SharedPtr<Note> value);
    
    TextFragment();
    TextFragment(System::String text);
    
protected:

    Aspose::Pdf::Text::TextState::AttachState get_AttachedState();
    void set_AttachedState(Aspose::Pdf::Text::TextState::AttachState value);
    System::SharedPtr<TextOptions::TextReplaceOptions> get_ReplaceOptions();
    void set_ReplaceOptions(System::SharedPtr<TextOptions::TextReplaceOptions> value);
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment_SegmentsGroupState> get_SegmentsGroupState();
    void set_SegmentsGroupState(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment_SegmentsGroupState> value);
    virtual Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    virtual void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    System::SharedPtr<TextFragmentCollection> get_Fragments();
    void set_Fragments(System::SharedPtr<TextFragmentCollection> value);
    
    System::EventHandler<System::SharedPtr<System::EventArgs>> OnRectChanged;
    
    void SetEncodedTextProperties(System::SharedPtr<Font> font, System::String text, System::ArrayPtr<int32_t> indices);
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter);
    void IsolateToSingleSegment();
    void IsolateToText();
    static System::SharedPtr<Aspose::Pdf::Rectangle> GetGroupRectangle(System::SharedPtr<TextSegmentCollection> segments, int32_t firstSegmentBeginIndex, int32_t lastSegmentEndIndex, bool measureLastTechnicalSpacings);
    System::SharedPtr<Aspose::Pdf::Rectangle> ComputeUnderlineRectangle();
    System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment>> GetAttachedPhysicalSegmentsArray(int32_t &firstSegmentIndex, int32_t &lastSegmentIndex);
    
    TextFragment(System::String text, System::SharedPtr<TextSegmentCollection> segments);
    TextFragment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, System::String text, System::SharedPtr<TextSegmentCollection> segments);
    
    void SyncVerticalAlignment(Aspose::Pdf::VerticalAlignment verticalAlignment);
    void SyncHorizontalAlignment(Aspose::Pdf::HorizontalAlignment horizontalAlignment1);
    void LightWeightTextSetter(System::String inText);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment>>> GetLineSegments(double x_indent, double y_indent);
    double GetHeight();
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextFragment"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    
    void InitializeDetachedFragment(System::String text);
    void InitializeAttachedFragment(System::String text, System::SharedPtr<TextSegmentCollection> segments);
    void OnSegmentAdded(System::SharedPtr<System::Object> sender, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs> args);
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

