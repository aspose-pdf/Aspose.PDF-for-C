#ifndef _Aspose_Pdf_Table_Row_h_
#define _Aspose_Pdf_Table_Row_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { class Cells; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a row of the table.
/// </summary>
class ASPOSE_PDF_SHARED_API Row FINAL : public System::Object
{
    typedef Row ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Table;
    
public:

    /// <summary>
    /// Gets or sets the background color.
    /// </summary>
    System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    /// Gets or sets the background color.
    /// </summary>
    void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets or sets the border.
    /// </summary>
    System::SharedPtr<BorderInfo> get_Border();
    /// <summary>
    /// Gets or sets the border.
    /// </summary>
    void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets the cells of the row.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Cells> get_Cells();
    /// <summary>
    /// Gets the cells of the row.
    /// </summary>
    void set_Cells(System::SharedPtr<Aspose::Pdf::Cells> value);
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    System::SharedPtr<BorderInfo> get_DefaultCellBorder();
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    void set_DefaultCellBorder(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets height for row;
    /// </summary>
    double get_MinRowHeight();
    /// <summary>
    /// Gets height for row;
    /// </summary>
    void set_MinRowHeight(double value);
    /// <summary>
    /// Gets fixed row height - row may have fixed height;
    /// </summary>
    double get_FixedRowHeight();
    /// <summary>
    /// Gets fixed row height - row may have fixed height;
    /// </summary>
    void set_FixedRowHeight(double value);
    /// <summary>
    /// Gets fixed row is in new page - page with this property should be printed to next page Default false;
    /// </summary>
    bool get_IsInNewPage();
    /// <summary>
    /// Gets fixed row is in new page - page with this property should be printed to next page Default false;
    /// </summary>
    void set_IsInNewPage(bool value);
    /// <summary>
    /// Gets is row can be broken between two pages
    /// </summary>
    bool get_IsRowBroken();
    /// <summary>
    /// Gets is row can be broken between two pages
    /// </summary>
    void set_IsRowBroken(bool value);
    /// <summary>
    /// Gets or sets default text state for row cells
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    /// <summary>
    /// Gets or sets default text state for row cells
    /// </summary>
    void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    /// Gets or sets default margin for row cells
    /// </summary>
    System::SharedPtr<MarginInfo> get_DefaultCellPadding();
    /// <summary>
    /// Gets or sets default margin for row cells
    /// </summary>
    void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    
    /// <summary>
    /// Initializes a new instance of the Row class.
    /// </summary>
    Row();
    
    /// <summary>
    /// Clone the row.
    /// </summary>
    /// <returns>The cloned object</returns>
    System::SharedPtr<Row> Clone();
    
protected:

    /// <summary>
    /// Gets or sets row height(for internal use)
    /// </summary>
    double get_Height();
    /// <summary>
    /// Gets or sets row height(for internal use)
    /// </summary>
    void set_Height(double value);
    /// <summary>
    /// Gets is row exceed page
    /// </summary>
    bool get_IsRowExceedPage();
    /// <summary>
    /// Row cells for colspan - for internal use;
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Cells> get_RowSpanProcessedCells();
    /// <summary>
    /// Row cells for colspan - for internal use;
    /// </summary>
    void set_RowSpanProcessedCells(System::SharedPtr<Aspose::Pdf::Cells> value);
    /// <summary>
    /// Gets or sets row width(for internal use)
    /// </summary>
    double get_Width();
    /// <summary>
    /// Gets or sets row width(for internal use)
    /// </summary>
    void set_Width(double value);
    
    /// <summary>
    /// Initializes a new instance of the Row class.
    /// </summary>
    /// <param name="columnWidths">The array of column widths.</param>
    /// <param name="rect">The general rectangle of the row in page's coordinates.</param>
    Row(System::ArrayPtr<double> columnWidths, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initializes a new instance of the Row class.
    /// </summary>
    /// <param name="columnNum">The number of table columns.</param>
    /// <param name="rect">The general rectangle of the row in page's coordinates.</param>
    Row(int32_t columnNum, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Apply defaults
    /// </summary>
    /// <param name="table">The table.</param>
    void ApplyDefaults(System::SharedPtr<Table> table);
    /// <summary>
    /// Process row.
    /// </summary>
    /// <param name="table">The table.</param>
    /// <param name="curY">The current Y coordinate.</param>
    /// <param name="curX">The current X coordinate.</param>
    /// <param name="isCalculatedMode">The calculation mode for nested tables.</param>
    /// <param name="tablecellCountForThisPage">The cell count for this page table - row can have different cells count.</param>
    /// <param name="tableCellCount">The cell count for table - row can have different cells count.</param>
    /// <param name="realPageWidth">The page width without margins.</param>
    /// <param name="bottomY">The min bottom Y.</param>
    /// <param name="page">The page bottom margin.</param>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    bool Process(System::SharedPtr<Table> table, double& curY, double& curX, bool isCalculatedMode, int32_t& tablecellCountForThisPage, int32_t& tableCellCount, double realPageWidth, double bottomY, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Color> backgroundColor;
    System::SharedPtr<BorderInfo> border;
    System::SharedPtr<Aspose::Pdf::Cells> cells;
    System::SharedPtr<BorderInfo> defaultCellBorder;
    System::SharedPtr<Aspose::Pdf::Text::TextState> defaultCellTextState;
    System::SharedPtr<MarginInfo> defaultCellPadding;
    double height;
    double pureHeight;
    double fixedRowHeight;
    double minRowHeight;
    bool isInNewPage;
    bool isRowBroken;
    bool isRowExceedPage;
    System::SharedPtr<Aspose::Pdf::Cells> rowSpanProcessedCells;
    double width;
    
    bool IsAtLeastOneParagraphProcessed();
    void RecalculateNestedTable(System::SharedPtr<Cell> cell);
    /// <summary>
    /// Gets row height.
    /// <param name="table">The table</param>
    /// <param name="page">The page</param>
    /// </summary>
    bool IsRowExceedSize(System::SharedPtr<Table> table, System::SharedPtr<Page> page, double curY, double bottomY);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Table_Row_h_

