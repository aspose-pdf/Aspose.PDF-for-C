#ifndef _aspose_drawing_drawing2d_hatch_style_h_
#define _aspose_drawing_drawing2d_hatch_style_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {

    enum class HatchStyle {
        ///       A pattern of horizontal lines.
        Horizontal = 0,
        ///       A pattern of vertical lines.
        Vertical = 1,
        ///       A pattern of lines on a diagonal from top-left to bottom-right.
        ForwardDiagonal = 2,
        ///    A pattern of lines on a diagonal from top-right to bottom-left.
        BackwardDiagonal = 3,
        ///       A pattern of criss-cross horizontal and vertical lines.
        Cross = 4,
        ///       A pattern of criss-cross diagonal lines.
        DiagonalCross = 5,
        Percent05 = 6,
        Percent10 = 7,
        Percent20 = 8,
        Percent25 = 9,
        Percent30 = 10,
        Percent40 = 11,
        Percent50 = 12,
        Percent60 = 13,
        Percent70 = 14,
        Percent75 = 15,
        Percent80 = 16,
        Percent90 = 17,
        LightDownwardDiagonal = 18,
        LightUpwardDiagonal = 19,
        DarkDownwardDiagonal = 20,
        DarkUpwardDiagonal = 21,
        WideDownwardDiagonal = 22,
        WideUpwardDiagonal = 23,
        LightVertical = 24,
        LightHorizontal = 25,
        NarrowVertical = 26,
        NarrowHorizontal = 27,
        DarkVertical = 28,
        DarkHorizontal = 29,
        DashedDownwardDiagonal = 30,
        DashedUpwardDiagonal = 31,
        DashedHorizontal = 32,
        DashedVertical = 33,
        SmallConfetti = 34,
        LargeConfetti = 35,
        ZigZag = 36,
        Wave = 37,
        DiagonalBrick = 38,
        HorizontalBrick = 39,
        Weave = 40,
        Plaid = 41,
        Divot = 42,
        DottedGrid = 43,
        DottedDiamond = 44,
        Shingle = 45,
        Trellis = 46,
        Sphere = 47,
        SmallGrid = 48,
        SmallCheckerBoard = 49,
        LargeCheckerBoard = 50,
        OutlinedDiamond = 51,
        SolidDiamond = 52,
        LargeGrid = Cross,
        Min = Horizontal,
        Max = LargeGrid
    };
}}}

template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::HatchStyle>
{
    static const std::array<std::pair<System::Drawing::Drawing2D::HatchStyle, const char_t*>, 56>& values();
};

#endif