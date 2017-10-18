#ifndef _Aspose_Pdf_MobiXmlSaveOptions_h_
#define _Aspose_Pdf_MobiXmlSaveOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "UnifiedSaveOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to Xml format
/// </summary>
class ASPOSE_PDF_SHARED_API MobiXmlSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef MobiXmlSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    MobiXmlSaveOptions();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "MobiXmlSaveOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_MobiXmlSaveOptions_h_

