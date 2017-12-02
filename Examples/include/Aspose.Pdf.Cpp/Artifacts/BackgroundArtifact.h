#ifndef _Aspose_Pdf_Artifacts_BackgroundArtifact_h_
#define _Aspose_Pdf_Artifacts_BackgroundArtifact_h_

#include "Artifacts/Artifact.h"

namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class descibes background artifact. This artifact allows to set background of the page.
/// </summary>
class ASPOSE_PDF_SHARED_API BackgroundArtifact : public Aspose::Pdf::Artifact
{
    typedef BackgroundArtifact ThisType;
    typedef Aspose::Pdf::Artifact BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ArtifactCollection;
    
public:

    /// <summary>
    /// Gets or sets bacground color of background artifact
    /// </summary>
    System::Drawing::Color get_BackgroundColor();
    /// <summary>
    /// Gets or sets bacground color of background artifact
    /// </summary>
    void set_BackgroundColor(System::Drawing::Color value);
    /// <summary>
    /// Gets or sets bacground image of background artifact
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_BackgroundImage();
    /// <summary>
    /// Gets or sets bacground image of background artifact
    /// </summary>
    void set_BackgroundImage(System::SharedPtr<System::IO::Stream> value);
    
    /// <summary>
    /// Initializes BackgroundArtifact object. 
    /// </summary>
    BackgroundArtifact();
    
protected:

    BackgroundArtifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperators();
    virtual void ModifyContents(System::SharedPtr<OperatorCollection> contents);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::Drawing::Color backgroundColor;
    System::SharedPtr<System::IO::Stream> backgroundImage;
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> ShowBackground();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Artifacts_BackgroundArtifact_h_

