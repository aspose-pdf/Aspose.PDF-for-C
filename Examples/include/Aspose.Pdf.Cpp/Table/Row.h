#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icloneable.h>
#include <system/collections/list.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { class Cells; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a row of the table.
/// </summary>
class ASPOSE_PDF_SHARED_API Row FINAL : public System::ICloneable
{
    typedef Row ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
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
    System::SharedPtr<Text::TextState> get_DefaultCellTextState();
    /// <summary>
    /// Gets or sets default text state for row cells
    /// </summary>
    void set_DefaultCellTextState(System::SharedPtr<Text::TextState> value);
    /// <summary>
    /// Gets or sets default margin for row cells
    /// </summary>
    System::SharedPtr<MarginInfo> get_DefaultCellPadding();
    /// <summary>
    /// Gets or sets default margin for row cells
    /// </summary>
    void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets or sets the vertical alignment.
    /// </summary>
    Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Gets or sets the vertical alignment.
    /// </summary>
    void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    
    /// <summary>
    /// Initializes a new instance of the Row class.
    /// </summary>
    Row();
    
    /// <summary>
    /// Clone the row.
    /// </summary>
    /// <returns>The cloned object</returns>
    System::SharedPtr<System::Object> Clone();
    
protected:

    /// <summary>
    /// Gets or sets cell count for current page(for internal use)
    /// </summary>
    int32_t get_CellCount();
    /// <summary>
    /// Gets or sets cell count for current page(for internal use)
    /// </summary>
    void set_CellCount(int32_t value);
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
    /// Gets or sets row width(for internal use)
    /// </summary>
    double get_Width();
    /// <summary>
    /// Gets or sets row width(for internal use)
    /// </summary>
    void set_Width(double value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> get_Operators();
    
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
    /// <param name="realPageWidth">The page width without margins.</param>
    /// <param name="bottomY">The min bottom Y.</param>
    /// <param name="page">The page bottom margin.</param>
    /// <param name="rowNumber">The row number.</param>
    bool Process(System::SharedPtr<Table> table, double& curY, double& curX, bool isCalculatedMode, double realPageWidth, double bottomY, System::SharedPtr<Page> page, int32_t& rowNumber);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Color> backgroundColor;
    System::SharedPtr<BorderInfo> border;
    System::SharedPtr<Aspose::Pdf::Cells> cells;
    int32_t cellCount;
    System::SharedPtr<BorderInfo> defaultCellBorder;
    System::SharedPtr<Text::TextState> defaultCellTextState;
    System::SharedPtr<MarginInfo> defaultCellPadding;
    double height;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators;
    double pureHeight;
    double fixedRowHeight;
    double minRowHeight;
    bool isInNewPage;
    bool isRowBroken;
    bool isRowExceedPage;
    double width;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    
    void ProcessVerticalBroken(System::SharedPtr<Table> table, double realPageWidth);
    bool IsNothingWrited();
    void RecalculateNestedTable(System::SharedPtr<Cell> cell);
    /// <summary>
    /// Gets row height.
    /// <param name="table">The table</param>
    /// <param name="page">The page</param>
    /// </summary>
    bool IsRowExceedSize(System::SharedPtr<Table> table, System::SharedPtr<Page> page, double curY, double bottomY, int32_t rowIndex);
    
};

} // namespace Pdf
} // namespace Aspose


