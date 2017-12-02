#ifndef _Aspose_Pdf_InteractiveFeatures_ExplicitDestination_h_
#define _Aspose_Pdf_InteractiveFeatures_ExplicitDestination_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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
    /// Creates the explicit destination without additional values of explicit destination type.
    /// </summary>
    /// <param name="page">The destination Aspose.Pdf.Page object.</param>
    /// <param name="type">The type of explicit destination.</param>
    ExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type);
    /// <summary>
    /// Creates the explicit destination.
    /// </summary>
    /// <param name="pageNumber">The destination page number.</param>
    /// <param name="type">The type of explicit destination.</param>
    /// <param name="values">The additional values of explicit destination type.</param>
    ExplicitDestination(int32_t pageNumber, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    ExplicitDestination(int32_t pageNumber, ExplicitDestinationType type);
    ExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    double GetNumber(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Page> _page;
    int32_t _pageNumber;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _engineDest;
    
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> CreateEngineDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> CreateEngineDestination(int32_t pageNumber, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_ExplicitDestination_h_

