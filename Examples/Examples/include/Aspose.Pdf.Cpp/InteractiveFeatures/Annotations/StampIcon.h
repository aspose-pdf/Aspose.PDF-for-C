﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enumerates the icons to be used in displaying the annotation.
/// </summary>
enum class StampIcon
{
    /// <summary>
    /// Draft stamp icon.
    /// </summary>
    Draft,
    /// <summary>
    /// Approved stamp icon.
    /// </summary>
    Approved,
    /// <summary>
    /// Experimental stamp icon.
    /// </summary>
    Experimental,
    /// <summary>
    /// Stamp icon is not approved.
    /// </summary>
    NotApproved,
    /// <summary>
    /// Stamp icon "as is".
    /// </summary>
    AsIs,
    /// <summary>
    /// Stamp icon is expired.
    /// </summary>
    Expired,
    /// <summary>
    /// Not for public release.
    /// </summary>
    NotForPublicRelease,
    /// <summary>
    /// Confidential.
    /// </summary>
    Confidential,
    /// <summary>
    /// Final stamp.
    /// </summary>
    Final,
    /// <summary>
    /// Sold   stamp.
    /// </summary>
    Sold,
    /// <summary>
    /// Departamental.
    /// </summary>
    Departmental,
    /// <summary>
    /// For comment.
    /// </summary>
    ForComment,
    /// <summary>
    /// For public release.
    /// </summary>
    ForPublicRelease,
    /// <summary>
    /// Top secret.
    /// </summary>
    TopSecret
};


// C# preprocessor directive: #if __cplusplus 


// C# preprocessor directive: #else 


// C# preprocessor directive: #endif 

class ASPOSE_PDF_SHARED_API StampIconConverter : public System::Object
{
    typedef StampIconConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(StampIcon value);
    static StampIcon ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


