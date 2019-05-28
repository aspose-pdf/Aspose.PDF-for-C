#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/exceptions.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/*

    /// <summary>
    /// The <b>Aspose.Pdf.Exceptions</b> namespace provides classes for exceptions which can occur while working with a document.
    /// </summary>
    [System.Runtime.CompilerServices.CompilerGeneratedAttribute()]
    class NamespaceDoc
    {
    }

     */
/// <summary>
/// Represents errors that occur during PDF application execution.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfException : public System::Exception
{
    typedef PdfException ThisType;
    typedef System::Exception BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~PdfException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfException"/> class.
    /// </summary>
    PdfException();
    PdfException(std::nullptr_t);
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfException"/> class.
    /// </summary>
    /// <param name="message">The message.</param>
    PdfException(System::String message);
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    PdfException(System::String message, System::Exception innerException);
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    PdfException(System::Exception innerException);
    
};

} // namespace Pdf
} // namespace Aspose


