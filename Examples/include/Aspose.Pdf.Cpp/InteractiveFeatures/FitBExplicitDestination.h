#ifndef _Aspose_Pdf_InteractiveFeatures_FitBExplicitDestination_h_
#define _Aspose_Pdf_InteractiveFeatures_FitBExplicitDestination_h_
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
/// Represents explicit destination that displays the page with its contents magnified just enough to fit its bounding box entirely within the window both horizontally and vertically. If the required horizontal and vertical magnification factors are different, use the smaller of the two, centering the bounding box within the window in the other dimension.
/// </summary>
class ASPOSE_PDF_SHARED_API FitBExplicitDestination FINAL : public Aspose::Pdf::InteractiveFeatures::ExplicitDestination
{
    typedef FitBExplicitDestination ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::ExplicitDestination;
    
public:

    /// <summary>
    /// Creates local explicit destination.
    /// </summary>
    /// <param name="page">The destination page object.</param>
    FitBExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="document">The parent document that contains this object.</param>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    FitBExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    FitBExplicitDestination(int32_t pageNumber);
    
    /// <summary>
    /// Converts the object state into string value. Example: "1 FitB".
    /// </summary>
    /// <returns>String value representing object state.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Creates the instance and initializes it by engine destination object.
    /// </summary>
    /// <param name="engineDest">Engine destination object.</param>
    FitBExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_FitBExplicitDestination_h_

