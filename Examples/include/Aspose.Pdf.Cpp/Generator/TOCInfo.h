#ifndef _Aspose_Pdf_Generator_TOCInfo_h_
#define _Aspose_Pdf_Generator_TOCInfo_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::SharedPtr<Aspose::Pdf::ColumnInfo> get_ColumnInfo();
    void set_ColumnInfo(System::SharedPtr<Aspose::Pdf::ColumnInfo> value);
    System::ArrayPtr<System::SharedPtr<LevelFormat>> get_FormatArray();
    void set_FormatArray(System::ArrayPtr<System::SharedPtr<LevelFormat>> value);
    int32_t get_FormatArrayLength();
    void set_FormatArrayLength(int32_t value);
    System::SharedPtr<Text::TextFragment> get_Title();
    void set_Title(System::SharedPtr<Text::TextFragment> value);
    
    TocInfo();
    
protected:

    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> get_AutoNumbers();
    int32_t get_FormatArrayIndex();
    void set_FormatArrayIndex(int32_t value);
    int32_t get_PagesCount();
    void set_PagesCount(int32_t value);
    
    System::String GetNumber(int32_t level);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TocInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

