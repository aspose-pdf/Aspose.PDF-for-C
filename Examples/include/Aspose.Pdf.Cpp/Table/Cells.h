#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// The items count.
    /// </summary>
    int32_t get_Count();
    
    /// <summary>
    /// Add cell to collection.
    /// </summary>
    /// <returns>The new cell</returns>
    System::SharedPtr<Cell> Add();
    /// <summary>
    /// Add cell to collection.
    /// </summary>
    /// <param name="text">The text for cell.</param>
    /// <param name="ts">The text state.</param>
    /// <returns>The new cell</returns>
    System::SharedPtr<Cell> Add(System::String text, System::SharedPtr<Text::TextState> ts);
    /// <summary>
    /// Add cell to collection.
    /// </summary>
    /// <param name="text">The text for cell.</param>
    /// <returns>The new cell</returns>
    System::SharedPtr<Cell> Add(System::String text);
    /// <summary>
    /// Add cell to collection.
    /// </summary>
    /// <param name="cell">The cell to collection.</param>
    /// <returns></returns>
    void Add(System::SharedPtr<Cell> cell);
    /// <summary>
    /// Remove cell set from collection.
    /// </summary>
    /// <param name="index">The collection index.</param>
    /// <param name="count">The rows count.</param>
    void RemoveRange(int32_t index, int32_t count);
    /// <summary>
    /// Remove cell set from collection.
    /// </summary>
    /// <param name="cell">The cell object.</param>
    void Remove(System::SharedPtr<Cell> cell);
    /// <summary>
    /// Insert cell to collection.
    /// </summary>
    /// <param name="index">The selected index.</param>
    /// <param name="cell">The selected cell.</param>
    void Insert(int32_t index, System::SharedPtr<Cell> cell);
    /// <summary>
    /// Gets collection's enumerator
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Cell>>> GetEnumerator();
    /// <summary>
    /// Dispose method
    /// </summary>
    void Dispose();
    
    /// <summary>
    /// Gets or sets cells.
    /// </summary>
    /// <returns></returns>
    /// <param name="index">The cell index.</param>
    System::SharedPtr<Cell> idx_get(int32_t index);
    /// <summary>
    /// Gets or sets cells.
    /// </summary>
    /// <returns></returns>
    /// <param name="index">The cell index.</param>
    void idx_set(int32_t index, System::SharedPtr<Cell> value);
    
    Cells();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Cell>>> cells;
    
};

} // namespace Pdf
} // namespace Aspose


