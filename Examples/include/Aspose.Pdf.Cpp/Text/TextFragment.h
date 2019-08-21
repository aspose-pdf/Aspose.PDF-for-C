#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/eventhandler.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "Text/TextState_.h"
#include "Text/TextSegmentCollection.h"
#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Line; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class SearchablePdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Text { class MarkupParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class MarkupSection; } } }
namespace Aspose { namespace Pdf { namespace Text { class PageMarkup; } } }
namespace Aspose { namespace Pdf { namespace Text { class TableAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextPostReplaceFixer; } } }
namespace Aspose { namespace Pdf { class Heading; } }
namespace Aspose { namespace Pdf { class Image; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class TextMarkupAnnotation; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Cells; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraphAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentState; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace PDFUA { class PDFUA_CreatingTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_1; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Note; } }
namespace Aspose { namespace Pdf { namespace Text { class TextReplaceOptions; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class SegmentsGroupState; } } } } } }
namespace Aspose { namespace Pdf { class Hyperlink; } }
namespace Aspose { namespace Pdf { namespace Text { class Position; } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Text { class TabStops; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }
namespace Aspose { namespace Pdf { namespace Text { class TabStop; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents fragment of Pdf text.
/// </summary>
/// <remarks>
/// In a few words, <see cref="TextFragment"/> object contains list of <see cref="TextSegment"/> objects.
/// 
/// In details:
/// Text of pdf document in <see cref="Aspose::Pdf"/> is represented by two basic objects: <see cref="TextFragment"/> and <see cref="TextSegment"/>
/// 
/// The differences between them is mostly context-dependent.
/// 
/// Let's consider following scenario. User searches text "hello world" to operate with it, change it's properties, look etc.
/// <code lang="C#">
/// Document doc = new Document(docFile);
/// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
/// doc.Pages[1].Accept(absorber);
/// </code>
/// Phisycally pdf text's representation is very complex.
/// The text "hello world" may consist of several phisycally independent text segments.
/// 
/// The Aspose.Pdf text model basically establishes that <see cref="TextFragment"/> object
/// provides single logic operation set over physical <see cref="TextSegment"/> objects set that represent user's query.
/// 
/// In text search scenario, <see cref="TextFragment"/> is logical "hello world" text representation,
/// and <see cref="TextSegment"/> object collection represents all physical segments that construct "hello world" text object.
/// 
/// So, <see cref="TextFragment"/> is close to logical text representation.
/// And <see cref="TextSegment"/> is close to physical text representation.
/// 
/// Obviously each <see cref="TextSegment"/> object may have it's own font, coloring, positioning properties.
/// 
/// <see cref="TextFragment"/> provides simple way to change text with it's properties: set font, set font size, set font color etc.
/// Meanwhile <see cref="TextSegment"/> objects are accessible and users are able to operate with <see cref="TextSegment"/> objects independently.
/// 
/// Note that changing TextFragment properties may change inner <see cref="Segments"/> collection because TextFragment is an aggregate object 
/// and it may rearrange internal segments or merge them into single segment.
/// If your requirement is to leave the <see cref="Segments"/> collection unchanged, please change inner segments individually.
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
class ASPOSE_PDF_SHARED_API TextFragment : public Aspose::Pdf::BaseParagraph
{
    typedef TextFragment ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Drawing::Line;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Text::MarkupParagraph;
    friend class Aspose::Pdf::Text::MarkupSection;
    friend class Aspose::Pdf::Text::PageMarkup;
    friend class Aspose::Pdf::Text::TableAbsorber;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::Image;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Annotations::TextMarkupAnnotation;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Cells;
    friend class Aspose::Pdf::Text::TextParagraphAbsorber;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Tests::PDFUA::PDFUA_CreatingTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_1;
    
public:

    /// <summary>
    /// Gets <see cref="System::String"/> text object that the <see cref="TextFragment"/> object represents.
    /// </summary>
    /// <example>
    /// The example demonstrates how to search a text and replace first occurrence represented with <see cref="TextFragment"/> object .
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change font of the first text occurrence
    /// absorber.TextFragments[1].Text = "hi world";
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
    /// </code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    System::String get_Text();
    /// <summary>
    /// Sets <see cref="System::String"/> text object that the <see cref="TextFragment"/> object represents.
    /// </summary>
    /// <example>
    /// The example demonstrates how to search a text and replace first occurrence represented with <see cref="TextFragment"/> object .
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change font of the first text occurrence
    /// absorber.TextFragments[1].Text = "hi world";
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
    /// </code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    void set_Text(System::String value);
    /// <summary>
    /// Gets a vertical alignment of text fragment. 
    /// </summary>
    virtual Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Sets a vertical alignment of text fragment. 
    /// </summary>
    virtual void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// Gets a horizontal alignment of text fragment. 
    /// </summary>
    virtual Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Sets a horizontal alignment of text fragment. 
    /// </summary>
    virtual void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Sets the fragment hyperlink
    /// </summary>
    virtual void set_Hyperlink(System::SharedPtr<Aspose::Pdf::Hyperlink> value);
    /// <summary>
    /// Gets text state for the text that <see cref="TextFragment"/> object represents.
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
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change foreground color of the first text occurrence
    /// absorber.TextFragments[1].TextState.ForegroundColor = Color.FromRgb(System.Drawing.Color.Red);
    /// 
    /// // Change font size of the first text occurrence
    /// absorber.TextFragments[1].TextState.FontSize = 15;
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
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
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Navigate all text segments and out their text and placement info
    /// foreach (TextSegment segment in absorber.TextFragments[1].Segments)
    /// {
    ///     Console.Out.WriteLine(string.Format("segment text: {0}", segment.Text));
    ///     Console.Out.WriteLine(string.Format("segment X indent: {0}", segment.Position.XIndent));
    ///     Console.Out.WriteLine(string.Format("segment Y indent: {0}", segment.Position.YIndent));
    /// }
    /// 
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
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Navigate all text segments and out their text and placement info
    /// foreach (TextSegment segment in absorber.TextFragments[1].Segments)
    /// {
    ///     Console.Out.WriteLine(string.Format("segment text: {0}", segment.Text));
    ///     Console.Out.WriteLine(string.Format("segment X indent: {0}", segment.Position.XIndent));
    ///     Console.Out.WriteLine(string.Format("segment Y indent: {0}", segment.Position.YIndent));
    /// }
    /// 
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    /// <seealso cref="TextSegment"/> 
    void set_Segments(System::SharedPtr<TextSegmentCollection> value);
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextFragment"/> object.
    /// </summary>
    /// <example>
    /// The example demonstrates how to view placement of a text, represented by <see cref="TextFragment"/> object.
    /// <code lang="C#"> 
    ///  // Open document
    ///  Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    ///  // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    ///  TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    ///  // Accept the absorber for first page
    ///  doc.Pages[1].Accept(absorber);
    /// 
    ///  // View text and placement info of first text occurrence
    ///  TextFragment firstOccurrence = absorber.TextFragments[1];
    /// 
    ///  Console.Out.WriteLine(string.Format("fragment text: {0}", firstOccurrence.Text));
    ///  Console.Out.WriteLine(string.Format("fragment X indent: {0}", firstOccurrence.Position.XIndent));
    ///  Console.Out.WriteLine(string.Format("fragment Y indent: {0}", firstOccurrence.Position.YIndent));
    /// 
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    /// <seealso cref="TextSegment"/> 
    System::SharedPtr<Aspose::Pdf::Text::Position> get_Position();
    /// <summary>
    /// Sets text position for text, represented with <see cref="TextFragment"/> object.
    /// </summary>
    /// <example>
    /// The example demonstrates how to view placement of a text, represented by <see cref="TextFragment"/> object.
    /// <code lang="C#"> 
    ///  // Open document
    ///  Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    ///  // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    ///  TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    ///  // Accept the absorber for first page
    ///  doc.Pages[1].Accept(absorber);
    /// 
    ///  // View text and placement info of first text occurrence
    ///  TextFragment firstOccurrence = absorber.TextFragments[1];
    /// 
    ///  Console.Out.WriteLine(string.Format("fragment text: {0}", firstOccurrence.Text));
    ///  Console.Out.WriteLine(string.Format("fragment X indent: {0}", firstOccurrence.Position.XIndent));
    ///  Console.Out.WriteLine(string.Format("fragment Y indent: {0}", firstOccurrence.Position.YIndent));
    /// 
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
    /// Gets wrap lines count for this paragraph(for pdf generation only)
    /// </summary>
    int32_t get_WrapLinesCount();
    /// <summary>
    /// Sets wrap lines count for this paragraph(for pdf generation only)
    /// </summary>
    void set_WrapLinesCount(int32_t value);
    /// <summary>
    /// Gets the paragraph end note.(for pdf generation only)
    /// </summary>
    System::SharedPtr<Note> get_EndNote();
    /// <summary>
    /// Sets the paragraph end note.(for pdf generation only)
    /// </summary>
    void set_EndNote(System::SharedPtr<Note> value);
    /// <summary>
    /// Gets the paragraph foot note.(for pdf generation only)
    /// </summary>
    System::SharedPtr<Note> get_FootNote();
    /// <summary>
    /// Sets the paragraph foot note.(for pdf generation only)
    /// </summary>
    void set_FootNote(System::SharedPtr<Note> value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextFragment"/> object.
    /// </summary>
    TextFragment();
    /// <summary>
    /// Initializes new instance of the <see cref="TextFragment"/> object with predefined <see cref="TabStops"/> positions.
    /// </summary>
    /// <param name="tabStops">Tabulation positions</param>
    TextFragment(System::SharedPtr<TabStops> tabStops);
    /// <summary>
    /// Creates <see cref="TextFragment"/> object with single <see cref="TextSegment"/> object inside. 
    /// Specifies text string inside the segment.
    /// </summary>
    /// <param name="text">Text fragment's text.</param>
    TextFragment(System::String text);
    /// <summary>
    /// Creates <see cref="TextFragment"/> object with single <see cref="TextSegment"/> object inside and predefined <see cref="TabStops"/> positions.
    /// </summary>
    /// <param name="text">Text fragment's text.</param>
    /// <param name="tabStops">Tabulation positions</param>
    TextFragment(System::String text, System::SharedPtr<TabStops> tabStops);
    
    /// <summary>
    /// Gets <see cref="TextSegment"/>(s) representing specified part of the <see cref="TextFragment"/> text.
    /// </summary>
    /// <param name="startIndex">Position in text from which new <see cref="TextSegment"/>(s) will start.</param>
    /// <param name="length">Length of the text that will isolated into <see cref="TextSegment"/>(s).</param>
    /// <returns><see cref="TextSegmentCollection"/> containing text segments represeting text substring starting at a specifing position and having a specified length.</returns>
    System::SharedPtr<TextSegmentCollection> IsolateTextSegments(int32_t startIndex, int32_t length);
    /// <summary>
    /// Clone the fragment.
    /// </summary>
    /// <returns>The cloned object</returns>
    virtual System::SharedPtr<System::Object> Clone();
    /// <summary>
    /// Clone the fragment with all segments.
    /// </summary>
    /// <returns>The cloned object</returns>
    virtual System::SharedPtr<System::Object> CloneWithSegments();
    
protected:

    Aspose::Pdf::Text::TextState::AttachState get_AttachedState();
    void set_AttachedState(Aspose::Pdf::Text::TextState::AttachState value);
    System::SharedPtr<TextReplaceOptions> get_ReplaceOptions();
    void set_ReplaceOptions(System::SharedPtr<TextReplaceOptions> value);
    System::String get_McName();
    int32_t get_McId();
    
    System::EventHandler<> OnRectChanged;
    
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState> get_SegmentsGroupState();
    void set_SegmentsGroupState(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState> value);
    /// <summary>
    /// Sets text state for the text that <see cref="TextFragment"/> object represents.
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
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change foreground color of the first text occurrence
    /// absorber.TextFragments[1].TextState.ForegroundColor = Color.FromRgb(System.Drawing.Color.Red);
    /// 
    /// // Change font size of the first text occurrence
    /// absorber.TextFragments[1].TextState.FontSize = 15;
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    void set_TextState(System::SharedPtr<TextFragmentState> value);
    /// <summary>
    /// Gets collection that contains current fragment
    /// </summary>
    System::SharedPtr<TextFragmentCollection> get_Fragments();
    /// <summary>
    /// Sets collection that contains current fragment
    /// </summary>
    void set_Fragments(System::SharedPtr<TextFragmentCollection> value);
    /// <summary>
    /// Gets rectangle of the TextFragment
    /// </summary>
    void set_Rectangle(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets page that contains the TextFragment
    /// </summary>
    /// <remarks>
    /// The value can be null in case the TextFragment object doesn't belong to any page.
    /// </remarks>
    void set_Page(System::SharedPtr<Aspose::Pdf::Page> value);
    /// <summary>
    /// Gets TextSegmenter that was used for creation segments of this fragment.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> get_Segmenter();
    /// <summary>
    /// Indicates whether position of the fragment is changed or default
    /// </summary>
    bool get_IsPositionChanged();
    
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
    void ResetTabstops();
    /// <summary>
    /// Indicates whether the fragment contains segments on different "text lines"
    /// </summary>
    /// <remark>
    /// Multiline text fragments may appeared for example as a result of hyphenation during text replacement or as a result of user manipulations.
    /// </remark>
    /// <returns></returns>
    bool IsMultiline();
    
    TextFragment(System::String text, System::SharedPtr<TextSegmentCollection> segments);
    TextFragment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, System::String text, System::SharedPtr<TextSegmentCollection> segments);
    
    void SyncVerticalAlignment(Aspose::Pdf::VerticalAlignment verticalAlignment);
    void SyncHorizontalAlignment(Aspose::Pdf::HorizontalAlignment horizontalAlignment1);
    /// <summary>
    /// Set text with no adjustment.
    /// </summary>
    /// <remarks>
    /// But segment appearing after isolation of the fragment actually may be shifted. It is usefull for cases like changing font size.
    /// If you aren't desire any shifts of text please use LightWeightTextSetterWithNoTextShift()
    /// </remarks>
    /// <param name="inText">String representing new text value.</param>
    void LightWeightTextSetter(System::String inText);
    /// <summary>
    /// Set text with no adjustment.
    /// </summary>
    /// <remarks>
    /// And position of text after the fragment will be kept intact.
    /// </remarks>
    /// <param name="inText">String representing new text value.</param>
    void LightWeightTextSetterWithNoTextShift(System::String inText);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment>>> GetLineSegments(double x_indent, double y_indent, double angle);
    void SetMarkedContentProperties(System::String name, int32_t id);
    void Assign(System::SharedPtr<TextFragment> fragment);
    void AssignWithSegments(System::SharedPtr<TextFragment> fragment);
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
    System::SharedPtr<Note> endNote;
    System::SharedPtr<Note> footNote;
    bool isTextChanged;
    bool isPositionChanged;
    int32_t wrapLinesCount;
    System::SharedPtr<TextReplaceOptions> pr_ReplaceOptions;
    System::String pr_McName;
    
    void set_McName(System::String value);
    
    int32_t mcId;
    
    void set_McId(int32_t value);
    
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState> _segmentsGroupState;
    
    /// <summary>
    /// initializes the object
    /// </summary>
    /// <param name="text"></param>
    void InitializeDetachedFragment(System::String text);
    /// <summary>
    /// initializes the object
    /// </summary>
    /// <param name="text"></param>
    void InitializeDetachedFragment(System::String text, System::SharedPtr<TabStops> tabStops);
    void ApplyTabstops(System::SharedPtr<TextSegment> segment);
    bool CheckTabStops(System::SharedPtr<TextSegment> inSegment, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegment>>>& outSegments);
    System::SharedPtr<TabStop> GetNextTabStop(double currentPosition, double tabDefault);
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


