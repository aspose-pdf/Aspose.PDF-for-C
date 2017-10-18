#ifndef _Aspose_Pdf_Text_TextFragmentState_h_
#define _Aspose_Pdf_Text_TextFragmentState_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/eventargs.h>
#include <system/enum_helpers.h>

#include "Text/TextState_.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraphAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace XfaRenderer { class XfaTextRenderer; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }
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
///    font (<see cref="TextFragmentState.Font"/> property)
///    font size (<see cref="TextFragmentState.FontSize"/> property)
///    font style (<see cref="TextFragmentState.FontStyle"/> property)
///    foreground color (<see cref="TextFragmentState.ForegroundColor"/> property)
///    background color (<see cref="TextFragmentState.BackgroundColor"/> property)
/// Note that changing <see cref="TextFragmentState"/> properties may change inner <see cref="TextFragment.Segments"/> collection because TextFragment is an aggregate object 
/// and it may rearrange internal segments or merge them into single segment.
/// If your requirement is to leave the <see cref="TextFragment.Segments"/> collection unchanged, please change inner segments individually.
/// </remarks>
/// <example>
/// The example demonstrates how to change text color and font size of the text with <see cref="TextState"/> object.
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
/// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
/// // Accept the absorber for first page
/// doc.Pages[1].Accept(absorber);
/// // Change foreground color of the first text occurrence
/// absorber.TextFragments[1].TextState.ForegroundColor = Color.FromRgb(System.Drawing.Color.Red);
/// // Change font size of the first text occurrence
/// absorber.TextFragments[1].TextState.FontSize = 15;
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
    
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Text::TextParagraphAbsorber;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::XfaRenderer::XfaTextRenderer;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    
public:

    virtual float get_CharacterSpacing();
    virtual void set_CharacterSpacing(float value);
    virtual float get_HorizontalScaling();
    virtual void set_HorizontalScaling(float value);
    virtual float get_WordSpacing();
    virtual void set_WordSpacing(float value);
    virtual float get_LineSpacing();
    virtual void set_LineSpacing(float value);
    virtual System::SharedPtr<Color> get_ForegroundColor();
    virtual void set_ForegroundColor(System::SharedPtr<Color> value);
    virtual void set_BackgroundColor(System::SharedPtr<Color> value);
    virtual void set_Underline(bool value);
    virtual void set_FontStyle(FontStyles value);
    virtual System::SharedPtr<Aspose::Pdf::Text::Font> get_Font();
    virtual void set_Font(System::SharedPtr<Aspose::Pdf::Text::Font> value);
    virtual float get_FontSize();
    virtual void set_FontSize(float value);
    virtual Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    virtual void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    
    TextFragmentState(System::SharedPtr<TextFragment> fragment);
    
    virtual void ApplyChangesFrom(System::SharedPtr<TextState> textState);
    
protected:

    System::WeakPtr<TextFragment> get_Fragment();
    virtual System::SharedPtr<Aspose::Pdf::DOM::Matrix> get_TextMatrix();
    virtual void set_TextMatrix(System::SharedPtr<Aspose::Pdf::DOM::Matrix> value);
    bool get_IsSingleState();
    virtual Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    virtual void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    virtual float get_TextHeight();
    virtual Aspose::Pdf::Engine::CommonData::Text::Segmenting::CoordinateOrigin get_coordinateOrigin();
    virtual void set_coordinateOrigin(Aspose::Pdf::Engine::CommonData::Text::Segmenting::CoordinateOrigin value);
    
    virtual double MeasureString(System::String str);
    void ApplyChangesFrom(System::SharedPtr<TextState> textState, bool groupChangesOnly);
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter);
    void SyncVerticalAlignment(Aspose::Pdf::VerticalAlignment verticalAlignment);
    void SyncHorizontalAlignment(Aspose::Pdf::HorizontalAlignment horizontalAlignment);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextFragmentState"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::WeakPtr<TextFragment> pr_Fragment;
    
    void set_Fragment(System::SharedPtr<TextFragment> value);
    
    bool groupPreparationMode;
    bool prepareIsolateToSingleSegmentDone;
    bool _isSingleState;
    
    void set_IsSingleState(bool value);
    
    void OnRectChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    void ResetGroupPreparations();
    void PrepareIsolateToSingleSegment();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextFragmentState_h_

