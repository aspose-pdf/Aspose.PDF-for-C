#ifndef _Aspose_Pdf_Text_TextSegment_h_
#define _Aspose_Pdf_Text_TextSegment_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/eventhandler.h>
#include <system/eventargs.h>
#include <system/array.h>
#include <cstdint>

#include "Text/TextState_.h"
#include "Text/OnSegmentChangedEventArgs.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextPostReplaceFixer; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { namespace Text { class CharInfoCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentState; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextFragmentAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
namespace Aspose { namespace Pdf { namespace Text { class Position; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { namespace Settings { enum class NoCharacterAction; } } } } } } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextEditOptions; } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Text { class CharInfo; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents segment of Pdf text.
/// </summary>
/// <remarks>
/// In a few words, <see cref="TextSegment"/> objects are children of <see cref="TextFragment"/> object.
/// In details:
/// Text of pdf document in <see cref="Aspose.Pdf"/> is represented by two basic objects: <see cref="TextFragment"/> and <see cref="TextSegment"/>
/// The differences between them is mostly context-dependent.
/// Let's consider following scenario. User searches text "hello world" to operate with it, change it's properties, look etc.
/// <code></code>
/// </example>
class ASPOSE_PDF_SHARED_API TextSegment FINAL : public System::Object
{
    typedef TextSegment ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Text::CharInfoCollection;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::Text::TextSegmentCollection;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextFragmentAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    
public:

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
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> get_TextEditOptions();
    /// <summary>
    /// Gets or sets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> value);
    /// <summary>
    /// Gets collection of CharInfo objects that represent information on characters in the text segment.
    /// </summary>
    System::SharedPtr<CharInfoCollection> get_Characters();
    
    /// <summary>
    /// Creates TextSegment object.
    /// </summary>
    /// <example>
    /// The example demonstrates how to create text fragment object, add a text segment to the text fragment collection and append it to the Pdf page.
    /// <code></code> 
    /// </example>
    TextSegment();
    /// <summary>
    /// Creates TextSegment object.
    /// </summary>
    /// <example>
    /// The example demonstrates how to create text fragment object, add a text segment to the text fragment collection and append it to the Pdf page.
    /// <code></code> 
    /// </example>
    /// <param name="text">Text segment's text.</param>
    TextSegment(System::String text);
    
protected:

    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    Aspose::Pdf::Text::TextState::AttachState get_AttachedState();
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_PhysicalSegment();
    int32_t get_StartCharIndex();
    int32_t get_EndCharIndex();
    Aspose::Pdf::Engine::CommonData::Text::Segmenting::Settings::NoCharacterAction get_PhysicalNoCharacterAction();
    
    System::EventHandler<System::SharedPtr<System::EventArgs>> OnPositionChanged;
    System::EventHandler<System::SharedPtr<System::EventArgs>> OnTextChanged;
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
    /// Deletes physical segment
    /// </summary>
    void DeletePhysicalSegment();
    
    TextSegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions);
    
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
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Text::Position> position;
    System::SharedPtr<Aspose::Pdf::Text::Position> baselinePosition;
    System::ArrayPtr<int32_t> indices;
    System::String text;
    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    int32_t startCharIndex;
    int32_t endCharIndex;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment;
    Engine::CommonData::Text::Segmenting::Settings::NoCharacterAction _physicalNoCharacterAction;
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions;
    bool _isolated;
    System::SharedPtr<System::Object> sync1;
    System::SharedPtr<CharInfoCollection> charInfoCollection;
    Aspose::Pdf::Text::TextState::AttachState pr_AttachedState;
    
    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    void set_AttachedState(Aspose::Pdf::Text::TextState::AttachState value);
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
    void InitializeAttachedSegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions);
    void TextStateOnOnFontSizeChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    void TextStateOnOnFontChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextSegment_h_

