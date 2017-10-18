#ifndef _Aspose_Pdf_Text_TextState__h_
#define _Aspose_Pdf_Text_TextState__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    enum SetFlagsEnum
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
    
    
public:

    virtual float get_CharacterSpacing();
    virtual void set_CharacterSpacing(float value);
    virtual float get_LineSpacing();
    virtual void set_LineSpacing(float value);
    virtual float get_HorizontalScaling();
    virtual void set_HorizontalScaling(float value);
    virtual float get_WordSpacing();
    virtual void set_WordSpacing(float value);
    virtual float get_FontSize();
    virtual void set_FontSize(float value);
    virtual System::SharedPtr<Aspose::Pdf::Text::Font> get_Font();
    virtual void set_Font(System::SharedPtr<Aspose::Pdf::Text::Font> value);
    virtual System::SharedPtr<Color> get_ForegroundColor();
    virtual void set_ForegroundColor(System::SharedPtr<Color> value);
    virtual bool get_Underline();
    virtual void set_Underline(bool value);
    virtual System::SharedPtr<Color> get_BackgroundColor();
    virtual void set_BackgroundColor(System::SharedPtr<Color> value);
    virtual void set_FontStyle(FontStyles value);
    virtual Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    virtual void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    
    virtual void ApplyChangesFrom(System::SharedPtr<TextState> textState);
    
    TextState();
    TextState(double fontSize);
    TextState(System::Drawing::Color foregroundColor);
    TextState(System::Drawing::Color foregroundColor, double fontSize);
    TextState(System::String fontFamily);
    TextState(System::String fontFamily, bool bold, bool italic);
    TextState(System::String fontFamily, double fontSize);
    
protected:

    bool get_underline();
    void set_underline(bool value);
    System::SharedPtr<Color> get_backgroundColor();
    void set_backgroundColor(System::SharedPtr<Color> value);
    float get_characterSpacing();
    void set_characterSpacing(float value);
    float get_lineSpacing();
    void set_lineSpacing(float value);
    System::SharedPtr<Aspose::Pdf::Text::Font> get_font();
    void set_font(System::SharedPtr<Aspose::Pdf::Text::Font> value);
    System::SharedPtr<Aspose::Pdf::DOM::Matrix> get_textMatrix();
    void set_textMatrix(System::SharedPtr<Aspose::Pdf::DOM::Matrix> value);
    float get_wordSpacing();
    void set_wordSpacing(float value);
    FontStyles get_fontStyle();
    void set_fontStyle(FontStyles value);
    float get_fontSize();
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
    TextState::AttachState get_AttachedState();
    void set_AttachedState(TextState::AttachState value);
    virtual System::SharedPtr<Aspose::Pdf::DOM::Matrix> get_TextMatrix();
    virtual void set_TextMatrix(System::SharedPtr<Aspose::Pdf::DOM::Matrix> value);
    virtual float get_TextHeight();
    virtual Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    virtual void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    System::SharedPtr<Color> get_foregroundColor();
    void set_foregroundColor(System::SharedPtr<Color> value);
    float get_horizontalScaling();
    void set_horizontalScaling(float value);
    virtual Aspose::Pdf::Engine::CommonData::Text::Segmenting::CoordinateOrigin get_coordinateOrigin();
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
    
    virtual double MeasureString(System::String str);
    virtual double CalculateFontSize(System::String str, System::SharedPtr<Rectangle> rect);
    
    TextState(System::SharedPtr<TextSegment> textSegment);
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::String tagName);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextState"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    void AttachStateProperties(System::SharedPtr<TextState> textState, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextState> physicalState);
    void ApplyChangesFromAttachedState(System::SharedPtr<TextState> textState);
    void RefreshBackgroundColor();
    static System::SharedPtr<Color> EngineColorToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> engineColor);
    void ClearMeasureCache();
    void FontOnFontPropertiesChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    double MeasureString(System::String str, bool insideLine);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextState__h_

