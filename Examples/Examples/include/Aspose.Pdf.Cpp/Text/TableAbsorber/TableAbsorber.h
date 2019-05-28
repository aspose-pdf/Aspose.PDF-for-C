#pragma once
//using System.Runtime.Remoting;

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/stack.h>
#include <system/collections/list.h>
#include <system/collections/keyvalue_pair.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <cstdint>

#include "Rectangle_.h"
#include "Operator.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextPostReplaceFixer; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSearchOptions; } } }
namespace Aspose { namespace Pdf { namespace Text { class AbsorbedTable; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class BaseOperatorCollection; } }
namespace Aspose { namespace Fonts { class Matrix; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { namespace Text { class AbsorbedCell; } } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { namespace Text { class AbsorbedRow; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of table elements.
/// Performs search and provides access to search results via <see cref="TableAbsorber::TableList"/> collection.
/// </summary>
/// <example>
/// The example demonstrates how to find table on the first PDF document page and replace the text in a table cell.
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// 
/// // Create TableAbsorber object to find tables
/// TableAbsorber absorber = new TableAbsorber();
/// 
/// // Visit first page with absorber
/// absorber.Visit(pdfDocument.Pages[1]);
/// 
/// // Get access to first table on page, their first cell and text fragments in it
/// TextFragment fragment = absorber.TableList[0].RowList[0].CellList[0].TextFragments[1];
/// 
/// // Change text of the first text fragment in the cell
/// fragment.Text = "hi world";
/// 
/// // Save document
/// doc.Save(@"D:\Tests\output.pdf");  
/// </code> 
/// </example>
class ASPOSE_PDF_SHARED_API TableAbsorber : public System::Object
{
    typedef TableAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    
public:

    /// <summary>
    /// Gets or sets text search options.
    /// </summary>
    /// <remarks>
    /// Allows to define several options that will be used during search text containing in tables.
    /// </remarks>
    virtual System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> get_TextSearchOptions();
    /// <summary>
    /// Gets or sets text search options.
    /// </summary>
    /// <remarks>
    /// Allows to define several options that will be used during search text containing in tables.
    /// </remarks>
    virtual void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> value);
    /// <summary>
    /// Returns readonly IList containing tables that were found
    /// </summary>
    virtual System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<AbsorbedTable>>> get_TableList();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TableAbsorber"/> with text search options.
    /// </summary>
    /// <remarks>
    /// Performs searching for tables and provides access to the tables via <see cref="TableList"/> object.
    /// </remarks>
    /// <param name="textSearchOptions">Text search options</param>
    TableAbsorber(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TableAbsorber"/>.
    /// </summary>
    /// <remarks>
    /// Performs searching for tables and provides access to the tables via <see cref="TableList"/> object.
    /// </remarks>
    TableAbsorber();
    
    /// <summary>
    /// Extracts tables on the specified page
    /// </summary>
    /// <example>
    /// The example demonstrates how to extract table on the first PDF document page.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TableAbsorber object to find tables
    /// TableAbsorber absorber = new TableAbsorber();
    /// 
    /// // Visit first page with absorber
    /// absorber.Visit(pdfDocument.Pages[1]);
    /// 
    /// // Get access to first table on page, their first cell and text fragments in it
    /// TextFragment fragment = absorber.TableList[0].RowList[0].CellList[0].TextFragments[1];
    /// 
    /// // Change text of the first text fragment in the cell
    /// fragment.Text = "hi world";
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf");  
    /// </code> 
    /// </example>
    /// <param name="page">Pdf pocument page object.</param>
    virtual void Visit(System::SharedPtr<Page> page);
    /// <summary>
    /// Removes an <see cref="AbsorbedTable"/> from the page.
    /// </summary>
    /// <param name="table"><see cref="AbsorbedTable"/> to remove.</param>
    /// <remarks>
    /// Please take into account it changes TableList collection. In case removing/replacing tables in loop please use copy of TableList collection.
    /// </remarks>
    void Remove(System::SharedPtr<AbsorbedTable> table);
    /// <summary>
    /// Replaces an <see cref="AbsorbedTable"/> with <see cref="Table"/> on the page.
    /// </summary>
    /// <param name="page">Pdf pocument page object.</param>
    /// <param name="oldTable"><see cref="AbsorbedTable"/> to be replaced.</param>
    /// <param name="newTable"><see cref="Table"/> to replace old table.</param>
    /// <remarks>
    /// Please take into account it changes TableList collection. In case removing/replacing tables in loop please use copy of TableList collection.
    /// </remarks>
    void Replace(System::SharedPtr<Page> page, System::SharedPtr<AbsorbedTable> oldTable, System::SharedPtr<Table> newTable);
    
protected:

    /// <summary>
    /// Gets reactangles array representing table cells found on the page.
    /// Internal usage of TableAbsorber for TextPostReplaceFixer (PDFNET-45252).
    /// </summary>
    /// <param name="page">Pdf pocument page object.</param>
    /// <returns>Array of reactangles representing table cells.</returns>
    System::ArrayPtr<System::SharedPtr<Rectangle>> GetCellsToRectArray(System::SharedPtr<Page> page);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedTable>>> tables;
    System::SharedPtr<Page> _page;
    System::SharedPtr<BaseOperatorCollection> _operators;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Rectangle>>> initialRects;
    System::SharedPtr<System::Collections::Generic::List<System::Collections::Generic::KeyValuePair<System::SharedPtr<Rectangle>, System::SharedPtr<Operator>>>> tableOps;
    System::SharedPtr<Rectangle> potentialRect;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Aspose::Fonts::Matrix>>> transformationMatrices;
    System::SharedPtr<Aspose::Fonts::Matrix> currentMatrix;
    
    void Init();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> VisitForCells(System::SharedPtr<Page> page);
    void ParsePageContent(System::SharedPtr<Page> page);
    void ParseOperators(System::SharedPtr<BaseOperatorCollection> operators, System::SharedPtr<Resources> resources);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedTable>>> GetTablesFromRows(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedRow>>> rows, int32_t pageNum);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedRow>>> SortRows(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedRow>>> unsorted);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedRow>>> GetRowsFromCells(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> cells);
    static void ExpandLines(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> lines);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> GetCells(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> horLines, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> verLines);
    static System::SharedPtr<Rectangle> GetNextIntersection(System::SharedPtr<Rectangle> baseLine, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> lineList, int32_t startingIndex);
    static System::SharedPtr<Rectangle> GetIntersection(System::SharedPtr<Rectangle> hLine, System::SharedPtr<Rectangle> vLine);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> AggregateVLines(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> vLineFragList);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> AggregateHLines(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> hLineFragList);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> SortHFragments(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> unsorted);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> SortVFragments(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> unsorted);
    static void GetLineFragments(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> rectangles, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>>& hLineFragList, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>>& vLineFragList);
    void FillWithText(System::SharedPtr<Page> page);
    void ClearTextFragments(System::SharedPtr<Page> page);
    void NoOpPath();
    void OpStroke(System::SharedPtr<Operator> op);
    void OpFill(System::SharedPtr<Operator> op);
    void OpRe(System::SharedPtr<Operator> op);
    void OpPoint(System::SharedPtr<Operator> op);
    void OpLine(System::SharedPtr<Operator> op);
    /// <summary>
    /// Restore state
    /// </summary>
    void Q(int32_t opIndex, System::SharedPtr<Operator> op);
    /// <summary>
    /// Save state
    /// </summary>
    void q(int32_t opIndex, System::SharedPtr<Operator> op);
    void cm(System::SharedPtr<Operator> op);
    void opDo(System::SharedPtr<Operator> op, System::SharedPtr<Resources> resources);
    bool removeTableOpsFromRectange(System::SharedPtr<Rectangle> rect, System::SharedPtr<Page> page);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


