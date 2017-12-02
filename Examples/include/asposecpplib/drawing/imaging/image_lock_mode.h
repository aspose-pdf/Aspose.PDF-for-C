#ifndef _image_lock_mode_h_
#define _image_lock_mode_h_

namespace System {  namespace Drawing { namespace Imaging {

    enum class ImageLockMode {
        ///       Specifies the image is read-only.
        ReadOnly = 0x0001,
        ///       Specifies the image is write-only.
        WriteOnly = 0x0002,
        ///       Specifies the image is read-write.
        ReadWrite = ReadOnly | WriteOnly,
        ///    Indicates the image resides in a user input
        ///    buffer, to which the user controls access.
        UserInputBuffer = 0x0004,
    };

DECLARE_ENUM_OPERATORS(System::Drawing::Imaging::ImageLockMode);

}}}
DECLARE_USING_ENUM_OPERATORS(System::Drawing::Imaging);  

#endif