#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class MarkupSection; } } }
namespace Aspose { namespace Pdf { namespace Text { class PageMarkup; } } }
namespace Aspose { namespace Pdf { namespace Text { class ParagraphAbsorber; } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class Matrix; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a paragraph.
/// </summary>
class ASPOSE_PDF_SHARED_API MarkupParagraph FINAL : public System::Object
{
    typedef MarkupParagraph ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::MarkupSection;
    friend class Aspose::Pdf::Text::PageMarkup;
    friend class Aspose::Pdf::Text::ParagraphAbsorber;
    
public:

    /// <summary>
    /// Points of polygon that describes paragraph.
    /// Starting point is lower left corner of the paragraph. And next points are in anti-clockwise sequence.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Point>> get_Points();
    /// <summary>
    /// Collection of not empty <see cref="TextFragment"/> objects of the paragraph.
    /// </summary>
    /// <remarks>
    /// The <see cref="TextFragment"/> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
    /// </remarks>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> get_Fragments();
    /// <summary>
    /// Lines of paragraph. Each line represented by list of text fragments.
    /// </summary>
    /// <remarks>
    /// The <see cref="TextFragment"/> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
    /// </remarks>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>>>> get_Lines();
    /// <summary>
    /// Gets <see cref="System::String"/> text object that the <see cref="MarkupParagraph"/> object represents.
    /// </summary>
    System::String get_Text();
    
protected:

    /// <summary>
    /// Gets <see cref="System::String"/> text object that the <see cref="MarkupParagraph"/> object represents.
    /// </summary>
    void set_Text(System::String value);
    System::SharedPtr<Matrix> get_NormalizationMatrix();
    
    MarkupParagraph();
    MarkupParagraph(System::SharedPtr<Matrix> normalizationMatrix);
    
    void TransformPoints(System::SharedPtr<Matrix> matrix);
    void AddPoints(System::ArrayPtr<System::SharedPtr<Point>> points);
    void ConstructPolygon();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<System::SharedPtr<Point>> _points;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> _fragments;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>>>> _lines;
    System::SharedPtr<Matrix> _normalizationMatrix;
    System::String text;
    
    System::String ConstructText();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


