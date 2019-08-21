#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include "InteractiveFeatures/Annotations/Rendition.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class MediaClip; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class describes media rendition.
/// </summary>
class ASPOSE_PDF_SHARED_API MediaRendition FINAL : public Aspose::Pdf::Annotations::Rendition
{
    typedef MediaRendition ThisType;
    typedef Aspose::Pdf::Annotations::Rendition BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Rendition;
    
public:

    /// <summary>
    /// Gets media clip obkects associated with rendition.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Annotations::MediaClip> get_MediaClip();
    
protected:

    MediaRendition(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::MediaClip> _mediaClip;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


