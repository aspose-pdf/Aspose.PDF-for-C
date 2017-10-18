#ifndef _Aspose_Pdf_EpubLoadOptions_h_
#define _Aspose_Pdf_EpubLoadOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/size_f.h>

#include "LoadOptions.h"

namespace Aspose { namespace Pdf { class MarginInfo; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Contains options for loading/importing EPUB file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API EpubLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef EpubLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::Drawing::SizeF get_PageSize();
    System::SharedPtr<MarginInfo> get_Margin();
    
    EpubLoadOptions();
    EpubLoadOptions(System::Drawing::SizeF pageSize);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "EpubLoadOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::Drawing::SizeF _pageSize;
    System::SharedPtr<MarginInfo> _marginInfo;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_EpubLoadOptions_h_

