#ifndef _Aspose_Pdf_Table_Cells_h_
#define _Aspose_Pdf_Table_Cells_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>

#include "Table/Cell.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a cells collection of row.
/// </summary>
class ASPOSE_PDF_SHARED_API Cells FINAL : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Cell>>
{
    typedef Cells ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Cell>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Row;
    
public:

    int32_t get_Count();
    
    System::SharedPtr<Cell> Add();
    System::SharedPtr<Cell> Add(System::String text, System::SharedPtr<Aspose::Pdf::Text::TextState> ts);
    System::SharedPtr<Cell> Add(System::String text);
    void Add(System::SharedPtr<Cell> cell);
    void RemoveRange(int32_t index, int32_t count);
    void Remove(System::SharedPtr<Cell> cell);
    void Insert(int32_t index, System::SharedPtr<Cell> cell);
    
    System::SharedPtr<Cell> idx_get(int32_t index);
    void idx_set(int32_t index, System::SharedPtr<Cell> value);
    
    Cells();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Cells"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Cell>>> cells;
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Cell>>> GetEnumerator();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Table_Cells_h_

