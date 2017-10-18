#ifndef _Aspose_Pdf_Text_TextAbsorber_h_
#define _Aspose_Pdf_Text_TextAbsorber_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/text/string_builder.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextExtractionOptions; } } } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextSearchOptions; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of a text.
/// Performs text extraction and provides access to the result via <see cref="TextAbsorber.Text"/> object.
/// </summary>
/// <remarks>
/// The <see cref="TextAbsorber"/> object is used to extract text from a Pdf document or the document's page. 
/// </remarks>
/// <example>
/// The example demonstrates how to extract text on the first PDF document page.
/// <code lang="C#"> 
/// // open document
/// Document doc = new Document(inFile);
/// // create TextAbsorber object to extract text
/// TextAbsorber absorber = new TextAbsorber();
/// // accept the absorber for first page
/// doc.Pages[1].Accept(absorber);
/// // get the extracted text
/// string extractedText = absorber.Text;
/// </code> 
/// </example>
class ASPOSE_PDF_SHARED_API TextAbsorber : public System::Object
{
    typedef TextAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_Text();
    virtual System::SharedPtr<TextOptions::TextExtractionOptions> get_ExtractionOptions();
    virtual void set_ExtractionOptions(System::SharedPtr<TextOptions::TextExtractionOptions> value);
    virtual System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> get_TextSearchOptions();
    virtual void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> value);
    
    virtual void Visit(System::SharedPtr<Page> page);
    virtual void Visit(System::SharedPtr<XForm> form);
    virtual void Visit(System::SharedPtr<Document> pdf);
    
    TextAbsorber();
    TextAbsorber(System::SharedPtr<TextOptions::TextExtractionOptions> extractionOptions);
    TextAbsorber(System::SharedPtr<TextOptions::TextExtractionOptions> extractionOptions, System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions);
    TextAbsorber(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextAbsorber"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Text::StringBuilder> extractedText;
    static const int32_t EvaluationCharsCount;
    System::SharedPtr<TextOptions::TextExtractionOptions> extractionOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> textSearchOptions;
    
    void Init();
    System::String GetTotalText(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, bool isFormatted);
    System::String GetExtractedText(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, bool isFormatted);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextAbsorber_h_

