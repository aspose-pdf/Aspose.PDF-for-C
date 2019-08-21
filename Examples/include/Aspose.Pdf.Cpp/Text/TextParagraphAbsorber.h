#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.
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
/// Performs text search and provides access to search results via <see cref="TextParagraphAbsorber::TextParagraphs"/> collection.
/// </summary>
class ASPOSE_PDF_SHARED_API TextParagraphAbsorber FINAL : public Aspose::Pdf::Text::TextAbsorber
{
    typedef TextParagraphAbsorber ThisType;
    typedef Aspose::Pdf::Text::TextAbsorber BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    
public:

    /// <summary>
    /// Gets collection of search occurrences that are presented with <see cref="TextParagraph"/> objects.
    /// </summary>
    System::SharedPtr<TextParagraphCollection> get_TextParagraphs();
    /// <summary>
    /// Gets collection of search occurrences that are presented with <see cref="TextParagraph"/> objects.
    /// </summary>
    void set_TextParagraphs(System::SharedPtr<TextParagraphCollection> value);
    /// <summary>
    /// Gets ractangles that the <see cref="TextParagraphAbsorber"/> used to searche for text paragraphs on the PDF document or page.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Rectangle>> get_Rectangles();
    /// <summary>
    /// Sets ractangles that the <see cref="TextParagraphAbsorber"/> used to searche for text paragraphs on the PDF document or page.
    /// </summary>
    void set_Rectangles(System::ArrayPtr<System::SharedPtr<Rectangle>> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextParagraphAbsorber"/> with rectangles collection.  
    /// </summary>
    /// <remarks>
    /// The absorber will sarch for text and return paragraphs corresponding to the rectangles.
    /// </remarks>
    /// <param name="rectangles">The paragraphs' rectangles.</param>
    TextParagraphAbsorber(System::ArrayPtr<System::SharedPtr<Rectangle>> rectangles);
    
    /// <summary>
    /// Performs search on the specified page.
    /// </summary>
    virtual void Visit(System::SharedPtr<Page> page);
    
protected:

    System::SharedPtr<TextBuilder> tb;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<System::SharedPtr<Rectangle>> _rectangles;
    System::SharedPtr<TextParagraphCollection> Selected;
    
    void Init(System::ArrayPtr<System::SharedPtr<Rectangle>> rectangles);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif



