#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace LicenseManagement { class RestrictionChecker; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class BaseOperatorCollection; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { class Document; } }
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
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::TextStamp;
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
    /// <code lang="C#"> 
    /// Document doc = new Document(inFile);
    /// 
    /// Page page = (Page)doc.Pages[1];
    /// 
    /// // create text paragraph
    /// TextParagraph paragraph = new TextParagraph();
    ///            
    /// // set the paragraph rectangle
    /// paragraph.Rectangle = new Rectangle(100, 600, 200, 700);
    /// 
    /// // set word wrapping options
    /// paragraph.FormattingOptions.WrapMode = TextFormattingOptions.WordWrapMode.ByWords;
    /// 
    /// // append string lines
    /// paragraph.AppendLine("the quick brown fox jumps over the lazy dog");
    /// paragraph.AppendLine("line2");
    /// paragraph.AppendLine("line3");
    /// 
    /// // append the paragraph to the Pdf page with the TextBuilder
    /// TextBuilder textBuilder = new TextBuilder(page);
    /// textBuilder.AppendParagraph(paragraph);
    /// 
    /// // save Pdf document
    /// doc.Save(outFile);
    /// </code> 
    /// </example>
    /// <param name="textParagraph">Text paragraph object.</param>
    void AppendParagraph(System::SharedPtr<TextParagraph> textParagraph);
    /// <summary>
    /// Appends text fragment to Pdf page
    /// </summary>
    /// <example>
    /// The example demonstrates how to create text fragment object, customize it's text segments and append it to the Pdf page.
    /// <code lang="C#"> 
    /// Document doc = new Document(inFile);
    /// Page page = (Page)doc.Pages[1];
    /// 
    /// // create text fragment
    /// TextFragment tf = new TextFragment("main text");
    /// tf.Position = new Position(100, 600);
    /// 
    /// // set it's text properties
    /// tf.TextState.FontSize = 5;
    /// tf.TextState.Font = FontRepository.FindFont("TimesNewRoman");
    /// tf.TextState.BackgroundColor = Color.LightGray;
    /// tf.TextState.ForegroundColor = Color.Red;
    /// 
    /// // add one more segment to text fragment's Segments collection
    /// TextSegment segment2 = new TextSegment();
    /// segment2.Text = "another segment";
    /// 
    /// tf.Segments.Add(segment2);
    /// 
    /// // create TextBuilder object
    /// TextBuilder builder = new TextBuilder(page);
    /// 
    /// // append the text fragment to the Pdf page
    /// builder.AppendText(tf);
    /// 
    /// //save document
    /// doc.Save(outFile);
    /// </code> 
    /// </example>
    /// <param name="textFragment">Text fragment object.</param>
    void AppendText(System::SharedPtr<TextFragment> textFragment);
    
protected:

    System::SharedPtr<Document> _document;
    
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> get_Segmenter();
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    
    TextBuilder(System::SharedPtr<XForm> xForm);
    
    void AppendText(System::SharedPtr<TextFragment> textFragment, bool savePreviousState);
    /// <summary>
    /// Appends text with rotation
    /// </summary>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void AppendText(System::SharedPtr<TextFragment> textFragment, int32_t rotation, bool savePreviousState);
    /// <summary>
    /// Appends paragraph with rotation
    /// </summary>
    /// <param name="textParagraph"></param>
    /// <param name="rotation"></param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void AppendParagraph(System::SharedPtr<TextParagraph> textParagraph, int32_t rotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::LicenseManagement::RestrictionChecker> rc;
    System::SharedPtr<Aspose::Pdf::Page> page;
    System::SharedPtr<XForm> xForm;
    System::SharedPtr<BaseOperatorCollection> operators;
    int32_t itemsAdded;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


