/// @file drawing/color_translator.h
#ifndef _aspose_drawing_color_translator_h_
#define _aspose_drawing_color_translator_h_

#include "system/string.h"
#include "drawing/color.h"

/// Position of the first bit of the byte representing red color in the binary representation of RGB color.
#define WIN32_RED_SHIFT         0
/// Position of the first bit of the byte representing green color in the binary representation of RGB color.
#define WIN32_GREEN_SHIFT       8
/// Position of the first bit of the byte representing blue color in the binary representation of RGB color.
#define WIN32_BLUE_SHIFT        16

namespace System { namespace Drawing {

/// Performs color translations.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ColorTranslator
{
public:
    /// Converts the specified Windows color to the equvivalent Color object.
    /// @param win32_color The Windows color to convert
    /// @returns A Color object that represents the specified Windows color
    static ASPOSECPP_SHARED_API Color FromWin32(int win32_color);

    /// Converts the specified HTML color representation to the equvivalent Color object.
    /// @param name The name of HTML color to translate 
    /// @returns A Color object that represents the specified HTML color
    static ASPOSECPP_SHARED_API Color FromHtml(const System::String& name);
    /// Converts the specified Color object to the string representation of equivalent HTML color.
    /// @param color A Color object to translate
    /// @returns The name of HTML color equivalent to the color represented by @p color
    static ASPOSECPP_SHARED_API String ToHtml(const Color& color);
};

}} // System::Drawing

#endif // _aspose_drawing_color_translator_h_
