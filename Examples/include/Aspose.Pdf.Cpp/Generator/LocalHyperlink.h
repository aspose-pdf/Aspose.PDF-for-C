#ifndef _Aspose_Pdf_Generator_LocalHyperlink_h_
#define _Aspose_Pdf_Generator_LocalHyperlink_h_
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <cstdint>

#include "Generator/Hyperlink.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class BaseParagraph; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents local hyperlink object.
/// </summary>
class ASPOSE_PDF_SHARED_API LocalHyperlink FINAL : public Aspose::Pdf::Hyperlink
{
    typedef LocalHyperlink ThisType;
    typedef Aspose::Pdf::Hyperlink BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<BaseParagraph> get_Target();
    void set_Target(System::SharedPtr<BaseParagraph> value);
    int32_t get_TargetPageNumber();
    void set_TargetPageNumber(int32_t value);
    
    LocalHyperlink();
    LocalHyperlink(System::SharedPtr<BaseParagraph> target);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "LocalHyperlink"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<BaseParagraph> target;
    int32_t targetPageNumber;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_LocalHyperlink_h_

