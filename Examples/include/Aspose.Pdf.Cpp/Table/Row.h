#ifndef _Aspose_Pdf_Table_Row_h_
#define _Aspose_Pdf_Table_Row_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::SharedPtr<Color> get_BackgroundColor();
    void set_BackgroundColor(System::SharedPtr<Color> value);
    System::SharedPtr<BorderInfo> get_Border();
    void set_Border(System::SharedPtr<BorderInfo> value);
    System::SharedPtr<Aspose::Pdf::Cells> get_Cells();
    void set_Cells(System::SharedPtr<Aspose::Pdf::Cells> value);
    System::SharedPtr<BorderInfo> get_DefaultCellBorder();
    void set_DefaultCellBorder(System::SharedPtr<BorderInfo> value);
    double get_MinRowHeight();
    void set_MinRowHeight(double value);
    double get_FixedRowHeight();
    void set_FixedRowHeight(double value);
    bool get_IsInNewPage();
    void set_IsInNewPage(bool value);
    bool get_IsRowBroken();
    void set_IsRowBroken(bool value);
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    System::SharedPtr<MarginInfo> get_DefaultCellPadding();
    void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    
    Row();
    
    System::SharedPtr<Row> Clone();
    
protected:

    double get_Height();
    void set_Height(double value);
    bool get_IsRowExceedPage();
    System::SharedPtr<Aspose::Pdf::Cells> get_RowSpanProcessedCells();
    void set_RowSpanProcessedCells(System::SharedPtr<Aspose::Pdf::Cells> value);
    double get_Width();
    void set_Width(double value);
    
    Row(System::ArrayPtr<double> columnWidths, System::SharedPtr<Rectangle> rect);
    Row(int32_t columnNum, System::SharedPtr<Rectangle> rect);
    
    void ApplyDefaults(System::SharedPtr<Table> table);
    bool Process(System::SharedPtr<Table> table, double &curY, double &curX, bool isCalculatedMode, int32_t &tablecellCountForThisPage, int32_t &tableCellCount, double realPageWidth, double bottomY, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Row"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    bool IsRowExceedSize(System::SharedPtr<Table> table, System::SharedPtr<Page> page, double curY, double bottomY);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Table_Row_h_

