#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "Presentation/Graphics/Core/PointF.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { class Rectangle; } } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Stores a set of four floating-point numbers that represent the location and size of a rectangle.
/// </summary>
class ASPOSE_PDF_SHARED_API RectangleF : public System::Object
{
    typedef RectangleF ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend ASPOSE_PDF_SHARED_API bool operator ==(RectangleF const &left, RectangleF const &right);
    friend ASPOSE_PDF_SHARED_API bool operator !=(RectangleF const &left, RectangleF const &right);
    
public:

    /// <summary>
    /// Gets a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure that has <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::X"/>, <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Y"/>, <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Width"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Height"/> values set to zero.
    /// </summary>
    static RectangleF get_Empty();
    /// <summary>
    /// Gets or sets the coordinates of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> that represents the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    PointF get_Location();
    /// <summary>
    /// Gets or sets the coordinates of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> that represents the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    void set_Location(PointF value);
    /// <summary>
    /// Gets or sets the size of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/>.
    /// </summary>
    /// <returns>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> that represents the width and height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    SizeF get_Size();
    /// <summary>
    /// Gets or sets the size of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/>.
    /// </summary>
    /// <returns>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> that represents the width and height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    void set_Size(SizeF value);
    /// <summary>
    /// Gets or sets the x-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The x-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    float get_X();
    /// <summary>
    /// Gets or sets the x-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The x-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    void set_X(float value);
    /// <summary>
    /// Gets or sets the y-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The y-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    float get_Y();
    /// <summary>
    /// Gets or sets the y-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The y-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    void set_Y(float value);
    /// <summary>
    /// Gets or sets the width of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The width of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    float get_Width();
    /// <summary>
    /// Gets or sets the width of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The width of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    void set_Width(float value);
    /// <summary>
    /// Gets or sets the height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    float get_Height();
    /// <summary>
    /// Gets or sets the height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    void set_Height(float value);
    /// <summary>
    /// Gets or sets the x-coordinate of the left edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The x-coordinate of the left edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    float get_Left();
    /// <summary>
    /// Gets or sets the x-coordinate of the left edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The x-coordinate of the left edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    void set_Left(float value);
    /// <summary>
    /// Gets or sets the y-coordinate of the top edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The y-coordinate of the top edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    float get_Top();
    /// <summary>
    /// Gets or sets the y-coordinate of the top edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The y-coordinate of the top edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    void set_Top(float value);
    /// <summary>
    /// Gets or sets the x-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Width"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The x-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Width"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    float get_Right();
    /// <summary>
    /// Gets or sets the x-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Width"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The x-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Width"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    void set_Right(float value);
    /// <summary>
    /// Gets or sets the y-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Y"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Height"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The y-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Y"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Height"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    float get_Bottom();
    /// <summary>
    /// Gets or sets the y-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Y"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Height"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The y-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Y"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Height"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    void set_Bottom(float value);
    /// <summary>
    /// Gets a value indicating whether the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Width"/> or <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Height"/> property of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> has a value of zero.
    /// </summary>
    /// <returns>This property returns true if the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Width"/> or <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF::Height"/> property of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> has a value of zero; otherwise, false.</returns>
    bool get_IsEmpty();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure with the specified location and size.
    /// </summary>
    /// <param name="x">The x-coordinate of the upper-left corner of the rectangle.</param>
    /// <param name="y">The y-coordinate of the upper-left corner of the rectangle.</param>
    /// <param name="width">The width of the rectangle.</param>
    /// <param name="height">The height of the rectangle.</param>
    RectangleF(float x, float y, float width, float height);
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure with the specified location and size.
    /// </summary>
    /// <param name="location">A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> that represents the upper-left corner of the rectangular region.</param>
    /// <param name="size">A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> that represents the width and height of the rectangular region.</param>
    RectangleF(PointF location, SizeF size);
    
    /// <summary>
    /// Creates a new <see cref="Rectangle"/> from two points specified. Two verticles of the created <see cref="Rectangle"/> will be equal to the passed <paramref name="point1"/> and <paramref name="point2"/>. These would be typically the opposite vertices.
    /// </summary>
    /// <param name="point1">The first <see cref="Point"/> for the new rectangle.</param>
    /// <param name="point2">The second <see cref="Point"/> for the new rectangle.</param>
    /// <returns>A newly created <see cref="Rectangle"/>.</returns>
    static RectangleF FromPoints(PointF point1, PointF point2);
    /// <summary>
    /// Creates and returns an inflated copy of the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure. The copy is inflated by the specified amount. The original rectangle remains unmodified.
    /// </summary>
    /// <param name="rect">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> to be copied. This rectangle is not modified.</param>
    /// <param name="x">The amount to inflate the copy of the rectangle horizontally.</param>
    /// <param name="y">The amount to inflate the copy of the rectangle vertically.</param>
    /// <returns>The inflated <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/>.</returns>
    static RectangleF Inflate(RectangleF rect, float x, float y);
    /// <summary>
    /// Returns a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure that represents the intersection of two rectangles. If there is no intersection, and empty <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> is returned.
    /// </summary>
    /// <param name="a">A first rectangle to intersect.</param>
    /// <param name="b">A second rectangle to intersect.</param>
    /// <returns>A third <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure the size of which represents the overlapped area of the two specified rectangles.</returns>
    static RectangleF Intersect(RectangleF a, RectangleF b);
    /// <summary>
    /// Creates the smallest possible third rectangle that can contain both of two rectangles that form a union.
    /// </summary>
    /// <param name="a">A first rectangle to union.</param>
    /// <param name="b">A second rectangle to union.</param>
    /// <returns>A third <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure that contains both of the two rectangles that form the union.</returns>
    static RectangleF Union(RectangleF a, RectangleF b);
    
    static RectangleF to_RectangleF(Rectangle rect);
    
    /// <summary>
    /// Creates a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure with upper-left corner and lower-right corner at the specified locations.
    /// </summary>
    /// <param name="left">The x-coordinate of the upper-left corner of the rectangular region.</param>
    /// <param name="top">The y-coordinate of the upper-left corner of the rectangular region.</param>
    /// <param name="right">The x-coordinate of the lower-right corner of the rectangular region.</param>
    /// <param name="bottom">The y-coordinate of the lower-right corner of the rectangular region.</param>
    /// <returns>The new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> that this method creates.</returns>
    static RectangleF FromLeftTopRightBottom(float left, float top, float right, float bottom);
    /// <summary>
    /// Normalizes the rectangle by making it's width and height positive, left less than right and top less than bottom.
    /// </summary>
    void Normalize();
    /// <summary>
    /// Determines if the specified point is contained within this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <param name="x">The x-coordinate of the point to test.</param>
    /// <param name="y">The y-coordinate of the point to test.</param>
    /// <returns>This method returns true if the point defined by <paramref name="x"/> and <paramref name="y"/> is contained within this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure; otherwise false.</returns>
    bool Contains(float x, float y);
    /// <summary>
    /// Determines if the specified point is contained within this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::PointF"/> to test.</param>
    /// <returns>This method returns true if the point represented by the <paramref name="point"/> parameter is contained within this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure; otherwise false.</returns>
    bool Contains(PointF point);
    /// <summary>
    /// Determines if the rectangular region represented by <paramref name="rect"/> is entirely contained within this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <param name="rect">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> to test.</param>
    /// <returns>This method returns true if the rectangular region represented by <paramref name="rect"/> is entirely contained within the rectangular region represented by this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/>; otherwise false.</returns>
    bool Contains(RectangleF rect);
    /// <summary>
    /// Inflates this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure by the specified amount.
    /// </summary>
    /// <param name="x">The amount to inflate this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure horizontally.</param>
    /// <param name="y">The amount to inflate this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure vertically.</param>
    void Inflate(float x, float y);
    /// <summary>
    /// Inflates this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> by the specified amount.
    /// </summary>
    /// <param name="size">The amount to inflate this rectangle.</param>
    void Inflate(SizeF size);
    /// <summary>
    /// Replaces this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure with the intersection of itself and the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <param name="rect">The rectangle to intersect.</param>
    void Intersect(RectangleF rect);
    /// <summary>
    /// Determines if this rectangle intersects with <paramref name="rect"/>.
    /// </summary>
    /// <param name="rect">The rectangle to test.</param>
    /// <returns>This method returns true if there is any intersection.</returns>
    bool IntersectsWith(RectangleF rect);
    /// <summary>
    /// Adjusts the location of this rectangle by the specified amount.
    /// </summary>
    /// <param name="pos">The amount to offset the location.</param>
    void Offset(PointF pos);
    /// <summary>
    /// Adjusts the location of this rectangle by the specified amount.
    /// </summary>
    /// <param name="x">The amount to offset the location horizontally.</param>
    /// <param name="y">The amount to offset the location vertically.</param>
    void Offset(float x, float y);
    /// <summary>
    /// Gets the hash code for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.
    /// </summary>
    /// <returns>The hash code for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/>.</returns>
    virtual int32_t GetHashCode() const;
    /// <summary>
    /// Converts the attributes of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> to a human-readable string.
    /// </summary>
    /// <returns>A string that contains the position, width, and height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure.</returns>
    virtual System::String ToString() const;
    
    RectangleF();
    
private:

    static RectangleF empty;
    float height;
    float width;
    float x;
    float y;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

ASPOSE_PDF_SHARED_API bool operator ==(RectangleF const &left, RectangleF const &right);
ASPOSE_PDF_SHARED_API bool operator !=(RectangleF const &left, RectangleF const &right);

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


