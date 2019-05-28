/// @file drawing/imaging/color_palette.h
#ifndef _aspose_system_drawing_color_palette_h_
#define _aspose_system_drawing_color_palette_h_

#include "fwd.h"
#include "drawing/color.h"
#include "system/array.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkColorTable.h>
#endif

/// Forward declaration of SkColorTable class.
ASPOSECPP_3RD_PARTY_CLASS(SkColorTable);

namespace System { namespace Drawing { class Bitmap; } }
namespace System { namespace Drawing { class Image; } }

namespace System { namespace Drawing { namespace Imaging {

class ColorPalette;
/// An alias for a shared pointer to an instance of the ColorPalette class.
typedef SharedPtr<ColorPalette> ColorPalettePtr;

/// Represents a set of 32-bit ARGB colors that make up a color palette. 
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ColorPalette : public Object
{
    friend class System::Drawing::Image;
    friend class System::Drawing::Bitmap;
    /// Declaring template function System::MakeObject(...) a friend of this class.
    FRIEND_FUNCTION_System_MakeObject;
public:
    /// Returns a value that specifies how the color values in the array of colors should be interpreted.
    /// @returns 1 - The color values contain alpha information; 2 - The colors are grayscale values;
    /// 3 - The colors are halftone values
    ASPOSECPP_SHARED_API int get_Flags() const;
    /// Returns an array of Color objects represented by the current object.
    ASPOSECPP_SHARED_API System::ArrayPtr<Color> get_Entries() const;

private:
    /// Constructs an instance of ColorPalette class and precreates an array of colors with the specified size.
    /// @param count The number of elements in the array
    ColorPalette(int count = 0);
    /// Constructs an instance of ColorPalette class and initializes it with the colors from the specified SkColorTable.
    /// @param sk_color_table A color table to copy the colors from; may be null
    ColorPalette(SkColorTable* sk_color_table = nullptr);
    /// Flags.
    int m_flags = 0;
    /// The array that contains colors represented by the current object.
    System::ArrayPtr<Color> m_entries;
};

}}} // System::Drawing::Imaging


#endif // _aspose_system_drawing_color_palette_h_
