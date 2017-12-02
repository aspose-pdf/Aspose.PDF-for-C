#ifndef _aspose_system_drawing_color_palette_h_
#define _aspose_system_drawing_color_palette_h_

#include "fwd.h"
#include "drawing/color.h"
#include "system/array.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkColorTable.h>
#endif

ASPOSECPP_3RD_PARTY_CLASS(SkColorTable);

namespace System { namespace Drawing { class Bitmap; } }
namespace System { namespace Drawing { class Image; } }

namespace System { namespace Drawing { namespace Imaging {

class ColorPalette;
typedef SharedPtr<ColorPalette> ColorPalettePtr;

class ColorPalette : public Object
{
    friend class System::Drawing::Image;
    friend class System::Drawing::Bitmap;
    FRIEND_FUNCTION_System_MakeObject;
public:
    int get_Flags() const;
    System::ArrayPtr<Color> get_Entries() const;

private:
    ColorPalette(int count = 0);
    ColorPalette(SkColorTable* sk_color_table = nullptr);
    int m_flags = 0;
    System::ArrayPtr<Color> m_entries;
};

}}} // System::Drawing::Imaging


#endif // _aspose_system_drawing_color_palette_h_
