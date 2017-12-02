#ifndef _Aspose_Pdf_Facades_ViewerPreference_h_
#define _Aspose_Pdf_Facades_ViewerPreference_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Describes viewer prefereces (page mode, non full screen page mode, page layout).
/// </summary>
class ASPOSE_PDF_SHARED_API ViewerPreference FINAL : public System::Object
{
    typedef ViewerPreference ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static constexpr int32_t PageModeUseOC = 1048576;
    static constexpr int32_t DisplayDocTitle = 262144;
    static constexpr int32_t NonFullScreenPageModeUseOC = 524288;
    static constexpr int32_t PageLayoutSinglePage = 1;
    static constexpr int32_t PageLayoutOneColumn = 2;
    static constexpr int32_t PageLayoutTwoColumnLeft = 4;
    static constexpr int32_t PageLayoutTwoColumnRight = 8;
    static constexpr int32_t PageModeUseNone = 16;
    static constexpr int32_t PageModeUseOutlines = 32;
    static constexpr int32_t PageModeUseThumbs = 64;
    static constexpr int32_t PageModeFullScreen = 128;
    static constexpr int32_t PageModeUseAttachment = 2097152;
    static constexpr int32_t HideToolbar = 256;
    static constexpr int32_t HideMenubar = 512;
    static constexpr int32_t HideWindowUI = 1024;
    static constexpr int32_t FitWindow = 2048;
    static constexpr int32_t CenterWindow = 4096;
    static constexpr int32_t NonFullScreenPageModeUseNone = 8192;
    static constexpr int32_t NonFullScreenPageModeUseOutlines = 16384;
    static constexpr int32_t NonFullScreenPageModeUseThumbs = 32768;
    static constexpr int32_t DirectionL2R = 65536;
    static constexpr int32_t DirectionR2L = 131072;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_ViewerPreference_h_

