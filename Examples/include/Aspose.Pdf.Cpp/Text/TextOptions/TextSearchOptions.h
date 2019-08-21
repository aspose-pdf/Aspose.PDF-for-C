#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Text/TextOptions/TextOptions.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents text search options
/// </summary>
class ASPOSE_PDF_SHARED_API TextSearchOptions FINAL : public Aspose::Pdf::Text::TextOptions
{
    typedef TextSearchOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter;
    friend class Aspose::Pdf::Text::TextAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    
public:

    /// <summary>
    /// Gets indication that regular expression is used.
    /// </summary>
    bool get_IsRegularExpressionUsed();
    /// <summary>
    /// Sets indication that regular expression is used.
    /// </summary>
    void set_IsRegularExpressionUsed(bool value);
    /// <summary>
    /// Gets indication that text is searched within the page bounds.
    /// </summary>
    bool get_LimitToPageBounds();
    /// <summary>
    /// Sets indication that text is searched within the page bounds.
    /// </summary>
    void set_LimitToPageBounds(bool value);
    /// <summary>
    /// Gets rectangle that bounds the searched text.
    /// </summary>
    /// <remarks>
    /// The property may be used in case it is required to delimit text extraction or text replace region.
    /// </remarks>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Sets rectangle that bounds the searched text.
    /// </summary>
    /// <remarks>
    /// The property may be used in case it is required to delimit text extraction or text replace region.
    /// </remarks>
    void set_Rectangle(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets indication that text will be searched using font engine encoding.
    /// true - means that font engine encoding will be used (try this if text search fails because of imperfect encoding in the document)
    /// false - means that document font encoding will be used (default value)
    /// </summary>
    bool get_UseFontEngineEncoding();
    /// <summary>
    /// Sets indication that text will be searched using font engine encoding.
    /// true - means that font engine encoding will be used (try this if text search fails because of imperfect encoding in the document)
    /// false - means that document font encoding will be used (default value)
    /// </summary>
    void set_UseFontEngineEncoding(bool value);
    /// <summary>
    /// Gets indication that text fragments representing shadow of normal text will be ignored during search.
    /// true - means that shadow text will not be found (try this if text search returns duplicated fragments on the close positions)
    /// false - means that shadow text will be found as well as normal text (default value)
    /// </summary>
    bool get_IgnoreShadowText();
    /// <summary>
    /// Sets indication that text fragments representing shadow of normal text will be ignored during search.
    /// true - means that shadow text will not be found (try this if text search returns duplicated fragments on the close positions)
    /// false - means that shadow text will be found as well as normal text (default value)
    /// </summary>
    void set_IgnoreShadowText(bool value);
    /// <summary>
    /// Gets indication that text extraction (decoding) errors will be logged in the text (fragment) absorber.
    /// true - means that text extraction (decoding) errors will be loged. It may decrease performance.
    /// false (default) - no error loging.
    /// </summary>
    bool get_LogTextExtractionErrors();
    /// <summary>
    /// Sets indication that text extraction (decoding) errors will be logged in the text (fragment) absorber.
    /// true - means that text extraction (decoding) errors will be loged. It may decrease performance.
    /// false (default) - no error loging.
    /// </summary>
    void set_LogTextExtractionErrors(bool value);
    /// <summary>
    /// Gets value that permits searching for text related graphics (underlining, background etc.) during text search.
    /// false - graphic elements that may present in source document will be ignored (default value).
    /// true - searching for text related graphics will be performed. It may decrease performance of text search and edit. It also may change graphical elements that look like text related.
    /// </summary>
    bool get_SearchForTextRelatedGraphics();
    /// <summary>
    /// Sets value that permits searching for text related graphics (underlining, background etc.) during text search.
    /// false - graphic elements that may present in source document will be ignored (default value).
    /// true - searching for text related graphics will be performed. It may decrease performance of text search and edit. It also may change graphical elements that look like text related.
    /// </summary>
    void set_SearchForTextRelatedGraphics(bool value);
    
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

    /// <summary>
    /// Gets indication that fast mode will be used during search.
    /// </summary>
    bool get_IsPerformance();
    /// <summary>
    /// Sets indication that fast mode will be used during search.
    /// </summary>
    void set_IsPerformance(bool value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool isRegularExpressionUsed;
    bool limitToPageBounds;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    bool useFontEngineEncoding;
    bool ignoreShadowText;
    bool isPerformance;
    bool logTextExtractionErrors;
    bool searchForGraphics;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


