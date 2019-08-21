#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Presentation/Graphics/Core/RectangleF.h"
#include "Presentation/Graphics/Core/Point__.h"
#include "aspose_pdf_api_defs.h"


namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Stores a set of four integers that represent the location and size of a rectangle.
/// </summary>
class ASPOSE_PDF_SHARED_API Rectangle : public System::Object
{
    typedef Rectangle ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::Presentation::Graphics::RectangleF;
    friend ASPOSE_PDF_SHARED_API bool operator ==(Rectangle const &left, Rectangle const &right);
    friend ASPOSE_PDF_SHARED_API bool operator !=(Rectangle const &left, Rectangle const &right);
    
public:

    /// <summary>
    /// Gets a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure that has <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::X"/>, <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Y"/>, <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Width"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Height"/> values set to zero.
    /// </summary>
    static Rectangle get_Empty();
    /// <summary>
    /// Gets the coordinates of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> that represents the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</value>
    Point get_Location();
    /// <summary>
    /// Sets the coordinates of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> that represents the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</value>
    void set_Location(Point value);
    /// <summary>
    /// Gets the size of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/>.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> that represents the width and height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</value>
    Aspose::Pdf::Engine::Presentation::Graphics::Size get_Size();
    /// <summary>
    /// Sets the size of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/>.
    /// </summary>
    /// <value>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> that represents the width and height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</value>
    void set_Size(Aspose::Pdf::Engine::Presentation::Graphics::Size value);
    /// <summary>
    /// Gets the x-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>The x-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</value>
    int32_t get_X();
    /// <summary>
    /// Sets the x-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>The x-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</value>
    void set_X(int32_t value);
    /// <summary>
    /// Gets the y-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>The y-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</value>
    int32_t get_Y();
    /// <summary>
    /// Sets the y-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>The y-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</value>
    void set_Y(int32_t value);
    /// <summary>
    /// Gets the width of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <returns>The width of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</returns>
    int32_t get_Width();
    /// <summary>
    /// Sets the width of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <param name="value">The width of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</param>
    void set_Width(int32_t value);
    /// <summary>
    /// Gets the height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <returns>The height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</returns>
    int32_t get_Height();
    /// <summary>
    /// Sets the height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <param name="value">The height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</param>
    void set_Height(int32_t value);
    /// <summary>
    /// Gets the x-coordinate of the left edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>The x-coordinate of the left edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</value>
    int32_t get_Left();
    /// <summary>
    /// Sets the x-coordinate of the left edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>The x-coordinate of the left edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</value>
    void set_Left(int32_t value);
    /// <summary>
    /// Gets the y-coordinate of the top edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>
    /// The y-coordinate of the top edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </value>
    int32_t get_Top();
    /// <summary>
    /// Sets the y-coordinate of the top edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>
    /// The y-coordinate of the top edge of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </value>
    void set_Top(int32_t value);
    /// <summary>
    /// Gets the x-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Width"/> property values of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>
    /// The x-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Width"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/>.
    /// </value>
    int32_t get_Right();
    /// <summary>
    /// Sets the x-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Width"/> property values of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>
    /// The x-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::X"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Width"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/>.
    /// </value>
    void set_Right(int32_t value);
    /// <summary>
    /// Gets the y-coordinate that is the sum of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Y"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Height"/> property values of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>
    /// The y-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Y"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Height"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/>.
    /// </value>
    int32_t get_Bottom();
    /// <summary>
    /// Sets the y-coordinate that is the sum of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Y"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Height"/> property values of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <value>
    /// The y-coordinate that is the sum of <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Y"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Height"/> of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/>.
    /// </value>
    void set_Bottom(int32_t value);
    /// <summary>
    /// Gets a value indicating whether all numeric properties of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> have values of zero.
    /// </summary>
    /// <value>This property returns true if the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Width"/>, <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Height"/>, <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::X"/>, and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Y"/> properties of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> all have values of zero; otherwise, false.</value>
    bool get_IsEmpty();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure with the specified location and size.
    /// </summary>
    /// <param name="x">The x-coordinate of the upper-left corner of the rectangle.</param>
    /// <param name="y">The y-coordinate of the upper-left corner of the rectangle.</param>
    /// <param name="width">The width of the rectangle.</param>
    /// <param name="height">The height of the rectangle.</param>
    Rectangle(int32_t x, int32_t y, int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure with the specified location and size.
    /// </summary>
    /// <param name="location">A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> that represents the upper-left corner of the rectangular region.</param>
    /// <param name="size">A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> that represents the width and height of the rectangular region.</param>
    Rectangle(Point location, Aspose::Pdf::Engine::Presentation::Graphics::Size size);
    
    /// <summary>
    /// Creates a new <see cref="Rectangle"/> from two points specified. Two verticales of the created <see cref="Rectangle"/> will be equal to the passed <paramref name="point1"/> and <paramref name="point2"/>. These would be typically the opposite vertices.
    /// </summary>
    /// <param name="point1">The first <see cref="Point"/> for the new rectangle.</param>
    /// <param name="point2">The second <see cref="Point"/> for the new rectangle.</param>
    /// <returns>A newly created <see cref="Rectangle"/>.</returns>
    static Rectangle FromPoints(Point point1, Point point2);
    /// <summary>
    /// Converts the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure to a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure by rounding the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> values to the next higher integer values.
    /// </summary>
    /// <param name="value">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> structure to be converted.</param>
    /// <returns>Returns a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/>.</returns>
    static Rectangle Ceiling(RectangleF value);
    /// <summary>
    /// Converts the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> to a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> by truncating the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> values.
    /// </summary>
    /// <param name="value">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> to be converted.</param>
    /// <returns>A new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/>.</returns>
    static Rectangle Truncate(RectangleF value);
    /// <summary>
    /// Converts the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> to a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> by rounding the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> values to the nearest integer values.
    /// </summary>
    /// <param name="value">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::RectangleF"/> to be converted.</param>
    /// <returns>A new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/>.</returns>
    static Rectangle Round(RectangleF value);
    /// <summary>
    /// Creates and returns an inflated copy of the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure. The copy is inflated by the specified amount. The original <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure remains unmodified.
    /// </summary>
    /// <param name="rect">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> with which to start. This rectangle is not modified.</param>
    /// <param name="x">The amount to inflate this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> horizontally.</param>
    /// <param name="y">The amount to inflate this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> vertically.</param>
    /// <returns>The inflated <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/>.</returns>
    static Rectangle Inflate(Rectangle rect, int32_t x, int32_t y);
    /// <summary>
    /// Returns a third <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure that represents the intersection of two other <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structures. If there is no intersection, an empty <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> is returned.
    /// </summary>
    /// <param name="a">A first rectangle to intersect.</param>
    /// <param name="b">A second rectangle to intersect.</param>
    /// <returns>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> that represents the intersection of <paramref name="a"/> and <paramref name="b"/>.</returns>
    static Rectangle Intersect(Rectangle a, Rectangle b);
    /// <summary>
    /// Gets a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure that contains the union of two <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structures.
    /// </summary>
    /// <param name="a">A first rectangle to union.</param>
    /// <param name="b">A second rectangle to union.</param>
    /// <returns>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure that bounds the union of the two <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structures.</returns>
    static Rectangle Union(Rectangle a, Rectangle b);
    /// <summary>
    /// Creates a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure with the specified edge locations.
    /// </summary>
    /// <param name="left">The x-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</param>
    /// <param name="top">The y-coordinate of the upper-left corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</param>
    /// <param name="right">The x-coordinate of the lower-right corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</param>
    /// <param name="bottom">The y-coordinate of the lower-right corner of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</param>
    /// <returns>The new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> that this method creates.</returns>
    static Rectangle FromLeftTopRightBottom(int32_t left, int32_t top, int32_t right, int32_t bottom);
    /// <summary>
    /// Determines if the specified point is contained within this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <param name="x">The x-coordinate of the point to test.</param>
    /// <param name="y">The y-coordinate of the point to test.</param>
    /// <returns>This method returns true if the point defined by <paramref name="x"/> and <paramref name="y"/> is contained within this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure; otherwise false.</returns>
    bool Contains(int32_t x, int32_t y);
    /// <summary>
    /// Determines if the specified point is contained within this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> to test.</param>
    /// <returns>This method returns true if the point represented by <paramref name="point"/> is contained within this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure; otherwise false.</returns>
    bool Contains(Point point);
    /// <summary>
    /// Determines if the rectangular region represented by <paramref name="rect"/> is entirely contained within this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <param name="rect">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> to test.</param>
    /// <returns>This method returns true if the rectangular region represented by <paramref name="rect"/> is entirely contained within this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure; otherwise false.</returns>
    bool Contains(Rectangle rect);
    /// <summary>
    /// Inflates this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> by the specified amount.
    /// </summary>
    /// <param name="width">The amount to inflate this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> horizontally.</param>
    /// <param name="height">The amount to inflate this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> vertically.</param>
    void Inflate(int32_t width, int32_t height);
    /// <summary>
    /// Inflates this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> by the specified amount.
    /// </summary>
    /// <param name="size">The amount to inflate this rectangle.</param>
    void Inflate(Aspose::Pdf::Engine::Presentation::Graphics::Size size);
    /// <summary>
    /// Replaces this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> with the intersection of itself and the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/>.
    /// </summary>
    /// <param name="rect">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> with which to intersect.</param>
    void Intersect(Rectangle rect);
    /// <summary>
    /// Determines if this rectangle intersects with <paramref name="rect"/>.
    /// </summary>
    /// <param name="rect">The rectangle to test.</param>
    /// <returns>This method returns true if there is any intersection, otherwise false.</returns>
    bool IntersectsWith(Rectangle rect);
    /// <summary>
    /// Adjusts the location of this rectangle by the specified amount.
    /// </summary>
    /// <param name="pos">Amount to offset the location.</param>
    void Offset(Point pos);
    /// <summary>
    /// Adjusts the location of this rectangle by the specified amount.
    /// </summary>
    /// <param name="x">The horizontal offset.</param>
    /// <param name="y">The vertical offset.</param>
    void Offset(int32_t x, int32_t y);
    /// <summary>
    /// Normalizes the rectangle by making it's width and height positive, left less than right and top less than bottom.
    /// </summary>
    void Normalize();
    /// <summary>
    /// Tests whether <paramref name="obj"/> is a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure with the same location and size of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <param name="obj">The <see cref="System::Object"/> to test.</param>
    /// <returns>This method returns true if <paramref name="obj"/> is a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure and its <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::X"/>, <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Y"/>, <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Width"/>, and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle::Height"/> properties are equal to the corresponding properties of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure; otherwise, false.</returns>
    bool Equals(Rectangle const &rectangle) const;
    /// <summary>
    /// Returns the hash code for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.
    /// </summary>
    /// <returns>An integer that represents the hash code for this rectangle.</returns>
    virtual int32_t GetHashCode() const;
    /// <summary>
    /// Converts the attributes of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> to a human-readable string.
    /// </summary>
    /// <returns>A string that contains the position, width, and height of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Rectangle"/> structure.</returns>
    virtual System::String ToString() const;
    
    Rectangle();
    
protected:

    static System::String RectangleFormat;
    
    /// <summary>
    /// Gets a value indicating whether this <see cref="Rectangle"/> is at least partially visible
    /// </summary>
    /// <value>
    ///   <c>true</c> if this <see cref="Rectangle"/> is at least partially visible; otherwise, <c>false</c>.
    /// </value>
    bool get_IsVisible();
    
private:

    static Rectangle empty;
    int32_t height;
    int32_t width;
    int32_t x;
    int32_t y;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

ASPOSE_PDF_SHARED_API bool operator ==(Rectangle const &left, Rectangle const &right);
ASPOSE_PDF_SHARED_API bool operator !=(Rectangle const &left, Rectangle const &right);

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


