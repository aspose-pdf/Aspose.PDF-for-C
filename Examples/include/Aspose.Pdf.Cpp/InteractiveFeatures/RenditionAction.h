#ifndef _Aspose_Pdf_InteractiveFeatures_RenditionAction_h_
#define _Aspose_Pdf_InteractiveFeatures_RenditionAction_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "InteractiveFeatures/PdfAction.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class ScreenAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// A rendition action that controls the playing of multimedia content.
/// </summary>
class ASPOSE_PDF_SHARED_API RenditionAction FINAL : public Aspose::Pdf::InteractiveFeatures::PdfAction
{
    typedef RenditionAction ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::PdfAction;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::ScreenAnnotation;
    
protected:

    /// <summary>
    /// Creates the rendition action.
    /// </summary>
    /// <param name="mediaFile">The path to multimedia file.</param>
    /// <param name="screen">The ScreenAnnotation object the RenditionAction will be bound with.</param>
    RenditionAction(System::String mediaFile, System::SharedPtr<Annotations::ScreenAnnotation> screen);
    RenditionAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_RenditionAction_h_

