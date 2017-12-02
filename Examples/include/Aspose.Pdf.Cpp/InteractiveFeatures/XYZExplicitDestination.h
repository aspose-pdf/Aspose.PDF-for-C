#ifndef _Aspose_Pdf_InteractiveFeatures_XYZExplicitDestination_h_
#define _Aspose_Pdf_InteractiveFeatures_XYZExplicitDestination_h_
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
/// Represents explicit destination that displays the page with the coordinates (left, top) positioned at the upper-left corner of the window and the contents of the page magnified by the factor zoom. A null value for any of the parameters left, top, or zoom specifies that the current value of that parameter is to be retained unchanged. A zoom value of 0 has the same meaning as a null value.
/// </summary>
/// <example>
/// <code></code>
/// </example>
class ASPOSE_PDF_SHARED_API XYZExplicitDestination FINAL : public Aspose::Pdf::InteractiveFeatures::ExplicitDestination
{
    typedef XYZExplicitDestination ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::ExplicitDestination;
    
public:

    /// <summary>
    /// Gets left horizontal coordinate of the upper-left corner of the window.
    /// </summary>
    double get_Left();
    /// <summary>
    /// Gets top vertical coordinate of the upper-left corner of the window.
    /// </summary>
    double get_Top();
    /// <summary>
    /// Gets zoom factor.
    /// </summary>
    double get_Zoom();
    
    /// <summary>
    /// Creates local explicit destination.
    /// </summary>
    /// <param name="page">The destination page object.</param>
    /// <param name="left">Left horizontal coordinate of the upper-left corner of the window.</param>
    /// <param name="top">Top vertical coordinate of the upper-left corner of the window.</param>
    /// <param name="zoom">Zoom factor.</param>
    XYZExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, double left, double top, double zoom);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="document">The parent document that contains this object.</param>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="left">Left horizontal coordinate of the upper-left corner of the window.</param>
    /// <param name="top">Top vertical coordinate of the upper-left corner of the window.</param>
    /// <param name="zoom">Zoom factor.</param>
    XYZExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber, double left, double top, double zoom);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="left">Left horizontal coordinate of the upper-left corner of the window.</param>
    /// <param name="top">Top vertical coordinate of the upper-left corner of the window.</param>
    /// <param name="zoom">Zoom factor.</param>
    XYZExplicitDestination(int32_t pageNumber, double left, double top, double zoom);
    
    /// <summary>
    /// Converts the object state into string value. Example: "1 XYZ 100 200 3".
    /// </summary>
    /// <returns>String value representing object state.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Creates the instance and initializes it by engine destination object.
    /// </summary>
    /// <param name="engineDest">Engine destination object.</param>
    XYZExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_XYZExplicitDestination_h_

