#ifndef _Aspose_Pdf_RenderingOptions_h_
#define _Aspose_Pdf_RenderingOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents rendering options.
/// </summary>
class ASPOSE_PDF_SHARED_API RenderingOptions FINAL : public System::Object
{
    typedef RenderingOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    bool get_BarcodeOptimization();
    void set_BarcodeOptimization(bool value);
    bool get_SystemFontsNativeRendering();
    void set_SystemFontsNativeRendering(bool value);
    bool get_UseNewImagingEngine();
    void set_UseNewImagingEngine(bool value);
    
    RenderingOptions();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "RenderingOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool _barcodeOptimization;
    bool _systemFontsNativeRendering;
    bool _useNewImagingEngine;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_RenderingOptions_h_

