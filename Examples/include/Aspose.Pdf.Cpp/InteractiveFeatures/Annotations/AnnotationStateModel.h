#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationStateModel_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationStateModel_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// The state model corresponding to state of annotation.
/// </summary>
enum class AnnotationStateModel
{
    /// <summary>
    /// Not defined state model.
    /// </summary>
    Undefined,
    /// <summary>
    /// The annotation has been marked (or unmarked) by the user.
    /// </summary>
    Marked,
    /// <summary>
    /// The annotation has been reviewed (accepted, rejected, cancelled, completed, none) by the user.
    /// </summary>
    Review
};

class ASPOSE_PDF_SHARED_API AnnotationStateModelConverter : public System::Object
{
    typedef AnnotationStateModelConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(AnnotationStateModel value);
    static AnnotationStateModel ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationStateModel_h_

