#ifndef _Aspose_Pdf_Text_TextOptions_TextSearchOptions_h_
#define _Aspose_Pdf_Text_TextOptions_TextSearchOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Text/TextOptions/TextOptions.h"

namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Text {

namespace TextOptions {

/// <summary>
/// Represents text search options
/// </summary>
class ASPOSE_PDF_SHARED_API TextSearchOptions FINAL : public Aspose::Pdf::Text::TextOptions::TextOptions
{
    typedef TextSearchOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets indication that regular expression is used.
    /// </summary>
    bool get_IsRegularExpressionUsed();
    /// <summary>
    /// Gets or sets indication that regular expression is used.
    /// </summary>
    void set_IsRegularExpressionUsed(bool value);
    /// <summary>
    /// Gets or sets indication that text is searched within the page bounds.
    /// </summary>
    bool get_LimitToPageBounds();
    /// <summary>
    /// Gets or sets indication that text is searched within the page bounds.
    /// </summary>
    void set_LimitToPageBounds(bool value);
    /// <summary>
    /// Gets or sets rectangle that bounds the searched text.
    /// </summary>
    /// <remarks>
    /// The property may be used in case it is required to delimit text extraction or text replace region.
    /// </remarks>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets or sets rectangle that bounds the searched text.
    /// </summary>
    /// <remarks>
    /// The property may be used in case it is required to delimit text extraction or text replace region.
    /// </remarks>
    void set_Rectangle(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets or sets indication that text will be searched using font engine encoding.
    /// true - means that font engine encoding will be used (try this if text search fails because of imperfect encoding in the document)
    /// false - means that document font encoding will be used (default value)
    /// </summary>
    bool get_UseFontEngineEncoding();
    /// <summary>
    /// Gets or sets indication that text will be searched using font engine encoding.
    /// true - means that font engine encoding will be used (try this if text search fails because of imperfect encoding in the document)
    /// false - means that document font encoding will be used (default value)
    /// </summary>
    void set_UseFontEngineEncoding(bool value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextSearchOptions"/> object.
    /// Specifies regular expression usage mode.
    /// </summary>
    /// <param name="isRegularExpressionUsed">Value that indicates that regularexpression is used.</param>
    TextSearchOptions(bool isRegularExpressionUsed);
    /// <summary>
    /// Initializes new instance of the <see cref="TextSearchOptions"/> object.
    /// Specifies rectangle that delimits the searched text.
    /// </summary>
    /// <param name="rectangle">Rectangle that includes the extracted text.</param>
    TextSearchOptions(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    /// <summary>
    /// Initializes new instance of the <see cref="TextSearchOptions"/> object.
    /// Specifies rectangle that delimits the searched text and regular expression usage mode.
    /// </summary>
    /// <param name="rectangle">Rectangle that includes the extracted text.</param>
    /// <param name="isRegularExpressionUsed">Value that indicates that regularexpression is used.</param>
    TextSearchOptions(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, bool isRegularExpressionUsed);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool isRegularExpressionUsed;
    bool limitToPageBounds;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    bool useFontEngineEncoding;
    
};

} // namespace TextOptions
} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextOptions_TextSearchOptions_h_

