#ifndef _Aspose_Pdf_InteractiveFeatures_ExplicitDestination_h_
#define _Aspose_Pdf_InteractiveFeatures_ExplicitDestination_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/globalization/culture_info.h>
#include <system/array.h>
#include <cstdint>

#include "InteractiveFeatures/IAppointment.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class DestinationCollection; } }
namespace Aspose { namespace Pdf { namespace Facades { class Bookmark; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LinkAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class FitBExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class FitBHExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class FitBVExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class FitExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class FitHExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class FitRExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class FitVExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class XYZExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class GoToAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class GoToRemoteAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class DestinationFactory; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { enum class ExplicitDestinationType; } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Represents the base class for explicit destinations in PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT ExplicitDestination : public Aspose::Pdf::InteractiveFeatures::IAppointment
{
    typedef ExplicitDestination ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::IAppointment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::DestinationCollection;
    friend class Aspose::Pdf::Facades::Bookmark;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::LinkAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::FitBExplicitDestination;
    friend class Aspose::Pdf::InteractiveFeatures::FitBHExplicitDestination;
    friend class Aspose::Pdf::InteractiveFeatures::FitBVExplicitDestination;
    friend class Aspose::Pdf::InteractiveFeatures::FitExplicitDestination;
    friend class Aspose::Pdf::InteractiveFeatures::FitHExplicitDestination;
    friend class Aspose::Pdf::InteractiveFeatures::FitRExplicitDestination;
    friend class Aspose::Pdf::InteractiveFeatures::FitVExplicitDestination;
    friend class Aspose::Pdf::InteractiveFeatures::XYZExplicitDestination;
    friend class Aspose::Pdf::InteractiveFeatures::GoToAction;
    friend class Aspose::Pdf::InteractiveFeatures::GoToRemoteAction;
    friend class Aspose::Pdf::InteractiveFeatures::DestinationFactory;
    
public:

    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    int32_t get_PageNumber();
    
    static System::SharedPtr<ExplicitDestination> CreateDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type, System::ArrayPtr<double> const &values);
    static System::SharedPtr<ExplicitDestination> CreateDestination(System::SharedPtr<Document> doc, int32_t pageNumber, ExplicitDestinationType type, System::ArrayPtr<double> const &values);
    static System::SharedPtr<ExplicitDestination> CreateDestination(int32_t pageNumber, ExplicitDestinationType type, System::ArrayPtr<double> const &values);
    
protected:

    System::SharedPtr<System::Globalization::CultureInfo> Culture;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_EngineDest();
    
    static System::SharedPtr<ExplicitDestination> CreateDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    ExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type, System::ArrayPtr<double> const &values);
    ExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type);
    ExplicitDestination(int32_t pageNumber, ExplicitDestinationType type, System::ArrayPtr<double> const &values);
    ExplicitDestination(int32_t pageNumber, ExplicitDestinationType type);
    ExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ExplicitDestination"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Page> _page;
    int32_t _pageNumber;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _engineDest;
    
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> CreateEngineDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type, System::ArrayPtr<double> const &values);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> CreateEngineDestination(int32_t pageNumber, ExplicitDestinationType type, System::ArrayPtr<double> const &values);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_ExplicitDestination_h_

