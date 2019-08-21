/// @file drawing/brushes.h
#ifndef _brushes_h_
#define _brushes_h_

#include "fwd.h"
#include "drawing/brush.h"

namespace System { namespace Drawing {
    /// Provides a set of precreated SolidBrush objects.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    class Brushes
    {
    public:
        /// Returns the solid fill color whose hexadecimal value is \#FFF0F8FF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_AliceBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FFFAEBD7.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_AntiqueWhite();
        /// Returns the solid fill color whose hexadecimal value is \#FF00FFFF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Aqua();
        /// Returns the solid fill color whose hexadecimal value is \#FF7FFFD4.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Aquamarine();
        /// Returns the solid fill color whose hexadecimal value is \#FFF0FFFF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Azure();
        /// Returns the solid fill color whose hexadecimal value is \#FFF5F5DC.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Beige();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFE4C4.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Bisque();
        /// Returns the solid fill color whose hexadecimal value is \#FF000000.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Black();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFEBCD.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_BlanchedAlmond();
        /// Returns the solid fill color whose hexadecimal value is \#FF0000FF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Blue();
        /// Returns the solid fill color whose hexadecimal value is \#FF8A2BE2.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_BlueViolet();
        /// Returns the solid fill color whose hexadecimal value is \#FFA52A2A.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Brown();
        /// Returns the solid fill color whose hexadecimal value is \#FFDEB887.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_BurlyWood();
        /// Returns the solid fill color whose hexadecimal value is \#FF5F9EA0.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_CadetBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FF7FFF00.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Chartreuse();
        /// Returns the solid fill color whose hexadecimal value is \#FFD2691E.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Chocolate();
        /// Returns the solid fill color whose hexadecimal value is \#FFFF7F50.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Coral();
        /// Returns the solid fill color whose hexadecimal value is \#FF6495ED.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_CornflowerBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFF8DC.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Cornsilk();
        /// Returns the solid fill color whose hexadecimal value is \#FFDC143C.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Crimson();
        /// Returns the solid fill color whose hexadecimal value is \#FF00FFFF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Cyan();
        /// Returns the solid fill color whose hexadecimal value is \#FF00008B.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FF008B8B.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkCyan();
        /// Returns the solid fill color whose hexadecimal value is \#FFB8860B.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkGoldenrod();
        /// Returns the solid fill color whose hexadecimal value is \#FFA9A9A9.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkGray();
        /// Returns the solid fill color whose hexadecimal value is \#FF006400.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FFBDB76B.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkKhaki();
        /// Returns the solid fill color whose hexadecimal value is \#FF8B008B.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkMagenta();
        /// Returns the solid fill color whose hexadecimal value is \#FF556B2F.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkOliveGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FFFF8C00.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkOrange();
        /// Returns the solid fill color whose hexadecimal value is \#FF9932CC.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkOrchid();
        /// Returns the solid fill color whose hexadecimal value is \#FF8B0000.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkRed();
        /// Returns the solid fill color whose hexadecimal value is \#FFE9967A.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkSalmon();
        /// Returns the solid fill color whose hexadecimal value is \#FF8FBC8F.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkSeaGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FF483D8B.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkSlateBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FF2F4F4F.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkSlateGray();
        /// Returns the solid fill color whose hexadecimal value is \#FF00CED1.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkTurquoise();
        /// Returns the solid fill color whose hexadecimal value is \#FF9400D3.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DarkViolet();
        /// Returns the solid fill color whose hexadecimal value is \#FFFF1493.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DeepPink();
        /// Returns the solid fill color whose hexadecimal value is \#FF00BFFF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DeepSkyBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FF696969.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DimGray();
        /// Returns the solid fill color whose hexadecimal value is \#FF1E90FF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_DodgerBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FFB22222.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Firebrick();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFFAF0.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_FloralWhite();
        /// Returns the solid fill color whose hexadecimal value is \#FF228B22.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_ForestGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FFFF00FF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Fuchsia();
        /// Returns the solid fill color whose hexadecimal value is \#FFDCDCDC.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Gainsboro();
        /// Returns the solid fill color whose hexadecimal value is \#FFF8F8FF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_GhostWhite();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFD700.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Gold();
        /// Returns the solid fill color whose hexadecimal value is \#FFDAA520.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Goldenrod();
        /// Returns the solid fill color whose hexadecimal value is \#FF808080.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Gray();
        /// Returns the solid fill color whose hexadecimal value is \#FF008000.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Green();
        /// Returns the solid fill color whose hexadecimal value is \#FFADFF2F.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_GreenYellow();
        /// Returns the solid fill color whose hexadecimal value is \#FFF0FFF0.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Honeydew();
        /// Returns the solid fill color whose hexadecimal value is \#FFFF69B4.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_HotPink();
        /// Returns the solid fill color whose hexadecimal value is \#FFCD5C5C.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_IndianRed();
        /// Returns the solid fill color whose hexadecimal value is \#FF4B0082.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Indigo();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFFFF0.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Ivory();
        /// Returns the solid fill color whose hexadecimal value is \#FFF0E68C.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Khaki();
        /// Returns the solid fill color whose hexadecimal value is \#FFE6E6FA.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Lavender();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFF0F5.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LavenderBlush();
        /// Returns the solid fill color whose hexadecimal value is \#FF7CFC00.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LawnGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFFACD.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LemonChiffon();
        /// Returns the solid fill color whose hexadecimal value is \#FFADD8E6.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FFF08080.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightCoral();
        /// Returns the solid fill color whose hexadecimal value is \#FFE0FFFF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightCyan();
        /// Returns the solid fill color whose hexadecimal value is \#FFFAFAD2.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightGoldenrodYellow();
        /// Returns the solid fill color whose hexadecimal value is \#FFD3D3D3.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightGray();
        /// Returns the solid fill color whose hexadecimal value is \#FF90EE90.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFB6C1.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightPink();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFA07A.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightSalmon();
        /// Returns the solid fill color whose hexadecimal value is \#FF20B2AA.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightSeaGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FF87CEFA.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightSkyBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FF778899.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightSlateGray();
        /// Returns the solid fill color whose hexadecimal value is \#FFB0C4DE.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightSteelBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFFFE0.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LightYellow();
        /// Returns the solid fill color whose hexadecimal value is \#FF00FF00.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Lime();
        /// Returns the solid fill color whose hexadecimal value is \#FF32CD32.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_LimeGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FFFAF0E6.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Linen();
        /// Returns the solid fill color whose hexadecimal value is \#FFFF00FF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Magenta();
        /// Returns the solid fill color whose hexadecimal value is \#FF800000.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Maroon();
        /// Returns the solid fill color whose hexadecimal value is \#FF66CDAA.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MediumAquamarine();
        /// Returns the solid fill color whose hexadecimal value is \#FF0000CD.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MediumBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FFBA55D3.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MediumOrchid();
        /// Returns the solid fill color whose hexadecimal value is \#FF9370DB.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MediumPurple();
        /// Returns the solid fill color whose hexadecimal value is \#FF3CB371.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MediumSeaGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FF7B68EE.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MediumSlateBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FF00FA9A.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MediumSpringGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FF48D1CC.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MediumTurquoise();
        /// Returns the solid fill color whose hexadecimal value is \#FFC71585.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MediumVioletRed();
        /// Returns the solid fill color whose hexadecimal value is \#FF191970.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MidnightBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FFF5FFFA.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MintCream();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFE4E1.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_MistyRose();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFE4B5.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Moccasin();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFDEAD.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_NavajoWhite();
        /// Returns the solid fill color whose hexadecimal value is \#FF000080.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Navy();
        /// Returns the solid fill color whose hexadecimal value is \#FFFDF5E6.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_OldLace();
        /// Returns the solid fill color whose hexadecimal value is \#FF808000.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Olive();
        /// Returns the solid fill color whose hexadecimal value is \#FF6B8E23.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_OliveDrab();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFA500.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Orange();
        /// Returns the solid fill color whose hexadecimal value is \#FFFF4500.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_OrangeRed();
        /// Returns the solid fill color whose hexadecimal value is \#FFDA70D6.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Orchid();
        /// Returns the solid fill color whose hexadecimal value is \#FFEEE8AA.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_PaleGoldenrod();
        /// Returns the solid fill color whose hexadecimal value is \#FF98FB98.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_PaleGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FFAFEEEE.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_PaleTurquoise();
        /// Returns the solid fill color whose hexadecimal value is \#FFDB7093.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_PaleVioletRed();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFEFD5.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_PapayaWhip();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFDAB9.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_PeachPuff();
        /// Returns the solid fill color whose hexadecimal value is \#FFCD853F.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Peru();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFC0CB.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Pink();
        /// Returns the solid fill color whose hexadecimal value is \#FFDDA0DD.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Plum();
        /// Returns the solid fill color whose hexadecimal value is \#FFB0E0E6.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_PowderBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FF800080.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Purple();
        /// Returns the solid fill color whose hexadecimal value is \#FFFF0000.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Red();
        /// Returns the solid fill color whose hexadecimal value is \#FFBC8F8F.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_RosyBrown();
        /// Returns the solid fill color whose hexadecimal value is \#FF4169E1.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_RoyalBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FF8B4513.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_SaddleBrown();
        /// Returns the solid fill color whose hexadecimal value is \#FFFA8072.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Salmon();
        /// Returns the solid fill color whose hexadecimal value is \#FFF4A460.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_SandyBrown();
        /// Returns the solid fill color whose hexadecimal value is \#FF2E8B57.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_SeaGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFF5EE.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_SeaShell();
        /// Returns the solid fill color whose hexadecimal value is \#FFA0522D.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Sienna();
        /// Returns the solid fill color whose hexadecimal value is \#FFC0C0C0.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Silver();
        /// Returns the solid fill color whose hexadecimal value is \#FF87CEEB.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_SkyBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FF6A5ACD.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_SlateBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FF708090.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_SlateGray();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFFAFA.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Snow();
        /// Returns the solid fill color whose hexadecimal value is \#FF00FF7F.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_SpringGreen();
        /// Returns the solid fill color whose hexadecimal value is \#FF4682B4.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_SteelBlue();
        /// Returns the solid fill color whose hexadecimal value is \#FFD2B48C.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Tan();
        /// Returns the solid fill color whose hexadecimal value is \#FF008080.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Teal();
        /// Returns the solid fill color whose hexadecimal value is \#FFD8BFD8.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Thistle();
        /// Returns the solid fill color whose hexadecimal value is \#FFFF6347.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Tomato();
        /// Returns the solid fill color whose hexadecimal value is \#00FFFFFF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Transparent();
        /// Returns the solid fill color whose hexadecimal value is \#FF40E0D0.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Turquoise();
        /// Returns the solid fill color whose hexadecimal value is \#FFEE82EE.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Violet();
        /// Returns the solid fill color whose hexadecimal value is \#FFF5DEB3.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Wheat();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFFFFF.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_White();
        /// Returns the solid fill color whose hexadecimal value is \#FFF5F5F5.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_WhiteSmoke();
        /// Returns the solid fill color whose hexadecimal value is \#FFFFFF00.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_Yellow();
        /// Returns the solid fill color whose hexadecimal value is \#FF9ACD32.
        static ASPOSECPP_SHARED_API SharedPtr<Brush> get_YellowGreen();

    private:
        /// Brush with the solid fill color whose hexadecimal value is \#FFF0F8FF.
        static const SharedPtr<Brush> m_AliceBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFAEBD7.
        static const SharedPtr<Brush> m_AntiqueWhite;
        /// Brush with the solid fill color whose hexadecimal value is \#FF00FFFF.
        static const SharedPtr<Brush> m_Aqua;
        /// Brush with the solid fill color whose hexadecimal value is \#FF7FFFD4.
        static const SharedPtr<Brush> m_Aquamarine;
        /// Brush with the solid fill color whose hexadecimal value is \#FFF0FFFF.
        static const SharedPtr<Brush> m_Azure;
        /// Brush with the solid fill color whose hexadecimal value is \#FFF5F5DC.
        static const SharedPtr<Brush> m_Beige;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFE4C4.
        static const SharedPtr<Brush> m_Bisque;
        /// Brush with the solid fill color whose hexadecimal value is \#FF000000.
        static const SharedPtr<Brush> m_Black;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFEBCD.
        static const SharedPtr<Brush> m_BlanchedAlmond;
        /// Brush with the solid fill color whose hexadecimal value is \#FF0000FF.
        static const SharedPtr<Brush> m_Blue;
        /// Brush with the solid fill color whose hexadecimal value is \#FF8A2BE2.
        static const SharedPtr<Brush> m_BlueViolet;
        /// Brush with the solid fill color whose hexadecimal value is \#FFA52A2A.
        static const SharedPtr<Brush> m_Brown;
        /// Brush with the solid fill color whose hexadecimal value is \#FFDEB887.
        static const SharedPtr<Brush> m_BurlyWood;
        /// Brush with the solid fill color whose hexadecimal value is \#FF5F9EA0.
        static const SharedPtr<Brush> m_CadetBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FF7FFF00.
        static const SharedPtr<Brush> m_Chartreuse;
        /// Brush with the solid fill color whose hexadecimal value is \#FFD2691E.
        static const SharedPtr<Brush> m_Chocolate;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFF7F50.
        static const SharedPtr<Brush> m_Coral;
        /// Brush with the solid fill color whose hexadecimal value is \#FF6495ED.
        static const SharedPtr<Brush> m_CornflowerBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFF8DC.
        static const SharedPtr<Brush> m_Cornsilk;
        /// Brush with the solid fill color whose hexadecimal value is \#FFDC143C.
        static const SharedPtr<Brush> m_Crimson;
        /// Brush with the solid fill color whose hexadecimal value is \#FF00FFFF.
        static const SharedPtr<Brush> m_Cyan;
        /// Brush with the solid fill color whose hexadecimal value is \#FF00008B.
        static const SharedPtr<Brush> m_DarkBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FF008B8B.
        static const SharedPtr<Brush> m_DarkCyan;
        /// Brush with the solid fill color whose hexadecimal value is \#FFB8860B.
        static const SharedPtr<Brush> m_DarkGoldenrod;
        /// Brush with the solid fill color whose hexadecimal value is \#FFA9A9A9.
        static const SharedPtr<Brush> m_DarkGray;
        /// Brush with the solid fill color whose hexadecimal value is \#FF006400.
        static const SharedPtr<Brush> m_DarkGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FFBDB76B.
        static const SharedPtr<Brush> m_DarkKhaki;
        /// Brush with the solid fill color whose hexadecimal value is \#FF8B008B.
        static const SharedPtr<Brush> m_DarkMagenta;
        /// Brush with the solid fill color whose hexadecimal value is \#FF556B2F.
        static const SharedPtr<Brush> m_DarkOliveGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFF8C00.
        static const SharedPtr<Brush> m_DarkOrange;
        /// Brush with the solid fill color whose hexadecimal value is \#FF9932CC.
        static const SharedPtr<Brush> m_DarkOrchid;
        /// Brush with the solid fill color whose hexadecimal value is \#FF8B0000.
        static const SharedPtr<Brush> m_DarkRed;
        /// Brush with the solid fill color whose hexadecimal value is \#FFE9967A.
        static const SharedPtr<Brush> m_DarkSalmon;
        /// Brush with the solid fill color whose hexadecimal value is \#FF8FBC8F.
        static const SharedPtr<Brush> m_DarkSeaGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FF483D8B.
        static const SharedPtr<Brush> m_DarkSlateBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FF2F4F4F.
        static const SharedPtr<Brush> m_DarkSlateGray;
        /// Brush with the solid fill color whose hexadecimal value is \#FF00CED1.
        static const SharedPtr<Brush> m_DarkTurquoise;
        /// Brush with the solid fill color whose hexadecimal value is \#FF9400D3.
        static const SharedPtr<Brush> m_DarkViolet;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFF1493.
        static const SharedPtr<Brush> m_DeepPink;
        /// Brush with the solid fill color whose hexadecimal value is \#FF00BFFF.
        static const SharedPtr<Brush> m_DeepSkyBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FF696969.
        static const SharedPtr<Brush> m_DimGray;
        /// Brush with the solid fill color whose hexadecimal value is \#FF1E90FF.
        static const SharedPtr<Brush> m_DodgerBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FFB22222.
        static const SharedPtr<Brush> m_Firebrick;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFFAF0.
        static const SharedPtr<Brush> m_FloralWhite;
        /// Brush with the solid fill color whose hexadecimal value is \#FF228B22.
        static const SharedPtr<Brush> m_ForestGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFF00FF.
        static const SharedPtr<Brush> m_Fuchsia;
        /// Brush with the solid fill color whose hexadecimal value is \#FFDCDCDC.
        static const SharedPtr<Brush> m_Gainsboro;
        /// Brush with the solid fill color whose hexadecimal value is \#FFF8F8FF.
        static const SharedPtr<Brush> m_GhostWhite;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFD700.
        static const SharedPtr<Brush> m_Gold;
        /// Brush with the solid fill color whose hexadecimal value is \#FFDAA520.
        static const SharedPtr<Brush> m_Goldenrod;
        /// Brush with the solid fill color whose hexadecimal value is \#FF808080.
        static const SharedPtr<Brush> m_Gray;
        /// Brush with the solid fill color whose hexadecimal value is \#FF008000.
        static const SharedPtr<Brush> m_Green;
        /// Brush with the solid fill color whose hexadecimal value is \#FFADFF2F.
        static const SharedPtr<Brush> m_GreenYellow;
        /// Brush with the solid fill color whose hexadecimal value is \#FFF0FFF0.
        static const SharedPtr<Brush> m_Honeydew;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFF69B4.
        static const SharedPtr<Brush> m_HotPink;
        /// Brush with the solid fill color whose hexadecimal value is \#FFCD5C5C.
        static const SharedPtr<Brush> m_IndianRed;
        /// Brush with the solid fill color whose hexadecimal value is \#FF4B0082.
        static const SharedPtr<Brush> m_Indigo;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFFFF0.
        static const SharedPtr<Brush> m_Ivory;
        /// Brush with the solid fill color whose hexadecimal value is \#FFF0E68C.
        static const SharedPtr<Brush> m_Khaki;
        /// Brush with the solid fill color whose hexadecimal value is \#FFE6E6FA.
        static const SharedPtr<Brush> m_Lavender;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFF0F5.
        static const SharedPtr<Brush> m_LavenderBlush;
        /// Brush with the solid fill color whose hexadecimal value is \#FF7CFC00.
        static const SharedPtr<Brush> m_LawnGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFFACD.
        static const SharedPtr<Brush> m_LemonChiffon;
        /// Brush with the solid fill color whose hexadecimal value is \#FFADD8E6.
        static const SharedPtr<Brush> m_LightBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FFF08080.
        static const SharedPtr<Brush> m_LightCoral;
        /// Brush with the solid fill color whose hexadecimal value is \#FFE0FFFF.
        static const SharedPtr<Brush> m_LightCyan;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFAFAD2.
        static const SharedPtr<Brush> m_LightGoldenrodYellow;
        /// Brush with the solid fill color whose hexadecimal value is \#FFD3D3D3.
        static const SharedPtr<Brush> m_LightGray;
        /// Brush with the solid fill color whose hexadecimal value is \#FF90EE90.
        static const SharedPtr<Brush> m_LightGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFB6C1.
        static const SharedPtr<Brush> m_LightPink;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFA07A.
        static const SharedPtr<Brush> m_LightSalmon;
        /// Brush with the solid fill color whose hexadecimal value is \#FF20B2AA.
        static const SharedPtr<Brush> m_LightSeaGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FF87CEFA.
        static const SharedPtr<Brush> m_LightSkyBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FF778899.
        static const SharedPtr<Brush> m_LightSlateGray;
        /// Brush with the solid fill color whose hexadecimal value is \#FFB0C4DE.
        static const SharedPtr<Brush> m_LightSteelBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFFFE0.
        static const SharedPtr<Brush> m_LightYellow;
        /// Brush with the solid fill color whose hexadecimal value is \#FF00FF00.
        static const SharedPtr<Brush> m_Lime;
        /// Brush with the solid fill color whose hexadecimal value is \#FF32CD32.
        static const SharedPtr<Brush> m_LimeGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFAF0E6.
        static const SharedPtr<Brush> m_Linen;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFF00FF.
        static const SharedPtr<Brush> m_Magenta;
        /// Brush with the solid fill color whose hexadecimal value is \#FF800000.
        static const SharedPtr<Brush> m_Maroon;
        /// Brush with the solid fill color whose hexadecimal value is \#FF66CDAA.
        static const SharedPtr<Brush> m_MediumAquamarine;
        /// Brush with the solid fill color whose hexadecimal value is \#FF0000CD.
        static const SharedPtr<Brush> m_MediumBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FFBA55D3.
        static const SharedPtr<Brush> m_MediumOrchid;
        /// Brush with the solid fill color whose hexadecimal value is \#FF9370DB.
        static const SharedPtr<Brush> m_MediumPurple;
        /// Brush with the solid fill color whose hexadecimal value is \#FF3CB371.
        static const SharedPtr<Brush> m_MediumSeaGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FF7B68EE.
        static const SharedPtr<Brush> m_MediumSlateBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FF00FA9A.
        static const SharedPtr<Brush> m_MediumSpringGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FF48D1CC.
        static const SharedPtr<Brush> m_MediumTurquoise;
        /// Brush with the solid fill color whose hexadecimal value is \#FFC71585.
        static const SharedPtr<Brush> m_MediumVioletRed;
        /// Brush with the solid fill color whose hexadecimal value is \#FF191970.
        static const SharedPtr<Brush> m_MidnightBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FFF5FFFA.
        static const SharedPtr<Brush> m_MintCream;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFE4E1.
        static const SharedPtr<Brush> m_MistyRose;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFE4B5.
        static const SharedPtr<Brush> m_Moccasin;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFDEAD.
        static const SharedPtr<Brush> m_NavajoWhite;
        /// Brush with the solid fill color whose hexadecimal value is \#FF000080.
        static const SharedPtr<Brush> m_Navy;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFDF5E6.
        static const SharedPtr<Brush> m_OldLace;
        /// Brush with the solid fill color whose hexadecimal value is \#FF808000.
        static const SharedPtr<Brush> m_Olive;
        /// Brush with the solid fill color whose hexadecimal value is \#FF6B8E23.
        static const SharedPtr<Brush> m_OliveDrab;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFA500.
        static const SharedPtr<Brush> m_Orange;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFF4500.
        static const SharedPtr<Brush> m_OrangeRed;
        /// Brush with the solid fill color whose hexadecimal value is \#FFDA70D6.
        static const SharedPtr<Brush> m_Orchid;
        /// Brush with the solid fill color whose hexadecimal value is \#FFEEE8AA.
        static const SharedPtr<Brush> m_PaleGoldenrod;
        /// Brush with the solid fill color whose hexadecimal value is \#FF98FB98.
        static const SharedPtr<Brush> m_PaleGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FFAFEEEE.
        static const SharedPtr<Brush> m_PaleTurquoise;
        /// Brush with the solid fill color whose hexadecimal value is \#FFDB7093.
        static const SharedPtr<Brush> m_PaleVioletRed;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFEFD5.
        static const SharedPtr<Brush> m_PapayaWhip;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFDAB9.
        static const SharedPtr<Brush> m_PeachPuff;
        /// Brush with the solid fill color whose hexadecimal value is \#FFCD853F.
        static const SharedPtr<Brush> m_Peru;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFC0CB.
        static const SharedPtr<Brush> m_Pink;
        /// Brush with the solid fill color whose hexadecimal value is \#FFDDA0DD.
        static const SharedPtr<Brush> m_Plum;
        /// Brush with the solid fill color whose hexadecimal value is \#FFB0E0E6.
        static const SharedPtr<Brush> m_PowderBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FF800080.
        static const SharedPtr<Brush> m_Purple;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFF0000.
        static const SharedPtr<Brush> m_Red;
        /// Brush with the solid fill color whose hexadecimal value is \#FFBC8F8F.
        static const SharedPtr<Brush> m_RosyBrown;
        /// Brush with the solid fill color whose hexadecimal value is \#FF4169E1.
        static const SharedPtr<Brush> m_RoyalBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FF8B4513.
        static const SharedPtr<Brush> m_SaddleBrown;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFA8072.
        static const SharedPtr<Brush> m_Salmon;
        /// Brush with the solid fill color whose hexadecimal value is \#FFF4A460.
        static const SharedPtr<Brush> m_SandyBrown;
        /// Brush with the solid fill color whose hexadecimal value is \#FF2E8B57.
        static const SharedPtr<Brush> m_SeaGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFF5EE.
        static const SharedPtr<Brush> m_SeaShell;
        /// Brush with the solid fill color whose hexadecimal value is \#FFA0522D.
        static const SharedPtr<Brush> m_Sienna;
        /// Brush with the solid fill color whose hexadecimal value is \#FFC0C0C0.
        static const SharedPtr<Brush> m_Silver;
        /// Brush with the solid fill color whose hexadecimal value is \#FF87CEEB.
        static const SharedPtr<Brush> m_SkyBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FF6A5ACD.
        static const SharedPtr<Brush> m_SlateBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FF708090.
        static const SharedPtr<Brush> m_SlateGray;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFFAFA.
        static const SharedPtr<Brush> m_Snow;
        /// Brush with the solid fill color whose hexadecimal value is \#FF00FF7F.
        static const SharedPtr<Brush> m_SpringGreen;
        /// Brush with the solid fill color whose hexadecimal value is \#FF4682B4.
        static const SharedPtr<Brush> m_SteelBlue;
        /// Brush with the solid fill color whose hexadecimal value is \#FFD2B48C.
        static const SharedPtr<Brush> m_Tan;
        /// Brush with the solid fill color whose hexadecimal value is \#FF008080.
        static const SharedPtr<Brush> m_Teal;
        /// Brush with the solid fill color whose hexadecimal value is \#FFD8BFD8.
        static const SharedPtr<Brush> m_Thistle;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFF6347.
        static const SharedPtr<Brush> m_Tomato;
        /// Brush with the solid fill color whose hexadecimal value is \#00FFFFFF.
        static const SharedPtr<Brush> m_Transparent;
        /// Brush with the solid fill color whose hexadecimal value is \#FF40E0D0.
        static const SharedPtr<Brush> m_Turquoise;
        /// Brush with the solid fill color whose hexadecimal value is \#FFEE82EE.
        static const SharedPtr<Brush> m_Violet;
        /// Brush with the solid fill color whose hexadecimal value is \#FFF5DEB3.
        static const SharedPtr<Brush> m_Wheat;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFFFFF.
        static const SharedPtr<Brush> m_White;
        /// Brush with the solid fill color whose hexadecimal value is \#FFF5F5F5.
        static const SharedPtr<Brush> m_WhiteSmoke;
        /// Brush with the solid fill color whose hexadecimal value is \#FFFFFF00.
        static const SharedPtr<Brush> m_Yellow;
        /// Brush with the solid fill color whose hexadecimal value is \#FF9ACD32.
        static const SharedPtr<Brush> m_YellowGreen;
    };

}}


#endif
