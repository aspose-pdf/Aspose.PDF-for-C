#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
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
/// The color palette interface.
/// </summary>
class ASPOSE_PDF_SHARED_API IColorPalette : public System::Object
{
    typedef IColorPalette ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the entries count.
    /// </summary>
    /// <value>The entries count.</value>
    virtual int32_t get_EntriesCount() = 0;
    /// <summary>
    /// Gets an array of 32-bit ARGB structures.
    /// </summary>
    /// <value>The 32-bit ARGB entries.</value>
    /// <returns>
    /// The array of 32-bit ARGB structure that make up this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::ColorPalette"/>.
    /// </returns>
    virtual System::ArrayPtr<int32_t> get_Argb32Entries() = 0;
    /// <summary>
    /// Gets an array of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structures.
    /// </summary>
    /// <value>The entries.</value>
    /// <returns>
    /// The array of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Color"/> structure that make up this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::ColorPalette"/>.
    /// </returns>
    virtual System::ArrayPtr<Color> get_Entries() = 0;
    /// <summary>
    /// Gets a value indicating whether compact palette is used.
    /// </summary>
    /// <value><c>true</c> if compact palette is used; otherwise, <c>false</c>.</value>
    /// <remarks>Compact palette means that image will contain only the specified palette entries if possible or in other words the image will be more compact and occupy less space;
    /// otherwise there will be 2^BitsPerPixel entries and image will reserve more space for all possible palette entries.
    /// Setting this value to true and changing palette entries may cause performance penalty since data movement may occur so use it carefully.</remarks>
    virtual bool get_IsCompactPalette() = 0;
    
    /// <summary>
    /// Gets the index of the nearest 32-bit ARGB color.
    /// </summary>
    /// <param name="argb32Color">The 32-bit ARGB color.</param>
    /// <returns>The index of the nearest color.</returns>
    virtual int32_t GetNearestColorIndex(int32_t argb32Color) = 0;
    /// <summary>
    /// Gets the index of the nearest color.
    /// </summary>
    /// <param name="color">The color.</param>
    /// <returns>The index of the nearest color.</returns>
    virtual int32_t GetNearestColorIndex(Color color) = 0;
    /// <summary>
    /// Gets the 32-bit ARGB palette color by index.
    /// </summary>
    /// <param name="index">The 32-bit ARGB palette color index.</param>
    /// <returns>The color palette entry specified by the <paramref name="index"/>.</returns>
    /// <exception cref="ArgumentOutOfRangeException"> if color palette <paramref name="index"/> specified is out of the palette entries range.</exception>
    virtual int32_t GetArgb32Color(int32_t index) = 0;
    /// <summary>
    /// Gets the palette color by index.
    /// </summary>
    /// <param name="index">The palette color index.</param>
    /// <returns>The color palette entry specified by the <paramref name="index"/>.</returns>
    /// <exception cref="ArgumentOutOfRangeException"> if color palette <paramref name="index"/> specified is out of the palette entries range.</exception>
    virtual Color GetColor(int32_t index) = 0;
    
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


