#pragma once

#include "Artifacts/Artifact.h"

namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Describes footer artifact. This may be used to set footer of the page.
/// </summary>
class ASPOSE_PDF_SHARED_API FooterArtifact : public Aspose::Pdf::Artifact
{
    typedef FooterArtifact ThisType;
    typedef Aspose::Pdf::Artifact BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ArtifactCollection;
    
public:

    /// <summary>
    /// Creates Footer Artifact instance.
    /// </summary>
    FooterArtifact();
    
protected:

    FooterArtifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
    virtual System::SharedPtr<Artifact> CreateInstance();
    
};

} // namespace Pdf
} // namespace Aspose


