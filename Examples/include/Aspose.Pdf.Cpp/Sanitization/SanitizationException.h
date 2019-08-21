#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/exceptions.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Sanitization {

/// <summary>
/// The exception that is thrown when an sanitization operation failed.
/// </summary>
class ASPOSE_PDF_SHARED_API SanitizationException FINAL : public System::Exception
{
    typedef SanitizationException ThisType;
    typedef System::Exception BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~SanitizationException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="SanitizationException"/> class.
    /// </summary>
    SanitizationException();
    SanitizationException(std::nullptr_t);
    /// <summary>
    /// Initializes a new instance of the <see cref="SanitizationException"/> class.
    /// </summary>
    /// <param name="message">The message.</param>
    SanitizationException(System::String message);
    /// <summary>
    /// Initializes a new instance of the <see cref="SanitizationException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    SanitizationException(System::String message, System::Exception innerException);
    /// <summary>
    /// Initializes a new instance of the <see cref="SanitizationException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    SanitizationException(System::Exception innerException);
    
};

} // namespace Sanitization
} // namespace Pdf
} // namespace Aspose


