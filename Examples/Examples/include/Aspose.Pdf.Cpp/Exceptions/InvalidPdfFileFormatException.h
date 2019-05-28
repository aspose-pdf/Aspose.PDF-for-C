﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Exceptions/InvalidFileFormatException.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// The exception that is thrown when a pdf file is invalid.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidPdfFileFormatException FINAL : public Aspose::Pdf::InvalidFileFormatException
{
    typedef InvalidPdfFileFormatException ThisType;
    typedef Aspose::Pdf::InvalidFileFormatException BaseType;
    
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

} // namespace Pdf
} // namespace Aspose


