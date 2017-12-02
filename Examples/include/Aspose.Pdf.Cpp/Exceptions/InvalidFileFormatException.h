#ifndef _Aspose_Pdf_Exceptions_InvalidFileFormatException_h_
#define _Aspose_Pdf_Exceptions_InvalidFileFormatException_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Exceptions/PdfException.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Exceptions {

/// <summary>
/// The exception that is thrown when a file is invalid.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidFileFormatException : public Aspose::Pdf::Exceptions::PdfException
{
    typedef InvalidFileFormatException ThisType;
    typedef Aspose::Pdf::Exceptions::PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~InvalidFileFormatException();
    
    InvalidFileFormatException();
    InvalidFileFormatException(std::nullptr_t);
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidFileFormatException"/> class.
    /// </summary>
    /// <param name="message">The message.</param>
    InvalidFileFormatException(System::String message);
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidFileFormatException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    InvalidFileFormatException(System::String message, System::Exception innerException);
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidFileFormatException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    InvalidFileFormatException(System::Exception innerException);
    
};

} // namespace Exceptions
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Exceptions_InvalidFileFormatException_h_

