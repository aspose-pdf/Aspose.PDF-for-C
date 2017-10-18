#ifndef _aspose_system_drawing_imaging_image_codec_info_h_
#define _aspose_system_drawing_imaging_image_codec_info_h_

#include "fwd.h"
#include "system/guid.h"

namespace System { namespace Drawing { namespace Imaging {

class ImageCodecInfo;
typedef SharedPtr<ImageCodecInfo> ImageCodecInfoPtr;

class ImageCodecInfo : public Object
{
    FRIEND_FUNCTION_System_MakeObject;
public:

    static System::ArrayPtr<ImageCodecInfoPtr> GetImageEncoders();
    static System::ArrayPtr<ImageCodecInfoPtr> GetImageDecoders();
    Guid get_FormatID() const;
    void set_FormatID(const Guid & value);
    System::String get_MimeType();

protected:

    ImageCodecInfo(const System::Guid & format_id, System::String mime_type);
private:

    System::Guid m_format_id;
    System::String m_mime_type;
};

}}}

#endif
