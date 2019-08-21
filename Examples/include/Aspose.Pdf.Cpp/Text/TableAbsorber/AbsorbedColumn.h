#pragma once

// C# preprocessor directive: #if UNIT_TEST


#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>

#include "Text/TableAbsorber/ITableElement.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class AbsorbedCell; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents column of table that exist on the page
/// </summary>
class ASPOSE_PDF_SHARED_API AbsorbedColumn : public Aspose::Pdf::Text::ITableElement
{
    typedef AbsorbedColumn ThisType;
    typedef Aspose::Pdf::Text::ITableElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets readonly IList containing cells of the column
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<AbsorbedCell>>> get_Cells();
    /// <summary>
    /// Gets rectangle that describes position of the column on page
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    
    AbsorbedColumn();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> cells;
    System::SharedPtr<Aspose::Pdf::Rectangle> rect;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif



