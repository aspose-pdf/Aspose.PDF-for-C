#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <cstdint>

#include "Text/TableAbsorber/ITableElement.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TableAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class AbsorbedRow; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents table that exist on the page
/// </summary>
class ASPOSE_PDF_SHARED_API AbsorbedTable : public Aspose::Pdf::Text::ITableElement
{
    typedef AbsorbedTable ThisType;
    typedef Aspose::Pdf::Text::ITableElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TableAbsorber;
    
public:

    /// <summary>
    /// Gets readonly IList containing rows of the table
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<AbsorbedRow>>> get_RowList();
    /// <summary>
    /// Gets rectangle that describes position of the table on page
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets number of the page containing this table
    /// </summary>
    int32_t get_PageNum();
    
protected:

    /// <summary>
    /// Gets number of the page containing this table
    /// </summary>
    void set_PageNum(int32_t value);
    
    /// <summary>
    /// Initializes new AbsorbedTable object with list of its rows
    /// </summary>
    /// <param name="rows">List collection of rows of the table</param>
    AbsorbedTable(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedRow>>> rows);
    /// <summary>
    /// Initializes new AbsorbedTable object with AbsorbedRow object
    /// </summary>
    /// <param name="row">Object representing first row of table</param>
    AbsorbedTable(System::SharedPtr<AbsorbedRow> row);
    
    /// <summary>
    /// Adds AbsorbedRow object to the table
    /// </summary>
    /// <param name="row">Object representing row of table</param>
    void AddRow(System::SharedPtr<AbsorbedRow> row);
    /// <summary>
    /// Please call this after adding of rows to recompute rectangle of the table
    /// </summary>
    void RecomputeRectangle();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedRow>>> rows;
    System::SharedPtr<Aspose::Pdf::Rectangle> rect;
    int32_t pageNum;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


