#pragma once

#include <system/array.h>

#include "InteractiveFeatures/Annotations/Rendition.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class describes selector rendition.
/// </summary>
class ASPOSE_PDF_SHARED_API SelectorRendition FINAL : public Aspose::Pdf::Annotations::Rendition
{
    typedef SelectorRendition ThisType;
    typedef Aspose::Pdf::Annotations::Rendition BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Rendition;
    
public:

    /// <summary>
    /// Gets array of renditions.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Rendition>> get_Renditions();
    
protected:

    SelectorRendition(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


