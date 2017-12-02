#ifndef _aspose_drawing_color_translator_h_
#define _aspose_drawing_color_translator_h_

#include "system/string.h"
#include "drawing/color.h"

#define WIN32_RED_SHIFT         0
#define WIN32_GREEN_SHIFT       8
#define WIN32_BLUE_SHIFT        16

namespace System { namespace Drawing {

class ColorTranslator
{
public:
    static Color FromWin32(int win32_color);

    static Color FromHtml(const System::String& name);
    static String ToHtml(const Color& color);
};

}} // System::Drawing

#endif // _aspose_drawing_color_translator_h_
