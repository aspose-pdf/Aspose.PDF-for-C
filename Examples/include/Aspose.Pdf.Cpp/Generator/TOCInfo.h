#ifndef _Aspose_Pdf_Generator_TOCInfo_h_
#define _Aspose_Pdf_Generator_TOCInfo_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Heading; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class ColumnInfo; } }
namespace Aspose { namespace Pdf { class LevelFormat; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }

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
    friend class Aspose::Pdf::Page;
    
public:

    /// <summary>
    /// Gets or sets column info.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::ColumnInfo> get_ColumnInfo();
    /// <summary>
    /// Gets or sets column info.
    /// </summary>
    void set_ColumnInfo(System::SharedPtr<Aspose::Pdf::ColumnInfo> value);
    /// <summary>
    /// Gets or sets format array for table of contents.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<LevelFormat>> get_FormatArray();
    /// <summary>
    /// Gets or sets format array for table of contents.
    /// </summary>
    void set_FormatArray(System::ArrayPtr<System::SharedPtr<LevelFormat>> value);
    /// <summary>
    /// Gets or sets format array length
    /// </summary>
    int32_t get_FormatArrayLength();
    /// <summary>
    /// Gets or sets format array length
    /// </summary>
    void set_FormatArrayLength(int32_t value);
    /// <summary>
    /// Gets or sets table of contents title.
    /// </summary>
    System::SharedPtr<Text::TextFragment> get_Title();
    /// <summary>
    /// Gets or sets table of contents title.
    /// </summary>
    void set_Title(System::SharedPtr<Text::TextFragment> value);
    
    TocInfo();
    
protected:

    /// <summary>
    /// Gets headings numbers for auto numnering(internal).
    /// </summary>
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> get_AutoNumbers();
    /// <summary>
    /// Gets or sets format array for table of contents.
    /// </summary>
    int32_t get_FormatArrayIndex();
    /// <summary>
    /// Gets or sets format array for table of contents.
    /// </summary>
    void set_FormatArrayIndex(int32_t value);
    /// <summary>
    /// Gets or sets TOC pages count(for internal use).
    /// </summary>
    int32_t get_PagesCount();
    /// <summary>
    /// Gets or sets TOC pages count(for internal use).
    /// </summary>
    void set_PagesCount(int32_t value);
    
    /// <summary>
    /// Get heading text value.
    /// </summary>
    /// <value>The heading level.</value>
    System::String GetNumber(int32_t level);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> autoNumbers;
    System::SharedPtr<Aspose::Pdf::ColumnInfo> columnInfo;
    System::ArrayPtr<System::SharedPtr<LevelFormat>> formatArray;
    int32_t formatArrayIndex;
    int32_t pagesCount;
    System::SharedPtr<Text::TextFragment> title;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_TOCInfo_h_

