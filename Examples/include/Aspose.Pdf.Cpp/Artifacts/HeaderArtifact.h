#ifndef _Aspose_Pdf_Artifacts_HeaderArtifact_h_
#define _Aspose_Pdf_Artifacts_HeaderArtifact_h_

#include "Artifacts/Artifact.h"

namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class describes Heaader artifact. This artifacgt may be used to set heading of the page.
/// </summary>
class ASPOSE_PDF_SHARED_API HeaderArtifact : public Aspose::Pdf::Artifact
{
    typedef HeaderArtifact ThisType;
    typedef Aspose::Pdf::Artifact BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ArtifactCollection;
    
public:

    /// <summary>
    /// Creates Header Artifact instance. 
    /// </summary>
    HeaderArtifact();
    
protected:

    HeaderArtifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Artifacts_HeaderArtifact_h_

