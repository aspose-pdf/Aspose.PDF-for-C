#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents general interface for actions and destinations.
/// </summary>
class ASPOSE_PDF_SHARED_API IAppointment : public System::Object
{
    typedef IAppointment ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns string representation
    /// </summary>
    /// <returns></returns>
    virtual System::String ToString() = 0;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


