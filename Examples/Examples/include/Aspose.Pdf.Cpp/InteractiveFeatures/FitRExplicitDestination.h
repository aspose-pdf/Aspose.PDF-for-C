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
/// Represents explicit destination that displays the page with its contents magnified just enough to fit the rectangle specified by the coordinates left, bottom, right, and topentirely within the window both horizontally and vertically. If the required horizontal and vertical magnification factors are different, use the smaller of the two, centering the rectangle within the window in the other dimension. A null value for any of the parameters may result in unpredictable behavior.
/// </summary>
class ASPOSE_PDF_SHARED_API FitRExplicitDestination FINAL : public Aspose::Pdf::Annotations::ExplicitDestination
{
    typedef FitRExplicitDestination ThisType;
    typedef Aspose::Pdf::Annotations::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::ExplicitDestination;
    
public:

    /// <summary>
    /// Gets left horizontal coordinate of visible rectangle.
    /// </summary>
    double get_Left();
    /// <summary>
    /// Gets bottom vertical coordinate of visible rectangle.
    /// </summary>
    double get_Bottom();
    /// <summary>
    /// Gets right horizontal coordinate of visible rectangle.
    /// </summary>
    double get_Right();
    /// <summary>
    /// Gets top vertical coordinate of visible rectangle.
    /// </summary>
    double get_Top();
    
    /// <summary>
    /// Creates local explicit destination.
    /// </summary>
    /// <param name="page">The destination page object.</param>
    /// <param name="left">Left horizontal coordinate of visible rectangle.</param>
    /// <param name="bottom">Bottom vertical coordinate of visible rectangle.</param>
    /// <param name="right">Right horizontal coordinate of visible rectangle.</param>
    /// <param name="top">Top vertical coordinate of visible rectangle.</param>
    FitRExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, double left, double bottom, double right, double top);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="document">The parent document that contains this object.</param>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="left">Left horizontal coordinate of visible rectangle.</param>
    /// <param name="bottom">Bottom vertical coordinate of visible rectangle.</param>
    /// <param name="right">Right horizontal coordinate of visible rectangle.</param>
    /// <param name="top">Top vertical coordinate of visible rectangle.</param>
    FitRExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber, double left, double bottom, double right, double top);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="left">Left horizontal coordinate of visible rectangle.</param>
    /// <param name="bottom">Bottom vertical coordinate of visible rectangle.</param>
    /// <param name="right">Right horizontal coordinate of visible rectangle.</param>
    /// <param name="top">Top vertical coordinate of visible rectangle.</param>
    FitRExplicitDestination(int32_t pageNumber, double left, double bottom, double right, double top);
    
    /// <summary>
    /// Converts the object state into string value. Example: "1 FitR 100 200 300 400".
    /// </summary>
    /// <returns>String value representing object state.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Creates the instance and initializes it by engine destination object.
    /// </summary>
    /// <param name="engineDest">Engine destination object.</param>
    FitRExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


