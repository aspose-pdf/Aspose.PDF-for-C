#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.
//using FontStyle = Aspose.Fonts.FontStyle;
//using PatternColorSpace = Aspose.Pdf.Drawing.PatternColorSpace;
//using Type1Font = Aspose.Pdf.Engine.CommonData.Text.Fonts.Type1Font;

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include "CommonData/Text/Segmenting/TextSegmentBuilder.h"
#include "CommonData/Text/EncodedString.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class ArrayTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class StringTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { class IResourceDictionary; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextState; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextContainer; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { namespace MarkedContent { class Paragraph; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class MeasureCache; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { enum class CoordinateOrigin; } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextEditOptions; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfString; } } } }
namespace Aspose { namespace Fonts { class IFont; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class IPdfFont; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { namespace Settings { enum class NoCharacterAction; } } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Graphics { namespace Colors { class IColor; } } } } } }
namespace Aspose { namespace Pdf { namespace Drawing { class PatternColorSpace; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Drawing { class GradientAxialShading; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class GradientRadialShading; } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class PdfString; } } } }
namespace Aspose { namespace Pdf { namespace Text { enum class FontStyles; } } }
namespace Aspose { namespace Pdf { namespace Text { enum class TextRenderingMode; } } }
namespace Aspose { namespace Pdf { namespace Text { enum class TabLeaderType; } } }
namespace Aspose { namespace Fonts { class Matrix; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { class Subpath; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { class TextRelatedGraphicElement; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace FontChoosingStrategies { class IFontChoosingStrategy; } } } } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace CommonData {

namespace Text {

namespace Segmenting {

/// <summary>
/// text segment behavior settings
/// </summary>
class TextSegmentSettings : public System::Object
{
    typedef TextSegmentSettings ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    bool SavePreviousState;
    bool UseFontEngineEncoding;
    bool SearchTextRelatedGraphics;
    int32_t StoredGraphicsElementsMaxCount;
    
    TextSegmentSettings();
    
};

/// <summary>
/// Segments group state
/// keeps data related to segment groups - fragments, paragraphs etc
/// </summary>
class SegmentsGroupState : public System::Object
{
    typedef SegmentsGroupState ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> ClipLinks;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> BgLinks;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> UnderlineLinks;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> StrikeOutLinks;
    
    bool get_IsGroupBorderDrawing();
    void set_IsGroupBorderDrawing(bool value);
    bool get_IsSearchForTextRelatedGraphics();
    void set_IsSearchForTextRelatedGraphics(bool value);
    
    SegmentsGroupState();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool pr_IsGroupBorderDrawing;
    bool pr_IsSearchForTextRelatedGraphics;
    
};

class ASPOSE_PDF_SHARED_API PhysicalTextSegmentStateData : public System::Object
{
    typedef PhysicalTextSegmentStateData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    
public:

    float get_FontSize();
    void set_FontSize(float value);
    
    PhysicalTextSegmentStateData();
    
protected:

    bool isFontSizeSet;
    bool isFontSet;
    
private:

    float fontSize;
    
};

/// <summary>
/// represents physical text segment.
/// wraps show text operators (Tj, TJ) with reading and updating logic
/// </summary>
class PhysicalTextSegment : public System::Object
{
    typedef PhysicalTextSegment ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::ArrayTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::StringTextSegment;
    
private:

    class BackgroundInfo : public System::Object
    {
        typedef BackgroundInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Graphics::Colors::IColor> color;
        bool backgroundForTechnicalSpacings;
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> OpLinks;
        
        BackgroundInfo();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    
public:

    System::SharedPtr<TextSegmentBuilder::OperatorLink> opLink;
    System::SharedPtr<TextSegmentBuilder::OperatorLink> btOpLink;
    System::SharedPtr<TextSegmentBuilder::OperatorLink> etOpLink;
    System::SharedPtr<TextSegmentBuilder::OperatorLink> opSetPositionLink;
    System::WeakPtr<TextSegmentBuilder> segmentBuilder;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> resources;
    double emulatedItalicAngle;
    System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> editOptions;
    
    double get_WordWidthDelta();
    double get_MinWidth();
    System::SharedPtr<TextSegmentSettings> get_SegmentSettings();
    /// <summary>
    /// extracted text of current physical segment (text show operator)
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextContainer> get_TextContainer();
    /// <summary>
    /// Gets actual text (may be null)
    /// </summary>
    System::String get_ActualText();
    /// <summary>
    /// Gets physical text (may be null)
    /// </summary>
    System::String get_PhysicalText();
    /// <summary>
    /// Text state (font, font size, color etc)
    /// </summary>
    System::SharedPtr<PhysicalTextState> get_TextState();
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::MarkedContent::Paragraph> get_Paragraph();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> get_ContainerText();
    void set_ContainerText(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> value);
    /// <summary>
    /// Gets value that indicates this physical segment has own underlining independent from TextSegment.
    /// </summary>
    bool get_IsUnderlined();
    /// <summary>
    /// Gets value of bBoxFontSizeCoefficient preset
    /// </summary>
    static double get_BBoxFontSizeCoefficient();
    /// <summary>
    /// Indicates whether left shift is allowed during fix segment position after modifying previous segment.
    /// Left shift will be denied when this segment looks as start of the new column of text.
    /// </summary>
    bool get_IsLeftShiftForFixPositionAllowed();
    /// <summary>
    /// Indicates whether left shift is allowed during fix segment position after modifying previous segment.
    /// Left shift will be denied when this segment looks as start of the new column of text.
    /// </summary>
    void set_IsLeftShiftForFixPositionAllowed(bool value);
    /// <summary>
    /// Link for segment that becomes right from current after isolation of this segment.
    /// Link is used to perform fix next segment position after modifying this segment.
    /// </summary>
    System::SharedPtr<TextSegmentBuilder::OperatorLink> get_RightSegmentToFixPosition();
    /// <summary>
    /// Link for segment that becomes right from current after isolation of this segment.
    /// Link is used to perform fix next segment position after modifying this segment.
    /// </summary>
    void set_RightSegmentToFixPosition(System::SharedPtr<TextSegmentBuilder::OperatorLink> value);
    
    /// <summary>
    /// Factory method to create appropriate physical segment implementation
    /// </summary>
    static System::SharedPtr<PhysicalTextSegment> CreateTextSegment(System::String actualText, System::SharedPtr<TextSegmentBuilder::OperatorLink> opLink, System::SharedPtr<TextSegmentBuilder::OperatorLink> btOpLink, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> resources, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::MarkedContent::Paragraph> paragraph, double xIndent, double yIndent, System::SharedPtr<PhysicalTextState> textState, System::SharedPtr<TextSegmentSettings> settings);
    /// <summary>
    /// Determines if the char index is adjustment space.
    /// returns false for non-array segment
    /// </summary>
    virtual bool IsAdjustmentSpace(int32_t charIndex);
    /// <summary>
    /// returns segment height (font size with all required matrix transformations)
    /// </summary>
    /// <returns></returns>
    double GetHeight();
    /// <summary>
    /// text x indent
    /// </summary>
    double GetXIndent(int32_t startIndex);
    /// <summary>
    /// text y indent
    /// </summary>
    double GetYIndent(int32_t startIndex);
    /// <summary>
    /// text y indent
    /// </summary>
    double GetYIndent(int32_t startIndex, CoordinateOrigin origin);
    /// <summary>
    /// Replaces text with new one
    /// </summary>
    /// <param name="newText">Text</param>
    virtual void ReplaceTextWith(Aspose::src::Engine::CommonData::Text::EncodedString newText) = 0;
    /// <summary>
    /// Replaces text with new one
    /// </summary>
    /// <param name="newText">Text</param>
    /// <param name="options">Object that describes options of text edit operations</param>
    virtual void ReplaceTextWith(Aspose::src::Engine::CommonData::Text::EncodedString newText, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> options) = 0;
    /// <summary>
    /// updates contents stream text representation.
    /// it is required if font is changed, for example.
    /// </summary>
    virtual void UpdateContentsStringRepresentation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> encodedString) = 0;
    /// <summary>
    /// Splits the segment into several segments and leave this segment with given text
    /// </summary>
    virtual bool Isolate(int32_t startCharIndex, int32_t endCharIndex, System::SharedPtr<PhysicalTextSegment>& segmentAfter);
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> TryAttachExistingFont(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, System::String writtenText);
    /// <summary>
    /// Sets font for specified physical segment
    /// <param name="baseFont">PdfFont from which new font will be created, if exists, this parameter can be null</param>
    /// <param name="commonFont">Aspose.Pdf.Text.Font from which new font will be created, if exists, this parameter can be null</param>
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> AttachFont(System::SharedPtr<Aspose::Fonts::IFont> iFont, bool isEmbedded, bool isSubset, System::String writtenText, Settings::NoCharacterAction noCharacterAction, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> baseFont, System::SharedPtr<Aspose::Pdf::Text::Font> commonFont);
    /// <summary>
    /// This version of AttachFont functionality relies on such thing that newFont was corectly created and
    /// added to segment's resources. This method calls AttachFont(IPdfFont newFont, string fontResourseKey) to
    /// correctly update text operators for newFont and to update string representation for segment.
    /// This method used primarily for PDF_A conversion purposes.
    /// </summary>
    /// <param name="newFont">new font</param>
    /// <param name="fontResourseKey">name of resource for new font</param>
    void AttachFontAsIs(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> newFont, System::String fontResourseKey);
    /// <summary>
    /// Sets font size for segment
    /// </summary>
    bool SetFontSize(float newFontSize);
    void SetHorizontalScaling(float horizontalScaling);
    /// <summary>
    /// Set text matrix for the segment
    /// </summary>
    bool SetTextMatrix(System::ArrayPtr<double> matrix);
    /// <summary>
    /// Sets background color for group of segments (for example, for found phrase)
    /// </summary>
    static void SetGroupClipBox(System::SharedPtr<SegmentsGroupState> groupState, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::ArrayPtr<System::SharedPtr<PhysicalTextSegment>> segments, double llx, double lly, double width, double height);
    /// <summary>
    /// Gets rectangle for the characters range
    /// </summary>
    /// <param name="beginIndex"></param>
    /// <param name="endIndex"></param>
    /// <returns></returns>
    System::ArrayPtr<double> GetRectangle(int32_t beginIndex, int32_t endIndex, bool measureLastTechnicalSpacings);
    /// <summary>
    /// Sets background color for group of segments (for example, for found phrase)
    /// </summary>
    /// <param name="segments"></param>
    /// <param name="measureLastTechnicalSpacings"></param>
    static System::ArrayPtr<double> GetGroupRectangle(System::ArrayPtr<System::SharedPtr<PhysicalTextSegment>> segments, int32_t firstSegmentBeginIndex, int32_t lastSegmentEndIndex, bool measureLastTechnicalSpacings);
    /// <summary>
    /// Sets background color for group of segments (for example, for found phrase)
    /// </summary>
    /// <param name="segments"></param>
    /// <param name="measureLastTechnicalSpacings"></param>
    static System::ArrayPtr<double> GetGroupUnderlineRectangle(System::ArrayPtr<System::SharedPtr<PhysicalTextSegment>> segments, int32_t firstSegmentBeginIndex, int32_t lastSegmentEndIndex, bool measureLastTechnicalSpacings);
    /// <summary>
    /// removes background color
    /// </summary>
    static void RemoveGroupBackgroundColor(System::SharedPtr<SegmentsGroupState> groupState, System::SharedPtr<TextSegmentBuilder> segmentBuilder);
    /// <summary>
    /// removes group underline color
    /// </summary>
    static void RemoveGroupUnderline(System::SharedPtr<SegmentsGroupState> groupState, System::SharedPtr<TextSegmentBuilder> segmentBuilder);
    /// <summary>
    /// removes group strikeout state
    /// </summary>
    static void RemoveGroupStrikeOut(System::SharedPtr<SegmentsGroupState> groupState, System::SharedPtr<TextSegmentBuilder> segmentBuilder);
    /// <summary>
    /// removes clipbox
    /// </summary>
    static void RemoveGroupClipBox(System::SharedPtr<SegmentsGroupState> groupState, System::SharedPtr<TextSegmentBuilder> segmentBuilder);
    /// <summary>
    /// Sets strikeout
    /// </summary>
    /// <param name="backgroundForTechnicalSpacings"></param>
    void SetStrikeOut(bool backgroundForTechnicalSpacings);
    /// <summary>
    /// Removes strikeout objects
    /// </summary>
    void RemoveStrikeOut();
    /// <summary>
    /// Sets strikeout for group of segments (for example, for found phrase)
    /// </summary>
    static void SetGroupStrikeOut(System::SharedPtr<SegmentsGroupState> groupState, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::ArrayPtr<System::SharedPtr<PhysicalTextSegment>> segments, double llx, double lly, double width, double height, System::SharedPtr<Graphics::Colors::IColor> iColor, int32_t firstSegmentIndex, int32_t lastSegmentIndex);
    static void UpdateGroupStrikeOut(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> strikeoutLinks, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::SharedPtr<TextSegmentBuilder::OperatorLink> insertBeforeOp);
    /// <summary>
    /// Sets underline
    /// </summary>
    /// <param name="backgroundForTechnicalSpacings"></param>
    void SetUnderline(bool backgroundForTechnicalSpacings);
    /// <summary>
    /// Removes underline objects
    /// </summary>
    void RemoveUnderline();
    /// <summary>
    /// Sets background color for group of segments (for example, for found phrase)
    /// </summary>
    static void SetGroupUndeline(System::SharedPtr<SegmentsGroupState> groupState, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::ArrayPtr<System::SharedPtr<PhysicalTextSegment>> segments, double llx, double lly, double width, double height, System::SharedPtr<Graphics::Colors::IColor> iColor, int32_t firstSegmentIndex, int32_t lastSegmentIndex);
    static void UpdateGroupUnderline(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> underlineLinks, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::SharedPtr<TextSegmentBuilder::OperatorLink> insertBeforeOp);
    /// <summary>
    /// Sets background color for group of segments (for example, for found phrase)
    /// </summary>
    static void SetGroupBackgroundColor(System::SharedPtr<SegmentsGroupState> groupState, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> color, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::ArrayPtr<System::SharedPtr<PhysicalTextSegment>> segments, double llx, double lly, double width, double height);
    /// <summary>
    /// Sets background color
    /// </summary>
    void RemoveBackground();
    /// <summary>
    /// Sets background color
    /// </summary>
    /// <param name="color"></param>
    void SetBackgroundColor(System::SharedPtr<Graphics::Colors::IColor> color, bool backgroundForTechnicalSpacings);
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> PatternToEngineColor(System::SharedPtr<Drawing::PatternColorSpace> patternColorSpace, System::SharedPtr<Rectangle> rect);
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> AxialShadingPatternToEngineColor(System::SharedPtr<Aspose::Pdf::Drawing::GradientAxialShading> axial, System::SharedPtr<Rectangle> rect);
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> RadialShadingPatternToEngineColor(System::SharedPtr<Drawing::GradientRadialShading> radial, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Sets foreground color
    /// </summary>
    /// <param name="iColor"></param>
    void SetForegroundColor(System::SharedPtr<Graphics::Colors::IColor> iColor);
    /// <summary>
    /// Sets color for stroking operations (stroke text)
    /// </summary>
    /// <param name="iColor">IColor instance</param>
    void SetStrokingColor(System::SharedPtr<Graphics::Colors::IColor> iColor);
    /// <summary>
    /// Deletes the physical segment
    /// </summary>
    void Delete();
    /// <summary>
    /// Deletes the physical segment taking into account TextEditOptions object
    /// </summary>
    /// <param name="options"></param>
    void Delete(System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> options);
    /// <summary>
    /// Encodes string to write to pdf
    /// TODO: we need to reimplement this in the Engine fonts level. But this to be done later when this subsystem moleding is finished
    /// </summary>
    /// <param name="text">unicode string</param>
    /// <returns>raw pdf string data</returns>
    bool TryEncodeString(Aspose::src::Engine::CommonData::Text::EncodedString ligaturizedText, Settings::NoCharacterAction noCharacterAction, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString>& encodedString);
    /// <summary>
    /// measures text that the current operator represents
    /// takes into account adjustments of TJ command
    /// </summary>
    /// <returns></returns>
    double MeasureSegment();
    /// <summary>
    /// measures text that the current operator represents
    /// takes into account adjustments of TJ command
    /// </summary>
    /// <returns></returns>
    double MeasureSegment(bool measureLastTechnicalSpacings);
    /// <summary>
    /// compute shift of every parameter (string of number shift)
    /// </summary>
    /// <param name="parameters"></param>
    /// <returns></returns>
    virtual double MeasureSegment(int32_t beginIndex, int32_t endIndex, bool measureLastTechnicalSpacings) = 0;
    /// <summary>
    /// compute shift of every parameter (string of number shift)
    /// </summary>
    /// <param name="parameters"></param>
    /// <returns>width of segment and information about char spacings </returns>
    virtual double MeasureSegment(int32_t beginIndex, int32_t endIndex, bool measureLastTechnicalSpacings, double& charWidths, double& charSpacings, int32_t& charSpacingsCount) = 0;
    double TransformX(double x);
    double TransformY(double y);
    /// <summary>
    /// Transforms width
    /// </summary>
    /// <param name="w"></param>
    /// <returns></returns>
    double TransformWidth(double w);
    /// <summary>
    /// UnTransforms width
    /// </summary>
    /// <param name="w"></param>
    /// <returns></returns>
    double UnTransformWidth(double w);
    bool IsWordSpaceCalculationBlocked(System::SharedPtr<Aspose::Pdf::Engine::Data::PdfString> str);
    void SetEmulatedFontStyle(Aspose::Pdf::Text::FontStyles value);
    void SetPosition(float xIndent, float yIndent, CoordinateOrigin origin);
    /// <summary>
    /// Set character spacing value
    /// </summary>
    /// <param name="characterSpacing">Value of character spacing</param>
    void SetCharacterSpacing(double characterSpacing);
    /// <summary>
    /// Set word spacing value
    /// </summary>
    /// <param name="wordSpacing">Value of word spacing</param>
    void SetWordSpacing(double wordSpacing);
    /// <summary>
    /// Set rendering mode
    /// </summary>
    /// <param name="mode">Value of text rendering mode</param>
    void SetRenderingMode(Aspose::Pdf::Text::TextRenderingMode mode);
    void ApplyStateChanges(System::SharedPtr<PhysicalTextSegmentStateData> _stateData);
    System::SharedPtr<PhysicalTextSegmentStateData> GetStateData();
    System::String GetActualTextLeftPart();
    void ProcessTabLeader(Aspose::Pdf::Text::TabLeaderType tabLeaderType, double leaderLength);
    void SetSuperScript(bool isSscript);
    void SetSubScript(bool isSscript);
    /// <summary>
    /// Modifies segment operators to avoid Tw and make spacing with Td or glyph positioning.
    /// </summary>
    // This is for PDFNET-41984.
    virtual void ProcessTwOperatorForCompositeFonts();
    /// <summary>
    /// Searches for operators that used for orginizing text underline for current text block. If those operators are found it will be removed.
    /// </summary>
    /// <param name="outRect">Contains rectange for restore </param>
    /// <returns></returns>
    bool TryProcessUnderlineFromSource(System::SharedPtr<Rectangle>& outRect);
    /// <summary>
    /// Restore underlining for another segments after removing third party underlining for this segment.
    /// </summary>
    /// <param name="thirdPartyUnderlineRect">Rectangle where was source underlining.</param>
    void UpdateUnderlineFromSource(System::SharedPtr<Rectangle> thirdPartyUnderlineRect);
    /// <summary>
    /// Restore underlining for another segments after removing third party underlining for this segment.
    /// </summary>
    /// <param name="underlineSubpath">Subpath of underlining.</param>
    void UpdateUnderlineFromSource(System::SharedPtr<Subpath> underlineSubpath);
    System::SharedPtr<Subpath> PeekUnderliningFromRelatedSubpaths(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Subpath>>> subpaths);
    System::SharedPtr<Subpath> PeekBackgroundFromRelatedSubpaths(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Subpath>>> subpaths);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Subpath>>> SearchInGraphicsForRelatedSubpaths(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextRelatedGraphicElement>>> graphicElements);
    void RemoveSubpathOperators(System::SharedPtr<Subpath> subpath);
    void SetMarkedContentWithProperty(System::String name, int32_t id);
    virtual bool IsAdjustmentForColumn(int32_t& columnParamIndex) = 0;
    virtual System::SharedPtr<PhysicalTextSegment> IsolateColumn(int32_t paramIndex) = 0;
    virtual void UpdateContentsStringShifts(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont>>> changedFonts);
    virtual void NormalizeSegment();
    virtual bool IsNormalizationNecessary(double leftAdjustmentNormalisationThreshold);
    virtual bool IsAllCapsWord(System::String text);
    System::String GetNoCharacterExceptionText(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> origFont, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> changedFont, System::String unicodeString);
    void SetUnderlineDelayedUpdate();
    
protected:

    double xIndent;
    double yIndent;
    System::SharedPtr<PhysicalTextState> textState;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::MarkedContent::Paragraph> paragraph;
    System::String actualText;
    System::String physicalText;
    System::String actualTextLeft;
    System::SharedPtr<TextSegmentSettings> settings;
    System::SharedPtr<MeasureCache> _measureCache;
    bool isDelayedUnderlineUpdate;
    
    /// <summary>
    /// base constructor
    /// </summary>
    PhysicalTextSegment(System::String actualText, System::SharedPtr<TextSegmentBuilder::OperatorLink> opLink, System::SharedPtr<TextSegmentBuilder::OperatorLink> btOpLink, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> resources, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::MarkedContent::Paragraph> paragraph, double xIndent, double yIndent, System::SharedPtr<PhysicalTextState> textState, System::SharedPtr<TextSegmentSettings> settings);
    
    /// <summary>
    /// Sets font for specified physical segment
    /// </summary>
    void AttachFont(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> newFont, System::String fontResourseKey);
    /// <summary>
    /// Sets font for specified physical segment
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> AttachFont(System::SharedPtr<Aspose::Fonts::IFont> iFont, bool isEmbedded, bool isSubset, System::String writtenText, Settings::NoCharacterAction noCharacterAction, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> baseFont, System::SharedPtr<Aspose::Pdf::Text::Font> commonFont, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString>& encodedString);
    void BeginPositionBreakOperation();
    void EndPositionBreakOperation();
    /// <summary>
    /// physical segment init method
    /// </summary>
    /// <param name="thisParams"></param>
    /// <param name="textPosShift">shift of the text - when the text is forcibly isolated it is often shifted</param>
    void InitWithParams(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> thisParams, double textPosShift);
    /// <summary>
    /// Decodes string of pdf text
    /// TODO: we need to reimplement this in the Engine fonts level. But this to be done later when this subsystem moleding is finished
    /// </summary>
    /// <param name="iPdfString">raw pdf string data</param>
    /// <returns>unicode string</returns>
    System::String DecodeString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> iPdfString);
    /// <summary>
    /// This method must be protected
    /// It doesn't substitute font and assumes that it encodes existing string (the string that must be able to be encoded successfully).
    /// </summary>
    /// <param name="ligaturizedText"></param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> EncodeString(System::String ligaturizedText);
    /// <summary>
    /// This method must be protected
    /// It doesn't substitute font and assumes that it encodes existing string (the string that must be able to be encoded successfully).
    /// </summary>
    /// <param name="ligaturizedText"></param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> EncodeString(Aspose::src::Engine::CommonData::Text::EncodedString ligaturizedText);
    double MeasureString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> str, int32_t& currentCharIndex, int32_t beginIndex, int32_t endIndex, bool measureLastTechnicalSpacings);
    System::SharedPtr<MeasureCache> GetMeasureCache(bool measureLastTechnicalSpacings);
    /// <summary>
    /// returns text that should be measured
    /// </summary>
    bool GetTextToMeasure(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> str, int32_t& currentCharIndex, int32_t beginIndex, int32_t endIndex, int32_t& thisStringBeginIndex, int32_t& thisStringEndIndex);
    double MeasureString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> str, int32_t beginIndex, int32_t endIndex, bool measureLastTechnicalSpacings);
    /// <summary>
    /// Updates underlying document
    /// </summary>
    void UpdateDocument();
    /// <summary>
    /// This method is called in case parameters were forcibly updated
    /// </summary>
    virtual void OnParametersInitialized() = 0;
    /// <summary>
    /// Returns parameters for isolated fragment (in case fragment splitting)
    /// </summary>
    /// <param name="indexFrom"></param>
    /// <param name="indexTo"></param>
    /// <returns></returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> GetIsolatedFragmentParameters(int32_t indexFrom, int32_t indexTo) = 0;
    /// <summary>
    /// Creates parameters list, specific for concrtete type of physical segment (TJ or Tj)
    /// </summary>
    /// <param name="text"></param>
    /// <returns></returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> GetIsolatedFragmentParameters(System::String text) = 0;
    /// <summary>
    /// creates operator, specific for concrete type of physical segment (TJ or Tj)
    /// </summary>
    /// <returns></returns>
    virtual System::SharedPtr<Operator> CreateSegmentOperator() = 0;
    double MeasureActualText(int32_t beginIndex, int32_t endIndex);
    void InitActualText(System::String actualText, System::String pdfPhysicalOrderText);
    virtual System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::FontChoosingStrategies::IFontChoosingStrategy>> GetFontChoosingStrategies();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextContainer> tc;
    System::SharedPtr<PhysicalTextSegment::BackgroundInfo> bgInfo;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> underlineOps;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> strikeoutOps;
    bool ulBackgroundForTechnicalSpacings;
    System::SharedPtr<TextSegmentBuilder::OperatorLink> rightSegmentToFixPosition;
    System::SharedPtr<TextSegmentBuilder::OperatorLink> rightSegmentMatrixOp;
    bool _isLeftShiftForFixPositionAllowed;
    System::SharedPtr<TextSegmentBuilder::OperatorLink> afterSegmentMatrixOp;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> fontStyleBoldEmulationOps;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> restoreFontStyleBoldEmulationOps;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> fontStyleItalicEmulationOps;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> restoreFontStyleItalicEmulationOps;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> tabLeaderOps;
    CoordinateOrigin coordinateOrigin;
    double _currentWordWidthDelta;
    double _minWidth;
    static double bBoxFontSizeCoefficient;
    bool isSuperscript;
    bool isSubscript;
    bool isSuperscriptPositionChanged;
    bool isSubscriptPositionChanged;
    bool _transformXIgnoreRotation;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> pr_ContainerText;
    double positionBreak_prevYIndent;
    
    bool SearchFontInResources(System::SharedPtr<Aspose::Fonts::IFont> iFont, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont>& pdfFont, System::String& fontResKey);
    void AddNewFont(System::SharedPtr<Aspose::Fonts::IFont> iFont, bool isEmbedded, bool isSubset, System::String writtenText, Settings::NoCharacterAction noCharacterAction, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> baseFont, System::SharedPtr<Aspose::Pdf::Text::Font> commonFont, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont>& newFont, System::String& fontResKey, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString>& registeredString);
    void AttachFont(System::String fontResourseKey, float fontSize);
    void AttachFontSimplified(System::String fontResourseKey, float fontSize);
    /// <summary>
    /// Removes strikeout oiperators
    /// </summary>
    void RemoveStrikeOutOps(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> strikeoutOps);
    /// <summary>
    /// Removes underline oiperators
    /// </summary>
    void RemoveUnderlineOps(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> underlineOps);
    static System::SharedPtr<System::Collections::Generic::List<System::ArrayPtr<double>>> GetBgRectanglesForSegmentLines(System::ArrayPtr<System::SharedPtr<PhysicalTextSegment>> segments, int32_t firstSegmentIndex, int32_t lastSegmentIndex);
    bool AreSimilarInLine(System::SharedPtr<PhysicalTextSegment> otherSegment);
    static void AddClipBox(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> clipLinks, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::SharedPtr<TextSegmentBuilder::OperatorLink> btOpLink, System::SharedPtr<TextSegmentBuilder::OperatorLink> lastOpLink, double xIndent, double yIndent, double width, double height);
    static void DrawBackgroundRectangle(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> bgLinks, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::SharedPtr<TextSegmentBuilder::OperatorLink> insertBeforeBTOp, System::SharedPtr<Graphics::Colors::IColor> color, double xIndent, double yIndent, double width, double height, double angle, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> strokingColor);
    static void DrawUnderline(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> underlineLinks, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::SharedPtr<TextSegmentBuilder::OperatorLink> insertBeforeOp, System::SharedPtr<Graphics::Colors::IColor> color, double xIndent, double yIndent, double width, double height, double angle);
    static void DrawDashLeader(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> tabLeaderLinks, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::SharedPtr<TextSegmentBuilder::OperatorLink> insertBeforeOp, System::SharedPtr<Graphics::Colors::IColor> color, double xIndent, double yIndent, double width, double height);
    static void DrawDotLeader(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> tabLeaderLinks, System::SharedPtr<TextSegmentBuilder> segmentBuilder, System::SharedPtr<TextSegmentBuilder::OperatorLink> insertBeforeOp, System::SharedPtr<Graphics::Colors::IColor> color, double xIndent, double yIndent, double width, double height);
    void UpdateBackground();
    void UpdateUnderline();
    void UpdateStrikeOut();
    void InitializeColorOperator(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> iColor, System::SharedPtr<Operator> newColorOperator);
    static System::SharedPtr<Operator> CreateSimpleColorOperator(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> iColor);
    static System::SharedPtr<Operator> CreateSimpleStrokingColorOperator(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> iColor);
    /// <summary>
    /// generates new font resource key
    /// TODO: probably we should move this code to some common helper class
    /// </summary>
    /// <param name="fontDict"></param>
    /// <returns></returns>
    System::String GetNextFontResourceKey(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> fontDict);
    /// <summary>
    /// Gets font for actual text
    /// actually actualText is not physically linked to document's font and it is just unicode string
    /// so, we have to leverage system font to measure the text etc
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Aspose::Fonts::IFont> GetActualTextFont();
    System::String RemoveSpecialCharacters(System::String text);
    bool AreFontSubstitutionWarningsEnabled(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> textStateFont);
    /// <summary>
    /// The purpose of this method to return index to insert PostMatrix(Tm) before. 
    /// </summary>
    /// <param name="lastOp"></param>
    /// <returns></returns>
    int32_t GetPostMatrixIndex(System::SharedPtr<TextSegmentBuilder::OperatorLink> lastOp);
    /// <summary>
    /// Calculates rotation angle from transformation matrix.
    /// </summary>
    /// <param name="matrix">Matrix.</param>
    /// <returns>Angle in radians;</returns>
    static double GetAngleFromMatrix(System::SharedPtr<Aspose::Fonts::Matrix> matrix);
    bool TryGetUnderlineFromContentsAfter(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>>& ulLinks);
    bool TryGetUnderlineFromContentsBefore(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>>& ulLinks);
    void RemoveUnbalancedOps(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>>& links);
    bool IsActualUnderlineForThisSegment(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentBuilder::OperatorLink>>> uLinks, System::SharedPtr<Rectangle>& rect);
    System::SharedPtr<TextSegmentBuilder::OperatorLink> SetBeginMarkedContentWithPropertyBefore(int32_t index, System::String name, int32_t id);
    
};

} // namespace Segmenting
} // namespace Text
} // namespace CommonData
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


