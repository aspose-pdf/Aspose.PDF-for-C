#ifndef _Aspose_Pdf_Facades_ViewerPreference_h_
#define _Aspose_Pdf_Facades_ViewerPreference_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    constexpr static const int32_t PageModeUseOC = 1048576;
    constexpr static const int32_t DisplayDocTitle = 262144;
    constexpr static const int32_t NonFullScreenPageModeUseOC = 524288;
    constexpr static const int32_t PageLayoutSinglePage = 1;
    constexpr static const int32_t PageLayoutOneColumn = 2;
    constexpr static const int32_t PageLayoutTwoColumnLeft = 4;
    constexpr static const int32_t PageLayoutTwoColumnRight = 8;
    constexpr static const int32_t PageModeUseNone = 16;
    constexpr static const int32_t PageModeUseOutlines = 32;
    constexpr static const int32_t PageModeUseThumbs = 64;
    constexpr static const int32_t PageModeFullScreen = 128;
    constexpr static const int32_t PageModeUseAttachment = 2097152;
    constexpr static const int32_t HideToolbar = 256;
    constexpr static const int32_t HideMenubar = 512;
    constexpr static const int32_t HideWindowUI = 1024;
    constexpr static const int32_t FitWindow = 2048;
    constexpr static const int32_t CenterWindow = 4096;
    constexpr static const int32_t NonFullScreenPageModeUseNone = 8192;
    constexpr static const int32_t NonFullScreenPageModeUseOutlines = 16384;
    constexpr static const int32_t NonFullScreenPageModeUseThumbs = 32768;
    constexpr static const int32_t DirectionL2R = 65536;
    constexpr static const int32_t DirectionR2L = 131072;
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ViewerPreference"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_ViewerPreference_h_

