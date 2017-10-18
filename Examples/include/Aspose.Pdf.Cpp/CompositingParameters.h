#ifndef _Aspose_Pdf_CompositingParameters_h_
#define _Aspose_Pdf_CompositingParameters_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { enum class BlendMode; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents an object containing graphics compositing parameters of current graphics state.
/// </summary>
class ASPOSE_PDF_SHARED_API CompositingParameters FINAL : public System::Object
{
    typedef CompositingParameters ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    Aspose::Pdf::BlendMode get_BlendMode();
    
    CompositingParameters(Aspose::Pdf::BlendMode blendMode);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CompositingParameters"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    Aspose::Pdf::BlendMode _blendMode;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CompositingParameters_h_

