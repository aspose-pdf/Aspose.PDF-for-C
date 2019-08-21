#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/array.h>
#include <cstdint>

#include "Presentation/Graphics/Core/Color__.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
///     The CMYK color of pixel.
/// </summary>
class ASPOSE_PDF_SHARED_API CmykColor : public System::Object
{
    typedef CmykColor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    /// <summary>
    ///     Gets the empty.
    /// </summary>
    static CmykColor get_Empty();
    /// <summary>
    ///     Gets the cyan component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color" /> structure.
    /// </summary>
    /// <value>
    ///     The cyan component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color" />.
    /// </value>
    uint8_t get_C();
    /// <summary>
    ///     Gets the magenta component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color" /> structure.
    /// </summary>
    /// <value>
    ///     The magenta component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color" />.
    /// </value>
    uint8_t get_M();
    /// <summary>
    ///     Gets the yellow component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color" /> structure.
    /// </summary>
    /// <value>
    ///     The yellow component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color" />.
    /// </value>
    uint8_t get_Y();
    /// <summary>
    ///     Gets the black component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color" /> structure.
    /// </summary>
    /// <value>
    ///     The black component value of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color" />.
    /// </value>
    uint8_t get_K();
    /// <summary>
    ///     Gets a value indicating whether this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color" /> structure is uninitialized.
    /// </summary>
    /// <value>This property returns true if this color is uninitialized; otherwise, false.</value>
    bool get_IsEmpty();
    
    /// <summary>
    /// Creates a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::CmykColor"/> structure from a 32-bit cyan, magenta, yellow and black values.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::FromComponents(int, int, int, int)" />.
    /// </summary>
    /// <param name="cyan">
    /// The cyan component. Valid values are 0 through 255.
    /// </param>
    /// <param name="magenta">
    /// The magenta component. Valid values are 0 through 255.
    /// </param>
    /// <param name="yellow">
    /// The yellow component. Valid values are 0 through 255.
    /// </param>
    /// <param name="black">
    /// The black component. Valid values are 0 through 255.
    /// </param>
    /// <returns>
    /// The <see cref="CmykColor"/>.
    /// </returns>
    static CmykColor FromParams(int32_t cyan, int32_t magenta, int32_t yellow, int32_t black);
    /// <summary>
    ///     The get hash code.
    /// </summary>
    /// <returns>
    ///     The <see cref="int32_t" />.
    /// </returns>
    virtual int32_t GetHashCode();
    /// <summary>
    /// The conversion from 32-bit ARGB color to CMYKColor.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToCmyk(int[])" />.
    /// </summary>
    /// <param name="argbPixels">
    /// The pixels of 32-bit ARGB format.
    /// </param>
    /// <returns>
    /// The <see cref="T:Aspose::Pdf::Engine::Presentation::Graphics:CmykColor[]"/>.
    /// </returns>
    static System::ArrayPtr<CmykColor> ToCmyk(System::ArrayPtr<int32_t> argbPixels);
    /// <summary>
    /// The conversion from CMYKColor to Color using icc conversion  with default profiles.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToArgb(int[])" />.
    /// </summary>
    /// <param name="cmykPixels">
    /// The pixels of CMYKColor type in CMYK format.
    /// </param>
    /// <returns>
    /// The array of the ARGB colors.
    /// </returns>
    static System::ArrayPtr<Color> ToColor(System::ArrayPtr<CmykColor> cmykPixels);
    /// <summary>
    /// The conversion from CMYKColor to 32-bit ARGB Color using icc conversion  with default profiles.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToArgb32(int[])" />.
    /// </summary>
    /// <param name="cmykPixels">
    /// The pixels of CMYKColor type in CMYK format.
    /// </param>
    /// <returns>
    /// The array of the 32-bit ARGB color.
    /// </returns>
    static System::ArrayPtr<int32_t> ToArgb32(System::ArrayPtr<CmykColor> cmykPixels);
    /// <summary>
    /// The conversion from 32-bit ARGB to CMYKColor.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToCmyk(int)" />.
    /// </summary>
    /// <param name="argbPixel">
    /// The pixel of 32-bit ARGB format.
    /// </param>
    /// <returns>
    /// The <see cref="T:Aspose::Pdf::Engine::Presentation::Graphics:CmykColor"/>.
    /// </returns>
    static CmykColor ToCmyk(int32_t argbPixel);
    /// <summary>
    /// The conversion from CMYKColor to Color.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToArgb(int)" />.
    /// </summary>
    /// <param name="cmykPixel">
    /// The pixels of CMYKColor type in CMYK format.
    /// </param>
    /// <returns>
    /// The <see cref="T:Aspose::Pdf::Engine::Presentation::Graphics::Color[]"/>.
    /// </returns>
    static Color ToColor(CmykColor cmykPixel);
    /// <summary>
    /// The conversion from CMYKColor to Color using icc conversion with default profiles.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToArgbIcc(int[])" />.
    /// </summary>
    /// <param name="cmykPixels">
    /// The pixels of CMYKColor type in CMYK format.
    /// </param>
    /// <returns>
    /// The <see cref="T:Aspose::Pdf::Engine::Presentation::Graphics::Color[]"/>.
    /// </returns>
    static System::ArrayPtr<Color> ToColorIcc(System::ArrayPtr<CmykColor> cmykPixels);
    /// <summary>
    /// The conversion from CMYKColor to Color using icc conversion with default profiles.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToArgbIcc(int)" />.
    /// </summary>
    /// <param name="cmykPixel">
    /// The pixel of CMYKColor type in CMYK format.
    /// </param>
    /// <returns>
    /// The <see cref="Color"/>.
    /// </returns>
    static Color ToColorIcc(CmykColor cmykPixel);
    /// <summary>
    /// The conversion from CMYKColor to Color using icc conversion.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToArgbIcc(int[], Stream, Stream)" />.
    /// </summary>
    /// <param name="cmykPixels">
    /// The pixels of CMYKColor type in CMYK format.
    /// </param>
    /// <param name="cmykIccStream">
    /// The stream containing icc cmyk profile.
    /// </param>
    /// <param name="rgbIccStream">
    /// The stream containing icc rgb profile.
    /// </param>
    /// <returns>
    /// The <see cref="T:Aspose::Pdf::Engine::Presentation::Graphics::Color[]"/>.
    /// </returns>
    static System::ArrayPtr<Color> ToColorIcc(System::ArrayPtr<CmykColor> cmykPixels, System::SharedPtr<System::IO::Stream> cmykIccStream, System::SharedPtr<System::IO::Stream> rgbIccStream);
    /// <summary>
    /// The conversion from CMYKColor to Color using icc conversion.
    /// This method is deprecated. Please use more effective <see cref="CmykColorHelper::ToArgbIcc(int, Stream, Stream)" />.
    /// </summary>
    /// <param name="cmykPixel">
    /// The pixel of CMYKColor type in CMYK format.
    /// </param>
    /// <param name="cmykIccStream">
    /// The stream containing icc cmyk profile.
    /// </param>
    /// <param name="rgbIccStream">
    /// The stream containing icc rgb profile.
    /// </param>
    /// <returns>
    /// The <see cref="Color"/>.
    /// </returns>
    static Color ToColorIcc(CmykColor cmykPixel, System::SharedPtr<System::IO::Stream> cmykIccStream, System::SharedPtr<System::IO::Stream> rgbIccStream);
    /// <summary>
    /// The to value.
    /// </summary>
    /// <returns>
    /// The <see cref="int64_t"/>.
    /// </returns>
    int64_t ToValue();
    
    CmykColor();
    
private:

    static CmykColor empty;
    static const int32_t COffset;
    static const int32_t MOffset;
    static const int32_t YOffset;
    static const int32_t KOffset;
    bool isNonEmptyColor;
    int64_t value;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    /// <summary>
    /// Initializes a new instance of the <see cref="CmykColor"/> struct.
    /// </summary>
    /// <param name="value">
    /// The value.
    /// </param>
    CmykColor(int64_t value);
    
    /// <summary>
    /// The is byte valid.
    /// </summary>
    /// <param name="value">
    /// The value.
    /// </param>
    /// <param name="name">
    /// The name.
    /// </param>
    static void IsByteValid(int32_t value, System::String name);
    /// <summary>
    /// Composes color components into inner CMYK color representation.
    /// </summary>
    /// <param name="c">
    /// The cyan value.
    /// </param>
    /// <param name="m">
    /// The magenta value.
    /// </param>
    /// <param name="y">
    /// The yellow value.
    /// </param>
    /// <param name="k">
    /// The black value.
    /// </param>
    /// <returns>
    /// The <see cref="int64_t"/>.
    /// </returns>
    static int64_t MakeCmyk(int32_t c, int32_t m, int32_t y, int32_t k);
    
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


