#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class SoundAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class SoundEncoding; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDataStream; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class SoundSampleData; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

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
    friend class Aspose::Pdf::Annotations::SoundAnnotation;
    
public:

    /// <summary>
    /// Gets the sampling rate, in samples per second.
    /// </summary>
    int32_t get_Rate();
    /// <summary>
    /// Sets the sampling rate, in samples per second.
    /// </summary>
    void set_Rate(int32_t value);
    /// <summary>
    /// Gets the number of sound channels.
    /// </summary>
    int32_t get_Channels();
    /// <summary>
    /// Sets the number of sound channels.
    /// </summary>
    void set_Channels(int32_t value);
    /// <summary>
    /// Gets the number of bits per sample value per channel.
    /// </summary>
    int32_t get_Bits();
    /// <summary>
    /// Sets the number of bits per sample value per channel.
    /// </summary>
    void set_Bits(int32_t value);
    /// <summary>
    /// Gets stream of the sound to be played when the annotation is activated.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_Contents();
    /// <summary>
    /// Gets the encoding format for the sample data.
    /// </summary>
    SoundEncoding get_Encoding();
    /// <summary>
    /// Sets the encoding format for the sample data.
    /// </summary>
    void set_Encoding(SoundEncoding value);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> get_EngineStm();
    
    SoundData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> engineStm);
    /// <summary>
    /// 
    /// </summary>
    /// <param name="parent"></param>
    /// <param name="soundFile"></param>
    SoundData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> parent, System::String soundFile);
    /// <summary>
    /// 
    /// </summary>
    /// <param name="parent"></param>
    /// <param name="soundFile"></param>
    /// <param name="soundSampleData"></param>
    SoundData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> parent, System::String soundFile, System::SharedPtr<SoundSampleData> soundSampleData);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> _engineStm;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


