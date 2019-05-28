#pragma once

#include <system/string.h>
#include <system/exceptions.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// The exception that is thrown when font usage is incorrect.
/// </summary>
class ASPOSE_PDF_SHARED_API IncorrectCMapUsageException FINAL : public System::Exception
{
    typedef IncorrectCMapUsageException ThisType;
    typedef System::Exception BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~IncorrectCMapUsageException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="IncorrectCMapUsageException"/> class.
    /// </summary>
    /// <param name="message">The message.</param>
    IncorrectCMapUsageException(System::String message);
    IncorrectCMapUsageException();
    IncorrectCMapUsageException(std::nullptr_t);
    
};

} // namespace Pdf
} // namespace Aspose


