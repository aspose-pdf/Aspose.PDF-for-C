#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { enum class KnownColor; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { class CmykColor; } } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// The color of the pixel.
/// </summary>
class ASPOSE_PDF_SHARED_API Color : public System::Object
{
    typedef Color ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend ASPOSE_PDF_SHARED_API bool operator ==(Color const &left, Color const &right);
    friend ASPOSE_PDF_SHARED_API bool operator !=(Color const &left, Color const &right);
    
private:

    class SaturationData : public System::Object
    {
        typedef SaturationData ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets the minimal saturation.
        /// </summary>
        /// <value>The minimal saturation.</value>
        float get_MinimalSaturation();
        /// <summary>
        /// Gets the maximal saturation.
        /// </summary>
        /// <value>The maximal saturation.</value>
        float get_MaximalSaturation();
        /// <summary>
        /// Gets the red component saturation.
        /// </summary>
        /// <value>The red component saturation.</value>
        float get_RedSaturation();
        /// <summary>
        /// Gets the green component saturation.
        /// </summary>
        /// <value>The green component saturation.</value>
        float get_GreenSaturation();
        /// <summary>
        /// Gets the blue component saturation.
        /// </summary>
        /// <value>The blue component saturation.</value>
        float get_BlueSaturation();
        
        /// <summary>
        /// Initializes a new instance of the <see cref="SaturationData"/> struct.
        /// </summary>
        /// <param name="minSaturation">The minimal saturation.</param>
        /// <param name="maxSaturation">The maximal saturation.</param>
        /// <param name="redSaturation">The red component saturation.</param>
        /// <param name="greenSaturation">The green component saturation.</param>
        /// <param name="blueSaturation">The blue component saturation.</param>
        SaturationData(float minSaturation, float maxSaturation, float redSaturation, float greenSaturation, float blueSaturation);
        SaturationData();
        
    private:
    
        float minSaturation;
        float maxSaturation;
        float redSaturation;
        float greenSaturation;
        float blueSaturation;
        
    };
    
    
public:

    /// <summary>
    /// Gets an empty <see cref="Color"/>.
    /// </summary>
    /// <value>The empty <see cref="Color"/>.</value>
    static Color get_Empty();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Transparent();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_AliceBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_AntiqueWhite();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Aqua();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Aquamarine();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Azure();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Beige();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>        
    static Color get_Bisque();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Black();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_BlanchedAlmond();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Blue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_BlueViolet();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Brown();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_BurlyWood();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_CadetBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Chartreuse();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Chocolate();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Coral();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_CornflowerBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Cornsilk();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Crimson();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Cyan();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkCyan();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkGoldenrod();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkGray();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkKhaki();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkMagenta();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkOliveGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkOrange();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkOrchid();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkRed();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkSalmon();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkSeaGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkSlateBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkSlateGray();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkTurquoise();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DarkViolet();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DeepPink();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DeepSkyBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DimGray();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_DodgerBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Firebrick();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_FloralWhite();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_ForestGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Fuchsia();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Gainsboro();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_GhostWhite();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Gold();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Goldenrod();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure representing a system-defined color.</value>
    static Color get_Gray();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Green();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_GreenYellow();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Honeydew();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_HotPink();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_IndianRed();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Indigo();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Ivory();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Khaki();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Lavender();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LavenderBlush();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LawnGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LemonChiffon();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightCoral();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightCyan();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightGoldenrodYellow();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightGray();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightPink();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightSalmon();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightSeaGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightSkyBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightSlateGray();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightSteelBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LightYellow();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Lime();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_LimeGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Linen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Magenta();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Maroon();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MediumAquamarine();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MediumBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MediumOrchid();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MediumPurple();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MediumSeaGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MediumSlateBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MediumSpringGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MediumTurquoise();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MediumVioletRed();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MidnightBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MintCream();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_MistyRose();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Moccasin();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_NavajoWhite();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Navy();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_OldLace();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Olive();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_OliveDrab();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Orange();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_OrangeRed();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Orchid();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_PaleGoldenrod();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_PaleGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_PaleTurquoise();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_PaleVioletRed();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_PapayaWhip();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_PeachPuff();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Peru();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Pink();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Plum();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_PowderBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Purple();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Red();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_RosyBrown();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_RoyalBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_SaddleBrown();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Salmon();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_SandyBrown();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_SeaGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_SeaShell();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Sienna();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Silver();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_SkyBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_SlateBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_SlateGray();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Snow();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_SpringGreen();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_SteelBlue();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Tan();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Teal();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Thistle();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Tomato();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Turquoise();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Violet();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Wheat();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_White();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_WhiteSmoke();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_Yellow();
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> representing a system-defined color.</value>
    static Color get_YellowGreen();
    /// <summary>
    /// Gets the red component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure.
    /// </summary>
    /// <value>The red component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>.</value>
    uint8_t get_R();
    /// <summary>
    /// Gets the green component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure.
    /// </summary>
    /// <value>The green component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>.</value>
    uint8_t get_G();
    /// <summary>
    /// Gets the blue component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure.
    /// </summary>
    /// <value>The blue component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>.</value>
    uint8_t get_B();
    /// <summary>
    /// Gets the alpha component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure.
    /// </summary>
    /// <value>The alpha component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>.</value>
    uint8_t get_A();
    /// <summary>
    /// Gets a value indicating whether this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure is a predefined color. Predefined colors are represented by the elements of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::KnownColor"/> enumeration.
    /// </summary>
    /// <value>True if this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> was created from a predefined color by using either the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color::FromName(System::String)"/> method or the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color::FromKnownColor(Aspose::Pdf::Engine::Presentation::Graphics::KnownColor)"/> method; otherwise, false.</value>
    bool get_IsKnownColor();
    /// <summary>
    /// Gets a value indicating whether this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure is uninitialized.
    /// </summary>
    /// <value>This property returns true if this color is uninitialized; otherwise, false.</value>
    bool get_IsEmpty();
    /// <summary>
    /// Gets a value indicating whether this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure is a named color or a member of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::KnownColor"/> enumeration.
    /// </summary>
    /// <value>True if this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> was created by using either the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color::FromName(System::String)"/> method or the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color::FromKnownColor(Aspose::Pdf::Engine::Presentation::Graphics::KnownColor)"/> method; otherwise, false.</value>
    bool get_IsNamedColor();
    /// <summary>
    /// Gets the name of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>.
    /// </summary>
    /// <value>The name of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>.</value>
    System::String get_Name();
    
    /// <summary>
    /// Creates a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure from a 32-bit ARGB value.
    /// </summary>
    /// <param name="argb">A value specifying the 32-bit ARGB value.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure that this method creates.</returns>
    static Color FromArgb(int32_t argb);
    /// <summary>
    /// Creates a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure from the four ARGB component (alpha, red, green, and blue) values. Although this method allows a 32-bit value to be passed for each component, the value of each component is limited to 8 bits.
    /// </summary>
    /// <param name="alpha">The alpha component. Valid values are 0 through 255.</param>
    /// <param name="red">The red component. Valid values are 0 through 255.</param>
    /// <param name="green">The green component. Valid values are 0 through 255.</param>
    /// <param name="blue">The blue component. Valid values are 0 through 255.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> that this method creates.</returns>
    /// <exception cref="System::ArgumentOutOfRangeException"><paramref name="alpha"/>, <paramref name="red"/>, <paramref name="green"/>, or <paramref name="blue"/> is less than 0 or greater than 255.</exception>        
    static Color FromArgb(int32_t alpha, int32_t red, int32_t green, int32_t blue);
    /// <summary>
    /// Creates a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure from the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure, but with the new specified alpha value. Although this method allows a 32-bit value to be passed for the alpha value, the value is limited to 8 bits.
    /// </summary>
    /// <param name="alpha">The alpha value for the new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>. Valid values are 0 through 255.</param>
    /// <param name="baseColor">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> from which to create the new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> that this method creates.</returns>
    /// <exception cref="System::ArgumentOutOfRangeException"><paramref name="alpha"/> is less than 0 or greater than 255.</exception>
    static Color FromArgb(int32_t alpha, Color baseColor);
    /// <summary>
    /// Creates a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure from the specified 8-bit color values (red, green, and blue). The alpha value is implicitly 255 (fully opaque). Although this method allows a 32-bit value to be passed for each color component, the value of each component is limited to 8 bits.
    /// </summary>
    /// <param name="red">The red component value for the new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>. Valid values are 0 through 255.</param>
    /// <param name="green">The green component value for the new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>. Valid values are 0 through 255.</param>
    /// <param name="blue">The blue component value for the new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>. Valid values are 0 through 255.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> that this method creates.</returns>
    /// <exception cref="T:System::ArgumentOutOfRangeException"><paramref name="red"/>, <paramref name="green"/>, or <paramref name="blue"/> is less than 0 or greater than 255.</exception>
    static Color FromArgb(int32_t red, int32_t green, int32_t blue);
    /// <summary>
    /// Creates a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure from the specified predefined color.
    /// </summary>
    /// <param name="color">An element of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::KnownColor"/> enumeration.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> that this method creates.</returns>
    static Color FromKnownColor(KnownColor color);
    /// <summary>
    /// Creates a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure from the specified name of a predefined color.
    /// </summary>
    /// <param name="name">A string that is the name of a predefined color. Valid names are the same as the names of the elements of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::KnownColor"/> enumeration.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> that this method creates.</returns>
    static Color FromName(System::String name);
    /// <summary>
    /// Gets the hue-saturation-brightness (HSB) brightness value for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure.
    /// </summary>
    /// <returns>The brightness of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>. The brightness ranges from 0.0 through 1.0, where 0.0 represents black and 1.0 represents white.</returns>
    float GetBrightness();
    /// <summary>
    /// Gets the hue-saturation-brightness (HSB) hue value, in degrees, for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure.
    /// </summary>
    /// <returns>The hue, in degrees, of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>. The hue is measured in degrees, ranging from 0.0 through 360.0, in HSB color space.</returns>
    float GetHue();
    /// <summary>
    /// Gets the hue-saturation-brightness (HSB) saturation value for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure.
    /// </summary>
    /// <returns>The saturation of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>. The saturation ranges from 0.0 through 1.0, where 0.0 is grayscale and 1.0 is the most saturated.</returns>
    float GetSaturation();
    /// <summary>
    /// Gets the 32-bit ARGB value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure.
    /// </summary>
    /// <returns>The 32-bit ARGB value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>.</returns>
    int32_t ToArgb();
    /// <summary>
    /// Gets the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::KnownColor"/> value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure.
    /// </summary>
    /// <returns>An element of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::KnownColor"/> enumeration, if the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> is created from a predefined color by using either the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color::FromName(System::String)"/> method or the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color::FromKnownColor(Aspose::Pdf::Engine::Presentation::Graphics::KnownColor)"/> method; otherwise, 0.</returns>
    KnownColor ToKnownColor();
    /// <summary>
    /// Converts this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure to a human-readable string.
    /// </summary>
    /// <returns>A string that is the name of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>, if the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> is created from a predefined color by using either the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color::FromName(System::String)"/> method or the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color::FromKnownColor(Aspose::Pdf::Engine::Presentation::Graphics::KnownColor)"/> method; otherwise, a string that consists of the ARGB component names and their values.</returns>
    virtual System::String ToString() const;
    /// <summary>
    /// Tests whether the specified object is a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure and is equivalent to this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure.
    /// </summary>
    /// <param name="obj">The object to test.</param>
    /// <returns>True if <paramref name="obj"/> is a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure equivalent to this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure; otherwise, false.</returns>
    virtual bool Equals(System::SharedPtr<System::Object> obj) const;
    /// <summary>
    /// Returns a hash code for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure.
    /// </summary>
    /// <returns>An integer value that specifies the hash code for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/>.</returns>
    virtual int32_t GetHashCode() const;
    /// <summary>
    /// The conversion from Color to CMYKColor.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToCmyk(Color[])" />.
    /// </summary>
    /// <param name="pixels">
    /// The pixels of Color type in RGB format.
    /// </param>
    /// <returns>
    /// The <see cref="T:Aspose::Pdf::Engine::Presentation::Graphics:CmykColor[]"/>.
    /// </returns>
    static System::ArrayPtr<CmykColor> ToCmyk(System::ArrayPtr<Color> pixels);
    /// <summary>
    /// The conversion from Color to CMYKColor.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToCmyk(Color)" />.
    /// </summary>
    /// <param name="pixel">
    /// The pixel of Color type in RGB format.
    /// </param>
    /// <returns>
    /// The <see cref="T:Aspose::Pdf::Engine::Presentation::Graphics:CmykColor"/>.
    /// </returns>
    static CmykColor ToCmyk(Color pixel);
    /// <summary>
    /// The conversion from Color to CMYKColor using icc conversion with default profiles.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToCmykIcc(Color)" />.
    /// </summary>
    /// <param name="pixel">
    /// The pixel of Color type in RGB format.
    /// </param>
    /// <returns>
    /// The <see cref="CmykColor"/>.
    /// </returns>
    static CmykColor ToCmykIcc(Color pixel);
    /// <summary>
    /// The conversion from Color to CMYKColor using icc conversion with default profiles.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToCmykIcc(Color[])" />.
    /// </summary>
    /// <param name="pixels">
    /// The pixels of Color type in RGB format.
    /// </param>
    /// <returns>
    /// The <see cref="CmykColor[]"/>.
    /// </returns>
    static System::ArrayPtr<CmykColor> ToCmykIcc(System::ArrayPtr<Color> pixels);
    /// <summary>
    /// The conversion from Color to CMYKColor using icc conversion.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToCmykIcc(Color[], Stream, Stream)" />.
    /// </summary>
    /// <param name="pixels">
    /// The pixels of Color type in RGB format.
    /// </param>
    /// <param name="rgbIccStream">
    /// The stream containing icc rgb profile.
    /// </param>
    /// <param name="cmykIccStream">
    /// The stream containing icc cmyk profile.
    /// </param>
    /// <returns>
    /// The <see cref="T:Aspose::Pdf::Engine::Presentation::Graphics:CmykColor[]"/>.
    /// </returns>
    static System::ArrayPtr<CmykColor> ToCmykIcc(System::ArrayPtr<Color> pixels, System::SharedPtr<System::IO::Stream> rgbIccStream, System::SharedPtr<System::IO::Stream> cmykIccStream);
    /// <summary>
    /// The conversion from Color to CMYKColor using icc conversion with default profiles.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToCmykIcc(Color, Stream, Stream)" />.
    /// </summary>
    /// <param name="pixel">
    /// The pixel of Color type in RGB format.
    /// </param>
    /// <param name="rgbIccStream">
    /// The stream containing icc rgb profile.
    /// </param>
    /// <param name="cmykIccStream">
    /// The stream containing icc cmyk profile.
    /// </param>
    /// <returns>
    /// The <see cref="T:Aspose::Pdf::Engine::Presentation::Graphics:CmykColor[]"/>.
    /// </returns>
    static CmykColor ToCmykIcc(Color pixel, System::SharedPtr<System::IO::Stream> rgbIccStream, System::SharedPtr<System::IO::Stream> cmykIccStream);
    
    Color();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static const int32_t ArgbAlphaShift;
    static const int32_t ArgbRedShift;
    static const int32_t ArgbGreenShift;
    static const int32_t ArgbBlueShift;
    static Color empty;
    int32_t value;
    KnownColor knownColor;
    System::String name;
    bool isNonEmptyColor;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    /// <summary>
    /// Initializes a new instance of the <see cref="Color"/> struct.
    /// </summary>
    /// <param name="color">The known color value.</param>
    Color(KnownColor color);
    /// <summary>
    /// Initializes a new instance of the <see cref="Color"/> struct.
    /// </summary>
    /// <param name="value">The color value.</param>
    /// <param name="name">The color name.</param>
    Color(int32_t value, System::String name);
    
    /// <summary>
    /// Checks that byte value is valid.
    /// </summary>
    /// <param name="value">The byte value.</param>
    /// <param name="name">The byte name.</param>
    static void IsByteValid(int32_t value, System::String name);
    /// <summary>
    /// Makes the ARGB value.
    /// </summary>
    /// <param name="alpha">The alpha component.</param>
    /// <param name="red">The red component.</param>
    /// <param name="green">The green component.</param>
    /// <param name="blue">The blue component.</param>
    /// <returns>The ARGB component containing the alpha, red, green and blue components.</returns>
    static int32_t MakeArgb(int32_t alpha, int32_t red, int32_t green, int32_t blue);
    /// <summary>
    /// Gets the saturation values.
    /// </summary>
    /// <returns>The saturation values.</returns>
    Color::SaturationData GetSaturationValues();
    
};

ASPOSE_PDF_SHARED_API bool operator ==(Color const &left, Color const &right);
ASPOSE_PDF_SHARED_API bool operator !=(Color const &left, Color const &right);

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


