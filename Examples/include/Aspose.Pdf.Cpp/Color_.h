#ifndef _Aspose_Pdf_Color__h_
#define _Aspose_Pdf_Color__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

#include "Brush_.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class RedactionAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Shape; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class CommonFigureAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LineAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class PolyAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { enum class ColorSpace; } }
namespace Aspose { namespace Pdf { namespace Drawing { class PatternColorSpace; } } }

namespace Aspose {

namespace Pdf {


// C# preprocessor directive: #if UNIT_TEST 

/// <summary>
/// Represents class for color value which can be expressed in different color space.
/// </summary>
class ASPOSE_PDF_SHARED_API Color FINAL : public Aspose::Pdf::Brush
{
    typedef Color ThisType;
    typedef Aspose::Pdf::Brush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::CommonFigureAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::LineAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::PolyAnnotation;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextState;
    friend bool operator ==(System::SharedPtr<Color> x, System::SharedPtr<Color> y);
    friend bool operator !=(System::SharedPtr<Color> x, System::SharedPtr<Color> y);
    
public:

    static System::SharedPtr<Color> Empty;
    
    System::ArrayPtr<double> get_Data();
    Aspose::Pdf::ColorSpace get_ColorSpace();
    static System::SharedPtr<Color> get_Transparent();
    static System::SharedPtr<Color> get_AliceBlue();
    static System::SharedPtr<Color> get_AntiqueWhite();
    static System::SharedPtr<Color> get_Aqua();
    static System::SharedPtr<Color> get_Aquamarine();
    static System::SharedPtr<Color> get_Azure();
    static System::SharedPtr<Color> get_Beige();
    static System::SharedPtr<Color> get_Bisque();
    static System::SharedPtr<Color> get_Black();
    static System::SharedPtr<Color> get_BlanchedAlmond();
    static System::SharedPtr<Color> get_Blue();
    static System::SharedPtr<Color> get_BlueViolet();
    static System::SharedPtr<Color> get_Brown();
    static System::SharedPtr<Color> get_BurlyWood();
    static System::SharedPtr<Color> get_CadetBlue();
    static System::SharedPtr<Color> get_Chartreuse();
    static System::SharedPtr<Color> get_Chocolate();
    static System::SharedPtr<Color> get_Coral();
    static System::SharedPtr<Color> get_CornflowerBlue();
    static System::SharedPtr<Color> get_Cornsilk();
    static System::SharedPtr<Color> get_Crimson();
    static System::SharedPtr<Color> get_Cyan();
    static System::SharedPtr<Color> get_DarkBlue();
    static System::SharedPtr<Color> get_DarkCyan();
    static System::SharedPtr<Color> get_DarkGoldenrod();
    static System::SharedPtr<Color> get_DarkGray();
    static System::SharedPtr<Color> get_DarkGreen();
    static System::SharedPtr<Color> get_DarkKhaki();
    static System::SharedPtr<Color> get_DarkMagenta();
    static System::SharedPtr<Color> get_DarkOliveGreen();
    static System::SharedPtr<Color> get_DarkOrange();
    static System::SharedPtr<Color> get_DarkOrchid();
    static System::SharedPtr<Color> get_DarkRed();
    static System::SharedPtr<Color> get_DarkSalmon();
    static System::SharedPtr<Color> get_DarkSeaGreen();
    static System::SharedPtr<Color> get_DarkSlateBlue();
    static System::SharedPtr<Color> get_DarkSlateGray();
    static System::SharedPtr<Color> get_DarkTurquoise();
    static System::SharedPtr<Color> get_DarkViolet();
    static System::SharedPtr<Color> get_DeepPink();
    static System::SharedPtr<Color> get_DeepSkyBlue();
    static System::SharedPtr<Color> get_DimGray();
    static System::SharedPtr<Color> get_DodgerBlue();
    static System::SharedPtr<Color> get_Firebrick();
    static System::SharedPtr<Color> get_FloralWhite();
    static System::SharedPtr<Color> get_ForestGreen();
    static System::SharedPtr<Color> get_Fuchsia();
    static System::SharedPtr<Color> get_Gainsboro();
    static System::SharedPtr<Color> get_GhostWhite();
    static System::SharedPtr<Color> get_Gold();
    static System::SharedPtr<Color> get_Goldenrod();
    static System::SharedPtr<Color> get_Gray();
    static System::SharedPtr<Color> get_Green();
    static System::SharedPtr<Color> get_GreenYellow();
    static System::SharedPtr<Color> get_Honeydew();
    static System::SharedPtr<Color> get_HotPink();
    static System::SharedPtr<Color> get_IndianRed();
    static System::SharedPtr<Color> get_Indigo();
    static System::SharedPtr<Color> get_Ivory();
    static System::SharedPtr<Color> get_Khaki();
    static System::SharedPtr<Color> get_Lavender();
    static System::SharedPtr<Color> get_LavenderBlush();
    static System::SharedPtr<Color> get_LawnGreen();
    static System::SharedPtr<Color> get_LemonChiffon();
    static System::SharedPtr<Color> get_LightBlue();
    static System::SharedPtr<Color> get_LightCoral();
    static System::SharedPtr<Color> get_LightCyan();
    static System::SharedPtr<Color> get_LightGoldenrodYellow();
    static System::SharedPtr<Color> get_LightGreen();
    static System::SharedPtr<Color> get_LightGray();
    static System::SharedPtr<Color> get_LightPink();
    static System::SharedPtr<Color> get_LightSalmon();
    static System::SharedPtr<Color> get_LightSeaGreen();
    static System::SharedPtr<Color> get_LightSkyBlue();
    static System::SharedPtr<Color> get_LightSlateGray();
    static System::SharedPtr<Color> get_LightSteelBlue();
    static System::SharedPtr<Color> get_LightYellow();
    static System::SharedPtr<Color> get_Lime();
    static System::SharedPtr<Color> get_LimeGreen();
    static System::SharedPtr<Color> get_Linen();
    static System::SharedPtr<Color> get_Magenta();
    static System::SharedPtr<Color> get_Maroon();
    static System::SharedPtr<Color> get_MediumAquamarine();
    static System::SharedPtr<Color> get_MediumBlue();
    static System::SharedPtr<Color> get_MediumOrchid();
    static System::SharedPtr<Color> get_MediumPurple();
    static System::SharedPtr<Color> get_MediumSeaGreen();
    static System::SharedPtr<Color> get_MediumSlateBlue();
    static System::SharedPtr<Color> get_MediumSpringGreen();
    static System::SharedPtr<Color> get_MediumTurquoise();
    static System::SharedPtr<Color> get_MediumVioletRed();
    static System::SharedPtr<Color> get_MidnightBlue();
    static System::SharedPtr<Color> get_MintCream();
    static System::SharedPtr<Color> get_MistyRose();
    static System::SharedPtr<Color> get_Moccasin();
    static System::SharedPtr<Color> get_NavajoWhite();
    static System::SharedPtr<Color> get_Navy();
    static System::SharedPtr<Color> get_OldLace();
    static System::SharedPtr<Color> get_Olive();
    static System::SharedPtr<Color> get_OliveDrab();
    static System::SharedPtr<Color> get_Orange();
    static System::SharedPtr<Color> get_OrangeRed();
    static System::SharedPtr<Color> get_Orchid();
    static System::SharedPtr<Color> get_PaleGoldenrod();
    static System::SharedPtr<Color> get_PaleGreen();
    static System::SharedPtr<Color> get_PaleTurquoise();
    static System::SharedPtr<Color> get_PaleVioletRed();
    static System::SharedPtr<Color> get_PapayaWhip();
    static System::SharedPtr<Color> get_PeachPuff();
    static System::SharedPtr<Color> get_Peru();
    static System::SharedPtr<Color> get_Pink();
    static System::SharedPtr<Color> get_Plum();
    static System::SharedPtr<Color> get_PowderBlue();
    static System::SharedPtr<Color> get_Purple();
    static System::SharedPtr<Color> get_Red();
    static System::SharedPtr<Color> get_RosyBrown();
    static System::SharedPtr<Color> get_RoyalBlue();
    static System::SharedPtr<Color> get_SaddleBrown();
    static System::SharedPtr<Color> get_Salmon();
    static System::SharedPtr<Color> get_SandyBrown();
    static System::SharedPtr<Color> get_SeaGreen();
    static System::SharedPtr<Color> get_SeaShell();
    static System::SharedPtr<Color> get_Sienna();
    static System::SharedPtr<Color> get_Silver();
    static System::SharedPtr<Color> get_SkyBlue();
    static System::SharedPtr<Color> get_SlateBlue();
    static System::SharedPtr<Color> get_SlateGray();
    static System::SharedPtr<Color> get_Snow();
    static System::SharedPtr<Color> get_SpringGreen();
    static System::SharedPtr<Color> get_SteelBlue();
    static System::SharedPtr<Color> get_Tan();
    static System::SharedPtr<Color> get_Teal();
    static System::SharedPtr<Color> get_Thistle();
    static System::SharedPtr<Color> get_Tomato();
    static System::SharedPtr<Color> get_Turquoise();
    static System::SharedPtr<Color> get_Violet();
    static System::SharedPtr<Color> get_Wheat();
    static System::SharedPtr<Color> get_White();
    static System::SharedPtr<Color> get_WhiteSmoke();
    static System::SharedPtr<Color> get_Yellow();
    static System::SharedPtr<Color> get_YellowGreen();
    
    static System::SharedPtr<Color> Parse(System::String value);
    virtual System::String ToString();
    System::Drawing::Color ToRgb();
    static System::SharedPtr<Color> FromRgb(System::Drawing::Color color);
    static System::SharedPtr<Color> FromArgb(int32_t r, int32_t g, int32_t b);
    static System::SharedPtr<Color> FromRgb(double r, double g, double b);
    static System::SharedPtr<Color> FromGray(double g);
    static System::SharedPtr<Color> FromCmyk(double c, double m, double y, double k);
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    
protected:

    bool get_IsEmpty();
    System::SharedPtr<Aspose::Pdf::Drawing::PatternColorSpace> get_PatternColorSpace();
    void set_PatternColorSpace(System::SharedPtr<Aspose::Pdf::Drawing::PatternColorSpace> value);
    
    Color(System::ArrayPtr<double> vector);
    
    System::SharedPtr<Color> Clone();
    System::SharedPtr<Color> ToRgbColor();
    System::SharedPtr<Color> ToGrayColor();
    System::SharedPtr<Color> ToCmykColor();
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Color"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::ArrayPtr<double> vector;
    bool isEmpty;
    System::SharedPtr<Aspose::Pdf::Drawing::PatternColorSpace> patternColor;
    
    Color(System::ArrayPtr<double> vector, bool isEmpty);
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

bool operator ==(System::SharedPtr<Color> x, System::SharedPtr<Color> y);
bool operator !=(System::SharedPtr<Color> x, System::SharedPtr<Color> y);

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Color__h_

