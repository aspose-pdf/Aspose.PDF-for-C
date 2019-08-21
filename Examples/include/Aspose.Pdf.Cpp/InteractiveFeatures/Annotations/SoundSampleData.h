#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class SoundData; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class SoundSampleDataEncodingFormat; } } }

namespace Aspose {

namespace Pdf {

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
    
    friend class Aspose::Pdf::Annotations::SoundData;
    
public:

    static const int64_t DefaultSamplingRate;
    static const int32_t DefaultOfSoundChannels;
    static const int32_t DefaultOfBitsPerChannel;
    static const SoundSampleDataEncodingFormat DefaultEncodingFormat;
    
    /// <summary>
    /// Gets the sampling rate.
    /// </summary>
    int64_t get_SamplingRate();
    /// <summary>
    /// Sets the sampling rate.
    /// </summary>
    void set_SamplingRate(int64_t value);
    /// <summary>
    /// Gets the number of sound channels.
    /// </summary>
    int32_t get_NumberOfSoundChannels();
    /// <summary>
    /// Sets the number of sound channels.
    /// </summary>
    void set_NumberOfSoundChannels(int32_t value);
    /// <summary>
    /// Gets the number of bits per sample value per channel.
    /// </summary>
    int32_t get_BitsPerChannel();
    /// <summary>
    /// Sets the number of bits per sample value per channel.
    /// </summary>
    void set_BitsPerChannel(int32_t value);
    /// <summary>
    /// Gets the encoding format.
    /// </summary>
    SoundSampleDataEncodingFormat get_EncodingFormat();
    /// <summary>
    /// Sets the encoding format.
    /// </summary>
    void set_EncodingFormat(SoundSampleDataEncodingFormat value);
    
    /// <summary>
    /// Initializes new sound sample data.
    /// </summary>
    /// <param name="samplingRate">The sampling rate.</param>
    SoundSampleData(int64_t samplingRate);
    /// <summary>
    /// Initializes new sound sample data.
    /// </summary>
    /// <param name="samplingRate">The sampling rate.</param>
    /// <param name="numberOfSoundChannels">The number of sound channels.</param>
    SoundSampleData(int64_t samplingRate, int32_t numberOfSoundChannels);
    /// <summary>
    /// Initializes new sound sample data.
    /// </summary>
    /// <param name="samplingRate">The sampling rate.</param>
    /// <param name="numberOfSoundChannels">The number of sound channels.</param>
    /// <param name="bitsPerChannel">The number of bits per sample value per channel.</param>
    SoundSampleData(int64_t samplingRate, int32_t numberOfSoundChannels, int32_t bitsPerChannel);
    /// <summary>
    /// Initializes new sound sample data.
    /// </summary>
    /// <param name="samplingRate">The sampling rate.</param>
    /// <param name="numberOfSoundChannels">The number of sound channels.</param>
    /// <param name="bitsPerChannel">The number of bits per sample value per channel.</param>
    /// <param name="soundSampleDataEncodingFormat">The encoding format for the sample data.</param>         
    SoundSampleData(int64_t samplingRate, int32_t numberOfSoundChannels, int32_t bitsPerChannel, SoundSampleDataEncodingFormat soundSampleDataEncodingFormat);
    
protected:

    /// <summary>
    /// Returns string representation of encoding format parameter.
    /// </summary>
    /// <returns>Encoding parameter as a string.</returns>
    System::String GetEncodingFormat();
    /// <summary>
    /// Reads the sample rate value from wav header.
    /// </summary>
    /// <param name="soundFile">The wav input file.</param>
    /// <returns>If successfully found - sample rate value; otherwise, default value 11025.</returns>
    static int64_t ReadSamplingRate(System::String soundFile);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int64_t _samplingRate;
    int32_t _numberOfSoundChannels;
    int32_t _bitsPerChannel;
    SoundSampleDataEncodingFormat _encodingFormat;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


