#ifndef _Aspose_Pdf_XmlSaveOptions_h_
#define _Aspose_Pdf_XmlSaveOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "SaveOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to Xml format
/// </summary>
class ASPOSE_PDF_SHARED_API XmlSaveOptions : public Aspose::Pdf::SaveOptions
{
    typedef XmlSaveOptions ThisType;
    typedef Aspose::Pdf::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    XmlSaveOptions();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XmlSaveOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmlSaveOptions_h_

