/// @file drawing/color.h
#ifndef _aspose_system_drawing_color_h_
#define _aspose_system_drawing_color_h_

#include <system/string.h>
#include <system/boxed_value.h>
#include <drawing/known_color.h>
#include <functional>

/// Position of the first bit of the byte representing alpha channel in the binary representation of ARGB color.
#define ARGB_ALPHA_SHIFT        24
/// Position of the first bit of the byte representing red color in the binary representation of ARGB color.
#define ARGB_RED_SHIFT          16
/// Position of the first bit of the byte representing green color in the binary representation of ARGB color.
#define ARGB_GREEN_SHIFT        8
/// Position of the first bit of the byte representing blue color in the binary representation of ARGB color.
#define ARGB_BLUE_SHIFT         0

namespace System { namespace Drawing {
/// Represents a color.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS Color
{
public:
    /// Constructs an "empty" instance of Color class that does not represent any color.
    ASPOSECPP_SHARED_API Color();
    /// Returns a 32-bit ARGB value of the color represented by the current object.
    inline int ToArgb() const { return m_argb; }
    /// Returns a value that indicate if the current object is "empty" i.e. does not represent any color.
    /// @returns True if the current object does not represent any color, otherwise - false
    ASPOSECPP_SHARED_API bool get_IsEmpty() const;

    /// An "empty" instance of Color class i.e. an instance that does not represent any color.
    ASPOSECPP_SHARED_API static const Color Empty;

public:
    /// Constructs an instance of Color class that reprsents the specfied color.
    /// @param argb A 32-bit ARGB value of the color to be represented by the object being constructed
    /// @returns An object that represents the specified color.
    static ASPOSECPP_SHARED_API Color FromArgb(int argb);
    /// Constructs an instance of Color class that reprsents the specfied color.
    /// @param alpha A value of the alpah component of the color
    /// @param red A value of the red component of the color
    /// @param green A value of the green component of the color
    /// @param blue A value of the blue component of the color
    /// @returns An object that represents the specified color.
    static ASPOSECPP_SHARED_API Color FromArgb(int alpha, int red, int green, int blue);
    /// Constructs an instance of Color class that reprsents the specfied color with alpha component set to 0xFF.
    /// @param red A value of the red component of the color
    /// @param green A value of the green component of the color
    /// @param blue A value of the blue component of the color
    /// @returns An object that represents the specified color.
    static ASPOSECPP_SHARED_API Color FromArgb(int red, int green, int blue);
    /// Constructs an instance of Color class that reprsents the specfied color.
    /// @param alpha A value of the alpah component of the color
    /// @param base_color An instance of Color object that represents the red, green and blue components of
    /// the color to be represented by the object being created
    /// @returns An object that represents the specified color.
    static ASPOSECPP_SHARED_API Color FromArgb(int alpha, Color base_color);

    /// Constructs an instance of Color class that represents a color with the specified name.
    /// @param name The name of the color
    /// @returns An instance of Color class that represents a color named @p name
    static ASPOSECPP_SHARED_API Color FromName(const String& name);
    /// Constructs an instance of Color class that represents the specified known color.
    /// @param kc A known color to be represented by the object being created
    /// @returns An instance of Color class that represents @p kc color
    static ASPOSECPP_SHARED_API Color FromKnownColor(KnownColor kc);

    /// Returns a color whose ARGB value in hexadecimal notation is \#00FFFFFF.
    static ASPOSECPP_SHARED_API Color get_Transparent();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFF0F8FF.
    static ASPOSECPP_SHARED_API Color get_AliceBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFAEBD7.
    static ASPOSECPP_SHARED_API Color get_AntiqueWhite();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF00FFFF.
    static ASPOSECPP_SHARED_API Color get_Aqua();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF7FFFD4.
    static ASPOSECPP_SHARED_API Color get_Aquamarine();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFF0FFFF.
    static ASPOSECPP_SHARED_API Color get_Azure();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFF5F5DC.
    static ASPOSECPP_SHARED_API Color get_Beige();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFE4C4.
    static ASPOSECPP_SHARED_API Color get_Bisque();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF000000.
    static ASPOSECPP_SHARED_API Color get_Black();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFEBCD.
    static ASPOSECPP_SHARED_API Color get_BlanchedAlmond();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF0000FF.
    static ASPOSECPP_SHARED_API Color get_Blue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF8A2BE2.
    static ASPOSECPP_SHARED_API Color get_BlueViolet();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFA52A2A.
    static ASPOSECPP_SHARED_API Color get_Brown();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFDEB887.
    static ASPOSECPP_SHARED_API Color get_BurlyWood();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF5F9EA0.
    static ASPOSECPP_SHARED_API Color get_CadetBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF7FFF00.
    static ASPOSECPP_SHARED_API Color get_Chartreuse();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFD2691E.
    static ASPOSECPP_SHARED_API Color get_Chocolate();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFF7F50.
    static ASPOSECPP_SHARED_API Color get_Coral();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF6495ED.
    static ASPOSECPP_SHARED_API Color get_CornflowerBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFF8DC.
    static ASPOSECPP_SHARED_API Color get_Cornsilk();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFDC143C.
    static ASPOSECPP_SHARED_API Color get_Crimson();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF00FFFF.
    static ASPOSECPP_SHARED_API Color get_Cyan();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF00008B.
    static ASPOSECPP_SHARED_API Color get_DarkBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF008B8B.
    static ASPOSECPP_SHARED_API Color get_DarkCyan();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFB8860B.
    static ASPOSECPP_SHARED_API Color get_DarkGoldenrod();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFA9A9A9.
    static ASPOSECPP_SHARED_API Color get_DarkGray();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF006400.
    static ASPOSECPP_SHARED_API Color get_DarkGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFBDB76B.
    static ASPOSECPP_SHARED_API Color get_DarkKhaki();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF8B008B.
    static ASPOSECPP_SHARED_API Color get_DarkMagenta();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF556B2F.
    static ASPOSECPP_SHARED_API Color get_DarkOliveGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFF8C00.
    static ASPOSECPP_SHARED_API Color get_DarkOrange();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF9932CC.
    static ASPOSECPP_SHARED_API Color get_DarkOrchid();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF8B0000.
    static ASPOSECPP_SHARED_API Color get_DarkRed();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFE9967A.
    static ASPOSECPP_SHARED_API Color get_DarkSalmon();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF8FBC8F.
    static ASPOSECPP_SHARED_API Color get_DarkSeaGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF483D8B.
    static ASPOSECPP_SHARED_API Color get_DarkSlateBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF2F4F4F.
    static ASPOSECPP_SHARED_API Color get_DarkSlateGray();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF00CED1.
    static ASPOSECPP_SHARED_API Color get_DarkTurquoise();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF9400D3.
    static ASPOSECPP_SHARED_API Color get_DarkViolet();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFF1493.
    static ASPOSECPP_SHARED_API Color get_DeepPink();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF00BFFF.
    static ASPOSECPP_SHARED_API Color get_DeepSkyBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF696969.
    static ASPOSECPP_SHARED_API Color get_DimGray();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF1E90FF.
    static ASPOSECPP_SHARED_API Color get_DodgerBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFB22222.
    static ASPOSECPP_SHARED_API Color get_Firebrick();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFFAF0.
    static ASPOSECPP_SHARED_API Color get_FloralWhite();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF228B22.
    static ASPOSECPP_SHARED_API Color get_ForestGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFF00FF.
    static ASPOSECPP_SHARED_API Color get_Fuchsia();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFDCDCDC.
    static ASPOSECPP_SHARED_API Color get_Gainsboro();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFF8F8FF.
    static ASPOSECPP_SHARED_API Color get_GhostWhite();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFD700.
    static ASPOSECPP_SHARED_API Color get_Gold();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFDAA520.
    static ASPOSECPP_SHARED_API Color get_Goldenrod();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF808080.
    static ASPOSECPP_SHARED_API Color get_Gray();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF008000.
    static ASPOSECPP_SHARED_API Color get_Green();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFADFF2F.
    static ASPOSECPP_SHARED_API Color get_GreenYellow();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFF0FFF0.
    static ASPOSECPP_SHARED_API Color get_Honeydew();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFF69B4.
    static ASPOSECPP_SHARED_API Color get_HotPink();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFCD5C5C.
    static ASPOSECPP_SHARED_API Color get_IndianRed();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF4B0082.
    static ASPOSECPP_SHARED_API Color get_Indigo();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFFFF0.
    static ASPOSECPP_SHARED_API Color get_Ivory();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFF0E68C.
    static ASPOSECPP_SHARED_API Color get_Khaki();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFE6E6FA.
    static ASPOSECPP_SHARED_API Color get_Lavender();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFF0F5.
    static ASPOSECPP_SHARED_API Color get_LavenderBlush();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF7CFC00.
    static ASPOSECPP_SHARED_API Color get_LawnGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFFACD.
    static ASPOSECPP_SHARED_API Color get_LemonChiffon();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFADD8E6.
    static ASPOSECPP_SHARED_API Color get_LightBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFF08080.
    static ASPOSECPP_SHARED_API Color get_LightCoral();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFE0FFFF.
    static ASPOSECPP_SHARED_API Color get_LightCyan();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFAFAD2.
    static ASPOSECPP_SHARED_API Color get_LightGoldenrodYellow();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFD3D3D3.
    static ASPOSECPP_SHARED_API Color get_LightGray();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF90EE90.
    static ASPOSECPP_SHARED_API Color get_LightGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFB6C1.
    static ASPOSECPP_SHARED_API Color get_LightPink();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFA07A.
    static ASPOSECPP_SHARED_API Color get_LightSalmon();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF20B2AA.
    static ASPOSECPP_SHARED_API Color get_LightSeaGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF87CEFA.
    static ASPOSECPP_SHARED_API Color get_LightSkyBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF778899.
    static ASPOSECPP_SHARED_API Color get_LightSlateGray();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFB0C4DE.
    static ASPOSECPP_SHARED_API Color get_LightSteelBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFFFE0.
    static ASPOSECPP_SHARED_API Color get_LightYellow();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF00FF00.
    static ASPOSECPP_SHARED_API Color get_Lime();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF32CD32.
    static ASPOSECPP_SHARED_API Color get_LimeGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFAF0E6.
    static ASPOSECPP_SHARED_API Color get_Linen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFF00FF.
    static ASPOSECPP_SHARED_API Color get_Magenta();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF800000.
    static ASPOSECPP_SHARED_API Color get_Maroon();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF66CDAA.
    static ASPOSECPP_SHARED_API Color get_MediumAquamarine();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF0000CD.
    static ASPOSECPP_SHARED_API Color get_MediumBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFBA55D3.
    static ASPOSECPP_SHARED_API Color get_MediumOrchid();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF9370DB.
    static ASPOSECPP_SHARED_API Color get_MediumPurple();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF3CB371.
    static ASPOSECPP_SHARED_API Color get_MediumSeaGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF7B68EE.
    static ASPOSECPP_SHARED_API Color get_MediumSlateBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF00FA9A.
    static ASPOSECPP_SHARED_API Color get_MediumSpringGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF48D1CC.
    static ASPOSECPP_SHARED_API Color get_MediumTurquoise();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFC71585.
    static ASPOSECPP_SHARED_API Color get_MediumVioletRed();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF191970.
    static ASPOSECPP_SHARED_API Color get_MidnightBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFF5FFFA.
    static ASPOSECPP_SHARED_API Color get_MintCream();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFE4E1.
    static ASPOSECPP_SHARED_API Color get_MistyRose();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFE4B5.
    static ASPOSECPP_SHARED_API Color get_Moccasin();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFDEAD.
    static ASPOSECPP_SHARED_API Color get_NavajoWhite();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF000080.
    static ASPOSECPP_SHARED_API Color get_Navy();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFDF5E6.
    static ASPOSECPP_SHARED_API Color get_OldLace();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF808000.
    static ASPOSECPP_SHARED_API Color get_Olive();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF6B8E23.
    static ASPOSECPP_SHARED_API Color get_OliveDrab();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFA500.
    static ASPOSECPP_SHARED_API Color get_Orange();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFF4500.
    static ASPOSECPP_SHARED_API Color get_OrangeRed();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFDA70D6.
    static ASPOSECPP_SHARED_API Color get_Orchid();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFEEE8AA.
    static ASPOSECPP_SHARED_API Color get_PaleGoldenrod();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF98FB98.
    static ASPOSECPP_SHARED_API Color get_PaleGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFAFEEEE.
    static ASPOSECPP_SHARED_API Color get_PaleTurquoise();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFDB7093.
    static ASPOSECPP_SHARED_API Color get_PaleVioletRed();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFEFD5.
    static ASPOSECPP_SHARED_API Color get_PapayaWhip();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFDAB9.
    static ASPOSECPP_SHARED_API Color get_PeachPuff();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFCD853F.
    static ASPOSECPP_SHARED_API Color get_Peru();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFC0CB.
    static ASPOSECPP_SHARED_API Color get_Pink();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFDDA0DD.
    static ASPOSECPP_SHARED_API Color get_Plum();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFB0E0E6.
    static ASPOSECPP_SHARED_API Color get_PowderBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF800080.
    static ASPOSECPP_SHARED_API Color get_Purple();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFF0000.
    static ASPOSECPP_SHARED_API Color get_Red();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFBC8F8F.
    static ASPOSECPP_SHARED_API Color get_RosyBrown();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF4169E1.
    static ASPOSECPP_SHARED_API Color get_RoyalBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF8B4513.
    static ASPOSECPP_SHARED_API Color get_SaddleBrown();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFA8072.
    static ASPOSECPP_SHARED_API Color get_Salmon();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFF4A460.
    static ASPOSECPP_SHARED_API Color get_SandyBrown();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF2E8B57.
    static ASPOSECPP_SHARED_API Color get_SeaGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFF5EE.
    static ASPOSECPP_SHARED_API Color get_SeaShell();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFA0522D.
    static ASPOSECPP_SHARED_API Color get_Sienna();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFC0C0C0.
    static ASPOSECPP_SHARED_API Color get_Silver();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF87CEEB.
    static ASPOSECPP_SHARED_API Color get_SkyBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF6A5ACD.
    static ASPOSECPP_SHARED_API Color get_SlateBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF708090.
    static ASPOSECPP_SHARED_API Color get_SlateGray();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFFAFA.
    static ASPOSECPP_SHARED_API Color get_Snow();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF00FF7F.
    static ASPOSECPP_SHARED_API Color get_SpringGreen();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF4682B4.
    static ASPOSECPP_SHARED_API Color get_SteelBlue();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFD2B48C.
    static ASPOSECPP_SHARED_API Color get_Tan();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF008080.
    static ASPOSECPP_SHARED_API Color get_Teal();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFD8BFD8.
    static ASPOSECPP_SHARED_API Color get_Thistle();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFF6347.
    static ASPOSECPP_SHARED_API Color get_Tomato();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF40E0D0.
    static ASPOSECPP_SHARED_API Color get_Turquoise();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFEE82EE.
    static ASPOSECPP_SHARED_API Color get_Violet();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFF5DEB3.
    static ASPOSECPP_SHARED_API Color get_Wheat();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFFFFF.
    static ASPOSECPP_SHARED_API Color get_White();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFF5F5F5.
    static ASPOSECPP_SHARED_API Color get_WhiteSmoke();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FFFFFF00.
    static ASPOSECPP_SHARED_API Color get_Yellow();
    /// Returns a color whose ARGB value in hexadecimal notation is \#FF9ACD32.
    static ASPOSECPP_SHARED_API Color get_YellowGreen();

    /// Returns the value of the red component of the color represented by the current object.
    ASPOSECPP_SHARED_API int get_R() const;
    /// Returns the value of the green component of the color represented by the current object.
    ASPOSECPP_SHARED_API int get_G() const;
    /// Returns the value of the blue component of the color represented by the current object.
    ASPOSECPP_SHARED_API int get_B() const;
    /// Returns the value of the alpha component of the color represented by the current object.
    ASPOSECPP_SHARED_API int get_A() const;

    /// Returns the name of the color represented by the current object.
    ASPOSECPP_SHARED_API String get_Name() const;
    /// Returns the brightness component of the color reprsented by the current object.
    ASPOSECPP_SHARED_API float GetBrightness();
    /// Returns the hash code of the current object.
    ASPOSECPP_SHARED_API int GetHashCode() const;
    /// Returns the string representation of the current object.
    ASPOSECPP_SHARED_API String ToString() const;
    /// Always returns false.
    bool IsNull() const { return false; }
    /// Always returns false.
    bool operator==(const std::nullptr_t &r) const { return false; };
    /// Always returns true.
    bool operator!=(const std::nullptr_t &r) const { return true; };

    /// Determines if the current and the specified Color objects represent the same color.
    /// @param color The Color object to compare the current object with
    /// @returns True if both the current and the specified objects represent the same color, otherwise - false
    ASPOSECPP_SHARED_API bool Equals(const Color & color) const;

    /// Determines if the current and the specified Color objects represent the same color.
    /// @param r The Color object to compare the current object with
    /// @returns True if both the current and the specified objects represent the same color, otherwise - false
    ASPOSECPP_SHARED_API bool operator==(const Color &r) const;
    /// Determines if the current and the specified Color objects represent distinct colors.
    /// @param r The Color object to compare the current object with
    /// @returns True if the current and the specified objects represent distinct colors, otherwise - false
    ASPOSECPP_SHARED_API bool operator!=(const Color &r) const;

private:
    /// Constructs an instance of Color class that reprsents the specfied color.
    /// @param argb A 32-bit ARGB value of the color to be represented by the object being constructed
    Color(int argb);
    /// Constructs an instance of Color class that reprsents the specfied color.
    /// @param alpha A value of the alpah component of the color
    /// @param red A value of the red component of the color
    /// @param green A value of the green component of the color
    /// @param blue A value of the blue component of the color
    Color(int alpha, int red, int green, int blue);

    Color(KnownColor known_color);

private:
    /// The ARGB value of the color represented by the current object.
    int m_argb;
    /// Indicates if the current object is "empty" i.e. does not represent any color.
    bool m_is_empty;

    static const KnownColor UnknownColor = static_cast<KnownColor>(0);
    KnownColor m_known_color_name = UnknownColor;
};

}} // System::Drawing

namespace System
{
    /// A template predicate that determines if System::Drawing::Color class is boxable.
    template<> struct IsBoxable<Drawing::Color> : std::true_type {};

    /// Represents a boxed value of System::Drawing::Color type.
    template <>
    class BoxedValue<System::Drawing::Color> : public DefaultBoxedValue<System::Drawing::Color>
    {
    public:
        /// Constructs a BoxedValue object that represents the specified value boxed.
        /// @param value A Color value to be boxed
        BoxedValue(const System::Drawing::Color& value)
            : DefaultBoxedValue<System::Drawing::Color>(value)
        {}
    };
}

namespace std
{
    /// Specialization for System::Drawing::Color.
    template <>
    class hash<System::Drawing::Color>
    {
    public:
        /// Alias for the type parameter of this specialization.
        typedef System::Drawing::Color argument_type;
        /// Alias for a type of the hash value.
        typedef std::size_t result_type;
        /// Generates hash for the specified value.
        /// @param color An object for which to generate a hash
        /// @returns A hash for @p color
        result_type operator () (const argument_type &color) const
        {
            return (result_type)color.GetHashCode();
        }
    };
}

#endif // _aspose_system_drawing_color_h_
