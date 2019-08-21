#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enumerates the kinds of the relationships (the “reply type”) between the annotation and one specified by InReplyTo.
/// </summary>
enum class ReplyType
{
    /// <summary>
    /// Undefined relationship.
    /// </summary>
    Undefined,
    /// <summary>
    /// The annotation is considered a reply to the annotation specified by InReplyTo. Viewer applications should not display replies to an annotation individually but together in the form of threaded comments.
    /// </summary>
    Reply,
    /// <summary>
    /// The annotation is grouped with the annotation specified by InReplyTo.
    /// </summary>
    Group
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_API ReplyTypeConverter : public System::Object
{
    typedef ReplyTypeConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(ReplyType value);
    static System::String ToXfdfString(ReplyType value);
    static ReplyType ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


