#ifndef _Aspose_Pdf_Generator_ColumnInfo_h_
#define _Aspose_Pdf_Generator_ColumnInfo_h_
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents a columns info.
/// </summary>
class ASPOSE_PDF_SHARED_API ColumnInfo FINAL : public System::Object
{
    typedef ColumnInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_ColumnWidths();
    void set_ColumnWidths(System::String value);
    System::String get_ColumnSpacing();
    void set_ColumnSpacing(System::String value);
    int32_t get_ColumnCount();
    void set_ColumnCount(int32_t value);
    
    ColumnInfo();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ColumnInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t columnCount;
    System::String columnWidths;
    System::String columnSpacing;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_ColumnInfo_h_

