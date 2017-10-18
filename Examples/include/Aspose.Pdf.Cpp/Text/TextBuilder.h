#ifndef _Aspose_Pdf_Text_TextBuilder_h_
#define _Aspose_Pdf_Text_TextBuilder_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    TextBuilder(System::SharedPtr<Aspose::Pdf::Page> page);
    TextBuilder(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<BaseOperatorCollection> operatorCollection);
    
    void AppendParagraph(System::SharedPtr<TextParagraph> textParagraph);
    void AppendText(System::SharedPtr<TextFragment> textFragment);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> get_Segmenter();
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    
    TextBuilder(System::SharedPtr<XForm> xForm);
    
    void AppendText(System::SharedPtr<TextFragment> textFragment, bool savePreviousState);
    void AppendText(System::SharedPtr<TextFragment> textFragment, int32_t rotation, bool savePreviousState);
    void AppendParagraph(System::SharedPtr<TextParagraph> textParagraph, int32_t rotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextBuilder"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

