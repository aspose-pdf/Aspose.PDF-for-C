#ifndef _Aspose_Pdf_Table_Rows_h_
#define _Aspose_Pdf_Table_Rows_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// The items count.
    /// </summary>
    int32_t get_Count();
    
    /// <summary>
    /// Add row to collection.
    /// </summary>
    /// <returns>The new row</returns>
    System::SharedPtr<Row> Add();
    /// <summary>
    /// Add row to cellection.
    /// </summary>
    /// <param name="row">The new row.</param>
    /// <returns></returns>
    void Add(System::SharedPtr<Row> row);
    /// <summary>
    /// Returns index of row in collection.
    /// </summary>
    /// <param name="row">The existing row.</param>
    /// <returns>The row index</returns>
    int32_t IndexOf(System::SharedPtr<Row> row);
    /// <summary>
    /// Remove row from collection.
    /// </summary>
    /// <param name="row">The existing row.</param>
    void Remove(System::SharedPtr<Row> row);
    /// <summary>
    /// Remove row at position from collection.
    /// </summary>
    /// <param name="index">The collection index.</param>
    void RemoveAt(int32_t index);
    /// <summary>
    /// Remove row set from collection.
    /// </summary>
    /// <param name="index">The collection index.</param>
    /// <param name="count">The rows count.</param>
    void RemoveRange(int32_t index, int32_t count);
    
    /// <summary>
    /// Gets or sets row.
    /// </summary>
    /// <param name="index">The row index.</param>
    System::SharedPtr<Row> idx_get(int32_t index);
    /// <summary>
    /// Gets or sets row.
    /// </summary>
    /// <param name="index">The row index.</param>
    void idx_set(int32_t index, System::SharedPtr<Row> value);
    
    Rows();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Row>>> rows;
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Row>>> GetEnumerator();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Table_Rows_h_

