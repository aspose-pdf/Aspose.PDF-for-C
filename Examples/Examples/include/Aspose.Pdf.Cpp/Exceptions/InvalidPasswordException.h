#pragma once

#include <system/string.h>

#include "Exceptions/PdfException.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// The exception that is thrown when invalid password is provided by user.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidPasswordException FINAL : public Aspose::Pdf::PdfException
{
    typedef InvalidPasswordException ThisType;
    typedef Aspose::Pdf::PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~InvalidPasswordException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidPasswordException"/> class.
    /// </summary>
    /// <param name="message">The message.</param>
    InvalidPasswordException(System::String message);
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidPasswordException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    InvalidPasswordException(System::String message, System::Exception innerException);
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidPasswordException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    InvalidPasswordException(System::Exception innerException);
    InvalidPasswordException();
    InvalidPasswordException(std::nullptr_t);
    
};

} // namespace Pdf
} // namespace Aspose


