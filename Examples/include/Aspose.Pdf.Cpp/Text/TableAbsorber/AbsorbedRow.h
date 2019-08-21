#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>

#include "Text/TableAbsorber/ITableElement.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TableAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class AbsorbedCell; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents row of table that exist on the page
/// </summary>
class ASPOSE_PDF_SHARED_API AbsorbedRow : public Aspose::Pdf::Text::ITableElement
{
    typedef AbsorbedRow ThisType;
    typedef Aspose::Pdf::Text::ITableElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TableAbsorber;
    
public:

    /// <summary>
    /// Gets readonly IList containing cells of the row
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<AbsorbedCell>>> get_CellList();
    /// <summary>
    /// Gets rectangle that describes position of the row on page
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    
protected:

    /// <summary>
    /// Initializes new AbsorbedRow object with list of its cells
    /// </summary>
    /// <param name="cells">List collection of cells of the row</param>
    AbsorbedRow(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> cells);
    /// <summary>
    /// Initializes new AbsorbedRow object with AbsorbedCell object
    /// </summary>
    /// <param name="cell">Object representing first cell of row</param>
    AbsorbedRow(System::SharedPtr<AbsorbedCell> cell);
    
    /// <summary>
    /// Adds AbsorbedCell object to the row
    /// </summary>
    /// <param name="cell">Object representing first cell of table</param>
    void AddCell(System::SharedPtr<AbsorbedCell> cell);
    /// <summary>
    /// Please call this after adding of cells to recompute rectangle of the row
    /// </summary>
    void RecomputeRectangle();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> cells;
    System::SharedPtr<Aspose::Pdf::Rectangle> rect;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


