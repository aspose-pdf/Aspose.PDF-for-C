#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// This interface represents an element of existing table extracted by TableAbsorber.
/// </summary>
class ASPOSE_PDF_SHARED_API ITableElement : public System::Object
{
    typedef ITableElement ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets rectangle that describes position of table element on the page
    /// </summary>
    virtual System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() = 0;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


