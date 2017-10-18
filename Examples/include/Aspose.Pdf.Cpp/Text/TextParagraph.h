#ifndef _Aspose_Pdf_Text_TextParagraph_h_
#define _Aspose_Pdf_Text_TextParagraph_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Heading; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraphAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextFormattingOptions; } } } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }
namespace Aspose { namespace Pdf { namespace Text { class Position; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment_SegmentsGroupState; } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Background mode for TextParagraph
/// </summary>
class ASPOSE_PDF_SHARED_API TextParagraph FINAL : public System::Object
{
    typedef TextParagraph ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::Text::TextParagraphAbsorber;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    
protected:

    enum class TextBackgroundMode
    {
        WholeParagraph,
        LogicalLine
    };
    
    
private:

    class ASPOSE_PDF_SHARED_API IJustificationElement : public System::Object
    {
        typedef IJustificationElement ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    };
    
    class ASPOSE_PDF_SHARED_API JustificationWord : public Aspose::Pdf::Text::TextParagraph::IJustificationElement
    {
        typedef JustificationWord ThisType;
        typedef Aspose::Pdf::Text::TextParagraph::IJustificationElement BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String get_Word();
        void set_Word(System::String value);
        int32_t get_StartPos();
        void set_StartPos(int32_t value);
        int32_t get_EndPos();
        void set_EndPos(int32_t value);
        System::SharedPtr<TextSegment> get_InitialSegment();
        void set_InitialSegment(System::SharedPtr<TextSegment> value);
        double get_Width();
        void set_Width(double value);
        double get_SpaceWidth();
        void set_SpaceWidth(double value);
        
        JustificationWord();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "JustificationWord"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::String pr_Word;
        int32_t pr_StartPos;
        int32_t pr_EndPos;
        System::SharedPtr<TextSegment> pr_InitialSegment;
        double pr_Width;
        double pr_SpaceWidth;
        
    };
    
    class ASPOSE_PDF_SHARED_API JustificationSpace : public Aspose::Pdf::Text::TextParagraph::IJustificationElement
    {
        typedef JustificationSpace ThisType;
        typedef Aspose::Pdf::Text::TextParagraph::IJustificationElement BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<TextSegment> get_InitialSegment();
        void set_InitialSegment(System::SharedPtr<TextSegment> value);
        double get_SpaceWidth();
        void set_SpaceWidth(double value);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "JustificationSpace"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<TextSegment> pr_InitialSegment;
        double pr_SpaceWidth;
        
    };
    
    
public:

    Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    float get_SubsequentLinesIndent();
    void set_SubsequentLinesIndent(float value);
    bool get_Justify();
    void set_Justify(bool value);
    Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    System::SharedPtr<TextOptions::TextFormattingOptions> get_FormattingOptions();
    void set_FormattingOptions(System::SharedPtr<TextOptions::TextFormattingOptions> value);
    System::SharedPtr<Aspose::Pdf::Text::Position> get_Position();
    void set_Position(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    System::SharedPtr<Aspose::Pdf::Rectangle> get_TextRectangle();
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    void set_Rectangle(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    System::SharedPtr<MarginInfo> get_Margin();
    void set_Margin(System::SharedPtr<MarginInfo> value);
    
    TextParagraph();
    
    void BeginEdit();
    void EndEdit();
    void AppendLine(System::String line);
    void AppendLine(System::String line, float lineSpacing);
    void AppendLine(System::String line, System::SharedPtr<TextState> textState);
    void AppendLine(System::String line, System::SharedPtr<TextState> textState, float lineSpacing);
    void AppendLine(System::SharedPtr<TextFragment> line);
    void AppendLine(System::SharedPtr<TextFragment> line, System::SharedPtr<TextState> textState);
    void AppendLine(System::SharedPtr<TextFragment> line, System::SharedPtr<TextState> textState, float lineSpacing);
    
protected:

    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, float>> get_LineSpacings();
    
    int32_t updatePositioningCalls;
    
    System::SharedPtr<Color> get_BackgroundColor();
    void set_BackgroundColor(System::SharedPtr<Color> value);
    bool get_LimitWithBounds();
    void set_LimitWithBounds(bool value);
    bool get_PreserveOriginalLinespacing();
    void set_PreserveOriginalLinespacing(bool value);
    System::String get_HyphenSymbol();
    void set_HyphenSymbol(System::String value);
    System::SharedPtr<TextFragmentCollection> get_Lines();
    System::SharedPtr<TextFragmentCollection> get_RemainingLines();
    System::SharedPtr<Aspose::Pdf::Rectangle> get_TextBox();
    System::SharedPtr<Aspose::Pdf::DOM::Matrix> get_Matrix();
    void set_Matrix(System::SharedPtr<Aspose::Pdf::DOM::Matrix> value);
    bool get_OldCodeCompatibilityMode();
    void set_OldCodeCompatibilityMode(bool value);
    TextParagraph::TextBackgroundMode get_BackgroundMode();
    void set_BackgroundMode(TextParagraph::TextBackgroundMode value);
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment_SegmentsGroupState> get_GroupState();
    void set_GroupState(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment_SegmentsGroupState> value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment_SegmentsGroupState>>> get_LineGroupStates();
    void set_LineGroupStates(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment_SegmentsGroupState>>> value);
    
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextParagraph"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<TextFragmentCollection> outLines;
    System::SharedPtr<TextFragmentCollection> remainingLines;
    System::SharedPtr<TextFragmentCollection> inLines;
    bool updatingPositioning;
    System::SharedPtr<TextOptions::TextFormattingOptions> formattingOptions;
    System::SharedPtr<Aspose::Pdf::DOM::Matrix> matrix;
    System::SharedPtr<Aspose::Pdf::Text::Position> position;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    System::SharedPtr<Aspose::Pdf::Rectangle> textRectangle;
    System::SharedPtr<Aspose::Pdf::Rectangle> textBox;
    System::SharedPtr<Aspose::Pdf::Rectangle> insideMarginRect;
    System::SharedPtr<Aspose::Pdf::Text::Position> insideMarginPosition;
    System::SharedPtr<Aspose::Pdf::Rectangle> bgRectangle;
    System::SharedPtr<Aspose::Pdf::Rectangle> clipRectangle;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, float>> pr_LineSpacings;
    
    void set_LineSpacings(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, float>> value);
    
    System::SharedPtr<System::Object> sync;
    System::SharedPtr<MarginInfo> marginInfo;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    Aspose::Pdf::HorizontalAlignment horizontalAlignment;
    System::SharedPtr<Color> backgroundColor;
    bool isAttached;
    int32_t clipsCount;
    System::String hyphenSymbol;
    bool limitWithBounds;
    bool isEditing;
    int32_t suspendedUpdateRequest;
    float subsequentLinesIndent;
    bool preserveOriginalLinespacing;
    static const float DefaultSpacing;
    bool _oldCodeCompatibilityMode;
    TextParagraph::TextBackgroundMode _backgroundMode;
    static const int32_t MagicDeltaHeight;
    static const int32_t FontLinedeltaHeight;
    static const int32_t DeltaLeft;
    static const int32_t DeltaRight;
    static const int32_t DeltaHeight;
    static const int32_t DeltaUp;
    static const int32_t DeltaBottom;
    static const int32_t EmulatedItalicRightCorrection;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment_SegmentsGroupState> _groupState;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment_SegmentsGroupState>>> _lineGroupStates;
    
    System::SharedPtr<Aspose::Pdf::Rectangle> get_InsideMarginRectangle();
    System::SharedPtr<Aspose::Pdf::Text::Position> get_InsideMarginPosition();
    
    void UpdateTextRectangle(double textHeight, double textMaxWidth, double &dx, double &dy);
    void UpdateMatrixCoordinates();
    void UpdatePositioningInEditingMode();
    void UpdatePositioning();
    void UpdatePositioning(bool forceUpdate);
    void ShiftSegment(double shiftDx, double shiftDy);
    double DoWrapPositioning();
    float GetLineIndent(bool isFirstLine);
    double DoNoWrapPositioning();
    static System::SharedPtr<TextFragment> NewFragmentBasedOnExisting(System::SharedPtr<TextFragment> existingFragment);
    void AddLineToRemaining(System::SharedPtr<TextFragment> inLine);
    static void SkipSpaces(int32_t &j, int32_t charCount, System::String txt);
    bool FlushPotentialLine(System::SharedPtr<TextFragment> outLine, bool fillRemainingLines, System::SharedPtr<TextSegmentCollection> remainingLine, System::SharedPtr<TextSegmentCollection> potentialLine, double nextLineShift, float indent, bool isLastSubline);
    void PositionSegmentsLeft(System::SharedPtr<TextSegmentCollection> ponentialLine, double nextLineShift, float indent);
    void PositionSegmentsCenter(System::SharedPtr<TextSegmentCollection> ponentialLine, double nextLineShift, float indent);
    void PositionSegmentsRight(System::SharedPtr<TextSegmentCollection> ponentialLine, double nextLineShift, float indent);
    void PositionSegmentsJustify(System::SharedPtr<TextSegmentCollection> ponentialLine, double nextLineShift, float indent);
    double ComputeLineShift(int32_t currentLineIndex, System::SharedPtr<TextSegmentCollection> ponentialLine);
    static void AddNewLine(int32_t &lineIndex, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentCollection>>> newLines);
    float GetLineSpacingBeforeIndex(System::SharedPtr<TextSegmentCollection> line, int32_t i);
    System::SharedPtr<TextSegment> CreateNewSegment(System::String text, System::SharedPtr<TextState> state, bool allowAttachment);
    void ClearPhysicalSegments();
    void FlushDetachedProperties();
    void FlushBGColor();
    void FlushClipBox();
    double ComputeMaxTextHeight(System::SharedPtr<TextSegmentCollection> segments);
    void CorrectRegardingMatrix(System::SharedPtr<TextFragment> textFragment, System::SharedPtr<Aspose::Pdf::Rectangle> newRect);
    System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment>> LinesToSegments();
    void ResetBoxProperties();
    void SplitAndAddSublines(System::String line, System::SharedPtr<TextState> textState, float lineSpacing);
    void SubstituteToChunksAndAddSublines(System::String line, System::SharedPtr<TextState> textState);
    bool IsSeparatorLastIn(System::SharedPtr<TextSegmentCollection> potentialLine);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextParagraph_h_

