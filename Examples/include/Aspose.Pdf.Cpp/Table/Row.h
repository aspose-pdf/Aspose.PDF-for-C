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
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { class Cells; } }
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
    /// Gets the background color.
    /// </summary>
    System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    /// Sets the background color.
    /// </summary>
    void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets the border.
    /// </summary>
    System::SharedPtr<BorderInfo> get_Border();
    /// <summary>
    /// Sets the border.
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
    /// Gets default text state for row cells
    /// </summary>
    System::SharedPtr<Text::TextState> get_DefaultCellTextState();
    /// <summary>
    /// Sets default text state for row cells
    /// </summary>
    void set_DefaultCellTextState(System::SharedPtr<Text::TextState> value);
    /// <summary>
    /// Gets default margin for row cells
    /// </summary>
    System::SharedPtr<MarginInfo> get_DefaultCellPadding();
    /// <summary>
    /// Sets default margin for row cells
    /// </summary>
    void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets the vertical alignment.
    /// </summary>
    Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Sets the vertical alignment.
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
    /// Gets cell count for current page(for internal use)
    /// </summary>
    int32_t get_CellCount();
    /// <summary>
    /// Sets cell count for current page(for internal use)
    /// </summary>
    void set_CellCount(int32_t value);
    /// <summary>
    /// Gets row height(for internal use)
    /// </summary>
    double get_Height();
    /// <summary>
    /// Sets row height(for internal use)
    /// </summary>
    void set_Height(double value);
    /// <summary>
    /// Gets is row exceed page
    /// </summary>
    bool get_IsRowExceedPage();
    /// <summary>
    /// Gets row width(for internal use)
    /// </summary>
    double get_Width();
    /// <summary>
    /// Sets row width(for internal use)
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

    System::SharedPtr<Text::TextState> defaultCellTextState;
    double pureHeight;
    System::SharedPtr<Color> pr_BackgroundColor;
    System::SharedPtr<BorderInfo> pr_Border;
    int32_t pr_CellCount;
    System::SharedPtr<Aspose::Pdf::Cells> pr_Cells;
    System::SharedPtr<BorderInfo> pr_DefaultCellBorder;
    double pr_MinRowHeight;
    double pr_FixedRowHeight;
    double pr_Height;
    bool pr_IsInNewPage;
    bool pr_IsRowBroken;
    bool pr_IsRowExceedPage;
    
    /// <summary>
    /// Gets is row exceed page
    /// </summary>
    void set_IsRowExceedPage(bool value);
    
    double pr_Width;
    System::SharedPtr<MarginInfo> pr_DefaultCellPadding;
    Aspose::Pdf::VerticalAlignment pr_VerticalAlignment;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> pr_Operators;
    
    void set_Operators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> value);
    
    void ProcessVerticalBroken(System::SharedPtr<Table> table, double realPageWidth);
    bool IsNothingWrited();
    void ResetHtmlFragments(System::SharedPtr<Cell> cell);
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


