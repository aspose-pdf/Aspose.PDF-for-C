#ifndef _Aspose_Pdf_InteractiveFeatures_GoToAction_h_
#define _Aspose_Pdf_InteractiveFeatures_GoToAction_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "InteractiveFeatures/PdfAction.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class GoToRemoteAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class IAppointment; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { enum class ExplicitDestinationType; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class ExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Represents a go-to action that changes the view to a specified destination (page, location, and magnification factor).
/// </summary>
class ASPOSE_PDF_SHARED_API GoToAction : public Aspose::Pdf::InteractiveFeatures::PdfAction
{
    typedef GoToAction ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::PdfAction;
    friend class Aspose::Pdf::InteractiveFeatures::GoToRemoteAction;
    
public:

    virtual System::SharedPtr<IAppointment> get_Destination();
    virtual void set_Destination(System::SharedPtr<IAppointment> value);
    
    GoToAction(int32_t page);
    GoToAction(System::SharedPtr<Page> page);
    GoToAction(System::SharedPtr<Page> page, ExplicitDestinationType type, System::ArrayPtr<double> const &values);
    GoToAction(System::SharedPtr<ExplicitDestination> destination);
    GoToAction();
    
protected:

    GoToAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "GoToAction"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_GoToAction_h_

