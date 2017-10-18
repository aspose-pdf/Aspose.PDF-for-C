#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_SoundSampleData_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_SoundSampleData_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class SoundData; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class SoundSampleDataEncodingFormat; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Represents additional entries specific to a sound object (Section 9.2 PDF1-7)
/// </summary>
class ASPOSE_PDF_SHARED_API SoundSampleData : public System::Object
{
    typedef SoundSampleData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::InteractiveFeatures::SoundData;
    
public:

    static const int64_t DefaultSamplingRate;
    static const int32_t DefaultOfSoundChannels;
    static const int32_t DefaultOfBitsPerChannel;
    static const SoundSampleDataEncodingFormat DefaultEncodingFormat;
    
    int64_t get_SamplingRate();
    void set_SamplingRate(int64_t value);
    int32_t get_NumberOfSoundChannels();
    void set_NumberOfSoundChannels(int32_t value);
    int32_t get_BitsPerChannel();
    void set_BitsPerChannel(int32_t value);
    SoundSampleDataEncodingFormat get_EncodingFormat();
    void set_EncodingFormat(SoundSampleDataEncodingFormat value);
    
    SoundSampleData(int64_t samplingRate);
    SoundSampleData(int64_t samplingRate, int32_t numberOfSoundChannels);
    SoundSampleData(int64_t samplingRate, int32_t numberOfSoundChannels, int32_t bitsPerChannel);
    SoundSampleData(int64_t samplingRate, int32_t numberOfSoundChannels, int32_t bitsPerChannel, SoundSampleDataEncodingFormat soundSampleDataEncodingFormat);
    
protected:

    System::String GetEncodingFormat();
    static int64_t ReadSamplingRate(System::String soundFile);
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SoundSampleData"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int64_t _samplingRate;
    int32_t _numberOfSoundChannels;
    int32_t _bitsPerChannel;
    SoundSampleDataEncodingFormat _encodingFormat;
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_SoundSampleData_h_

