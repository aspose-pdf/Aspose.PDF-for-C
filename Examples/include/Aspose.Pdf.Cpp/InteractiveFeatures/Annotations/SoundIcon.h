#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_SoundIcon_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_SoundIcon_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Enumerates the icons to be used in displaying the annotation.
/// </summary>
enum class SoundIcon
{
    /// <summary>
    /// Speaker icon.
    /// </summary>
    Speaker,
    /// <summary>
    /// Microphone icon.
    /// </summary>
    Mic
};

class ASPOSE_PDF_SHARED_API SoundIconConverter : public System::Object
{
    typedef SoundIconConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(SoundIcon value);
    static SoundIcon ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_SoundIcon_h_

