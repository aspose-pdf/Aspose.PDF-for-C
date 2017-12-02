#ifndef _Aspose_Pdf_Direction_h_
#define _Aspose_Pdf_Direction_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Text direction.
/// </summary>
enum class Direction
{
    /// <summary>
    /// Left to right direction.
    /// </summary>
    L2R,
    /// <summary>
    /// Right to left direction.
    /// </summary>
    R2L
};

class ASPOSE_PDF_SHARED_API DirectionConverter : public System::Object
{
    typedef DirectionConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(Direction value);
    static Direction ToEnum(System::String value);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Direction_h_

