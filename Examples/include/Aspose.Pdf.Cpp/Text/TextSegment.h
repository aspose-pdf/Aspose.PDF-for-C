#ifndef _Aspose_Pdf_Text_TextSegment_h_
#define _Aspose_Pdf_Text_TextSegment_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
namespace Aspose { namespace Pdf { namespace Text { class TextParagraphAbsorber; } } }
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
/// </remarks>
/// <example>
/// The example demonstrates how to change text color and font size of the text with <see cref="TextState"/> object of <see cref="TextSegment"/> object.
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
/// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
/// // Accept the absorber for first page
/// doc.Pages[1].Accept(absorber);
/// // Change foreground color of the first text segment of the first text occurrence
/// absorber.TextFragments[1].Segments[1].TextState.ForegroundColor = Color.FromRgb(System.Drawing.Color.Red);
/// // Change font size of the first text segment of the first text occurrence
/// absorber.TextFragments[1].Segments[1].TextState.FontSize = 15;
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
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Text::CharInfoCollection;
    friend class Aspose::Pdf::Text::TextParagraphAbsorber;
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

    System::String get_Text();
    void set_Text(System::String value);
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState();
    void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    System::SharedPtr<Aspose::Pdf::Text::Position> get_Position();
    void set_Position(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    System::SharedPtr<Aspose::Pdf::Text::Position> get_BaselinePosition();
    void set_BaselinePosition(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> get_TextEditOptions();
    void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> value);
    System::SharedPtr<CharInfoCollection> get_Characters();
    
    TextSegment();
    TextSegment(System::String text);
    
protected:

    Aspose::Pdf::Text::TextState::AttachState get_AttachedState();
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_PhysicalSegment();
    int32_t get_StartCharIndex();
    int32_t get_EndCharIndex();
    Aspose::Pdf::Engine::CommonData::Text::Segmenting::Settings::NoCharacterAction get_PhysicalNoCharacterAction();
    
    System::EventHandler<System::SharedPtr<System::EventArgs>> OnPositionChanged;
    System::EventHandler<System::SharedPtr<System::EventArgs>> OnTextChanged;
    System::EventHandler<System::SharedPtr<OnSegmentChangedEventArgs>> SegmentChanged;
    
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment);
    void Detach();
    void IsolatePhysicalSegment();
    void DeletePhysicalSegment();
    
    TextSegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions);
    
    void OnSegmentIsolated(System::SharedPtr<OnSegmentChangedEventArgs> e);
    
    TextSegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex);
    
    void SetEncodedTextProperties(System::SharedPtr<Font> font, System::String text, System::ArrayPtr<int32_t> indices);
    double MeasureSegment();
    System::SharedPtr<CharInfo> GetCharInfo(int32_t charIndex);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextSegment"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    
    void set_AttachedState(Aspose::Pdf::Text::TextState::AttachState value);
    System::ArrayPtr<int32_t> get_Indices();
    void set_Indices(System::ArrayPtr<int32_t> value);
    void set_PhysicalNoCharacterAction(Aspose::Pdf::Engine::CommonData::Text::Segmenting::Settings::NoCharacterAction value);
    
    void InitializeDetachedSegment(System::String text);
    void InitializeAttachedSegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> textEditOptions);
    void TextStateOnOnFontSizeChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    void TextStateOnOnFontChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextSegment_h_

