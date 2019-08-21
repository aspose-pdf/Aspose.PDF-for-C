#pragma once

#include "InteractiveFeatures/Annotations/MediaClip.h"

namespace Aspose { namespace Pdf { class FileSpecification; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class describes media clip data.
/// </summary>
class ASPOSE_PDF_SHARED_API MediaClipData : public Aspose::Pdf::Annotations::MediaClip
{
    typedef MediaClipData ThisType;
    typedef Aspose::Pdf::Annotations::MediaClip BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::MediaClip;
    
public:

    System::SharedPtr<FileSpecification> get_Data();
    
protected:

    MediaClipData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<FileSpecification> _fileSpec;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


