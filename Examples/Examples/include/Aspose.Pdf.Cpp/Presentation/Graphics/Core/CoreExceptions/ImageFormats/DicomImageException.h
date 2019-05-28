#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/exceptions.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace CoreExceptions {

namespace ImageFormats {

/// <summary>
/// The Dicom image exception.
/// </summary>
class ASPOSE_PDF_SHARED_API DicomImageException : public System::Exception
{
    typedef DicomImageException ThisType;
    typedef System::Exception BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~DicomImageException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="DicomImageException"/> class.
    /// </summary>
    /// <param name="message">
    /// The message.
    /// </param>
    DicomImageException(System::String message);
    /// <summary>
    /// Initializes a new instance of the <see cref="DicomImageException"/> class.
    /// </summary>
    /// <param name="message">
    /// The message.
    /// </param>
    /// <param name="innerException">
    /// The inner exception.
    /// </param>
    DicomImageException(System::String message, System::Exception innerException);
    DicomImageException();
    DicomImageException(std::nullptr_t);
    
};

} // namespace ImageFormats
} // namespace CoreExceptions
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


