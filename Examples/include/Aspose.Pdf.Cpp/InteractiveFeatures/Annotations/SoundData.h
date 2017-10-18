#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_SoundData_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_SoundData_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class SoundAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDataStream; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class SoundEncoding; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class SoundSampleData; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Represents a sound data defining the sound to be played when the annotation is activated.
/// </summary>
class ASPOSE_PDF_SHARED_API SoundData FINAL : public System::Object
{
    typedef SoundData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::SoundAnnotation;
    
public:

    int32_t get_Rate();
    void set_Rate(int32_t value);
    int32_t get_Channels();
    void set_Channels(int32_t value);
    int32_t get_Bits();
    void set_Bits(int32_t value);
    System::SharedPtr<System::IO::Stream> get_Contents();
    Annotations::SoundEncoding get_Encoding();
    void set_Encoding(Annotations::SoundEncoding value);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> get_EngineStm();
    
    SoundData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> engineStm);
    SoundData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> parent, System::String soundFile);
    SoundData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> parent, System::String soundFile, System::SharedPtr<Annotations::SoundSampleData> soundSampleData);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SoundData"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> _engineStm;
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_SoundData_h_

