#ifndef _aspose_system_drawing_color_h_
#define _aspose_system_drawing_color_h_

#include <system/string.h>
#include <system/boxed_value.h>
#include <drawing/known_color.h>
#include <functional>

#define ARGB_ALPHA_SHIFT        24
#define ARGB_RED_SHIFT          16
#define ARGB_GREEN_SHIFT        8
#define ARGB_BLUE_SHIFT         0

namespace System { namespace Drawing {

class Color
{
public:
    Color();

    inline int ToArgb() const { return m_argb; }

    bool get_IsEmpty() const;

    ASPOSECPP_SHARED_API static const Color Empty;

public:
    static Color FromArgb(int argb);
    static Color FromArgb(int alpha, int red, int green, int blue);
    static Color FromArgb(int red, int green, int blue);
    static Color FromArgb(int alpha, Color base_color);

    static Color FromName(String name);
    static Color FromKnownColor(KnownColor kc);

    static Color get_Transparent();
    static Color get_AliceBlue();
    static Color get_AntiqueWhite();
    static Color get_Aqua();
    static Color get_Aquamarine();
    static Color get_Azure();
    static Color get_Beige();
    static Color get_Bisque();
    static Color get_Black();
    static Color get_BlanchedAlmond();
    static Color get_Blue();
    static Color get_BlueViolet();
    static Color get_Brown();
    static Color get_BurlyWood();
    static Color get_CadetBlue();
    static Color get_Chartreuse();
    static Color get_Chocolate();
    static Color get_Coral();
    static Color get_CornflowerBlue();
    static Color get_Cornsilk();
    static Color get_Crimson();
    static Color get_Cyan();
    static Color get_DarkBlue();
    static Color get_DarkCyan();
    static Color get_DarkGoldenrod();
    static Color get_DarkGray();
    static Color get_DarkGreen();
    static Color get_DarkKhaki();
    static Color get_DarkMagenta();
    static Color get_DarkOliveGreen();
    static Color get_DarkOrange();
    static Color get_DarkOrchid();
    static Color get_DarkRed();
    static Color get_DarkSalmon();
    static Color get_DarkSeaGreen();
    static Color get_DarkSlateBlue();
    static Color get_DarkSlateGray();
    static Color get_DarkTurquoise();
    static Color get_DarkViolet();
    static Color get_DeepPink();
    static Color get_DeepSkyBlue();
    static Color get_DimGray();
    static Color get_DodgerBlue();
    static Color get_Firebrick();
    static Color get_FloralWhite();
    static Color get_ForestGreen();
    static Color get_Fuchsia();
    static Color get_Gainsboro();
    static Color get_GhostWhite();
    static Color get_Gold();
    static Color get_Goldenrod();
    static Color get_Gray();
    static Color get_Green();
    static Color get_GreenYellow();
    static Color get_Honeydew();
    static Color get_HotPink();
    static Color get_IndianRed();
    static Color get_Indigo();
    static Color get_Ivory();
    static Color get_Khaki();
    static Color get_Lavender();
    static Color get_LavenderBlush();
    static Color get_LawnGreen();
    static Color get_LemonChiffon();
    static Color get_LightBlue();
    static Color get_LightCoral();
    static Color get_LightCyan();
    static Color get_LightGoldenrodYellow();
    static Color get_LightGray();
    static Color get_LightGreen();
    static Color get_LightPink();
    static Color get_LightSalmon();
    static Color get_LightSeaGreen();
    static Color get_LightSkyBlue();
    static Color get_LightSlateGray();
    static Color get_LightSteelBlue();
    static Color get_LightYellow();
    static Color get_Lime();
    static Color get_LimeGreen();
    static Color get_Linen();
    static Color get_Magenta();
    static Color get_Maroon();
    static Color get_MediumAquamarine();
    static Color get_MediumBlue();
    static Color get_MediumOrchid();
    static Color get_MediumPurple();
    static Color get_MediumSeaGreen();
    static Color get_MediumSlateBlue();
    static Color get_MediumSpringGreen();
    static Color get_MediumTurquoise();
    static Color get_MediumVioletRed();
    static Color get_MidnightBlue();
    static Color get_MintCream();
    static Color get_MistyRose();
    static Color get_Moccasin();
    static Color get_NavajoWhite();
    static Color get_Navy();
    static Color get_OldLace();
    static Color get_Olive();
    static Color get_OliveDrab();
    static Color get_Orange();
    static Color get_OrangeRed();
    static Color get_Orchid();
    static Color get_PaleGoldenrod();
    static Color get_PaleGreen();
    static Color get_PaleTurquoise();
    static Color get_PaleVioletRed();
    static Color get_PapayaWhip();
    static Color get_PeachPuff();
    static Color get_Peru();
    static Color get_Pink();
    static Color get_Plum();
    static Color get_PowderBlue();
    static Color get_Purple();
    static Color get_Red();
    static Color get_RosyBrown();
    static Color get_RoyalBlue();
    static Color get_SaddleBrown();
    static Color get_Salmon();
    static Color get_SandyBrown();
    static Color get_SeaGreen();
    static Color get_SeaShell();
    static Color get_Sienna();
    static Color get_Silver();
    static Color get_SkyBlue();
    static Color get_SlateBlue();
    static Color get_SlateGray();
    static Color get_Snow();
    static Color get_SpringGreen();
    static Color get_SteelBlue();
    static Color get_Tan();
    static Color get_Teal();
    static Color get_Thistle();
    static Color get_Tomato();
    static Color get_Turquoise();
    static Color get_Violet();
    static Color get_Wheat();
    static Color get_White();
    static Color get_WhiteSmoke();
    static Color get_Yellow();
    static Color get_YellowGreen();

    int get_R() const;
    int get_G() const;
    int get_B() const;
    int get_A() const;

    String get_Name() const;

    float GetBrightness();

    int GetHashCode() const;

    String ToString() const;

    bool IsNull() const { return false; }
    bool operator==(const std::nullptr_t &r) const { return false; };
    bool operator!=(const std::nullptr_t &r) const { return true; };

    bool Equals(const Color & color) const;

    bool operator==(const Color &r) const;
    bool operator!=(const Color &r) const;

private:
    Color(int argb);
    Color(int alpha, int red, int green, int blue);

private:
    int m_argb;
    bool m_IsEmpty;
};

}} // System::Drawing

namespace System
{
    template<> struct IsBoxable<Drawing::Color> : std::true_type {};

    template <>
    class BoxedValue<System::Drawing::Color> : public DefaultBoxedValue<System::Drawing::Color>
    {
    public:
        BoxedValue(const System::Drawing::Color& value)
            : DefaultBoxedValue<System::Drawing::Color>(value)
        {}
    };
}

namespace std
{
    template <>
    class hash<System::Drawing::Color>
    {
    public:
        typedef System::Drawing::Color argument_type;
        typedef std::size_t result_type;
        result_type operator () (const argument_type &color) const
        {
            return (result_type)color.GetHashCode();
        }
    };
}

#endif // _aspose_system_drawing_color_h_
