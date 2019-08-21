/// @file drawing/imaging/image_codec_info.h
#ifndef _aspose_system_drawing_imaging_image_codec_info_h_
#define _aspose_system_drawing_imaging_image_codec_info_h_

#include "fwd.h"
#include "system/guid.h"

namespace System { namespace Drawing { namespace Imaging {

class ImageCodecInfo;
/// An alias for a shared pointer to an instance of ImageCodecInfo class.
typedef SharedPtr<ImageCodecInfo> ImageCodecInfoPtr;
/// Provides information about an image codec.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ImageCodecInfo : public Object
{
    /// Declaring template function System::MakeObject(...) a friend of this class.
    FRIEND_FUNCTION_System_MakeObject;
public:

    /// Returns an array of ImageCodecInfo objects that represent supported image encoders.
    static ASPOSECPP_SHARED_API System::ArrayPtr<ImageCodecInfoPtr> GetImageEncoders();
    /// Returns an array of ImageCodecInfo objects that represent supported image decoders.
    static ASPOSECPP_SHARED_API System::ArrayPtr<ImageCodecInfoPtr> GetImageDecoders();
    /// Returns a GUID associated with the format of the codec represented by the current object.
    ASPOSECPP_SHARED_API Guid get_FormatID() const;
    /// Sets a GUID associated with the format of the codec represented by the current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_FormatID(const Guid & value);
    /// Returns the Multipurpose Internet Mail Extensions (MIME) type of the codec represented by the current object.
    ASPOSECPP_SHARED_API System::String get_MimeType();

protected:
    /// Constructs an instance of ImageCodecInfo and initializes it with the specified format ID and mime type.
    /// @param format_id The GUID associated with the format of the codec to be represented by the object being created
    /// @param mime_type The MIME type of the code to be represented by the object being created.
    ASPOSECPP_SHARED_API ImageCodecInfo(const System::Guid & format_id, const System::String& mime_type);
private:
    /// The GUID associated with the format of the codec represented by the current object.
    System::Guid m_format_id;
    /// The MIME type of the codec represented by the current object.
    System::String m_mime_type;
};

}}}

#endif
