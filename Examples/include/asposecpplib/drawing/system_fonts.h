#ifndef _aspose_system_drawing_system_font_h_
#define _aspose_system_drawing_system_font_h_

#include "system/object.h"
#include "drawing/font.h"

namespace System { namespace Drawing {

    class SystemFonts: public Object
    {
    public:

        static SharedPtr<Font> get_DefaultFont();
        static SharedPtr<Font> get_CaptionFont();
        static SharedPtr<Font> get_IconTitleFont();
        static SharedPtr<Font> get_MenuFont();
        static SharedPtr<Font> get_MessageBoxFont();
        static SharedPtr<Font> get_SmallCaptionFont();
        static SharedPtr<Font> get_StatusFont();
    };

}}


#endif // __system_font_h__