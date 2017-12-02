#ifndef _Aspose_Pdf_InteractiveFeatures_FitHExplicitDestination_h_
#define _Aspose_Pdf_InteractiveFeatures_FitHExplicitDestination_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "InteractiveFeatures/ExplicitDestination.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Represents explicit destination that displays the page with the vertical coordinate top positioned at the top edge of the window and the contents of the page magnified just enough to fit the entire width of the page within the window. A null value for top specifies that the current value of that parameter is to be retained unchanged.
/// </summary>
class ASPOSE_PDF_SHARED_API FitHExplicitDestination FINAL : public Aspose::Pdf::InteractiveFeatures::ExplicitDestination
{
    typedef FitHExplicitDestination ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::ExplicitDestination;
    
public:

    /// <summary>
    /// Gets the vertical coordinate top positioned at the top edge of the window.
    /// </summary>
    double get_Top();
    
    /// <summary>
    /// Creates local explicit destination.
    /// </summary>
    /// <param name="page">The destination page object.</param>
    /// <param name="top">The vertical coordinate top positioned at the top edge of the window.</param>
    FitHExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, double top);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="document">The parent document that contains this object.</param>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="top">The vertical coordinate top positioned at the top edge of the window.</param>
    FitHExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber, double top);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="top">The vertical coordinate top positioned at the top edge of the window.</param>
    FitHExplicitDestination(int32_t pageNumber, double top);
    
    /// <summary>
    /// Converts the object state into string value. Example: "1 FitH 100".
    /// </summary>
    /// <returns>String value representing object state.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Creates the instance and initializes it by engine destination object.
    /// </summary>
    /// <param name="engineDest">Engine destination object.</param>
    FitHExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_FitHExplicitDestination_h_

