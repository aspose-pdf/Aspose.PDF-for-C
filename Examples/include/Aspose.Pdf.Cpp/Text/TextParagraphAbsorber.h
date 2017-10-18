#ifndef _Aspose_Pdf_Text_TextParagraphAbsorber_h_
#define _Aspose_Pdf_Text_TextParagraphAbsorber_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.
// currently TextParagraphAbsorber is only available in Reporting services since it is tested on particular document kind

// C# preprocessor directive: #if UNIT_TEST || ASPOSE_PDF_SHAREPOINT || ASPOSE_PDF_REPORTING_SERVICES 


#include <system/shared_ptr.h>
#include <system/array.h>

#include "Text/TextAbsorber.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraphCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of text paragraphs.
/// Performs text search and provides access to search results via <see cref="TextParagraphAbsorber.TextParagraphs"/> collection.
/// </summary>
class ASPOSE_PDF_SHARED_API TextParagraphAbsorber FINAL : public Aspose::Pdf::Text::TextAbsorber
{
    typedef TextParagraphAbsorber ThisType;
    typedef Aspose::Pdf::Text::TextAbsorber BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    
public:

    System::SharedPtr<TextParagraphCollection> get_TextParagraphs();
    void set_TextParagraphs(System::SharedPtr<TextParagraphCollection> value);
    System::ArrayPtr<System::SharedPtr<Rectangle>> get_Rectangles();
    void set_Rectangles(System::ArrayPtr<System::SharedPtr<Rectangle>> value);
    
    TextParagraphAbsorber(System::ArrayPtr<System::SharedPtr<Rectangle>> rectangles);
    
    virtual void Visit(System::SharedPtr<Page> page);
    
protected:

    System::SharedPtr<TextBuilder> tb;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextParagraphAbsorber"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::ArrayPtr<System::SharedPtr<Rectangle>> _rectangles;
    System::SharedPtr<TextParagraphCollection> Selected;
    
    void Init(System::ArrayPtr<System::SharedPtr<Rectangle>> rectangles);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


#endif // _Aspose_Pdf_Text_TextParagraphAbsorber_h_

