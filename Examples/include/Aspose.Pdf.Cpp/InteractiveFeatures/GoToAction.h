#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "InteractiveFeatures/PdfAction.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class GoToRemoteAction; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class IAppointment; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class ExplicitDestinationType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class ExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a go-to action that changes the view to a specified destination (page, location, and magnification factor).
/// </summary>
class ASPOSE_PDF_SHARED_API GoToAction : public Aspose::Pdf::Annotations::PdfAction
{
    typedef GoToAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PdfAction;
    friend class Aspose::Pdf::Annotations::GoToRemoteAction;
    
public:

    /// <summary>
    /// Gets the destination to jump to.
    /// </summary>
    virtual System::SharedPtr<IAppointment> get_Destination();
    /// <summary>
    /// Sets the destination to jump to.
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
    /// <summary>
    /// Action which linked with Named Destination.
    /// </summary>
    /// <param name="doc">Document where action will be created.</param>
    /// <param name="name">Name of the destination.</param>
    GoToAction(System::SharedPtr<Document> doc, System::String name);
    
protected:

    GoToAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


