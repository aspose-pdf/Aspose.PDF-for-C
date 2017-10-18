#ifndef _Aspose_Pdf_Table_Table_h_
#define _Aspose_Pdf_Table_Table_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !(NET4CP || NET35CP) 


// C# preprocessor directive: #endif 


#include <system/string.h>
#include <system/enum_helpers.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Rectangle; } } }
namespace Aspose { namespace Pdf { class FloatingBox; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { enum class BorderCornerStyle; } }
namespace Aspose { namespace Pdf { enum class TableBroken; } }
namespace Aspose { namespace Pdf { enum class ColumnAdjustment; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Rows; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class GraphInfo; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { enum class BorderCornerType; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a table that can be added to the page.
/// </summary>
class ASPOSE_PDF_SHARED_API Table FINAL : public Aspose::Pdf::BaseParagraph
{
    typedef Table ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Drawing::Rectangle;
    friend class Aspose::Pdf::FloatingBox;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    
public:

    System::SharedPtr<Color> get_BackgroundColor();
    void set_BackgroundColor(System::SharedPtr<Color> value);
    BorderCornerStyle get_CornerStyle();
    void set_CornerStyle(BorderCornerStyle value);
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_RepeatingRowsStyle();
    void set_RepeatingRowsStyle(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    int32_t get_RepeatingRowsCount();
    void set_RepeatingRowsCount(int32_t value);
    System::String get_ColumnWidths();
    void set_ColumnWidths(System::String value);
    TableBroken get_Broken();
    void set_Broken(TableBroken value);
    System::SharedPtr<BorderInfo> get_DefaultCellBorder();
    void set_DefaultCellBorder(System::SharedPtr<BorderInfo> value);
    System::String get_DefaultColumnWidth();
    void set_DefaultColumnWidth(System::String value);
    System::SharedPtr<Aspose::Pdf::Rows> get_Rows();
    System::SharedPtr<BorderInfo> get_Border();
    void set_Border(System::SharedPtr<BorderInfo> value);
    System::SharedPtr<MarginInfo> get_DefaultCellPadding();
    void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    Aspose::Pdf::HorizontalAlignment get_Alignment();
    void set_Alignment(Aspose::Pdf::HorizontalAlignment value);
    float get_Left();
    void set_Left(float value);
    float get_Top();
    void set_Top(float value);
    bool get_IsBroken();
    void set_IsBroken(bool value);
    Aspose::Pdf::ColumnAdjustment get_ColumnAdjustment();
    void set_ColumnAdjustment(Aspose::Pdf::ColumnAdjustment value);
    
    double GetHeight();
    void SetColumnTextState(int32_t colNumber, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    System::SharedPtr<Table> Clone();
    
    Table();
    
protected:

    int32_t get_PrintedRowsCount();
    System::ArrayPtr<double> get_InternalColumnWidths();
    void set_InternalColumnWidths(System::ArrayPtr<double> value);
    int32_t get_ColsCount();
    bool get_IsProcessSpecialSymbols();
    System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Text::TextState>> get_ColumnTextStates();
    
    static double GetBorderHeight(System::SharedPtr<BorderInfo> border);
    static double GetBorderWidth(System::SharedPtr<BorderInfo> border);
    static double GetColumnWidth(System::ArrayPtr<double> columnWidths, int32_t index);
    static void DrawLine(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<GraphInfo> info, System::SharedPtr<Point> start, System::SharedPtr<Point> end);
    static void DrawRoundedRectangle(System::SharedPtr<GraphInfo> info, System::SharedPtr<Point> topLeft, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double radius);
    static double GetLineWidth(System::SharedPtr<GraphInfo> info);
    static double GetLineSingleWidth(System::SharedPtr<GraphInfo> info);
    static void DrawDoubleBorder(System::SharedPtr<BorderInfo> border, System::SharedPtr<Point> leftTop, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double left, double right, double top, double bottom);
    static void DrawBorder(System::SharedPtr<BorderInfo> border, System::SharedPtr<Point> leftTop, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, BorderCornerStyle cornerStyle);
    static void DrawBackground(System::SharedPtr<Point> leftTop, double width, double height, System::SharedPtr<Color> color, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, BorderCornerType type, double radius);
    static void ApplyBorderToCurXY(double &curX, double &curY, System::SharedPtr<BorderInfo> border, double leftRowBorderWidth);
    double GetAllBordersWidth();
    bool Process(double &curX, double &curY, bool isCalculatedMode, double pageRealWidth, double bottomMargin, System::SharedPtr<Page> page, bool isProcessSpecialSymbols, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    static double GetColumnWidth(System::String stringColumnWidth);
    static System::ArrayPtr<double> GetColumnWidths(System::String columnWidthString, double realWidth);
    void ApplyColumnWidth(double realWidth);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Table"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    Aspose::Pdf::HorizontalAlignment alignment;
    System::SharedPtr<Color> backgroundColor;
    System::SharedPtr<BorderInfo> borderInfo;
    BorderCornerStyle cornerStyle;
    TableBroken broken;
    int32_t cellCountForThisPage;
    Aspose::Pdf::ColumnAdjustment columnAdjustment;
    System::ArrayPtr<double> columnWidths;
    System::String columnWidthString;
    System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Text::TextState>> columnTextStates;
    System::SharedPtr<BorderInfo> defaultCellBorder;
    System::SharedPtr<MarginInfo> defaultCellPadding;
    System::SharedPtr<Aspose::Pdf::Text::TextState> defaultCellTextState;
    System::String defaultColumnWidth;
    bool isBroken;
    bool isNullAddedToRows;
    bool isPreprocessed;
    bool isProcessSpecialSymbols;
    float left;
    int32_t printedRowsCount;
    int32_t repeatingRowsCount;
    System::SharedPtr<Aspose::Pdf::Text::TextState> repeatingRowsStyle;
    System::SharedPtr<Aspose::Pdf::Rows> rows;
    int32_t tableCellCount;
    float top;
    
    static void DrawRectangle(System::SharedPtr<GraphInfo> info, System::SharedPtr<Point> topLeft, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    static void DrawRoundedPathSegment(System::SharedPtr<Point> first, System::SharedPtr<Point> second, System::SharedPtr<Point> third, bool isCornerRounded, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    bool ProcessVerticalBroken(double &curX, double &curY, double bottomMargin, double pageRealWidth, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    void PreProcessRow(System::SharedPtr<Row> row, int32_t i);
    void PreProcess();
    void ProcessRowSpanSplit(System::SharedPtr<Row> row, int32_t i, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> rowsOperators);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Table_Table_h_

