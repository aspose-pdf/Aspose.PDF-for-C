#ifndef _Aspose_Pdf_Text_TextBuilder_h_
#define _Aspose_Pdf_Text_TextBuilder_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace XfaRenderer { class PdfDocumentBuilder; } }
namespace Aspose { namespace XfaRenderer { class XfaTextRenderer; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class BaseOperatorCollection; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Appends text object to Pdf page.
/// </summary>
class ASPOSE_PDF_SHARED_API TextBuilder FINAL : public System::Object
{
    typedef TextBuilder ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::XfaRenderer::PdfDocumentBuilder;
    friend class Aspose::XfaRenderer::XfaTextRenderer;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    
public:

    /// <summary>
    /// Initializes a new instance of <see cref="TextBuilder"/> class for the Pdf page.
    /// </summary>
    /// <remarks>
    /// The TextBuilder allows to append text objects to Pdf pages.
    /// </remarks>
    /// <param name="page">Page object.</param>
    TextBuilder(System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Initializes a new instance of <see cref="TextBuilder"/> class for the Pdf page.
    /// </summary>
    /// <remarks>
    /// The TextBuilder allows to append text objects to Pdf pages.
    /// </remarks>
    /// <param name="page">Page object.</param>
    /// <param name="operatorCollection">Operator collection.</param>
    TextBuilder(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<BaseOperatorCollection> operatorCollection);
    
    /// <summary>
    /// Appends text paragraph to Pdf page.
    /// </summary> 
    /// <example>
    /// The example demonstrates how to create text paragraph object and append it to the Pdf page.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// System::SharedPtr<Page> page = System::StaticCast<Aspose::Pdf::Page>(doc->get_Pages()->idx_get(1));
    /// // create text paragraph
    /// System::SharedPtr<Aspose::Pdf::Text::TextParagraph> paragraph = System::MakeObject<Aspose::Pdf::Text::TextParagraph>();
    /// // set the paragraph rectangle
    /// paragraph->set_Rectangle(System::MakeObject<Rectangle>(100, 600, 200, 700));
    /// // set word wrapping options
    /// paragraph->get_FormattingOptions()->set_WrapMode(Aspose::Pdf::Text::TextOptions::TextFormattingOptions::WordWrapMode::ByWords);
    /// // append string lines
    /// paragraph->AppendLine(L"the quick brown fox jumps over the lazy dog");
    /// paragraph->AppendLine(L"line2");
    /// paragraph->AppendLine(L"line3");
    /// // append the paragraph to the Pdf page with the TextBuilder
    /// System::SharedPtr<Aspose::Pdf::Text::TextBuilder> textBuilder = System::MakeObject<Aspose::Pdf::Text::TextBuilder>(page);
    /// textBuilder->AppendParagraph(paragraph);
    /// // save Pdf document
    /// doc->Save(outFile);
    /// </code> 
    /// </example>
    /// <param name="textParagraph">Text paragraph object.</param>
    void AppendParagraph(System::SharedPtr<TextParagraph> textParagraph);
    /// <summary>
    /// Appends text fragment to Pdf page
    /// </summary>
    /// <example>
    /// The example demonstrates how to create text fragment object, customize it's text segments and append it to the Pdf page.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(inFile);
    /// System::SharedPtr<Page> page = System::StaticCast<Aspose::Pdf::Page>(doc->get_Pages()->idx_get(1));
    /// // create text fragment
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragment> tf = System::MakeObject<Aspose::Pdf::Text::TextFragment>(L"main text");
    /// tf->set_Position(System::MakeObject<Aspose::Pdf::Text::Position>(100, 600));
    /// // set it's text properties
    /// tf->get_TextState()->set_FontSize(5);
    /// tf->get_TextState()->set_Font(Aspose::Pdf::Text::FontRepository::FindFont(L"TimesNewRoman"));
    /// tf->get_TextState()->set_BackgroundColor(Color::get_LightGray());
    /// tf->get_TextState()->set_ForegroundColor(Color::get_Red());
    /// // add one more segment to text fragment's Segments collection
    /// System::SharedPtr<Aspose::Pdf::Text::TextSegment> segment2 = System::MakeObject<Aspose::Pdf::Text::TextSegment>();
    /// segment2->set_Text(L"another segment");
    /// tf->get_Segments()->Add(segment2);
    // create TextBuilder object
    /// System::SharedPtr<Aspose::Pdf::Text::TextBuilder> builder = System::MakeObject<Aspose::Pdf::Text::TextBuilder>(page);
    /// // append the text fragment to the Pdf page
    /// builder->AppendText(tf);
    /// //save document
    /// doc->Save(outFile);
    /// </code> 
    /// </example>
    /// <param name="textFragment">Text fragment object.</param>
    void AppendText(System::SharedPtr<TextFragment> textFragment);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> get_Segmenter();
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    
    TextBuilder(System::SharedPtr<XForm> xForm);
    
    void AppendText(System::SharedPtr<TextFragment> textFragment, bool savePreviousState);
    /// <summary>
    /// Appends text with rotation
    /// </summary>
    void AppendText(System::SharedPtr<TextFragment> textFragment, int32_t rotation, bool savePreviousState);
    /// <summary>
    /// Appends paragraph with rotation
    /// </summary>
    /// <param name="textParagraph"></param>
    /// <param name="rotation"></param>
    void AppendParagraph(System::SharedPtr<TextParagraph> textParagraph, int32_t rotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Page> page;
    System::SharedPtr<XForm> xForm;
    System::SharedPtr<BaseOperatorCollection> operators;
    int32_t itemsAdded;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextBuilder_h_

