#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Presentation/Graphics/Core/Interfaces/IColorPalette.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// The pasd color palette
/// </summary>
class ASPOSE_PDF_SHARED_API IPsdColorPalette : public Aspose::Pdf::Engine::Presentation::Graphics::IColorPalette
{
    typedef IPsdColorPalette ThisType;
    typedef Aspose::Pdf::Engine::Presentation::Graphics::IColorPalette BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the index of the transparent color.
    /// </summary>
    /// <value>The index of the transparent color.</value>
    virtual int16_t get_TransparentIndex() = 0;
    /// <summary>
    /// Gets a value indicating whether transparent color exists.
    /// </summary>
    /// <value>
    /// <c>true</c> if transparent color exists; otherwise, <c>false</c>.
    /// </value>
    virtual bool get_HasTransparentColor() = 0;
    /// <summary>
    /// Gets the transparent color.
    /// </summary>
    /// <value>The transparent color.</value>
    virtual Color get_TransparentColor() = 0;
    /// <summary>
    /// Gets the raw color palette entries data.
    /// </summary>
    /// <value>The raw color palette entries data.</value>
    virtual System::ArrayPtr<uint8_t> get_RawEntries() = 0;
    /// <summary>
    /// Gets the raw color palette entries count.
    /// </summary>
    /// <value>The raw color palette entries count.</value>
    virtual int32_t get_RawEntriesCount() = 0;
    
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


