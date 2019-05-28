#pragma once

#include "InteractiveFeatures/Annotations/MediaClip.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// This class descibes Media clip section.
/// </summary>
class ASPOSE_PDF_SHARED_API MediaClipSection : public Aspose::Pdf::Annotations::MediaClip
{
    typedef MediaClipSection ThisType;
    typedef Aspose::Pdf::Annotations::MediaClip BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::MediaClip;
    
protected:

    MediaClipSection(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


