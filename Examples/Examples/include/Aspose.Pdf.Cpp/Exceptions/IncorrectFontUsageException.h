#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Exceptions/InvalidFileFormatException.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// The exception that is thrown when font usage is incorrect.
/// </summary>
class ASPOSE_PDF_SHARED_API IncorrectFontUsageException FINAL : public Aspose::Pdf::InvalidFileFormatException
{
    typedef IncorrectFontUsageException ThisType;
    typedef Aspose::Pdf::InvalidFileFormatException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~IncorrectFontUsageException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="IncorrectFontUsageException"/> class.
    /// </summary>
    /// <param name="message">The message.</param>
    IncorrectFontUsageException(System::String message);
    /// <summary>
    /// Initializes a new instance of the <see cref="IncorrectFontUsageException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    IncorrectFontUsageException(System::String message, System::Exception innerException);
    /// <summary>
    /// Initializes a new instance of the <see cref="IncorrectFontUsageException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    IncorrectFontUsageException(System::Exception innerException);
    IncorrectFontUsageException();
    IncorrectFontUsageException(std::nullptr_t);
    
};

} // namespace Pdf
} // namespace Aspose


