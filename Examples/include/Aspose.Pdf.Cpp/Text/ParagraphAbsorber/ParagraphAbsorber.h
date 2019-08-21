#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class MarkupSection; } } }
namespace Aspose { namespace Pdf { namespace Text { class PageMarkup; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of page structure objects such as sections and paragraphs.
/// Performs search for sections and paragraphs of text and provides access for rectangles and polydons that describes it in text coordinate space. 
/// Also performs text segments search and provides access to search results via <see cref="TextFragments"/> collections grouped by structure elements.
/// </summary>
/// <remarks>
/// When the search is completed the <see cref="ParagraphAbsorber::PageMarkups"/> collection will contains <see cref="PageMarkup"/> objects that represents page structure by collections of <see cref="MarkupSection"/> and <see cref="MarkupParagraph"/>.
/// The <see cref="TextFragment"/> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
/// </remarks>
/// <example>
/// The example demonstrates how to find first text segment of each paragraph on the first PDF document page and highlight it.
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document("input.pdf");
/// 
/// // Create ParagraphAbsorber object
/// ParagraphAbsorber absorber = new ParagraphAbsorber();
/// 
/// // Accept the absorber for first page
/// absorber.Visit(doc.Pages[1]);
/// 
/// // Get markup object of first page
/// PageMarkup markup = absorber.PageMarkups[0];
/// 
/// // Loop through structure elements of the page text to find first text fragment of each paragraph
/// foreach (MarkupSection section in markup.Sections)
/// {
///     foreach (MarkupParagraph paragraph in section.Paragraphs)
///     {
///         TextFragment fragment = paragraph.Fragments[0];
///         // Update text properties
///         fragment.TextState.BackgroundColor = Color.LightBlue;
///     }
/// }
/// 
/// // Save document
/// doc.Save(GetOutputPath("output.pdf"));
/// </code> 
/// </example>
class ASPOSE_PDF_SHARED_API ParagraphAbsorber : public System::Object
{
    typedef ParagraphAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::MarkupSection;
    friend class Aspose::Pdf::Text::PageMarkup;
    
public:

    /// <summary>
    /// Gets collection of <see cref="PageMarkup"/> that were absorbed.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PageMarkup>>> get_PageMarkups();
    /// <summary>
    /// Gets value that instructs how many times sequential searches for more fine elements of structure will be performed.
    /// Default search depth is 3.
    /// It means three searches for horizontally divided sections (headers, paragraphs etc) and three searches for vertically divided ones (columns).
    /// </summary>
    /// <remarks>
    /// Increasing of this value may lead to minor decreasing performance with no visible changes in search result.
    /// Decreasing of this value may lead to incorrect determination of paragraphs in sections.
    /// We are not recommend to set value less than default if you aren't desire to get only 'rough' elements of page structure. 
    /// </remarks>
    int32_t get_SectionsSearchDepth();
    /// <summary>
    /// Sets value that instructs how many times sequential searches for more fine elements of structure will be performed.
    /// Default search depth is 3.
    /// It means three searches for horizontally divided sections (headers, paragraphs etc) and three searches for vertically divided ones (columns).
    /// </summary>
    /// <remarks>
    /// Increasing of this value may lead to minor decreasing performance with no visible changes in search result.
    /// Decreasing of this value may lead to incorrect determination of paragraphs in sections.
    /// We are not recommend to set value less than default if you aren't desire to get only 'rough' elements of page structure. 
    /// </remarks>
    void set_SectionsSearchDepth(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="ParagraphAbsorber"/> that performs search for sections/paragraphs of the document or page.
    /// </summary>
    ParagraphAbsorber();
    /// <summary>
    /// Initializes a new instance of the <see cref="ParagraphAbsorber"/> that performs search for sections/paragraphs of the document or page.
    /// </summary>
    /// <remarks>
    /// See <see cref="ParagraphAbsorber::SectionsSearchDepth"/> property for more hints about the parameter. 
    /// </remarks>
    /// <param name="sectionsSearchDepth">Number of sequential searches for more fine elements of structure that will be performed.</param>
    ParagraphAbsorber(int32_t sectionsSearchDepth);
    
    /// <summary>
    /// Performs search for sections & paragraphs on the specified <see cref="Document"/>.
    /// </summary>
    /// <param name="doc">Pdf pocument object.</param>
    void Visit(System::SharedPtr<Document> doc);
    /// <summary>
    /// Performs search on the specified <see cref="Page"/>.
    /// </summary>
    /// <param name="page">Pdf pocument page object.</param>
    void Visit(System::SharedPtr<Page> page);
    
protected:

    static System::ArrayPtr<int32_t> GetGridIndicesForRect(System::SharedPtr<Rectangle> rect, double scaleFactor);
    static System::SharedPtr<Rectangle> GetRectFromGridByIndices(System::ArrayPtr<int32_t> indices, double scaleFactor);
    static int32_t GetGridIndexForX(double x, double scaleFactor);
    static bool IsNullOrWhitespace(System::String str);
    static bool IsCapitalLetter(char16_t c);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int32_t _sectionsSearchDepth;
    double _minBreakingHorizontalFillingLevel;
    double _minBreakingVerticalFillingLevel;
    int32_t _minBreakingHorizontalFillingOnGrid;
    int32_t _minBreakingVerticalFillingOnGrid;
    double _maxUnbreakingVLength;
    double _maxUnbreakingHLength;
    int32_t _maxUnbreakingVLengthOnGrid;
    int32_t _maxUnbreakingHLengthOnGrid;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PageMarkup>>> _markups;
    System::String _errors;
    
    void ProcessMarkupSections(System::SharedPtr<PageMarkup> markup);
    void Split4Horizontal(System::SharedPtr<MarkupSection> section, System::ArrayPtr<std::vector<uint8_t>> grid, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>>& outSections);
    void Split4Vertical(System::SharedPtr<MarkupSection> section, System::ArrayPtr<std::vector<uint8_t>> grid, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>>& outSections);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>> SortSections(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>> unsortedSections);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


