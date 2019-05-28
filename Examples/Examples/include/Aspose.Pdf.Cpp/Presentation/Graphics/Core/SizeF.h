#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { class PointF; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { class Size; } } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Stores an ordered pair of floating-point numbers, typically the width and height of a rectangle.
/// </summary>
class ASPOSE_PDF_SHARED_API SizeF : public System::Object
{
    typedef SizeF ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend ASPOSE_PDF_SHARED_API SizeF operator +(SizeF size1, SizeF size2);
    friend ASPOSE_PDF_SHARED_API SizeF operator -(SizeF size1, SizeF size2);
    friend ASPOSE_PDF_SHARED_API bool operator ==(SizeF const &size1, SizeF const &size2);
    friend ASPOSE_PDF_SHARED_API bool operator !=(SizeF const &size1, SizeF const &size2);
    
public:

    /// <summary>
    /// Gets a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure that has <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF::Width"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF::Height"/> values set to zero.
    /// </summary>
    static SizeF get_Empty();
    /// <summary>
    /// Gets a value indicating whether this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> has zero width and height.
    /// </summary>
    /// <returns>This property returns true when this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> has both a width and height of zero; otherwise, false.</returns>
    bool get_IsEmpty();
    /// <summary>
    /// Gets or sets the horizontal component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.
    /// </summary>
    /// <returns>The horizontal component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>, typically measured in pixels.</returns>
    float get_Width() const;
    /// <summary>
    /// Gets or sets the horizontal component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.
    /// </summary>
    /// <returns>The horizontal component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>, typically measured in pixels.</returns>
    void set_Width(float value);
    /// <summary>
    /// Gets or sets the vertical component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.
    /// </summary>
    /// <returns>The vertical component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>, typically measured in pixels.</returns>
    float get_Height() const;
    /// <summary>
    /// Gets or sets the vertical component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.
    /// </summary>
    /// <returns>The vertical component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>, typically measured in pixels.</returns>
    void set_Height(float value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure from the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.
    /// </summary>
    /// <param name="size">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> from which to create the new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.</param>
    SizeF(SizeF const &size);
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure from the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/>.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> from which to initialize this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.</param>
    SizeF(PointF point);
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure from the specified dimensions.
    /// </summary>
    /// <param name="width">The width component of the new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.</param>
    /// <param name="height">The height component of the new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.</param>
    SizeF(float width, float height);
    
    static PointF to_PointF(SizeF size);
    
    /// <summary>
    /// Adds the width and height of one <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure to the width and height of another <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure.
    /// </summary>
    /// <param name="size1">The first <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> to add.</param>
    /// <param name="size2">The second <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> to add.</param>
    /// <returns>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure that is the result of the addition operation.</returns>
    static SizeF Add(SizeF size1, SizeF size2);
    /// <summary>
    /// Subtracts the width and height of one <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure from the width and height of another <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure.
    /// </summary>
    /// <param name="size1">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure on the left side of the subtraction operator.</param>
    /// <param name="size2">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure on the right side of the subtraction operator.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> that is a result of the subtraction operation.</returns>
    static SizeF Subtract(SizeF size1, SizeF size2);
    /// <summary>
    /// Converts a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> to a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/>.
    /// </summary>
    /// <returns>Returns a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> structure.</returns>
    PointF ToPointF();
    /// <summary>
    /// Converts a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> to a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure with truncated size values.
    /// </summary>
    /// <returns>Returns a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure.</returns>
    Size ToSize();
    /// <summary>
    /// Returns a hash code for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure.
    /// </summary>
    /// <returns>An integer value that specifies a hash value for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure.</returns>
    virtual int32_t GetHashCode() const;
    /// <summary>
    /// Creates a human-readable string that represents this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.
    /// </summary>
    /// <returns>A string that represents this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.</returns>
    virtual System::String ToString() const;
    
    SizeF();
    
private:

    static SizeF empty;
    float width;
    float height;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

ASPOSE_PDF_SHARED_API SizeF operator +(SizeF size1, SizeF size2);
ASPOSE_PDF_SHARED_API SizeF operator -(SizeF size1, SizeF size2);
ASPOSE_PDF_SHARED_API bool operator ==(SizeF const &size1, SizeF const &size2);
ASPOSE_PDF_SHARED_API bool operator !=(SizeF const &size1, SizeF const &size2);

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


