#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include "Text/TableAbsorber/ITableElement.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TableAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentCollection; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents cell of table that exist on the page
/// </summary>
class ASPOSE_PDF_SHARED_API AbsorbedCell : public Aspose::Pdf::Text::ITableElement
{
    typedef AbsorbedCell ThisType;
    typedef Aspose::Pdf::Text::ITableElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TableAbsorber;
    
public:

    /// <summary>
    /// Gets collection of <see cref="TextFragment"/> objects that describes text containing in the cell
    /// </summary>
    System::SharedPtr<TextFragmentCollection> get_TextFragments();
    /// <summary>
    /// Gets rectangle that describes position of the cell on page
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    
protected:

    /// <summary>
    /// Initializes new AbsorbedCell object with rectangle that describes position
    /// </summary>
    /// <param name="rectangle">Rectangle object</param>
    AbsorbedCell(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    
    /// <summary>
    /// Adds TextFragment object to the cell
    /// </summary>
    /// <param name="fragment">TextFragment object</param>
    /// <returns>Value indicates operation success. (Unused now.)</returns>
    bool AddTextFragment(System::SharedPtr<TextFragment> fragment);
    /// <summary>
    /// Adds TextFragment object to the cell
    /// </summary>
    /// <returns>Value indicates operation success. (Unused now.)</returns>
    bool ClearFragments();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<TextFragmentCollection> textFragments;
    System::SharedPtr<Aspose::Pdf::Rectangle> rect;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


