#ifndef _Aspose_Pdf_InteractiveFeatures_GoToURIAction_h_
#define _Aspose_Pdf_InteractiveFeatures_GoToURIAction_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "InteractiveFeatures/PdfAction.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Represents a URI action causes a URI to be resolved.
/// </summary>
class ASPOSE_PDF_SHARED_API GoToURIAction FINAL : public Aspose::Pdf::InteractiveFeatures::PdfAction
{
    typedef GoToURIAction ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::PdfAction;
    
public:

    /// <summary>
    /// Gets or sets the uniform resource identifier to resolve.
    /// </summary>
    System::String get_URI();
    /// <summary>
    /// Gets or sets the uniform resource identifier to resolve.
    /// </summary>
    void set_URI(System::String value);
    
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="uri">The uniform resource identifier to resolve.</param>
    GoToURIAction(System::String uri);
    
protected:

    GoToURIAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_GoToURIAction_h_

