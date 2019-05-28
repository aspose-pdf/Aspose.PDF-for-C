#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/eventhandler.h>
#include <system/array.h>
#include <cstdint>

#include "Text/TextState_.h"
#include "Text/OnSegmentChangedEventArgs.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class MCRElement; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Redaction; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextPostReplaceFixer; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Text { class CharInfoCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentState; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegmentCollection; } } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextFragmentAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextSegmentTests; } } } }
namespace Aspose { namespace Pdf { namespace Text { class Position; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { class Hyperlink; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { namespace Settings { enum class NoCharacterAction; } } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextEditOptions; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Text { class CharInfo; } } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents segment of Pdf text.
/// </summary>
/// <remarks>
/// In a few words, <see cref="TextSegment"/> objects are children of <see cref="TextFragment"/> object.
/// 
/// In details:
/// 
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
/// </remarks>
/// <example>
/// The example demonstrates how to change text color and font size of the text with <see cref="TextState"/> object of <see cref="TextSegment"/> object.
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
/// // Change foreground color of the first text segment of the first text occurrence
/// absorber.TextFragments[1].Segments[1].TextState.ForegroundColor = Color.FromRgb(System.Drawing.Color.Red);
/// // Change font size of the first text segment of the first text occurrence
/// absorber.TextFragments[1].Segments[1].TextState.FontSize = 15;
/// 
/// // Save document
/// doc.Save(@"D:\Tests\output.pdf");  
///	</code>
/// </example>
class ASPOSE_PDF_SHARED_API TextSegment FINAL : public System::Object
{
    typedef TextSegment ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Text::CharInfoCollection;
    friend class Aspose::Pdf::Text::CharInfoCollection;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentCollection;
    friend class Aspose::Pdf::Text::TextFragmentCollection;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::Text::TextSegmentCollection;
    friend class Aspose::Pdf::Text::TextSegmentCollection;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextFragmentAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::Text::TextSegmentTests;
    
public:

    /// <summary>
    /// Gets starting character index of current segment in the show text operator (Tj, TJ) segment.
    /// </summary>
    int32_t get_StartCharIndex();
    /// <summary>
    /// Gets ending character index of current segment in the show text operator (Tj, TJ) segment.
    /// </summary>
    int32_t get_EndCharIndex();
    /// <summary>
    /// Gets or sets <see cref="string"/> text object that the <see cref="TextSegment"/> object represents.
    /// </summary>
    System::String get_Text();
    /// <summary>
    /// Gets or sets <see cref="string"/> text object that the <see cref="TextSegment"/> object represents.
    /// </summary>
    void set_Text(System::String value);
    /// <summary>
    /// Gets or sets text state for the text that <see cref="TextSegment"/> object represents.
    /// </summary>
    /// <remarks>
    /// Provides a way to change following properties of the text:
    ///    Font
    ///    FontSize
    ///    FontStyle
    ///    ForegroundColor
    ///    BackgroundColor
    /// </remarks>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState();
    /// <summary>
    /// Gets or sets text state for the text that <see cref="TextSegment"/> object represents.
    /// </summary>
    /// <remarks>
    /// Provides a way to change following properties of the text:
    ///    Font
    ///    FontSize
    ///    FontStyle
    ///    ForegroundColor
    ///    BackgroundColor
    /// </remarks>
    void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextSegment"/> object.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::Position> get_Position();
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextSegment"/> object.
    /// </summary>
    void set_Position(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    /// <summary>
    /// Gets rectangle of the TextSegment
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextSegment"/> object.
    /// The YIndent of the Position structure represents baseline coordinate of the text segment.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::Position> get_BaselinePosition();
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextSegment"/> object.
    /// The YIndent of the Position structure represents baseline coordinate of the text segment.
    /// </summary>
    void set_BaselinePosition(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    /// <summary>
    /// Gets or sets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> get_TextEditOptions();
    /// <summary>
    /// Gets or sets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> value);
    /// <summary>
    /// Gets collection of CharInfo objects that represent information on characters in the text segment.
    /// </summary>
    System::SharedPtr<CharInfoCollection> get_Characters();
    /// <summary>
    /// Gets or sets the segment hyperlink(for pdf generator).
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Hyperlink> get_Hyperlink();
    /// <summary>
    /// Gets or sets the segment hyperlink(for pdf generator).
    /// </summary>
    void set_Hyperlink(System::SharedPtr<Aspose::Pdf::Hyperlink> value);
    
    /// <summary>
    /// Creates TextSegment object.
    /// </summary>
    /// <example>
    /// The example demonstrates how to create text fragment object, add a text segment to the text fragment collection and append it to the Pdf page.
    /// <code lang="C#"> 
    /// Document doc = new Document(inFile);
    /// Page page = (Page)doc.Pages[1];
    /// 
    /// // create text fragment
    /// TextFragment tf = new TextFragment("main text");
    /// tf.Position = new Position(100, 600);
    /// 
    /// // set it's text properties
    /// tf.TextState.FontSize = 5;
    /// tf.TextState.Font = FontRepository.FindFont("TimesNewRoman");
    /// tf.TextState.BackgroundColor = Color.LightGray;
    /// tf.TextState.ForegroundColor = Color.Red;
    /// 
    /// // add one more segment to text fragment's Segments collection
    /// TextSegment segment2 = new TextSegment();
    /// segment2.Text = "another segment";
    /// 
    /// tf.Segments.Add(segment2);
    /// 
    /// // create TextBuilder object
    /// TextBuilder builder = new TextBuilder(page);
    /// 
    /// // append the text fragment to the Pdf page
    /// builder.AppendText(tf);
    /// 
    /// //save document
    /// doc.Save(outFile);
    /// </code> 
    /// </example>
    TextSegment();
    /// <summary>
    /// Creates TextSegment object.
    /// </summary>
    /// <example>
    /// The example demonstrates how to create text fragment object, add a text segment to the text fragment collection and append it to the Pdf page.
    /// <code lang="C#"> 
    /// Document doc = new Document(inFile);
    /// Page page = (Page)doc.Pages[1];
    /// 
    /// // create text fragment
    /// TextFragment tf = new TextFragment("main text");
    /// tf.Position = new Position(100, 600);
    /// 
    /// // set it's text properties
    /// tf.TextState.FontSize = 5;
    /// tf.TextState.Font = FontRepository.FindFont("TimesNewRoman");
    /// tf.TextState.BackgroundColor = Color.LightGray;
    /// tf.TextState.ForegroundColor = Color.Red;
    /// 
    /// // add one more segment to text fragment's Segments collection
    /// TextSegment segment2 = new TextSegment("another segment");
    /// 
    /// tf.Segments.Add(segment2);
    /// 
    /// // create TextBuilder object
    /// TextBuilder builder = new TextBuilder(page);
    /// 
    /// // append the text fragment to the Pdf page
    /// builder.AppendText(tf);
    /// 
    /// //save document
    /// doc.Save(outFile);
    /// </code> 
    /// </example>
    /// <param name="text">Text segment's text.</param>
    TextSegment(System::String text);
    
    static System::String MyHtmlEncode(System::String value);
    
protected:

    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    Aspose::Pdf::Text::TextState::AttachState get_AttachedState();
    System::String get_McName();
    void set_McName(System::String value);
    int32_t get_McId();
    void set_McId(int32_t value);
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_PhysicalSegment();
    /// <summary>
    /// Gets or sets a segment id.
    /// </summary>
    System::String get_Id();
    /// <summary>
    /// Gets or sets a segment id.
    /// </summary>
    void set_Id(System::String value);
    Aspose::Pdf::Engine::CommonData::Text::Segmenting::Settings::NoCharacterAction get_PhysicalNoCharacterAction();
    double get_Height();
    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> get_Trailerable();
    /// <summary>
    /// Gets PhysicalTextSegment object that was created after current segment during isolation. May be null if isolation wasn't performed or created no segment after.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_SegmentAfter();
    /// <summary>
    /// Gets PhysicalTextSegment object that was created after current segment during isolation. May be null if isolation wasn't performed or created no segment after.
    /// </summary>
    void set_SegmentAfter(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> value);
    
    System::EventHandler<> OnPositionChanged;
    System::EventHandler<> OnTextChanged;
    System::EventHandler<System::SharedPtr<OnSegmentChangedEventArgs>> SegmentChanged;
    
    /// <summary>
    /// Attached the object to physical segment
    /// </summary>
    /// <param name="physicalSegment"></param>
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment);
    /// <summary>
    /// Detached the object from physical segment
    /// </summary>
    void Detach();
    /// <summary>
    /// In case TextSegment is a part of physical segment, we have to isolate the working part in it's own physical segment to simplify segments operations
    /// </summary>
    void IsolatePhysicalSegment();
    /// <summary>
    /// Splits current <see cref="TextSegment"/> on two segments by specified position in text.
    /// </summary>
    /// <param name="index">Position in text from which new <see cref="TextSegment"/> will start.</param>
    /// <returns>New <see cref="TextSegment"/> containing text of parent segment starting from specified position. Parent segment will be truncated.</returns>
    System::SharedPtr<TextSegment> Split(int32_t index);
    /// <summary>
    /// Deletes physical segment
    /// </summary>
    void DeletePhysicalSegment();
    
    TextSegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    
    /// <summary>
    /// Activates SegmentChanged event
    /// Call it from outside to be sure references to text of initial segment will be updated
    /// after direct call of PhysicalTextSegment.Isolate()
    /// </summary>
    /// <param name="e">event args</param>
    void OnSegmentIsolated(System::SharedPtr<OnSegmentChangedEventArgs> e);
    
    TextSegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex);
    
    /// <summary>
    /// Sets font and indices inside the font
    /// </summary>
    /// <param name="font">Font of the fragment.</param>
    /// <param name="text">Text value.</param>
    /// <param name="indices">Glyph indices inside the font.</param>
    void SetEncodedTextProperties(System::SharedPtr<Font> font, System::String text, System::ArrayPtr<int32_t> indices);
    /// <summary>
    /// Returns the segment width
    /// </summary>
    /// <returns></returns>
    double MeasureSegment();
    /// <summary>
    /// Returns the character info by character index.
    /// Index is started from 1 and must be a position within the <see cref="Text"/> string.
    /// </summary>
    System::SharedPtr<CharInfo> GetCharInfo(int32_t charIndex);
    /// <summary>
    /// It makes dirrect setting of text for internal procedures. Don't use it if you aren't sure, use public Text property instead.
    /// </summary>
    /// <param name="value">String to set as the segment text.</param>
    void SetText(System::String value);
    void ProcessHyperlink(System::SharedPtr<Page> page);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String id;
    System::SharedPtr<Aspose::Pdf::Text::Position> position;
    System::SharedPtr<Aspose::Pdf::Text::Position> baselinePosition;
    System::ArrayPtr<int32_t> indices;
    System::String text;
    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    int32_t startCharIndex;
    int32_t endCharIndex;
    int32_t adjustmentSpacesBeforeStart;
    int32_t adjustmentSpacesBeforeEnd;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment;
    System::SharedPtr<Aspose::Pdf::Hyperlink> hyperlink;
    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable;
    Engine::CommonData::Text::Segmenting::Settings::NoCharacterAction _physicalNoCharacterAction;
    System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions;
    bool _isolated;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> isolationSegmentAfter;
    System::SharedPtr<System::Object> sync1;
    System::SharedPtr<CharInfoCollection> charInfoCollection;
    Aspose::Pdf::Text::TextState::AttachState pr_AttachedState;
    
    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    void set_AttachedState(Aspose::Pdf::Text::TextState::AttachState value);
    
    int32_t mcId;
    System::String pr_McName;
    
    /// <summary>
    /// Glyphs indices.
    /// </summary>
    System::ArrayPtr<int32_t> get_Indices();
    /// <summary>
    /// Glyphs indices.
    /// </summary>
    void set_Indices(System::ArrayPtr<int32_t> value);
    void set_PhysicalNoCharacterAction(Aspose::Pdf::Engine::CommonData::Text::Segmenting::Settings::NoCharacterAction value);
    
    /// <summary>
    /// initializes detached segment
    /// </summary>
    /// <param name="text"></param>
    void InitializeDetachedSegment(System::String text);
    /// <summary>
    /// initializes attached segment
    /// </summary>
    /// <param name="physicalSegment"></param>
    /// <param name="startCharIndex"></param>
    /// <param name="endCharIndex"></param>
    /// <param name="textEditOptions"></param>
    void InitializeAttachedSegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    void TextStateOnOnFontSizeChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    void TextStateOnOnFontChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    void CountAndjustmentSpaces();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


