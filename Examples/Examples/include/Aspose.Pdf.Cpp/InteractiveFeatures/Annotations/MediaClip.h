#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class MediaClipData; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class MediaClipSection; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class MediaRendition; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

//Class describes medi clip object of rendition.
class ASPOSE_PDF_SHARED_API MediaClip : public System::Object
{
    typedef MediaClip ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::MediaClipData;
    friend class Aspose::Pdf::Annotations::MediaClipSection;
    friend class Aspose::Pdf::Annotations::MediaRendition;
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
    
    MediaClip(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
    static System::SharedPtr<MediaClip> Create(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


