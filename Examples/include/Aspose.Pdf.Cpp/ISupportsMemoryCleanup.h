#ifndef _Aspose_Pdf_ISupportsMemoryCleanup_h_
#define _Aspose_Pdf_ISupportsMemoryCleanup_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// The interface defines ways to cleanup memory in case mass operations.
/// </summary>
class ASPOSE_PDF_SHARED_API ISupportsMemoryCleanup : public virtual System::Object
{
    typedef ISupportsMemoryCleanup ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual void FreeMemory() = 0;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ISupportsMemoryCleanup_h_

