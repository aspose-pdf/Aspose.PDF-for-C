#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Presentation/Graphics/Core/Size.h"
#include "Presentation/Graphics/Core/PointF.h"
#include "aspose_pdf_api_defs.h"


namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Represents an ordered pair of integer x- and y-coordinates that defines a point in a two-dimensional plane.
/// </summary>
class ASPOSE_PDF_SHARED_API Point : public System::Object
{
    typedef Point ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::Presentation::Graphics::PointF;
    friend ASPOSE_PDF_SHARED_API Point operator +(Point point, Size size);
    friend ASPOSE_PDF_SHARED_API Point operator -(Point point, Size size);
    friend ASPOSE_PDF_SHARED_API bool operator ==(Point const &point1, Point const &point2);
    friend ASPOSE_PDF_SHARED_API bool operator !=(Point const &point1, Point const &point2);
    
public:

    /// <summary>
    /// Gets a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> structure that has <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point::Y"/> values set to zero.
    /// </summary>
    static Point get_Empty();
    /// <summary>
    /// Gets a value indicating whether this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> is empty.
    /// </summary>
    /// <returns>True if both <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point::Y"/> are 0; otherwise, false.</returns>
    bool get_IsEmpty();
    /// <summary>
    /// Gets or sets the x-coordinate of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/>.
    /// </summary>
    int32_t get_X();
    /// <summary>
    /// Gets or sets the x-coordinate of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/>.
    /// </summary>
    void set_X(int32_t value);
    /// <summary>
    /// Gets or sets the y-coordinate of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/>.
    /// </summary>
    int32_t get_Y();
    /// <summary>
    /// Gets or sets the y-coordinate of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/>.
    /// </summary>
    void set_Y(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> structure with the specified coordinates.
    /// </summary>
    /// <param name="x">The horizontal position of the point.</param>
    /// <param name="y">The vertical position of the point.</param>
    Point(int32_t x, int32_t y);
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> structure from the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure.
    /// </summary>
    /// <param name="size">Contains the new point coordinates.</param>
    Point(Size size);
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> structure using coordinates specified by an integer value.
    /// </summary>
    /// <param name="dw">A 32-bit integer that specifies the coordinates for the new point.</param>
    Point(int32_t dw);
    
    /// <summary>
    /// Adds the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> to the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/>.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> to add to.</param>
    /// <param name="size">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> to add to the <paramref name="point"/>.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> that is the result of the addition operation.</returns>
    static Point Add(Point point, Size size);
    /// <summary>
    /// Returns the result of subtracting specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> from the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/>.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> to be subtracted from.</param>
    /// <param name="size">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> to subtract from the <paramref name="point"/>.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> that is the result of the subtraction operation.</returns>
    static Point Subtract(Point point, Size size);
    /// <summary>
    /// Converts the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> by rounding the values of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to the next higher integer values.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to convert.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> this method converts to.</returns>
    static Point Ceiling(PointF point);
    /// <summary>
    /// Converts the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> object by rounding the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> values to the nearest integer.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to convert.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> this method converts to.</returns>
    static Point Round(PointF point);
    /// <summary>
    /// Converts the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> by truncating the values of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/>.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to convert.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> this method converts to.</returns>
    static Point Truncate(PointF point);
    
    static Size to_Size(Point point);
    static PointF to_PointF(Point point);
    
    /// <summary>
    /// Translates this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> by the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/>.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> used to offset this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/>.</param>
    void Offset(Point point);
    /// <summary>
    /// Translates this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> by the specified amount.
    /// </summary>
    /// <param name="dx">The amount to offset the x-coordinate.</param>
    /// <param name="dy">The amount to offset the y-coordinate.</param>
    void Offset(int32_t dx, int32_t dy);
    /// <summary>
    /// Returns a hash code for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/>.
    /// </summary>
    /// <returns>A hash code for this instance, suitable for use in hashing algorithms and data structures like a hash table.</returns>
    virtual int32_t GetHashCode() const;
    /// <summary>
    /// Converts this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> to a human-readable string.
    /// </summary>
    /// <returns>A <see cref="System::String"/> that represents this instance.</returns>
    virtual System::String ToString() const;
    
    Point();
    
protected:

    static System::String PointFormat;
    
private:

    static Point empty;
    int32_t x;
    int32_t y;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
    /// <summary>
    /// Extracts the 2 low bytes from the passed 4 bytes integer.
    /// </summary>
    /// <param name="n">The integer to extract low bytes from.</param>
    /// <returns>The 2 low bytes extracted.</returns>
    static int32_t LoWord(int32_t n);
    /// <summary>
    /// Extracts the 2 high bytes from the passed 4 bytes integer.
    /// </summary>
    /// <param name="n">The integer to extract high bytes from.</param>
    /// <returns>The 2 high bytes extracted and shifted to lower bound.</returns>
    static int32_t HiWord(int32_t n);
    
};

ASPOSE_PDF_SHARED_API Point operator +(Point point, Size size);
ASPOSE_PDF_SHARED_API Point operator -(Point point, Size size);
ASPOSE_PDF_SHARED_API bool operator ==(Point const &point1, Point const &point2);
ASPOSE_PDF_SHARED_API bool operator !=(Point const &point1, Point const &point2);

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


