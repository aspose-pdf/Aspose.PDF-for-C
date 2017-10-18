#ifndef _Aspose_Pdf_CgmLoadOptions_h_
#define _Aspose_Pdf_CgmLoadOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/size_f.h>

#include "LoadOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Tests { class CgmImportTests; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Contains options for loading/importing CGM file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API CgmLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef CgmLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::CgmImportTests;
    
private:
    using Aspose::Pdf::LoadOptions::XpsIntermediateFileIfAny;
    
private:
    using Aspose::Pdf::LoadOptions::ApsIntermediateFileIfAny;
    
public:

    System::Drawing::SizeF get_PageSize();
    
    CgmLoadOptions();
    CgmLoadOptions(System::Drawing::SizeF pageSize);
    
protected:

    bool UseExternalPdfRenderer;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CgmLoadOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::Drawing::SizeF _pageSize;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CgmLoadOptions_h_

