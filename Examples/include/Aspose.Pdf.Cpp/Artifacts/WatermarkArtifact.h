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

    WatermarkArtifact();
    
protected:

    WatermarkArtifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "WatermarkArtifact"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Artifacts_WatermarkArtifact_h_

