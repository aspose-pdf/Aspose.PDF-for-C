#pragma once

#include <system/string.h>

#include "Exceptions/PdfException.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Exception which thrown when requested value has incorrect format.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidValueFormatException : public Aspose::Pdf::PdfException
{
    typedef InvalidValueFormatException ThisType;
    typedef Aspose::Pdf::PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~InvalidValueFormatException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidValueFormatException"/> class.
    /// </summary>
    InvalidValueFormatException();
    InvalidValueFormatException(std::nullptr_t);
    /// <summary>
    /// Constructor. 
    /// </summary>
    /// <param name="message">Exception message.</param>
    InvalidValueFormatException(System::String message);
    
};

} // namespace Pdf
} // namespace Aspose


