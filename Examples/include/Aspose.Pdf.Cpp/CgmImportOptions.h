#ifndef _Aspose_Pdf_CgmImportOptions_h_
#define _Aspose_Pdf_CgmImportOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/size_f.h>

#include "ImportOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Import option for import from Computer Graphics Metafile(CGM) format.
/// </summary>
class ASPOSE_PDF_SHARED_API CgmImportOptions : public Aspose::Pdf::ImportOptions
{
    typedef CgmImportOptions ThisType;
    typedef Aspose::Pdf::ImportOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::Drawing::SizeF get_PageSize();
    void set_PageSize(System::Drawing::SizeF value);
    
    CgmImportOptions();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CgmImportOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::Drawing::SizeF pageSize;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CgmImportOptions_h_

