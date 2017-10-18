#ifndef _Aspose_Pdf_InteractiveFeatures_NamedDestination_h_
#define _Aspose_Pdf_InteractiveFeatures_NamedDestination_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>

#include "InteractiveFeatures/IAppointment.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class DestinationFactory; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfString; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfName; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Instead of being defined directly with the explicit syntax, a destination may be referred to indirectly by means of a name object or a byte string.
/// </summary>
class ASPOSE_PDF_SHARED_API NamedDestination FINAL : public Aspose::Pdf::InteractiveFeatures::IAppointment
{
    typedef NamedDestination ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::IAppointment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::DestinationFactory;
    
public:

    System::String get_Name();
    
    virtual System::String ToString();
    
protected:

    NamedDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> engineStr);
    NamedDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> engineName);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "NamedDestination"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> _engineStr;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> _engineName;
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_NamedDestination_h_

