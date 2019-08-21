#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/globalization/culture_info.h>
#include <system/array.h>
#include <cstdint>

#include "InteractiveFeatures/IAppointment.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class DestinationCollection; } }
namespace Aspose { namespace Pdf { namespace Facades { class Bookmark; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class LinkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FitBExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FitBHExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FitBVExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FitExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FitHExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FitRExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FitVExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class XYZExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class GoToAction; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class GoToRemoteAction; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class DestinationFactory; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class ExplicitDestinationType; } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents the base class for explicit destinations in PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API ExplicitDestination : public Aspose::Pdf::Annotations::IAppointment
{
    typedef ExplicitDestination ThisType;
    typedef Aspose::Pdf::Annotations::IAppointment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::DestinationCollection;
    friend class Aspose::Pdf::Facades::Bookmark;
    friend class Aspose::Pdf::Annotations::LinkAnnotation;
    friend class Aspose::Pdf::Annotations::FitBExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitBHExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitBVExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitHExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitRExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitVExplicitDestination;
    friend class Aspose::Pdf::Annotations::XYZExplicitDestination;
    friend class Aspose::Pdf::Annotations::GoToAction;
    friend class Aspose::Pdf::Annotations::GoToRemoteAction;
    friend class Aspose::Pdf::Annotations::DestinationFactory;
    
public:

    /// <summary>
    /// Gets the destination page object
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    /// <summary>
    /// Gets the destination page number
    /// </summary>
    int32_t get_PageNumber();
    
    /// <summary>
    /// Creates instances of ExplicitDestination descendant classes.
    /// </summary>
    /// <param name="page">The object of destination page.</param>
    /// <param name="type">The type of explicit destination.</param>
    /// <param name="values">Array of double values.</param>
    /// <returns>The explicit destination object.</returns>
    static System::SharedPtr<ExplicitDestination> CreateDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    /// <summary>
    /// Creates instances of ExplicitDestination descendant classes.
    /// </summary>
    /// <param name="doc">Document where destination will be created.</param>
    /// <param name="pageNumber">Number of the page.</param>
    /// <param name="type">Destionatyion type.</param>
    /// <param name="values">Array of destination specific values.</param>
    /// <returns>The explicit destination object.</returns>
    static System::SharedPtr<ExplicitDestination> CreateDestination(System::SharedPtr<Document> doc, int32_t pageNumber, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    /// <summary>
    /// Creates instances of ExplicitDestination descendant classes.
    /// </summary>
    /// <param name="pageNumber">The destination page number.</param>
    /// <param name="type">The type of explicit destination.</param>
    /// <param name="values">Array of double values.</param>
    /// <returns>The explicit destination object.</returns>
    static System::SharedPtr<ExplicitDestination> CreateDestination(int32_t pageNumber, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    /// <summary>
    /// Returns string representation of ExplicitDestination object.
    /// </summary>
    /// <returns></returns>
    virtual System::String ToString() = 0;
    
protected:

    System::SharedPtr<System::Globalization::CultureInfo> Culture;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_EngineDest();
    
    /// <summary>
    /// Creates instance of ExplicitDestination descendant classes.
    /// </summary>
    /// <param name="engineDest">Engine destination object.</param>
    /// <returns>DOM explicit destination object.</returns>
    static System::SharedPtr<ExplicitDestination> CreateDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    /// <summary>
    /// Creates the explicit destination.
    /// </summary>
    /// <param name="page">The destination Aspose.Pdf.Page object.</param>
    /// <param name="type">The type of explicit destination.</param>
    /// <param name="values">The additional values of explicit destination type.</param>
    ExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    /// <summary>
    /// Creates the explicit destination.
    /// </summary>
    /// <param name="pageNumber">The destination page number.</param>
    /// <param name="type">The type of explicit destination.</param>
    /// <param name="values">The additional values of explicit destination type.</param>
    ExplicitDestination(int32_t pageNumber, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    ExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Page> _page;
    int32_t _pageNumber;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _engineDest;
    
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> CreateEngineDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> CreateEngineDestination(int32_t pageNumber, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


