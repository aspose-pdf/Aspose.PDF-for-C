#ifndef _Aspose_Pdf_Color__h_
#define _Aspose_Pdf_Color__h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

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


// C# preprocessor directive: #else 

/// <summary>
/// Represents class for color value which can be expressed in different color space.
/// </summary>
class ASPOSE_PDF_SHARED_API Color FINAL : public System::Object
{
    typedef Color ThisType;
    typedef System::Object BaseType;
    
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
    
    /// <summary>
    /// Gets color value.
    /// </summary>
    System::ArrayPtr<double> get_Data();
    /// <summary>
    /// Gets color space that the color represents.
    /// </summary>
    Aspose::Pdf::ColorSpace get_ColorSpace();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Transparent();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFF0F8FF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_AliceBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFAEBD7.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_AntiqueWhite();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF00FFFF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Aqua();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF7FFFD4.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Aquamarine();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFF0FFFF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Azure();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFF5F5DC.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Beige();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFE4C4.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Bisque();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF000000.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Black();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFEBCD.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_BlanchedAlmond();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF0000FF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Blue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF8A2BE2.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_BlueViolet();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFA52A2A.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Brown();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFDEB887.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_BurlyWood();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF5F9EA0.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_CadetBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF7FFF00.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Chartreuse();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFD2691E.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Chocolate();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFF7F50.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Coral();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF6495ED.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_CornflowerBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFF8DC.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Cornsilk();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFDC143C.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Crimson();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF00FFFF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Cyan();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF00008B.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF008B8B.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkCyan();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFB8860B.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkGoldenrod();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFA9A9A9.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF006400.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFBDB76B.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkKhaki();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF8B008B.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkMagenta();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF556B2F.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkOliveGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFF8C00.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkOrange();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF9932CC.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkOrchid();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF8B0000.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkRed();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFE9967A.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkSalmon();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF8FBC8F.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkSeaGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF483D8B.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkSlateBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF2F4F4F.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkSlateGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF00CED1.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkTurquoise();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF9400D3.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DarkViolet();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFF1493.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DeepPink();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF00BFFF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DeepSkyBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF696969.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DimGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF1E90FF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_DodgerBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFB22222.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Firebrick();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFFAF0.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_FloralWhite();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF228B22.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_ForestGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFF00FF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Fuchsia();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFDCDCDC.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Gainsboro();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFF8F8FF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_GhostWhite();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFD700.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Gold();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFDAA520.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Goldenrod();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF808080.
    /// </summary>
    /// <returns>
    /// A  strcture representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Gray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF008000.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Green();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFADFF2F.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_GreenYellow();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFF0FFF0.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Honeydew();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFF69B4.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_HotPink();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFCD5C5C.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_IndianRed();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF4B0082.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Indigo();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFFFF0.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Ivory();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFF0E68C.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Khaki();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFE6E6FA.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Lavender();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFF0F5.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LavenderBlush();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF7CFC00.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LawnGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFFACD.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LemonChiffon();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFADD8E6.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFF08080.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightCoral();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFE0FFFF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightCyan();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFAFAD2.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightGoldenrodYellow();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF90EE90.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFD3D3D3.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFB6C1.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightPink();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFA07A.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightSalmon();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF20B2AA.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightSeaGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF87CEFA.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightSkyBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF778899.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightSlateGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFB0C4DE.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightSteelBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFFFE0.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LightYellow();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF00FF00.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Lime();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF32CD32.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_LimeGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFAF0E6.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Linen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFF00FF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Magenta();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF800000.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Maroon();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF66CDAA.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MediumAquamarine();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF0000CD.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MediumBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFBA55D3.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MediumOrchid();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF9370DB.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MediumPurple();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF3CB371.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MediumSeaGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF7B68EE.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MediumSlateBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF00FA9A.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MediumSpringGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF48D1CC.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MediumTurquoise();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFC71585.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MediumVioletRed();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF191970.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MidnightBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFF5FFFA.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MintCream();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFE4E1.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_MistyRose();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFE4B5.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Moccasin();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFDEAD.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_NavajoWhite();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF000080.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Navy();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFDF5E6.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_OldLace();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF808000.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Olive();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF6B8E23.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_OliveDrab();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFA500.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Orange();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFF4500.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_OrangeRed();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFDA70D6.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Orchid();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFEEE8AA.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_PaleGoldenrod();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF98FB98.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_PaleGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFAFEEEE.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_PaleTurquoise();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFDB7093.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_PaleVioletRed();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFEFD5.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_PapayaWhip();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFDAB9.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_PeachPuff();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFCD853F.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Peru();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFC0CB.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Pink();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFDDA0DD.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Plum();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFB0E0E6.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_PowderBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF800080.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Purple();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFF0000.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Red();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFBC8F8F.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_RosyBrown();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF4169E1.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_RoyalBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF8B4513.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_SaddleBrown();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFA8072.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Salmon();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFF4A460.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_SandyBrown();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF2E8B57.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_SeaGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFF5EE.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_SeaShell();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFA0522D.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Sienna();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFC0C0C0.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Silver();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF87CEEB.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_SkyBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF6A5ACD.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_SlateBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF708090.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_SlateGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFFAFA.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Snow();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF00FF7F.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_SpringGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF4682B4.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_SteelBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFD2B48C.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Tan();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF008080.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Teal();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFD8BFD8.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Thistle();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFF6347.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Tomato();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF40E0D0.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Turquoise();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFEE82EE.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Violet();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFF5DEB3.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Wheat();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFFFFF.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_White();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFF5F5F5.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_WhiteSmoke();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FFFFFF00.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_Yellow();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of #FF9ACD32.
    /// </summary>
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static System::SharedPtr<Color> get_YellowGreen();
    
    /// <summary>
    /// Extracts color components from the string.
    /// </summary>
    /// <param name="value">
    /// String value with color component values.
    /// </param>
    /// <returns>
    /// Color object.
    /// </returns>
    static System::SharedPtr<Color> Parse(System::String value);
    /// <summary>
    /// Converts to string.
    /// </summary>
    /// <returns>
    /// String representation of the Color object.
    /// </returns>
    virtual System::String ToString();
    /// <summary>
    /// Converts color into rgb.
    /// </summary>
    /// <returns>
    /// Rgb color value.
    /// </returns>
    System::Drawing::Color ToRgb();
    /// <summary>
    /// Gets valid pdf Color object from System.Drawing.Color value.
    /// </summary>
    /// <param name="color">
    /// System.Drawing.Color value.
    /// </param>
    /// <returns>
    /// Color object with each component value in [0..1] range.
    /// </returns>
    static System::SharedPtr<Color> FromRgb(System::Drawing::Color color);
    /// <summary>
    /// Gets valid pdf Color object from RGB color components.
    /// </summary>
    /// <param name="r">
    /// The Red color component (value 0 - 255).
    /// </param>
    /// <param name="g">
    /// The Green color component (value 0 - 255).
    /// </param>
    /// <param name="b">
    /// The Blue color component (value 0 - 255).
    /// </param>
    /// <returns>
    /// Color object with each component value in [0..255] range.
    /// </returns>
    static System::SharedPtr<Color> FromArgb(int32_t r, int32_t g, int32_t b);
    /// <summary>
    /// Gets valid pdf Color object from RGB color components.
    /// </summary>
    /// <param name="r">
    /// The Red color component (value 0 - 1).
    /// </param>
    /// <param name="g">
    /// The Green color component (value 0 - 1).
    /// </param>
    /// <param name="b">
    /// The Blue color component (value 0 - 1).
    /// </param>
    /// <returns>
    /// Color object with each component value in [0..1] range.
    /// </returns>
    static System::SharedPtr<Color> FromRgb(double r, double g, double b);
    /// <summary>
    /// Gets valid pdf Color object from Gray color component.
    /// </summary>
    /// <param name="g">
    /// The Gray color component (value 0 - 1).
    /// </param>
    /// <returns>
    /// Color object with each component value in [0..1] range.
    /// </returns>
    static System::SharedPtr<Color> FromGray(double g);
    /// <summary>
    /// Gets valid pdf Color object from RGB color components.
    /// </summary>
    /// <param name="c">
    /// The Cyan color component (value 0 - 1).
    /// </param>
    /// <param name="m">
    /// The Magenta color component (value 0 - 1).
    /// </param>
    /// <param name="y">
    /// The Yellow color component (value 0 - 1).
    /// </param>
    /// <param name="k">
    /// The Key color component (value 0 - 1).
    /// </param> 
    /// <returns>
    /// Color object with each component value in [0..1] range.
    /// </returns>
    static System::SharedPtr<Color> FromCmyk(double c, double m, double y, double k);
    /// <summary>
    /// Returns true if two Colors are equal.
    /// </summary>
    /// <param name="obj">Object to compare.</param>
    /// <returns>True in case Color objects are equal.</returns>
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    
protected:

    /// <summary>
    /// If true this is empty (transparent) color.
    /// </summary>
    bool get_IsEmpty();
    /// <summary>
    /// Represents a object that indicates the pattern colorspace.        
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Drawing::PatternColorSpace> get_PatternColorSpace();
    /// <summary>
    /// Represents a object that indicates the pattern colorspace.        
    /// </summary>
    void set_PatternColorSpace(System::SharedPtr<Aspose::Pdf::Drawing::PatternColorSpace> value);
    
    Color(System::ArrayPtr<double> vector);
    
    System::SharedPtr<Color> Clone();
    System::SharedPtr<Color> ToRgbColor();
    System::SharedPtr<Color> ToGrayColor();
    System::SharedPtr<Color> ToCmykColor();
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
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

