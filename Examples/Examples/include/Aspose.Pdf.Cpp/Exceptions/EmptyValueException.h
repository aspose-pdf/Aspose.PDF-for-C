#pragma once

#include <system/string.h>

#include "Exceptions/PdfException.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Exception which thrown when requirested value does not exists.
/// </summary>
class ASPOSE_PDF_SHARED_API EmptyValueException : public Aspose::Pdf::PdfException
{
    typedef EmptyValueException ThisType;
    typedef Aspose::Pdf::PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~EmptyValueException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="EmptyValueException"/> class.
    /// </summary>
    EmptyValueException();
    EmptyValueException(std::nullptr_t);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="message">Exception message.</param>
    EmptyValueException(System::String message);
    
private:

    System::String valueName;
    
};

} // namespace Pdf
} // namespace Aspose


