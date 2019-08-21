#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class ParagraphAbsorber; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Text { class MarkupSection; } } }
namespace Aspose { namespace Pdf { namespace Text { class MarkupParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Matrix; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Page markup represented by collections of <see cref="MarkupSection"/> and <see cref="MarkupParagraph"/>.
/// </summary>
class ASPOSE_PDF_SHARED_API PageMarkup FINAL : public System::Object
{
    typedef PageMarkup ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::ParagraphAbsorber;
    
public:

    /// <summary>
    /// Gets processed page number.
    /// </summary>
    int32_t get_Number();
    /// <summary>
    /// Gets processed page rectangle.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets collection of <see cref="MarkupSection"/> that was found on the page.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>> get_Sections();
    /// <summary>
    /// Gets collection of <see cref="MarkupParagraph"/> that was found on the page.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> get_Paragraphs();
    /// <summary>
    /// Gets collection of <see cref="TextFragment"/> that was found on the page.
    /// </summary>
    /// <remarks>
    /// The <see cref="TextFragment"/> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
    /// </remarks>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> get_TextFragments();
    /// <summary>
    /// Gets value that indicates whether starting text lines of a next section may be treated as continuation of the last paragraph of a previous section.
    /// </summary>
    bool get_IsMulticolumnParagraphsAllowed();
    /// <summary>
    /// Sets value that indicates whether starting text lines of a next section may be treated as continuation of the last paragraph of a previous section.
    /// </summary>
    void set_IsMulticolumnParagraphsAllowed(bool value);
    
protected:

    /// <summary>
    /// Gets collection of <see cref="MarkupSection"/> that was found on the page.
    /// </summary>
    void set_Sections(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>> value);
    System::ArrayPtr<std::vector<uint8_t>> get_Grid();
    
    PageMarkup();
    
    /// <summary>
    /// Initializes this <see cref="PageMarkup"/> with page object.
    /// </summary>
    /// <param name="page">Page object</param>
    void Attach(System::SharedPtr<Page> page);
    /// <summary>
    /// Distributes page (markup) text fragments for sections.
    /// </summary>
    void DistributeFragmentsForSections();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int32_t _number;
    System::SharedPtr<Aspose::Pdf::Rectangle> _pageRectangle;
    int32_t _scaleFactor;
    bool _isMulticolumnParagraphs;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>> _sections;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> _paragraphs;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> _fragments;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> _junkFragments;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> _startlessParagraphs;
    System::ArrayPtr<std::vector<uint8_t>> _grid;
    
    void FillGrid(System::SharedPtr<Matrix> reversedMatrix);
    /// <summary>
    /// Rebuilds paragraphs using 'cross-section' rule
    /// </summary>
    void ToCrossSectionParagraphs();
    /// <summary>
    /// Rebuilds paragraphs using 'isolated section' rule
    /// </summary>
    void ToIsolatedSectionParagraphs();
    /// <summary>
    /// Gets all paragraphs that is left from the specifified x-coordinate starting from most lower right one
    /// </summary>
    /// <param name="x">X-coordinate of the vertical line left from that search will be performed.</param>
    /// <returns>List of MarkupParagraph objects</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> GetParagraphsLeft(double x);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


