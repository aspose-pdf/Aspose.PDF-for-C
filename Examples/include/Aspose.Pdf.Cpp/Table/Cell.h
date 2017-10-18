#ifndef _Aspose_Pdf_Table_Cell_h_
#define _Aspose_Pdf_Table_Cell_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <system/collections/list.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class HeaderFooter; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { enum class BorderCornerType; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a cell of the table's row.
/// </summary>
class ASPOSE_PDF_SHARED_API Cell FINAL : public System::Object
{
    typedef Cell ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::HeaderFooter;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Table;
    
public:

    bool get_IsNoBorder();
    void set_IsNoBorder(bool value);
    System::SharedPtr<MarginInfo> get_Margin();
    void set_Margin(System::SharedPtr<MarginInfo> value);
    System::SharedPtr<BorderInfo> get_Border();
    void set_Border(System::SharedPtr<BorderInfo> value);
    System::SharedPtr<Color> get_BackgroundColor();
    void set_BackgroundColor(System::SharedPtr<Color> value);
    System::String get_BackgroundImageFile();
    void set_BackgroundImageFile(System::String value);
    HorizontalAlignment get_Alignment();
    void set_Alignment(HorizontalAlignment value);
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    bool get_IsWordWrapped();
    void set_IsWordWrapped(bool value);
    Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    int32_t get_ColSpan();
    void set_ColSpan(int32_t value);
    int32_t get_RowSpan();
    void set_RowSpan(int32_t value);
    
    Cell(System::SharedPtr<Rectangle> rect);
    Cell();
    
    System::SharedPtr<Cell> Clone();
    
protected:

    int32_t get_ProcessedParagraphsCount();
    bool get_IsNothingWrite();
    void set_IsNothingWrite(bool value);
    System::SharedPtr<Rectangle> get_Rect();
    void set_Rect(System::SharedPtr<Rectangle> value);
    double get_Width();
    void set_Width(double value);
    double get_Height();
    void set_Height(double value);
    bool get_IsRowSpanProcessed();
    void set_IsRowSpanProcessed(bool value);
    
    bool CalculateHeight(System::SharedPtr<Table> table, double width, System::SharedPtr<Page> page, double bottomY, bool isScaleParagraphs);
    void ApplyCellTextParagraphs(System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperators(System::SharedPtr<Table> table, System::SharedPtr<Page> page, double roundedBorderRadius, double pureHeight, bool isCellBroken);
    static System::SharedPtr<Aspose::Pdf::Text::TextFragment> CloneFragment(System::SharedPtr<Aspose::Pdf::Text::TextFragment> fragment);
    System::SharedPtr<Table> GetTableFromParagraphs();
    void CalculateRoundedBorders(int32_t rowIndex, int32_t rowCount, int32_t cellIndex, int32_t cellCount);
    void CalculateRect(double curX, double curY, System::SharedPtr<Row> row, System::SharedPtr<Table> table, int32_t i, int32_t cellCount, double pureHeight, System::SharedPtr<BorderInfo> rowBorder);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Cell"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    HorizontalAlignment alignment;
    System::SharedPtr<Color> backgroundColor;
    System::String backgroundImageFile;
    System::SharedPtr<BorderInfo> border;
    int32_t colsSpan;
    System::SharedPtr<Aspose::Pdf::Text::TextState> defaultCellTextState;
    double width;
    double height;
    System::SharedPtr<MarginInfo> marginInfo;
    bool isHeightExceedSize;
    bool isPrevHeightExceedSize;
    bool isNothingWrite;
    bool isNoBorder;
    bool isRowSpanProcessed;
    bool isWordWrapped;
    bool isHorizontalAlignmentSet;
    System::SharedPtr<Aspose::Pdf::Paragraphs> paragraphs;
    int32_t processedParagraphsCount;
    System::SharedPtr<Rectangle> rect;
    BorderCornerType cornerType;
    int32_t rowSpan;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    
    void ProcessBorder(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> list, System::SharedPtr<Table> table);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Table_Cell_h_

