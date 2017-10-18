#ifndef _Aspose_Pdf_Group__h_
#define _Aspose_Pdf_Group__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { enum class ColorSpace; } }
namespace Aspose { namespace Pdf { enum class ExtendedBoolean; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// A group attributes class specifying the attributes of the page’s page group for use in the transparent imaging model.
/// </summary>
class ASPOSE_PDF_SHARED_API Group FINAL : public System::Object
{
    typedef Group ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileMend;
    
public:

    Aspose::Pdf::ColorSpace get_ColorSpace();
    void set_ColorSpace(Aspose::Pdf::ColorSpace value);
    
    Group(System::SharedPtr<Page> page);
    
protected:

    ExtendedBoolean get_IsKnockout();
    void set_IsKnockout(ExtendedBoolean value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Group"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineGroup;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Group__h_

