#ifndef _Aspose_Pdf_InteractiveFeatures_Justification_h_
#define _Aspose_Pdf_InteractiveFeatures_Justification_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Enumerates the forms of quadding (justification) to be used in displaying the annotation�s text.
/// </summary>
enum class Justification
{
    /// <summary>
    /// Left justification.
    /// </summary>
    Left = 0,
    /// <summary>
    /// Center justification.
    /// </summary>
    Center = 1,
    /// <summary>
    /// Right justification.
    /// </summary>
    Right = 2
};

class ASPOSE_PDF_SHARED_API JustificationConverter : public System::Object
{
    typedef JustificationConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToXfdfString(Justification value);
    static Justification ToEnum(System::String value);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Justification_h_

