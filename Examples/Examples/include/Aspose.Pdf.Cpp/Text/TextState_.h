﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.
//using System.Dynamic;

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

namespace Aspose { namespace Pdf { namespace Annotations { class WatermarkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class SearchablePdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class PageInfo; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentState; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextStateFlowTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class FormattedTextTests; } } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { class Matrix; } }
namespace Aspose { namespace Pdf { namespace Text { enum class TextRenderingMode; } } }
namespace Aspose { namespace Pdf { namespace Text { enum class FontStyles; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextState; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { enum class CoordinateOrigin; } } } } } }
namespace Aspose { namespace Pdf { namespace Text { enum class TabLeaderType; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegmentStateData; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Graphics { namespace Colors { class IColor; } } } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Graphics { namespace Colors { class RGBColor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Graphics { namespace Colors { class GrayColor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Graphics { namespace Colors { class CMYKColor; } } } } } }

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
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::PageInfo;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::Text::TextSegment;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Artifact;
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
        isVerticalAlignmentSet = 0x1000,
        isStrikeoutSet = 0x2000,
        isSubSuperscriptSet = 0x4000,
        isStrokingColorSet = 0x8000,
        isRenderingModeSet = 0x10000
    };
    DECLARE_FRIEND_ENUM_OPERATORS(Aspose::Pdf::Text::TextState::SetFlagsEnum);
    
    
    
public:

    System::String TabTag;
    float TabstopDefaultValue;
    
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
    /// 
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    virtual float get_LineSpacing();
    /// <summary>
    /// Gets or sets line spacing of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The LineSpacing property getter works for an object in case it was explicitly set previously with LineSpacing setter for those object.
    /// 
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
    /// Gets or sets subscript of the text.
    /// </summary>
    virtual bool get_Subscript();
    /// <summary>
    /// Gets or sets subscript of the text.
    /// </summary>
    virtual void set_Subscript(bool value);
    /// <summary>
    /// Gets or sets superscript of the text.
    /// </summary>
    virtual bool get_Superscript();
    /// <summary>
    /// Gets or sets superscript of the text.
    /// </summary>
    virtual void set_Superscript(bool value);
    /// <summary>
    /// Gets or sets word spacing of the text.
    /// </summary>
    virtual float get_WordSpacing();
    /// <summary>
    /// Gets or sets word spacing of the text.
    /// </summary>
    virtual void set_WordSpacing(float value);
    /// <summary>
    /// Gets or sets invisibility of the text. Obsolete. Please use RenderingMode instead.
    /// </summary>
    virtual bool get_Invisible();
    /// <summary>
    /// Gets or sets invisibility of the text. Obsolete. Please use RenderingMode instead.
    /// </summary>
    virtual void set_Invisible(bool value);
    /// <summary>
    /// Gets or sets rendering mode of text.
    /// </summary>
    virtual TextRenderingMode get_RenderingMode();
    /// <summary>
    /// Gets or sets rendering mode of text.
    /// </summary>
    virtual void set_RenderingMode(TextRenderingMode value);
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
    /// Gets or sets foreground color of the text.
    /// </summary>
    virtual System::SharedPtr<Color> get_StrokingColor();
    /// <summary>
    /// Gets or sets foreground color of the text.
    /// </summary>
    virtual void set_StrokingColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets or sets underline for the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual bool get_Underline();
    /// <summary>
    /// Gets or sets underline for the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual void set_Underline(bool value);
    /// <summary>
    /// Sets strikeout for the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual bool get_StrikeOut();
    /// <summary>
    /// Sets strikeout for the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual void set_StrikeOut(bool value);
    /// <summary>
    /// Sets background color of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The BackgroundColor property getter works for an object in case it was explicitly set previously with BackgroundColor setter for those object.
    /// 
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    virtual System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    /// Sets background color of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The BackgroundColor property getter works for an object in case it was explicitly set previously with BackgroundColor setter for those object.
    /// 
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
    /// 
    /// Note that TextState.HorizontalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Gets or sets horizontal alignment for the text. 
    /// </summary>
    /// <remarks>
    /// HorizontalAlignment.None is equal to HorizontalAlignment.Left.
    /// 
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
    /// Measures the string.
    /// </summary>
    /// <param name="str">The string.</param>
    /// <returns>Width of the string represented with this text state.</returns>
    virtual double MeasureString(System::String str);
    
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
    /// strikeout
    /// </summary>
    bool get_strikeout();
    /// <summary>
    /// strikeout
    /// </summary>
    void set_strikeout(bool value);
    /// <summary>
    /// superscript
    /// </summary>
    bool get_superscript();
    /// <summary>
    /// superscript
    /// </summary>
    void set_superscript(bool value);
    /// <summary>
    /// subscript
    /// </summary>
    bool get_subscript();
    /// <summary>
    /// subscript
    /// </summary>
    void set_subscript(bool value);
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
    System::SharedPtr<Matrix> get_textMatrix();
    /// <summary>
    /// text matrix
    /// </summary>
    void set_textMatrix(System::SharedPtr<Matrix> value);
    /// <summary>
    /// word spacing
    /// </summary>
    float get_wordSpacing();
    /// <summary>
    /// word spacing
    /// </summary>
    void set_wordSpacing(float value);
    /// <summary>
    /// text invisibility
    /// </summary>
    bool get_invisible();
    /// <summary>
    /// text invisibility
    /// </summary>
    void set_invisible(bool value);
    /// <summary>
    /// text rendering mode
    /// </summary>
    TextRenderingMode get_renderingMode();
    /// <summary>
    /// text rendering mode
    /// </summary>
    void set_renderingMode(TextRenderingMode value);
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
    /// <summary>
    /// please don't set this, use IsTextWithPositions
    /// </summary>
    bool get_isTextWithPositions();
    /// <summary>
    /// please don't set this, use IsTextWithPositions
    /// </summary>
    void set_isTextWithPositions(bool value);
    /// <summary>
    /// please don't set this, use Adjustments
    /// </summary>
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>> get_adjustments();
    /// <summary>
    /// please don't set this, use Adjustments
    /// </summary>
    void set_adjustments(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>> value);
    bool get_IsBackgroundColorSet();
    void set_IsBackgroundColorSet(bool value);
    bool get_IsUnderlineSet();
    void set_IsUnderlineSet(bool value);
    bool get_IsStrikeOutSet();
    void set_IsStrikeOutSet(bool value);
    bool get_IsCharacterSpacingSet();
    void set_IsCharacterSpacingSet(bool value);
    bool get_IsLineSpacingSet();
    void set_IsLineSpacingSet(bool value);
    bool get_IsFontSet();
    void set_IsFontSet(bool value);
    bool get_IsForegroundColorSet();
    void set_IsForegroundColorSet(bool value);
    bool get_IsStrokingColorSet();
    void set_IsStrokingColorSet(bool value);
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
    bool get_IsSubSuperscriptSet();
    void set_IsSubSuperscriptSet(bool value);
    bool get_IsRenderingModeSet();
    void set_IsRenderingModeSet(bool value);
    bool get_IsInvisibilitySet();
    void set_IsInvisibilitySet(bool value);
    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    TextState::AttachState get_AttachedState();
    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    void set_AttachedState(TextState::AttachState value);
    virtual System::SharedPtr<Matrix> get_TextMatrix();
    virtual void set_TextMatrix(System::SharedPtr<Matrix> value);
    /// <summary>
    /// indicates whether TextWithPositions (TJ) operator must be used
    /// </summary>
    virtual bool get_IsTextWithPositions();
    /// <summary>
    /// indicates whether TextWithPositions (TJ) operator must be used
    /// </summary>
    virtual void set_IsTextWithPositions(bool value);
    /// <summary>
    /// contains adjustments for TextWithPositions (TJ) operator
    /// </summary>
    virtual System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>> get_Adjustments();
    /// <summary>
    /// contains adjustments for TextWithPositions (TJ) operator
    /// </summary>
    virtual void set_Adjustments(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>> value);
    /// <summary>
    /// Gets text height.
    /// </summary>
    virtual float get_TextHeight();
    /// <summary>
    /// Gets or sets vertical alignment for the text inside paragrph's <see cref="Rectangle"/>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// 
    /// Note that TextState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Gets or sets vertical alignment for the text inside paragrph's <see cref="Rectangle"/>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// 
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
    /// stroking color
    /// </summary>
    System::SharedPtr<Color> get_strokingColor();
    /// <summary>
    /// stroking color
    /// </summary>
    void set_strokingColor(System::SharedPtr<Color> value);
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
    /// <summary>
    /// Tabstop shift of position of text segment. It is calculated by TextFragment. Shouldn't set it directly if you don't sure.
    /// </summary>
    double get_TabstopShift();
    /// <summary>
    /// Tabstop shift of position of text segment. It is calculated by TextFragment. Shouldn't set it directly if you don't sure.
    /// </summary>
    void set_TabstopShift(double value);
    /// <summary>
    /// Length of tab leader before text segment. It is calculated by TextFragment. Shouldn't set it directly if you don't sure.
    /// </summary>
    double get_TabLeaderLength();
    /// <summary>
    /// Length of tab leader before text segment. It is calculated by TextFragment. Shouldn't set it directly if you don't sure.
    /// </summary>
    void set_TabLeaderLength(double value);
    /// <summary>
    /// Type of tab leader before text segment. 
    /// </summary>
    Aspose::Pdf::Text::TabLeaderType get_TabLeaderType();
    /// <summary>
    /// Type of tab leader before text segment. 
    /// </summary>
    void set_TabLeaderType(Aspose::Pdf::Text::TabLeaderType value);
    int32_t get_SetFlags();
    void set_SetFlags(int32_t value);
    bool get_IsDefault();
    
    System::EventHandler<> OnFontChanged;
    System::EventHandler<> OnFontSizeChanged;
    
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment);
    void Detach();
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> ToEngineColorWithArea(System::SharedPtr<Color> color, System::SharedPtr<Rectangle> rect);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> ToEngineColorCommon(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> originalColor, System::SharedPtr<Color> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> ToEngineColor(System::SharedPtr<Color> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::RGBColor> ColorToEngineRGB(System::SharedPtr<Color> color);
    static System::SharedPtr<Color> EngineRGBToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::RGBColor> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::GrayColor> ColorToEngineGray(System::SharedPtr<Color> color);
    static System::SharedPtr<Color> GrayToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::GrayColor> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::CMYKColor> ColorToEngineCMYK(System::SharedPtr<Color> color);
    static System::SharedPtr<Color> CMYKToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::CMYKColor> color);
    
    TextState(System::SharedPtr<Color> backgroundColor, System::SharedPtr<Color> foregroundColor, FontStyles fontStyle, System::SharedPtr<Aspose::Pdf::Text::Font> font, float fontSize);
    TextState(System::Drawing::Color backgroundColor, System::Drawing::Color foregroundColor, FontStyles fontStyle, System::SharedPtr<Aspose::Pdf::Text::Font> font, float fontSize);
    
    void SetColorWithArea(System::SharedPtr<Color> color, System::SharedPtr<Rectangle> rect);
    void SetStrokingColorWithArea(System::SharedPtr<Color> color, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Searches for operators that used for orginizing text underline for current text block. If found it will be replaced for operators generated by our code.
    /// </summary>
    void UpdateUnderlineFromSource();
    
    TextState(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextState> physicalState);
    
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
    bool pr_strikeout;
    bool pr_superscript;
    bool pr_subscript;
    System::SharedPtr<Color> pr_backgroundColor;
    float pr_characterSpacing;
    float pr_lineSpacing;
    System::SharedPtr<Aspose::Pdf::Text::Font> pr_font;
    System::SharedPtr<Color> _foregroundColor;
    System::SharedPtr<Color> _strokingColor;
    float _horizontalScaling;
    bool _isSubscript;
    bool _isSuperscript;
    bool _isSubSuperscriptFontChanged;
    System::SharedPtr<Matrix> pr_textMatrix;
    float pr_wordSpacing;
    bool pr_invisible;
    TextRenderingMode pr_renderingMode;
    FontStyles pr_fontStyle;
    float pr_fontSize;
    bool pr_isTextWithPositions;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>> pr_adjustments;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextState> _physicalState;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment;
    System::WeakPtr<TextSegment> textSegment;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder> segmentBuilder;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    Aspose::Pdf::HorizontalAlignment horizontalAlignment;
    Aspose::Pdf::Engine::CommonData::Text::Segmenting::CoordinateOrigin origin;
    double _tabstopShift;
    double _tabLeaderLength;
    Aspose::Pdf::Text::TabLeaderType _tabLeaderType;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegmentStateData> stateData;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, double>> measureCache;
    bool pr_IsInvisibilitySet;
    int32_t setFlags;
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
    /// 
    /// in case part of the whole string is measured - the insideLine should be true.
    /// in case the whole string is measured the insideLine should be false. 
    /// 
    /// in other words:
    /// in case insideLine = true only character widhts are taken into account. no additional transformations are taken into account
    /// in case insideLine = false end of the string is handled properly - italic transformation is taken into account.
    /// </remarks>
    double MeasureString(System::String str, bool insideLine);
    
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Text::TextState::SetFlagsEnum);
DECLARE_USING_GLOBAL_OPERATORS
/*
    public class TaggedPDFTextState : TextState
    {
        public  Font Font
        {
            get
            {
                Font font = 
                base.Font;
                return
            }
        }
    }*/
} // namespace Text
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Text);



