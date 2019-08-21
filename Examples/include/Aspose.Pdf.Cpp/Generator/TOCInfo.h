#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Heading; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Text { enum class TabLeaderType; } } }
namespace Aspose { namespace Pdf { class ColumnInfo; } }
namespace Aspose { namespace Pdf { class LevelFormat; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { enum class NumberingStyle; } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents table of contents info.
/// </summary>
class ASPOSE_PDF_SHARED_API TocInfo FINAL : public System::Object
{
    typedef TocInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Gets column info.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::ColumnInfo> get_ColumnInfo();
    /// <summary>
    /// Sets column info.
    /// </summary>
    void set_ColumnInfo(System::SharedPtr<Aspose::Pdf::ColumnInfo> value);
    /// <summary>
    /// Gets format array for table of contents.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<LevelFormat>> get_FormatArray();
    /// <summary>
    /// Sets format array for table of contents.
    /// </summary>
    void set_FormatArray(System::ArrayPtr<System::SharedPtr<LevelFormat>> value);
    /// <summary>
    /// Gets format array length
    /// </summary>
    int32_t get_FormatArrayLength();
    /// <summary>
    /// Sets format array length
    /// </summary>
    void set_FormatArrayLength(int32_t value);
    /// <summary>
    /// Gets table of contents title.
    /// </summary>
    System::SharedPtr<Text::TextFragment> get_Title();
    /// <summary>
    /// Sets table of contents title.
    /// </summary>
    void set_Title(System::SharedPtr<Text::TextFragment> value);
    /// <summary>
    /// Gets is count or passed toc pages.
    /// </summary>
    bool get_IsCountTocPages();
    /// <summary>
    /// Sets is count or passed toc pages.
    /// </summary>
    void set_IsCountTocPages(bool value);
    /// Gets is show page numbers at Toc.
    /// </summary>
    bool get_IsShowPageNumbers();
    /// Sets is show page numbers at Toc.
    /// </summary>
    void set_IsShowPageNumbers(bool value);
    /// <summary>
    /// Gets TOC line dash.
    /// </summary>
    Text::TabLeaderType get_LineDash();
    /// <summary>
    /// Sets TOC line dash.
    /// </summary>
    void set_LineDash(Text::TabLeaderType value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TocInfo"/> class.
    /// </summary>
    TocInfo();
    
protected:

    /// <summary>
    /// Gets headings numbers for auto numnering(internal).
    /// </summary>
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> get_AutoNumbers();
    /// <summary>
    /// Gets TOC pages count(for internal use).
    /// </summary>
    int32_t get_PagesCount();
    /// <summary>
    /// Sets TOC pages count(for internal use).
    /// </summary>
    void set_PagesCount(int32_t value);
    /// <summary>
    /// Gets inserted toc number(for internal use).
    /// </summary>
    int32_t get_InsertedTocNumber();
    /// <summary>
    /// Sets inserted toc number(for internal use).
    /// </summary>
    void set_InsertedTocNumber(int32_t value);
    
    static System::String GetLabelNumber(int32_t number, NumberingStyle style);
    System::SharedPtr<Text::TextSegment> GetNumber(int32_t level, System::SharedPtr<Heading> heading);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> autoNumbers;
    System::SharedPtr<Aspose::Pdf::ColumnInfo> columnInfo;
    System::ArrayPtr<System::SharedPtr<LevelFormat>> formatArray;
    int32_t formatArrayIndex;
    int32_t pagesCount;
    int32_t insertedTocNumber;
    bool isCountTocPages;
    bool isShowPageNumbers;
    System::SharedPtr<Text::TextFragment> title;
    Text::TabLeaderType lineDash;
    static System::ArrayPtr<System::String> UpperRoman;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Pdf
} // namespace Aspose


