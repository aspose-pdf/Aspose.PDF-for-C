#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

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

namespace Annotations {

/// <summary>
/// Represents explicit destination that displays the page with the horizontal coordinate left positioned at the left edge of the window and the contents of the page magnified just enough to fit the entire height of the page within the window. A null value for left specifies that the current value of that parameter is to be retained unchanged.
/// </summary>
class ASPOSE_PDF_SHARED_API FitVExplicitDestination FINAL : public Aspose::Pdf::Annotations::ExplicitDestination
{
    typedef FitVExplicitDestination ThisType;
    typedef Aspose::Pdf::Annotations::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::ExplicitDestination;
    
public:

    /// <summary>
    /// Gets the horizontal coordinate left positioned at the left edge of the window.
    /// </summary>
    double get_Left();
    
    /// <summary>
    /// Creates local explicit destination.
    /// </summary>
    /// <param name="page">The destination page object.</param>
    /// <param name="left">The horizontal coordinate left positioned at the left edge of the window.</param>
    FitVExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, double left);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="document">The parent document that contains this object.</param>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="left">The horizontal coordinate left positioned at the left edge of the window.</param>
    FitVExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber, double left);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="left">The horizontal coordinate left positioned at the left edge of the window.</param>
    FitVExplicitDestination(int32_t pageNumber, double left);
    
    /// <summary>
    /// Converts the object state into string value. Example: "1 FitV 100".
    /// </summary>
    /// <returns>String value representing object state.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Creates the instance and initializes it by engine destination object.
    /// </summary>
    /// <param name="engineDest">Engine destination object.</param>
    FitVExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


