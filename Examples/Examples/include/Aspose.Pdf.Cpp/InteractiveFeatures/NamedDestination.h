#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "InteractiveFeatures/IAppointment.h"

namespace Aspose { namespace Pdf { namespace Annotations { class LinkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class GoToAction; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class DestinationFactory; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfString; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfName; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Instead of being defined directly with the explicit syntax, a destination may be referred to indirectly by means of a name object or a byte string.
/// </summary>
class ASPOSE_PDF_SHARED_API NamedDestination FINAL : public Aspose::Pdf::Annotations::IAppointment
{
    typedef NamedDestination ThisType;
    typedef Aspose::Pdf::Annotations::IAppointment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::LinkAnnotation;
    friend class Aspose::Pdf::Annotations::GoToAction;
    friend class Aspose::Pdf::Annotations::DestinationFactory;
    
public:

    /// <summary>
    /// Gets the name of named destination.
    /// </summary>
    System::String get_Name();
    
    /// <summary>
    /// Create named destination.
    /// </summary>
    /// <param name="doc">Document where named destination should be created.</param>
    /// <param name="name">Name to which destination refers.</param>
    NamedDestination(System::SharedPtr<Document> doc, System::String name);
    
    /// <summary>
    /// Converts destination to string value.
    /// </summary>
    /// <returns>String value.</returns>
    virtual System::String ToString();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> get_EngineObject();
    
    NamedDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> engineStr);
    NamedDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> engineName);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> _engineStr;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> _engineName;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


