#ifndef _Aspose_Pdf_Artifacts_WatermarkArtifact_h_
#define _Aspose_Pdf_Artifacts_WatermarkArtifact_h_

#include "Artifacts/Artifact.h"

namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class describes watermark artifact. This may be used to 
/// </summary>
class ASPOSE_PDF_SHARED_API WatermarkArtifact : public Aspose::Pdf::Artifact
{
    typedef WatermarkArtifact ThisType;
    typedef Aspose::Pdf::Artifact BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ArtifactCollection;
    
public:

    /// <summary>
    /// Creates instance of Watermark artifact.
    /// </summary>
    WatermarkArtifact();
    
protected:

    WatermarkArtifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Artifacts_WatermarkArtifact_h_

