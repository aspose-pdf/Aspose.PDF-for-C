#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Tagged/LogicalStructure/BLSElement.h"

namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTRElement; } } }
namespace Aspose { namespace Pdf { enum class BorderCornerStyle; } }
namespace Aspose { namespace Pdf { enum class TableBroken; } }
namespace Aspose { namespace Pdf { enum class ColumnAdjustment; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTHeadElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTBodyElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTFootElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableRowCollectionElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableCellElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureTypeStandard; } } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTHElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTDElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class MCRElement; } } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureTextState; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents Table structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API TableElement FINAL : public Aspose::Pdf::LogicalStructure::BLSElement
{
    typedef TableElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::BLSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::LogicalStructure::TableTRElement;
    
public:

    /// <summary>
    ///     Gets the table background color.
    /// </summary>
    System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    ///     Sets the table background color.
    /// </summary>
    void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    ///     Gets the table border.
    /// </summary>
    System::SharedPtr<BorderInfo> get_Border();
    /// <summary>
    ///     Sets the table border.
    /// </summary>
    void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    ///     Gets the table alignment.
    /// </summary>
    HorizontalAlignment get_Alignment();
    /// <summary>
    ///     Sets the table alignment.
    /// </summary>
    void set_Alignment(HorizontalAlignment value);
    /// <summary>
    ///     Gets the styles of the border corners
    /// </summary>
    BorderCornerStyle get_CornerStyle();
    /// <summary>
    ///     Sets the styles of the border corners
    /// </summary>
    void set_CornerStyle(BorderCornerStyle value);
    /// <summary>
    ///     Gets table vertial broken;
    /// </summary>
    TableBroken get_Broken();
    /// <summary>
    ///     Sets table vertial broken;
    /// </summary>
    void set_Broken(TableBroken value);
    /// <summary>
    ///     Gets the table column adjustment.
    /// </summary>
    Aspose::Pdf::ColumnAdjustment get_ColumnAdjustment();
    /// <summary>
    ///     Sets the table column adjustment.
    /// </summary>
    void set_ColumnAdjustment(Aspose::Pdf::ColumnAdjustment value);
    /// <summary>
    ///     Gets the column widths of the table.
    /// </summary>
    System::String get_ColumnWidths();
    /// <summary>
    ///     Gets the column widths of the table.
    /// </summary>
    void set_ColumnWidths(System::String value);
    /// <summary>
    ///     Gets default cell border.
    /// </summary>
    System::SharedPtr<BorderInfo> get_DefaultCellBorder();
    /// <summary>
    ///     Gets default cell border.
    /// </summary>
    void set_DefaultCellBorder(System::SharedPtr<BorderInfo> value);
    /// <summary>
    ///     Gets the default cell padding.
    /// </summary>
    System::SharedPtr<MarginInfo> get_DefaultCellPadding();
    /// <summary>
    ///     Sets the default cell padding.
    /// </summary>
    void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    ///     Gets the default cell text state.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    /// <summary>
    ///     Sets the default cell text state.
    /// </summary>
    void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    ///     Gets default column width.
    /// </summary>
    System::String get_DefaultColumnWidth();
    /// <summary>
    ///     Sets default column width.
    /// </summary>
    void set_DefaultColumnWidth(System::String value);
    /// <summary>
    ///     Gets the table is broken - will be truncated for next page.
    /// </summary>
    bool get_IsBroken();
    /// <summary>
    ///     Sets the table is broken - will be truncated for next page.
    /// </summary>
    void set_IsBroken(bool value);
    /// <summary>
    ///     Gets border included in column widhts.
    /// </summary>
    bool get_IsBordersIncluded();
    /// <summary>
    ///     Sets border included in column widhts.
    /// </summary>
    void set_IsBordersIncluded(bool value);
    /// <summary>
    ///     Gets the table left coordinate.
    /// </summary>
    float get_Left();
    /// <summary>
    ///     Sets the table left coordinate.
    /// </summary>
    void set_Left(float value);
    /// <summary>
    ///     Gets the table top coordinate.
    /// </summary>
    float get_Top();
    /// <summary>
    ///     Sets the table top coordinate.
    /// </summary>
    void set_Top(float value);
    /// <summary>
    ///     Gets the maximum columns count for table.
    /// </summary>
    int32_t get_RepeatingColumnsCount();
    /// <summary>
    ///     Sets the maximum columns count for table.
    /// </summary>
    void set_RepeatingColumnsCount(int32_t value);
    /// <summary>
    ///     Gets the first rows count repeated for several pages.
    /// </summary>
    int32_t get_RepeatingRowsCount();
    /// <summary>
    ///     Gets the first rows count repeated for several pages.
    /// </summary>
    void set_RepeatingRowsCount(int32_t value);
    /// <summary>
    ///     Gets the style for repeating rows.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_RepeatingRowsStyle();
    /// <summary>
    ///     Gets the style for repeating rows.
    /// </summary>
    void set_RepeatingRowsStyle(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    
    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHeadElement" /> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    System::SharedPtr<TableTHeadElement> CreateTHead();
    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHeadElement" /> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    System::SharedPtr<TableTBodyElement> CreateTBody();
    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTFootElement" /> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    System::SharedPtr<TableTFootElement> CreateTFoot();
    
protected:

    System::SharedPtr<Aspose::Pdf::Table> get_Table();
    
    TableElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual void PreSave();
    virtual void Save();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Table> _table;
    System::SharedPtr<Color> _backgroundColor;
    System::SharedPtr<BorderInfo> _border;
    HorizontalAlignment _alignment;
    BorderCornerStyle _cornerStyle;
    TableBroken _broken;
    Aspose::Pdf::ColumnAdjustment _columnAdjustment;
    System::String _columnWidthString;
    System::SharedPtr<BorderInfo> _defaultCellBorder;
    System::SharedPtr<MarginInfo> _defaultCellPadding;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _defaultCellTextState;
    System::String _defaultColumnWidth;
    bool _isBroken;
    bool _isBordersIncluded;
    float _left;
    float _top;
    int32_t _repeatingColumnsCount;
    int32_t _repeatingRowsCount;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _repeatingRowsStyle;
    
};

// Table child Elements
/// <summary>
///     Represents a base class for children elements of the Table in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API TableChildElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef TableChildElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::TableRowCollectionElement;
    friend class Aspose::Pdf::LogicalStructure::TableTRElement;
    friend class Aspose::Pdf::LogicalStructure::TableCellElement;
    
protected:

    TableChildElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents a base class for children elements of the Table Head, Body and Foot in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API TableRowCollectionElement : public Aspose::Pdf::LogicalStructure::TableChildElement
{
    typedef TableRowCollectionElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::TableTHeadElement;
    friend class Aspose::Pdf::LogicalStructure::TableTBodyElement;
    friend class Aspose::Pdf::LogicalStructure::TableTFootElement;
    
public:

    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTRElement" /> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<TableTRElement> CreateTR();
    
protected:

    TableRowCollectionElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureTypeStandard, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents THead structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_API TableTHeadElement FINAL : public Aspose::Pdf::LogicalStructure::TableRowCollectionElement
{
    typedef TableTHeadElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableRowCollectionElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TableTHeadElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents TBody structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_API TableTBodyElement FINAL : public Aspose::Pdf::LogicalStructure::TableRowCollectionElement
{
    typedef TableTBodyElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableRowCollectionElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TableTBodyElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents TFoot structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_API TableTFootElement FINAL : public Aspose::Pdf::LogicalStructure::TableRowCollectionElement
{
    typedef TableTFootElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableRowCollectionElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TableTFootElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents TR structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_API TableTRElement FINAL : public Aspose::Pdf::LogicalStructure::TableChildElement
{
    typedef TableTRElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::LogicalStructure::TableCellElement;
    
public:

    /// <summary>
    ///     Gets the row background color.
    /// </summary>
    System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    ///     Sets the row background color.
    /// </summary>
    void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    ///     Gets the row border.
    /// </summary>
    System::SharedPtr<BorderInfo> get_Border();
    /// <summary>
    ///     Sets the row border.
    /// </summary>
    void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    ///     Gets default cell border.
    /// </summary>
    System::SharedPtr<BorderInfo> get_DefaultCellBorder();
    /// <summary>
    ///     Gets default cell border.
    /// </summary>
    void set_DefaultCellBorder(System::SharedPtr<BorderInfo> value);
    /// <summary>
    ///     Gets height for row.
    /// </summary>
    double get_MinRowHeight();
    /// <summary>
    ///     Gets height for row.
    /// </summary>
    void set_MinRowHeight(double value);
    /// <summary>
    ///     Gets fixed row height - row may have fixed height.
    /// </summary>
    double get_FixedRowHeight();
    /// <summary>
    ///     Gets fixed row height - row may have fixed height.
    /// </summary>
    void set_FixedRowHeight(double value);
    /// <summary>
    ///     Gets fixed row is in new page - page with this property should be printed to next page Default false.
    /// </summary>
    bool get_IsInNewPage();
    /// <summary>
    ///     Gets fixed row is in new page - page with this property should be printed to next page Default false.
    /// </summary>
    void set_IsInNewPage(bool value);
    /// <summary>
    ///     Gets is row can be broken between two pages.
    /// </summary>
    bool get_IsRowBroken();
    /// <summary>
    ///     Gets is row can be broken between two pages.
    /// </summary>
    void set_IsRowBroken(bool value);
    /// <summary>
    ///     Gets default text state for row cells
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    /// <summary>
    ///     Sets default text state for row cells
    /// </summary>
    void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    ///     Gets default margin for row cells.
    /// </summary>
    System::SharedPtr<MarginInfo> get_DefaultCellPadding();
    /// <summary>
    ///     Sets default margin for row cells.
    /// </summary>
    void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    ///     Gets the vertical alignment.
    /// </summary>
    Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    ///     Sets the vertical alignment.
    /// </summary>
    void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    
    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHElement" /> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    System::SharedPtr<TableTHElement> CreateTH();
    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHElement" /> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    System::SharedPtr<TableTDElement> CreateTD();
    
protected:

    System::SharedPtr<Aspose::Pdf::Row> get_Row();
    
    TableTRElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual void PreSave();
    virtual void Save();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Row> _row;
    System::SharedPtr<Color> _backgroundColor;
    System::SharedPtr<BorderInfo> _border;
    System::SharedPtr<BorderInfo> _defaultCellBorder;
    double _minRowHeight;
    double _fixedRowHeight;
    bool _isInNewPage;
    bool _isRowBroken;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _defaultCellTextState;
    System::SharedPtr<MarginInfo> _defaultCellPadding;
    Aspose::Pdf::VerticalAlignment _verticalAlignment;
    
};

/// <summary>
///     Represents a base class for table cell elements (TH and TD) in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API TableCellElement : public Aspose::Pdf::LogicalStructure::TableChildElement, public Aspose::Pdf::LogicalStructure::ITextElement
{
    typedef TableCellElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableChildElement BaseType;
    typedef Aspose::Pdf::LogicalStructure::ITextElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::LogicalStructure::TableTHElement;
    friend class Aspose::Pdf::LogicalStructure::TableTDElement;
    
public:

    /// <summary>
    ///     Gets the cell background color.
    /// </summary>
    System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    ///     Sets the cell background color.
    /// </summary>
    void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    ///     Gets the cell border.
    /// </summary>
    System::SharedPtr<BorderInfo> get_Border();
    /// <summary>
    ///     Sets the cell border.
    /// </summary>
    void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    ///     Gets the cell have border.
    /// </summary>
    bool get_IsNoBorder();
    /// <summary>
    ///     Sets the cell have border.
    /// </summary>
    void set_IsNoBorder(bool value);
    /// <summary>
    ///     Gets the padding.
    /// </summary>
    System::SharedPtr<MarginInfo> get_Margin();
    /// <summary>
    ///     Sets the padding.
    /// </summary>
    void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    ///     Gets the cell alignment.
    /// </summary>
    HorizontalAlignment get_Alignment();
    /// <summary>
    ///     Sets the cell alignment.
    /// </summary>
    void set_Alignment(HorizontalAlignment value);
    /// <summary>
    ///     Gets the default cell text state.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    /// <summary>
    ///     Sets the default cell text state.
    /// </summary>
    void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    ///     Gets the cell's text word wrapped.
    /// </summary>
    bool get_IsWordWrapped();
    /// <summary>
    ///     Sets the cell's text word wrapped.
    /// </summary>
    void set_IsWordWrapped(bool value);
    /// <summary>
    ///     Gets the vertical alignment.
    /// </summary>
    Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    ///     Sets the vertical alignment.
    /// </summary>
    void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    ///     Gets the column span.
    /// </summary>
    int32_t get_ColSpan();
    /// <summary>
    ///     Sets the column span.
    /// </summary>
    void set_ColSpan(int32_t value);
    /// <summary>
    ///     Gets the row span.
    /// </summary>
    int32_t get_RowSpan();
    /// <summary>
    ///     Sets the row span.
    /// </summary>
    void set_RowSpan(int32_t value);
    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState" /> object for current element.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState" /> object for current element.</value>
    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> get_StructureTextState();
    
    /// <summary>
    ///     Appends text content to current text element.
    /// </summary>
    /// <param name="text">Text content</param>
    void SetText(System::String text);
    
protected:

    System::SharedPtr<Aspose::Pdf::Cell> get_Cell();
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_TextFragment();
    
    TableCellElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureTypeStandard, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual void PreSave();
    virtual void Save();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Cell> _cell;
    System::SharedPtr<Color> _backgroundColor;
    System::SharedPtr<BorderInfo> _border;
    bool _isNoBorder;
    System::SharedPtr<MarginInfo> _margin;
    HorizontalAlignment _alignment;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _defaultCellTextState;
    bool _isWordWrapped;
    Aspose::Pdf::VerticalAlignment _verticalAlignment;
    int32_t _colSpan;
    int32_t _rowSpan;
    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> _structureTextState;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> _textFragment;
    
};

/// <summary>
///     Represents TH structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_API TableTHElement FINAL : public Aspose::Pdf::LogicalStructure::TableCellElement
{
    typedef TableTHElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableCellElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TableTHElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents TD structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_API TableTDElement FINAL : public Aspose::Pdf::LogicalStructure::TableCellElement
{
    typedef TableTDElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableCellElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TableTDElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


