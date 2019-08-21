/// @file drawing/drawing2d/hatch_style.h
#ifndef _aspose_drawing_drawing2d_hatch_style_h_
#define _aspose_drawing_drawing2d_hatch_style_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies patterns of HatchBrush brush.
    enum class HatchStyle {
        /// Horizontal lines.
        Horizontal = 0,
        /// Vertical lines.
        Vertical = 1,
        /// Lines on a diagonal from top-left to bottom-right.
        ForwardDiagonal = 2,
        /// Lines on a diagonal from top-right to bottom-left.
        BackwardDiagonal = 3,
        /// Criss-cross horizontal and vertical lines.
        Cross = 4,
        /// Criss-cross diagonal lines.
        DiagonalCross = 5,
        /// A 5% hatch. The foreground-to-backgroud color ratio is 5:95.
        Percent05 = 6,
        /// A 10% hatch. The foreground-to-backgroud color ratio is 10:90.
        Percent10 = 7,
        /// A 20% hatch. The foreground-to-backgroud color ratio is 20:80.
        Percent20 = 8,
        /// A 25% hatch. The foreground-to-backgroud color ratio is 25:75.
        Percent25 = 9,
        /// A 30% hatch. The foreground-to-backgroud color ratio is 30:70.
        Percent30 = 10,
        /// A 40% hatch. The foreground-to-backgroud color ratio is 40:60.
        Percent40 = 11,
        /// A 50% hatch. The foreground-to-backgroud color ratio is 50:50.
        Percent50 = 12,
        /// A 60% hatch. The foreground-to-backgroud color ratio is 60:40.
        Percent60 = 13,
        /// A 70% hatch. The foreground-to-backgroud color ratio is 70:30.
        Percent70 = 14,
        /// A 75% hatch. The foreground-to-backgroud color ratio is 75:25.
        Percent75 = 15,
        /// A 80% hatch. The foreground-to-backgroud color ratio is 80:20.
        Percent80 = 16,
        /// A 90% hatch. The foreground-to-backgroud color ratio is 90:10.
        Percent90 = 17,
        /// Diagonal lines that slant to the right from top points to bottom points and are spaced 50%, not antialiased.
        LightDownwardDiagonal = 18,
        /// Diagonal lines that slant to the left from top points to bottom points, not antialiased.
        LightUpwardDiagonal = 19,
        /// Diagonal lines that slant to the right from top points to bottom points, not antialiased.
        DarkDownwardDiagonal = 20,
        /// Diagonal lines that slant to the left from top points to bottom points, not antialiased.
        DarkUpwardDiagonal = 21,
        /// Diagonal lines that slant to the right from top points to bottom points, not antialiased.
        WideDownwardDiagonal = 22,
        /// Diagonal lines that slant to the right from top points to bottom points, not antialiased.
        WideUpwardDiagonal = 23,
        /// Vertical lines.
        LightVertical = 24,
        /// Horizontal lines.
        LightHorizontal = 25,
        /// Vertical lines.
        NarrowVertical = 26,
        /// Horizontal lines.
        NarrowHorizontal = 27,
        /// Vertical lines.
        DarkVertical = 28,
        /// Horizontal lines.
        DarkHorizontal = 29,
        /// Dashed downward diagonal lines.
        DashedDownwardDiagonal = 30,
        /// Dashed upward diagonal lines.
        DashedUpwardDiagonal = 31,
        /// Dashed horizontal lines.
        DashedHorizontal = 32,
        /// Dashed vertical lines.
        DashedVertical = 33,
        /// Small confetti.
        SmallConfetti = 34,
        /// Large confetti.
        LargeConfetti = 35,
        /// Zigzags.
        ZigZag = 36,
        /// Wawed lines.
        Wave = 37,
        /// Diagonal brick pattern.
        DiagonalBrick = 38,
        /// Horizontal brick pattern.
        HorizontalBrick = 39,
        /// Weave.
        Weave = 40,
        /// Plaid.
        Plaid = 41,
        /// Divot.
        Divot = 42,
        /// Dotted grid.
        DottedGrid = 43,
        /// Dotted diamond.
        DottedDiamond = 44,
        /// Shingle.
        Shingle = 45,
        /// Trellis.
        Trellis = 46,
        /// Sphere.
        Sphere = 47,
        /// Small grid.
        SmallGrid = 48,
        /// Small checker board.
        SmallCheckerBoard = 49,
        /// Large checker board.
        LargeCheckerBoard = 50,
        /// Outline diamond.
        OutlinedDiamond = 51,
        /// Solid diamond.
        SolidDiamond = 52,
        /// Large grid.
        LargeGrid = Cross,
        /// The first member of this enum.
        Min = Horizontal,
        /// The last member of this enum.
        Max = LargeGrid
    };
/// Declaration of template arithmetic operators for values of HatchStyle enum type.
DECLARE_ENUM_OPERATORS(System::Drawing::Drawing2D::HatchStyle);

}}}
/// Inserts using declaratios for arithmetic operators declared in namespace System::Drawing::Imaging.
DECLARE_USING_ENUM_OPERATORS(System::Drawing::Drawing2D);  

/// Specialization for System::Drawing::Drawing2D::HatchStyle; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::HatchStyle>
{
    /// Returns a array of pairs that associate System::Drawing::Drawing2D::HatchStyle enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::Drawing2D::HatchStyle, const char_t*>, 56>& values();
};

#endif
