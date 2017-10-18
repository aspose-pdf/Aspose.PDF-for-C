#ifndef _Aspose_Pdf_XpsLoadOptions_h_
#define _Aspose_Pdf_XpsLoadOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "LoadOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing xps file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API XpsLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef XpsLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    XpsLoadOptions();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XpsLoadOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XpsLoadOptions_h_

