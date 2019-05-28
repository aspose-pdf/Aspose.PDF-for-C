#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class PageMarkup; } } }
namespace Aspose { namespace Pdf { namespace Text { class ParagraphAbsorber; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { namespace Text { class MarkupParagraph; } } }
namespace Aspose { namespace Pdf { class Matrix; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a markup section - the rectangular region of a page that contains text and can be visually divided from another text blocks.
/// </summary>
class ASPOSE_PDF_SHARED_API MarkupSection FINAL : public System::Object
{
    typedef MarkupSection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::PageMarkup;
    friend class Aspose::Pdf::Text::ParagraphAbsorber;
    
public:

    /// <summary>
    /// Section rectangle
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Collection of not empty <see cref="TextFragment"/> objects that are inside the section.
    /// </summary>
    /// <remarks>
    /// The <see cref="TextFragment"/> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
    /// </remarks>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> get_Fragments();
    /// <summary>
    /// Collection of <see cref="MarkupParagraph"/> objects that are inside the section.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> get_Paragraphs();
    
protected:

    int32_t get_ScaleFactor();
    System::SharedPtr<Matrix> get_TransformationMatrix();
    
    MarkupSection(System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Matrix> matrix);
    MarkupSection(System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Matrix> matrix, int32_t scaleFactor);
    
    /// <summary>
    /// Picks text fragments associated with the section from input list. Returns list of remaining fragments.
    /// </summary>
    /// <param name="inList">List of input text fragments.</param>
    /// <returns>List of remaining text fragments.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> PickFragments(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> inList);
    void ProcessParagraghs();
    void TransformPoints(System::SharedPtr<Matrix> matrix);
    static bool IsSentenceEnding(char16_t c);
    static char16_t GetFirstNotSpace(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, bool fromEnd);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> _fragments;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> _paragraphs;
    int32_t _scaleFactor;
    System::SharedPtr<Matrix> _transformationMatrix;
    
    static System::SharedPtr<Matrix> GetNormalizationMatrix(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> fragments);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>>>> DistributeFragmentsForLines(System::SharedPtr<Matrix> normalizationMatrix);
    bool IsTextLineStartedFromCapitalLetter(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line);
    bool IsPreviousLineFull(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine, double maxRight);
    bool IsLineEndsWithHyphen(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line);
    bool IsHyphen(char16_t c);
    bool IsSuspiciousStarting(char16_t c);
    bool IsLineWithIndent(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine);
    bool IsFakeIndent(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine);
    double GetTextStart(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line);
    int32_t GetIndexOfFirstLetter(System::SharedPtr<TextFragment> textFragment);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


