#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/eventargs.h>
#include <system/enum_helpers.h>
#include <system/collections/dictionary.h>
#include <cstdint>

#include "Text/TextState_.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { class Heading; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_12; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFormattingOptions; } } }
namespace Aspose { namespace Pdf { namespace Text { class TabStops; } } }
namespace Aspose { namespace Pdf { class Matrix; } }
namespace Aspose { namespace Pdf { namespace Text { enum class TextRenderingMode; } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace Text { enum class FontStyles; } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { enum class CoordinateOrigin; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a text state of a text fragment.
/// </summary>
/// <remarks>
/// Provides a way to change following properties of the text:
///    font (<see cref="TextFragmentState::Font"/> property)
///    font size (<see cref="TextFragmentState::FontSize"/> property)
///    font style (<see cref="TextFragmentState::FontStyle"/> property)
///    foreground color (<see cref="TextFragmentState::ForegroundColor"/> property)
///    background color (<see cref="TextFragmentState::BackgroundColor"/> property)
/// 
/// Note that changing <see cref="TextFragmentState"/> properties may change inner <see cref="TextFragment::Segments"/> collection because TextFragment is an aggregate object 
/// and it may rearrange internal segments or merge them into single segment.
/// If your requirement is to leave the <see cref="TextFragment::Segments"/> collection unchanged, please change inner segments individually.
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
/// // Change font size of the first text occurrence
/// absorber.TextFragments[1].TextState.FontSize = 15;
/// 
/// // Save document
/// doc.Save(@"D:\Tests\output.pdf");  
/// </code>
/// </example>
/// <seealso cref="TextFragmentAbsorber"/>
/// <seealso cref="Document"/>
class ASPOSE_PDF_SHARED_API TextFragmentState FINAL : public Aspose::Pdf::Text::TextState
{
    typedef TextFragmentState ThisType;
    typedef Aspose::Pdf::Text::TextState BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    
public:

    /// <summary>
    /// Gets or sets character spacing of the text, represented by the <see cref="TextFragment"/> object.
    /// </summary>
    virtual float get_CharacterSpacing();
    /// <summary>
    /// Gets or sets character spacing of the text, represented by the <see cref="TextFragment"/> object.
    /// </summary>
    virtual void set_CharacterSpacing(float value);
    /// <summary>
    /// Gets or sets horizontal scaling of the text, represented by the <see cref="TextFragment"/> object.
    /// </summary>
    virtual float get_HorizontalScaling();
    /// <summary>
    /// Gets or sets horizontal scaling of the text, represented by the <see cref="TextFragment"/> object.
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
    /// Gets or sets invisibility of the text.
    /// </summary>
    virtual bool get_Invisible();
    /// <summary>
    /// Gets or sets invisibility of the text.
    /// </summary>
    virtual void set_Invisible(bool value);
    /// <summary>
    /// Gets or sets rendering mode of the text.
    /// </summary>
    virtual TextRenderingMode get_RenderingMode();
    /// <summary>
    /// Gets or sets rendering mode of the text.
    /// </summary>
    virtual void set_RenderingMode(TextRenderingMode value);
    /// <summary>
    /// Gets or sets subscript of the text, represented by the <see cref="TextFragment"/> object.
    /// </summary>
    virtual bool get_Subscript();
    /// <summary>
    /// Gets or sets subscript of the text, represented by the <see cref="TextFragment"/> object.
    /// </summary>
    virtual void set_Subscript(bool value);
    /// <summary>
    /// Gets or sets superscript of the text, represented by the <see cref="TextFragment"/> object.
    /// </summary>
    virtual bool get_Superscript();
    /// <summary>
    /// Gets or sets superscript of the text, represented by the <see cref="TextFragment"/> object.
    /// </summary>
    virtual void set_Superscript(bool value);
    /// <summary>
    /// Gets tabstops for the text. 
    /// </summary>
    /// <remarks>
    /// Note that Tabstops property works in new document generation scenarios only.
    /// Tabstops may be added during <see cref="TextFragment"/> initialization. Tabstops must be constructed before the text.
    /// </remarks>
    System::SharedPtr<Aspose::Pdf::Text::TabStops> get_TabStops();
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
    /// Gets or sets foreground color of the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual System::SharedPtr<Color> get_ForegroundColor();
    /// <summary>
    /// Gets or sets foreground color of the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual void set_ForegroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets or sets color stroking operations of <see cref="TextFragment"/> rendering (stroke text, rectangle border)
    /// </summary>
    virtual System::SharedPtr<Color> get_StrokingColor();
    /// <summary>
    /// Gets or sets color stroking operations of <see cref="TextFragment"/> rendering (stroke text, rectangle border)
    /// </summary>
    virtual void set_StrokingColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Sets background color of the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    /// Sets background color of the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual void set_BackgroundColor(System::SharedPtr<Color> value);
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
    virtual void set_StrikeOut(bool value);
    /// <summary>
    /// Sets font style of the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual void set_FontStyle(FontStyles value);
    /// <summary>
    /// Gets or sets font of the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual System::SharedPtr<Aspose::Pdf::Text::Font> get_Font();
    /// <summary>
    /// Gets or sets font of the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual void set_Font(System::SharedPtr<Aspose::Pdf::Text::Font> value);
    /// <summary>
    /// Gets or sets font size of the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual float get_FontSize();
    /// <summary>
    /// Gets or sets font size of the text, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual void set_FontSize(float value);
    /// <summary>
    /// Gets or sets horizontal alignment for the text. 
    /// </summary>
    /// <remarks>
    /// HorizontalAlignment.None is equal to HorizontalAlignment.Left.
    /// 
    /// Note that TextFragmentState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Gets or sets horizontal alignment for the text. 
    /// </summary>
    /// <remarks>
    /// HorizontalAlignment.None is equal to HorizontalAlignment.Left.
    /// 
    /// Note that TextFragmentState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets or sets formatting options.
    /// Setting of the options will be effective in generator scenarios only.
    /// </summary>
    System::SharedPtr<TextFormattingOptions> get_FormattingOptions();
    /// <summary>
    /// Gets or sets formatting options.
    /// Setting of the options will be effective in generator scenarios only.
    /// </summary>
    void set_FormattingOptions(System::SharedPtr<TextFormattingOptions> value);
    /// <summary>
    /// Gets or sets rotation angle in degrees.
    /// </summary>
    double get_Rotation();
    /// <summary>
    /// Gets or sets rotation angle in degrees.
    /// </summary>
    void set_Rotation(double value);
    bool get_DrawTextRectangleBorder();
    void set_DrawTextRectangleBorder(bool value);
    
    /// <summary>
    /// Measures the string.
    /// </summary>
    /// <param name="str">The string.</param>
    /// <returns></returns>
    virtual double MeasureString(System::String str);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextFragmentState"/> object with specified <see cref="TextFragment"/> object.
    /// This <see cref="TextFragmentState"/> initialization is not supported.
    /// TextFragmentState is only available with <see cref="TextFragment::TextState"/> property.
    /// </summary>
    /// <param name="fragment">Text fragment object.</param>
    TextFragmentState(System::SharedPtr<TextFragment> fragment);
    
    /// <summary>
    /// Applies settings from another textState. 
    /// </summary>
    /// <remarks>
    /// Only those properties will be copied that were changed explicitly.
    /// </remarks>
    /// <param name="textState">Text state object.</param>
    virtual void ApplyChangesFrom(System::SharedPtr<TextState> textState);
    
protected:

    System::SharedPtr<TextFragment> get_Fragment();
    void set_Fragment(System::SharedPtr<TextFragment> value);
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
    /// Gets / sets a value indicates that text bounding box height will be enlarged by PhysicalTextSegment.BBoxFontSizeCoefficient. Default is true.
    /// Please don't change this default. Set value to false to avoide text rectangle intersection with nearest objects in the case of problems.
    /// </summary>
    bool get_IsBBoxFontSizeCoefficientApplied();
    /// <summary>
    /// Gets / sets a value indicates that text bounding box height will be enlarged by PhysicalTextSegment.BBoxFontSizeCoefficient. Default is true.
    /// Please don't change this default. Set value to false to avoide text rectangle intersection with nearest objects in the case of problems.
    /// </summary>
    void set_IsBBoxFontSizeCoefficientApplied(bool value);
    /// <summary>
    /// Gets a value that indicates that all child <see cref="TextSegment"/> objects have the same state (font, font size, foreground color etc.)
    /// Not supported yet.
    /// </summary>
    bool get_IsSingleState();
    /// <summary>
    /// Gets tabstops for the text. 
    /// </summary>
    /// <remarks>
    /// Note that Tabstops property works in new document generation scenarios only.
    /// Tabstops may be added during <see cref="TextFragment"/> initialization. Tabstops must be constructed before the text.
    /// </remarks>
    void set_TabStops(System::SharedPtr<Aspose::Pdf::Text::TabStops> value);
    /// <summary>
    /// Gets or sets vertical alignment for the text inside paragrph's <see cref="Rectangle"/>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// 
    /// Note that TextFragmentState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Gets or sets vertical alignment for the text inside paragrph's <see cref="Rectangle"/>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// 
    /// Note that TextFragmentState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// Gets text height, represented by the <see cref="TextFragment"/> object
    /// </summary>
    virtual float get_TextHeight();
    /// <summary>
    /// AB: At the moment, it is only effective if set earlier than physical segments will be attached
    /// </summary>
    virtual Aspose::Pdf::Engine::CommonData::Text::Segmenting::CoordinateOrigin get_coordinateOrigin();
    /// <summary>
    /// AB: At the moment, it is only effective if set earlier than physical segments will be attached
    /// </summary>
    virtual void set_coordinateOrigin(Aspose::Pdf::Engine::CommonData::Text::Segmenting::CoordinateOrigin value);
    
    /// <summary>
    /// Applies settings from another textState
    /// </summary>
    /// <param name="textState">Text state object.</param>
    /// <param name="groupChangesOnly">if true inherit group changes only (without isolating the segments into single segment)</param> 
    void ApplyChangesFrom(System::SharedPtr<TextState> textState, bool groupChangesOnly);
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter);
    void SyncVerticalAlignment(Aspose::Pdf::VerticalAlignment verticalAlignment);
    void SyncHorizontalAlignment(Aspose::Pdf::HorizontalAlignment horizontalAlignment);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::WeakPtr<TextFragment> pr_Fragment;
    bool groupPreparationMode;
    bool prepareIsolateToSingleSegmentDone;
    bool isBBoxFontSizeCoefficientApplied;
    System::SharedPtr<TextFormattingOptions> formattingOptions;
    bool _isSingleState;
    System::SharedPtr<Aspose::Pdf::Text::TabStops> tabStops;
    double rotation;
    
    /// <summary>
    /// Gets a value that indicates that all child <see cref="TextSegment"/> objects have the same state (font, font size, foreground color etc.)
    /// Not supported yet.
    /// </summary>
    void set_IsSingleState(bool value);
    
    bool pr_DrawTextRectangleBorder;
    
    void OnRectChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    void ResetGroupPreparations();
    void PrepareIsolateToSingleSegment();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


