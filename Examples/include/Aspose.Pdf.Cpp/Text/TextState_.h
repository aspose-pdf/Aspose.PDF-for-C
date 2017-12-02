#ifndef _Aspose_Pdf_Text_TextState__h_
#define _Aspose_Pdf_Text_TextState__h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/eventhandler.h>
#include <system/eventargs.h>
#include <system/enum_helpers.h>
#include <system/collections/dictionary.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Redaction; } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class SearchablePdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Heading; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentState; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextStateFlowTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class FormattedTextTests; } } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }
namespace Aspose { namespace Pdf { namespace Text { enum class FontStyles; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextState; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { enum class CoordinateOrigin; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegmentStateData; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Graphics { namespace Colors { class IColor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Graphics { namespace Colors { class RGBColor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Graphics { namespace Colors { class GrayColor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Graphics { namespace Colors { class CMYKColor; } } } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Enum for attached state of the objects
/// </summary>
class ASPOSE_PDF_SHARED_API TextState : public System::Object
{
    typedef TextState ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Redaction;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::Text::TextSegment;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Tests::Text::TextStateFlowTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::Facades::FormattedTextTests;
    
protected:

    enum class AttachState
    {
        Detached,
        Attached,
        Attaching
    };
    
    
private:

    enum class SetFlagsEnum
    {
        isBackgroundColorSet = 0x01,
        isUnderlineSet = 0x02,
        isCharacterSpacingSet = 0x04,
        isLineSpacingSet = 0x08,
        isFontSet = 0x10,
        isForegroundColorSet = 0x20,
        isHorizontalScalingSet = 0x40,
        isTextMatrixSet = 0x80,
        isWordSpacingSet = 0x100,
        isFontStyleSet = 0x200,
        isFontSizeSet = 0x400,
        isHorizontalAlignmentSet = 0x800,
        isVerticalAlignmentSet = 0x1000
    };
    DECLARE_FRIEND_ENUM_OPERATORS(Aspose::Pdf::Text::TextState::SetFlagsEnum);
    
    
    
public:

    /// <summary>
    /// Gets or sets character spacing of the text.
    /// </summary>
    virtual float get_CharacterSpacing();
    /// <summary>
    /// Gets or sets character spacing of the text.
    /// </summary>
    virtual void set_CharacterSpacing(float value);
    /// <summary>
    /// Gets or sets line spacing of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The LineSpacing property getter works for an object in case it was explicitly set previously with LineSpacing setter for those object.
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    virtual float get_LineSpacing();
    /// <summary>
    /// Gets or sets line spacing of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The LineSpacing property getter works for an object in case it was explicitly set previously with LineSpacing setter for those object.
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    virtual void set_LineSpacing(float value);
    /// <summary>
    /// Gets or sets horizontal scaling of the text.
    /// </summary>
    virtual float get_HorizontalScaling();
    /// <summary>
    /// Gets or sets horizontal scaling of the text.
    /// </summary>
    virtual void set_HorizontalScaling(float value);
    /// <summary>
    /// Gets or sets word spacing of the text.
    /// </summary>
    virtual float get_WordSpacing();
    /// <summary>
    /// Gets or sets word spacing of the text.
    /// </summary>
    virtual void set_WordSpacing(float value);
    /// <summary>
    /// Gets or sets font size of the text.
    /// </summary>
    virtual float get_FontSize();
    /// <summary>
    /// Gets or sets font size of the text.
    /// </summary>
    virtual void set_FontSize(float value);
    /// <summary>
    /// Gets or sets font of the text.
    /// </summary>
    virtual System::SharedPtr<Aspose::Pdf::Text::Font> get_Font();
    /// <summary>
    /// Gets or sets font of the text.
    /// </summary>
    virtual void set_Font(System::SharedPtr<Aspose::Pdf::Text::Font> value);
    /// <summary>
    /// Gets or sets foreground color of the text.
    /// </summary>
    virtual System::SharedPtr<Color> get_ForegroundColor();
    /// <summary>
    /// Gets or sets foreground color of the text.
    /// </summary>
    virtual void set_ForegroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Sets underline for the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual bool get_Underline();
    /// <summary>
    /// Sets underline for the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual void set_Underline(bool value);
    /// <summary>
    /// Sets background color of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The BackgroundColor property getter works for an object in case it was explicitly set previously with BackgroundColor setter for those object.
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    virtual System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    /// Sets background color of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The BackgroundColor property getter works for an object in case it was explicitly set previously with BackgroundColor setter for those object.
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    virtual void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Sets font style of the text.
    /// </summary>
    virtual void set_FontStyle(FontStyles value);
    /// <summary>
    /// Gets or sets horizontal alignment for the text. 
    /// </summary>
    /// <remarks>
    /// HorizontalAlignment.None is equal to HorizontalAlignment.Left.
    /// Note that TextState.HorizontalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Gets or sets horizontal alignment for the text. 
    /// </summary>
    /// <remarks>
    /// HorizontalAlignment.None is equal to HorizontalAlignment.Left.
    /// Note that TextState.HorizontalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    
    /// <summary>
    /// Applies settings from another textState. 
    /// </summary>
    /// <remarks>
    /// Only those properties will be copied that were changed explicitly.
    /// </remarks>
    /// <param name="textState">Text state object.</param>
    virtual void ApplyChangesFrom(System::SharedPtr<TextState> textState);
    
    /// <summary>
    /// Creates text state object.
    /// </summary>
    TextState();
    /// <summary>
    /// Creates text state object with font size specification.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    TextState(double fontSize);
    /// <summary>
    /// Creates text state object with foreground color specification.
    /// </summary>
    /// <param name="foregroundColor">Foreground color.</param>
    TextState(System::Drawing::Color foregroundColor);
    /// <summary>
    /// Creates text state object with foreground color and font size specification.
    /// </summary>
    /// <param name="foregroundColor">Foreground color.</param>
    /// <param name="fontSize">Font size.</param>
    TextState(System::Drawing::Color foregroundColor, double fontSize);
    /// <summary>
    /// Creates text state object with font family specification.
    /// </summary>
    /// <param name="fontFamily">Font family.</param>
    TextState(System::String fontFamily);
    /// <summary>
    /// Creates text state object with font family and font style specification.
    /// </summary>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="bold">Bold font style.</param>
    /// <param name="italic">Italic font style.</param>
    TextState(System::String fontFamily, bool bold, bool italic);
    /// <summary>
    /// Creates text state object with font family and font size specification.
    /// </summary>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="fontSize">Font size.</param>
    TextState(System::String fontFamily, double fontSize);
    
protected:

    /// <summary>
    /// underline
    /// </summary>
    bool get_underline();
    /// <summary>
    /// underline
    /// </summary>
    void set_underline(bool value);
    /// <summary>
    /// background color
    /// </summary>
    System::SharedPtr<Color> get_backgroundColor();
    /// <summary>
    /// background color
    /// </summary>
    void set_backgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// character spacing
    /// </summary>
    float get_characterSpacing();
    /// <summary>
    /// character spacing
    /// </summary>
    void set_characterSpacing(float value);
    /// <summary>
    /// character spacing
    /// </summary>
    float get_lineSpacing();
    /// <summary>
    /// character spacing
    /// </summary>
    void set_lineSpacing(float value);
    /// <summary>
    /// font
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::Font> get_font();
    /// <summary>
    /// font
    /// </summary>
    void set_font(System::SharedPtr<Aspose::Pdf::Text::Font> value);
    /// <summary>
    /// text matrix
    /// </summary>
    System::SharedPtr<Aspose::Pdf::DOM::Matrix> get_textMatrix();
    /// <summary>
    /// text matrix
    /// </summary>
    void set_textMatrix(System::SharedPtr<Aspose::Pdf::DOM::Matrix> value);
    /// <summary>
    /// word spacing
    /// </summary>
    float get_wordSpacing();
    /// <summary>
    /// word spacing
    /// </summary>
    void set_wordSpacing(float value);
    /// <summary>
    /// font style
    /// </summary>
    FontStyles get_fontStyle();
    /// <summary>
    /// font style
    /// </summary>
    void set_fontStyle(FontStyles value);
    /// <summary>
    /// font size
    /// </summary>
    float get_fontSize();
    /// <summary>
    /// font size
    /// </summary>
    void set_fontSize(float value);
    bool get_IsBackgroundColorSet();
    void set_IsBackgroundColorSet(bool value);
    bool get_IsUnderlineSet();
    void set_IsUnderlineSet(bool value);
    bool get_IsCharacterSpacingSet();
    void set_IsCharacterSpacingSet(bool value);
    bool get_IsLineSpacingSet();
    void set_IsLineSpacingSet(bool value);
    bool get_IsFontSet();
    void set_IsFontSet(bool value);
    bool get_IsForegroundColorSet();
    void set_IsForegroundColorSet(bool value);
    bool get_IsHorizontalScalingSet();
    void set_IsHorizontalScalingSet(bool value);
    bool get_IsTextMatrixSet();
    void set_IsTextMatrixSet(bool value);
    bool get_IsWordSpacingSet();
    void set_IsWordSpacingSet(bool value);
    bool get_IsFontStyleSet();
    void set_IsFontStyleSet(bool value);
    bool get_IsFontSizeSet();
    void set_IsFontSizeSet(bool value);
    bool get_IsHorizontalAlignmentSet();
    void set_IsHorizontalAlignmentSet(bool value);
    bool get_IsVerticalAlignmentSet();
    void set_IsVerticalAlignmentSet(bool value);
    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    TextState::AttachState get_AttachedState();
    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    void set_AttachedState(TextState::AttachState value);
    virtual System::SharedPtr<Aspose::Pdf::DOM::Matrix> get_TextMatrix();
    virtual void set_TextMatrix(System::SharedPtr<Aspose::Pdf::DOM::Matrix> value);
    /// <summary>
    /// Gets text height.
    /// </summary>
    virtual float get_TextHeight();
    /// <summary>
    /// Gets or sets vertical alignment for the text inside paragrph's <see cref="Rectangle"/>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// Note that TextState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Gets or sets vertical alignment for the text inside paragrph's <see cref="Rectangle"/>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// Note that TextState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// foreground color
    /// </summary>
    System::SharedPtr<Color> get_foregroundColor();
    /// <summary>
    /// foreground color
    /// </summary>
    void set_foregroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// horizontal spacing (100 is by default)
    /// </summary>
    float get_horizontalScaling();
    /// <summary>
    /// horizontal spacing (100 is by default)
    /// </summary>
    void set_horizontalScaling(float value);
    /// <summary>
    /// AB: At the moment, it is only effective if set earlier than physical segment will be attached
    /// </summary>
    virtual Aspose::Pdf::Engine::CommonData::Text::Segmenting::CoordinateOrigin get_coordinateOrigin();
    /// <summary>
    /// AB: At the moment, it is only effective if set earlier than physical segment will be attached
    /// </summary>
    virtual void set_coordinateOrigin(Aspose::Pdf::Engine::CommonData::Text::Segmenting::CoordinateOrigin value);
    int16_t get_SetFlags();
    void set_SetFlags(int16_t value);
    
    System::EventHandler<System::SharedPtr<System::EventArgs>> OnFontChanged;
    System::EventHandler<System::SharedPtr<System::EventArgs>> OnFontSizeChanged;
    
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment);
    void Detach();
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> ToEngineColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> originalColor, System::SharedPtr<Color> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> ToEngineColor(System::SharedPtr<Color> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::RGBColor> ColorToEngineRGB(System::SharedPtr<Color> color);
    static System::SharedPtr<Color> EngineRGBToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::RGBColor> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::GrayColor> ColorToEngineGray(System::SharedPtr<Color> color);
    static System::SharedPtr<Color> GrayToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::GrayColor> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::CMYKColor> ColorToEngineCMYK(System::SharedPtr<Color> color);
    static System::SharedPtr<Color> CMYKToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::CMYKColor> color);
    
    TextState(System::SharedPtr<Color> backgroundColor, System::SharedPtr<Color> foregroundColor, FontStyles fontStyle, System::SharedPtr<Aspose::Pdf::Text::Font> font, float fontSize);
    TextState(System::Drawing::Color backgroundColor, System::Drawing::Color foregroundColor, FontStyles fontStyle, System::SharedPtr<Aspose::Pdf::Text::Font> font, float fontSize);
    TextState(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextState> physicalState);
    
    /// <summary>
    /// Measures the string.
    /// </summary>
    /// <param name="str">The string.</param>
    /// <returns></returns>
    virtual double MeasureString(System::String str);
    /// <summary>
    /// Calculates the font size for the rectangle.
    /// </summary>
    virtual double CalculateFontSize(System::String str, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Copying constructor
    /// Copies properties from <see cref="PhysicalTextState"/>
    /// </summary>
    TextState(System::SharedPtr<TextSegment> textSegment);
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::String tagName);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool pr_underline;
    System::SharedPtr<Color> pr_backgroundColor;
    float pr_characterSpacing;
    float pr_lineSpacing;
    System::SharedPtr<Aspose::Pdf::Text::Font> pr_font;
    System::SharedPtr<Color> _foregroundColor;
    float _horizontalScaling;
    System::SharedPtr<Aspose::Pdf::DOM::Matrix> pr_textMatrix;
    float pr_wordSpacing;
    FontStyles pr_fontStyle;
    float pr_fontSize;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextState> _physicalState;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment;
    System::WeakPtr<TextSegment> textSegment;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder> segmentBuilder;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    Aspose::Pdf::HorizontalAlignment horizontalAlignment;
    Aspose::Pdf::Engine::CommonData::Text::Segmenting::CoordinateOrigin origin;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegmentStateData> stateData;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, double>> measureCache;
    int16_t setFlags;
    TextState::AttachState pr_AttachedState;
    
    void FlushToPhysicalSegment();
    /// <summary>
    /// Applies settings from another textState
    /// </summary>
    /// <param name="textState"></param>
    void AttachStateProperties(System::SharedPtr<TextState> textState, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextState> physicalState);
    void ApplyChangesFromAttachedState(System::SharedPtr<TextState> textState);
    void RefreshBackgroundColor();
    static System::SharedPtr<Color> EngineColorToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> engineColor);
    void ClearMeasureCache();
    void FontOnFontPropertiesChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    /// <summary>
    /// Measures the string.
    /// </summary>
    /// <remarks>
    /// insideLine indicate that the string is not ending.
    /// in case part of the whole string is measured - the insideLine should be true.
    /// in case the whole string is measured the insideLine should be false. 
    /// in other words:
    /// in case insideLine = true only character widhts are taken into account. no additional transformations are taken into account
    /// in case insideLine = false end of the string is handled properly - italic transformation is taken into account.
    /// </remarks>
    double MeasureString(System::String str, bool insideLine);
    
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Text::TextState::SetFlagsEnum);
DECLARE_USING_GLOBAL_OPERATORS
} // namespace Text
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Text);


#endif // _Aspose_Pdf_Text_TextState__h_

