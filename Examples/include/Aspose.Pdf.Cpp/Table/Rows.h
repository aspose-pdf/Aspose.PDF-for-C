#ifndef _Aspose_Pdf_Table_Rows_h_
#define _Aspose_Pdf_Table_Rows_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>

#include "Table/Row.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Table; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a rows collection of table.
/// </summary>
class ASPOSE_PDF_SHARED_API Rows FINAL : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Row>>
{
    typedef Rows ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Row>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Row;
    
public:

    int32_t get_Count();
    
    System::SharedPtr<Row> Add();
    void Add(System::SharedPtr<Row> row);
    int32_t IndexOf(System::SharedPtr<Row> row);
    void Remove(System::SharedPtr<Row> row);
    void RemoveAt(int32_t index);
    void RemoveRange(int32_t index, int32_t count);
    
    System::SharedPtr<Row> idx_get(int32_t index);
    void idx_set(int32_t index, System::SharedPtr<Row> value);
    
    Rows();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Rows"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Row>>> rows;
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Row>>> GetEnumerator();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Table_Rows_h_

