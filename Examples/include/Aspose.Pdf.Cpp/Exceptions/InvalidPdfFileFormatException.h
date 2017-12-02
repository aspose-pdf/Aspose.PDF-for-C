#ifndef _Aspose_Pdf_Exceptions_InvalidPdfFileFormatException_h_
#define _Aspose_Pdf_Exceptions_InvalidPdfFileFormatException_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "Exceptions/InvalidFileFormatException.h"

namespace Aspose {

namespace Pdf {

namespace Exceptions {

/// <summary>
/// The exception that is thrown when a pdf file is invalid.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidPdfFileFormatException FINAL : public Aspose::Pdf::Exceptions::InvalidFileFormatException
{
    typedef InvalidPdfFileFormatException ThisType;
    typedef Aspose::Pdf::Exceptions::InvalidFileFormatException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~InvalidPdfFileFormatException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidPdfFileFormatException"/> class.
    /// </summary>
    /// <param name="message">The message.</param>
    InvalidPdfFileFormatException(System::String message);
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidPdfFileFormatException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    InvalidPdfFileFormatException(System::String message, System::Exception innerException);
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidPdfFileFormatException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    InvalidPdfFileFormatException(System::Exception innerException);
    InvalidPdfFileFormatException();
    InvalidPdfFileFormatException(std::nullptr_t);
    
};

} // namespace Exceptions
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Exceptions_InvalidPdfFileFormatException_h_

