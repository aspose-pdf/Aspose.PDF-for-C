#pragma once

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <drawing/rectangle_f.h>

#include "Generator/BaseParagraph.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class HtmlFragment; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { class PdfPageInfo; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Matrix; } }
namespace Aspose { namespace Pdf { class PageInfo; } }
namespace Aspose { namespace Pdf { namespace Operators { class ConcatenateMatrix; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents abstract formatted fragment.
/// </summary>
class ASPOSE_PDF_SHARED_API FormattedFragment : public Aspose::Pdf::BaseParagraph
{
    typedef FormattedFragment ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::HtmlFragment;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Table;
    
protected:

    System::String text;
    System::Drawing::RectangleF rectangle;
    
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> get_PageInfos();
    void set_PageInfos(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> value);
    bool get_IsConverted();
    void set_IsConverted(bool value);
    double get_Height();
    
    FormattedFragment(System::String text);
    
    /// <summary>
    /// Copies the resource dictionary from page to source page and vica versa (for non adding content mode only).
    /// </summary>
    /// <param name="srcPage">The flag manages the direction of copy. If the values is true, than data is copied from new page to original page.</param>
    /// <param name="destPage">The flag manages the direction of copy. If the values is true, than data is copied from new page to original page.</param> 
    static void CopyResources(System::SharedPtr<Page> srcPage, System::SharedPtr<Page> destPage);
    bool Process(double& curX, double& curY, bool isCalculatedMode, double width, double bottomY, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Page> page, System::SharedPtr<MarginInfo> margin, System::SharedPtr<Table> table, double lastParagraphHeight, bool isHeaderFooter);
    virtual System::SharedPtr<Matrix> GetMatrix(double curX, double curY, System::SharedPtr<PageInfo> pageInfo);
    virtual System::SharedPtr<Operators::ConcatenateMatrix> GetMatrixOperator(double curX, double curY, System::SharedPtr<PageInfo> pageInfo);
    virtual void ConvertToPages(System::SharedPtr<Page> page, double width, double firstHeight, double anyHeight, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> pageInfos, System::SharedPtr<Matrix> matrix) = 0;
    double CalculateWidth();
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    void CopyFields(System::SharedPtr<FormattedFragment> fragment);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> pr_PageInfos;
    bool pr_IsConverted;
    
    void ClearPageInfos();
    
};

} // namespace Pdf
} // namespace Aspose


