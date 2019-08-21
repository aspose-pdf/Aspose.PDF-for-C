#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Presentation/Graphics/Core/SizeF.h"
#include "Presentation/Graphics/Core/Size.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Represents an ordered pair of floating-point x- and y-coordinates that defines a point in a two-dimensional plane.
/// </summary>
class ASPOSE_PDF_SHARED_API PointF : public System::Object
{
    typedef PointF ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend ASPOSE_PDF_SHARED_API PointF operator +(PointF point, Size size);
    friend ASPOSE_PDF_SHARED_API PointF operator -(PointF point, Size size);
    friend ASPOSE_PDF_SHARED_API PointF operator +(PointF point, SizeF size);
    friend ASPOSE_PDF_SHARED_API PointF operator -(PointF point, SizeF size);
    friend ASPOSE_PDF_SHARED_API bool operator ==(PointF const &point1, PointF const &point2);
    friend ASPOSE_PDF_SHARED_API bool operator !=(PointF const &point1, PointF const &point2);
    
public:

    /// <summary>
    /// Gets a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> structure that has <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF::Y"/> values set to zero.
    /// </summary>
    static PointF get_Empty();
    /// <summary>
    /// Gets a value indicating whether this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> is empty.
    /// </summary>
    /// <value>True if both <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF::Y"/> are 0; otherwise, false.</value>
    bool get_IsEmpty();
    /// <summary>
    /// Gets or sets the x-coordinate of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/>.
    /// </summary>
    float get_X();
    /// <summary>
    /// Gets or sets the x-coordinate of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/>.
    /// </summary>
    void set_X(float value);
    /// <summary>
    /// Gets or sets the y-coordinate of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/>.
    /// </summary>
    float get_Y();
    /// <summary>
    /// Gets or sets the y-coordinate of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/>.
    /// </summary>
    void set_Y(float value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> structure with the specified coordinates.
    /// </summary>
    /// <param name="x">The horizontal position of the point.</param>
    /// <param name="y">The vertical position of the point.</param>
    PointF(float x, float y);
    
    /// <summary>
    /// Translates a given <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> by the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/>.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to translate.</param>
    /// <param name="size">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> that specifies the numbers to add to the coordinates of <paramref name="point"/>.</param>
    /// <returns>The translated <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/>.</returns>
    static PointF Add(PointF point, Size size);
    /// <summary>
    /// Translates a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> by the negative of a specified size.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to translate.</param>
    /// <param name="size">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> that specifies the numbers to subtract from the coordinates of <paramref name="point"/>.</param>
    /// <returns>The translated <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/>.</returns>
    static PointF Subtract(PointF point, Size size);
    /// <summary>
    /// Translates a given <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> by a specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/>.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to translate.</param>
    /// <param name="size">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> that specifies the numbers to add to the coordinates of <paramref name="point"/>.</param>
    /// <returns>The translated <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/>.</returns>
    static PointF Add(PointF point, SizeF size);
    /// <summary>
    /// Translates a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> by the negative of a specified size.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to translate.</param>
    /// <param name="size">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> that specifies the numbers to subtract from the coordinates of <paramref name="point"/>.</param>
    /// <returns>The translated <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/>.</returns>
    static PointF Subtract(PointF point, SizeF size);
    /// <summary>
    /// Returns a hash code for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> structure.
    /// </summary>
    /// <returns>An integer value that specifies a hash value for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> structure.</returns>
    virtual int32_t GetHashCode() const;
    /// <summary>
    /// Converts this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to a human readable string.
    /// </summary>
    /// <returns>A string that represents this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/>.</returns>
    virtual System::String ToString() const;
    
    PointF();
    
private:

    static PointF empty;
    float x;
    float y;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

ASPOSE_PDF_SHARED_API PointF operator +(PointF point, Size size);
ASPOSE_PDF_SHARED_API PointF operator -(PointF point, Size size);
ASPOSE_PDF_SHARED_API PointF operator +(PointF point, SizeF size);
ASPOSE_PDF_SHARED_API PointF operator -(PointF point, SizeF size);
ASPOSE_PDF_SHARED_API bool operator ==(PointF const &point1, PointF const &point2);
ASPOSE_PDF_SHARED_API bool operator !=(PointF const &point1, PointF const &point2);

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


