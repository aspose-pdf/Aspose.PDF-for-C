#ifndef _Aspose_Pdf_InteractiveFeatures_GoToAction_h_
#define _Aspose_Pdf_InteractiveFeatures_GoToAction_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets or sets the destination to jump to.
    /// </summary>
    virtual System::SharedPtr<IAppointment> get_Destination();
    /// <summary>
    /// Gets or sets the destination to jump to.
    /// </summary>
    virtual void set_Destination(System::SharedPtr<IAppointment> value);
    
    /// <summary>
    /// Constructor for GoToAction class.
    /// </summary>
    /// <param name="page">The destination page number to jump to.</param>
    GoToAction(int32_t page);
    /// <summary>
    /// Constructor for GoToAction class.
    /// </summary>
    /// <param name="page">Aspose.Pdf.Page destination object to jump to.</param>
    GoToAction(System::SharedPtr<Page> page);
    /// <summary>
    /// Constructor for GoToAction class. 
    /// </summary>
    /// <param name="page">Destination page.</param>
    /// <param name="type">Destination type.</param>
    /// <param name="values">Action parameters.</param>
    GoToAction(System::SharedPtr<Page> page, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="destination">Explicit destination.</param>
    GoToAction(System::SharedPtr<ExplicitDestination> destination);
    /// <summary>
    /// Constructor.
    /// </summary>
    GoToAction();
    
protected:

    GoToAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_GoToAction_h_

