/// @file drawing/rectangle.h
#ifndef _aspose_system_drawing_rectangle_h_
#define _aspose_system_drawing_rectangle_h_

#include "fwd.h"
#include <system/object.h>
#include <system/windows/forms/screen.h>
#include <system/string.h>
#include <system/boxed_value.h>
#include "drawing/size.h"
#include "drawing/point.h"

namespace System { namespace Drawing {

    class RectangleF;
    /// Represents a rectangular area of an image defined as integer X and Y coordinates of its upper left corner and its width and height.
    /// This type should be allocated on stack and passed to functions by value or by reference.
    /// Never use System::SmartPtr class to manage objects of this type.
    class ASPOSECPP_SHARED_CLASS Rectangle
    {
    private:
        friend class RectangleF;

        RTTI_INFO_VALUE_TYPE(Rectangle)

        public:
            /// Constructs a new instance of Rectangle object that represents a rectangle with X and Y coordinates and width and hegiht values set to 0.
            ASPOSECPP_SHARED_API Rectangle();
            /// Constructs a new instance of Rectangle object that represents a rectangle with the specified coordinates of its upper left corner and width and height.
            /// @param x A value of the X coordinate of the upper left corner of the rectangle
            /// @param y A value of the Y coordinate of the upper left corner of the rectangle
            /// @param width The width of the rectangle
            /// @param height The height of the rectangle
            ASPOSECPP_SHARED_API Rectangle(int x, int y, int width, int height);
            /// Constructs a new instance of Rectangle object that represents a rectangle with the coordinates of its upper left corner specified as an instance of 
            /// Point class and its width and height as an instance of Size class.
            /// @param location Specifies the location of the upper left corner of the rectangle
            /// @param size Specifies the width and hegiht of the rectangle
            ASPOSECPP_SHARED_API Rectangle(const Point & location, const Size & size);
            /// Constructs a new instance of Rectangle object that represents the rectangle equivalent to the specified one.
            /// @param rect An instance of System::Windows::Forms::Screen::Rectangle_ class that specifies the position and size of 
            /// the rectangle to be represented by the object being constructed
            ASPOSECPP_SHARED_API Rectangle(const System::Windows::Forms::Screen::Rectangle_ & rect);

            /// Constructs a new Rectangle object that represents a rectangle with the specified edge locations.
            /// @param left The X coordinate of the left edge of the rectangle
            /// @param top The Y coordinate of the top edge of the rectangle
            /// @param right The X coordinate of the right edge of the rectangle
            /// @param bottom The Y coordinate of the bottom edge of the rectangle
            /// @returns An instance of Rectangle class that represents the speified rectangle
            inline static Rectangle FromLTRB(int left, int top, int right, int bottom) { return Rectangle(left, top, right - left, bottom - top); }

            /// Returns an instance of the Point class that specifies the location of the upper left corner of the rectangle represented
            /// by the current object.
            inline Point get_Location() const { return Point(m_x, m_y); }
            /// Sets the location of the upper left corner of the rectangle represented by the current object.
            /// @param value The value to set
            inline void set_Location(Point value) { m_x = value.get_X(); m_y = value.get_Y(); }

            /// Returns an instance of the Size class that specifies the width and height of the rectangle represented
            /// by the current object.
            inline Size get_Size() const { return Size(m_width, m_height); }
            /// Sets the width and height of the rectangle represented by the current object.
            /// @param value An instance of Size class specifying the width and height values to set
            inline void set_Size(Size value) { m_width = value.get_Width(); m_height = value.get_Height(); }

            /// Returns the X coordinate of the upper left corner of the rectangle represented by the current object.
            inline int get_X() const { return m_x; }
            /// Sets the X coordinate of the upper left corner of the rectangle represented by the current object.
            /// @param value The value to set
            inline void set_X(int value) { m_x = value; }

            /// Returns the Y coordinate of the upper left corner of the rectangle represented by the current object.
            inline int get_Y() const { return m_y; }
            /// Sets the Y coordinate of the upper left corner of the rectangle represented by the current object.
            /// @param value The value to set
            inline void set_Y(int value) { m_y = value; }

            /// Returns the width of the rectangle represented by the current object.
            inline int get_Width() const { return m_width; }
            /// Sets the width of the rectangle represented by the current object.
            /// @param value The value to set
            inline void set_Width(int value) { m_width = value; }

            /// Returns the height of the rectangle represented by the current object.
            inline int get_Height() const { return m_height; }
            /// Sets the height of the rectangle represented by the current object.
            /// @param value The value to set
            inline void set_Height(int value) { m_height = value; }

            /// Returns the X coordinate of the left edge of the rectangle represented by the current object.
            inline int get_Left() const { return m_x; }
            /// Returns the Y coordinate of the top edge of the rectangle represented by the current object.
            inline int get_Top() const { return m_y; }
            /// Returns the X coordinate of the right edge of the rectangle represented by the current object.
            inline int get_Right() const { return (m_x + m_width); }
            /// Returns the y coordinate of the bottom edge of the rectangle represented by the current object.
            inline int get_Bottom() const { return (m_y + m_height); }
            /// Determines if X and Y coordinates of the upper left corner of the recangle represented by the current object
            /// as well as its width and height have values of 0.
            /// @returns True if X and Y coordinates of the upper left corner of the recangle represented by the current object
            /// as well as its width and height have values of 0, otherwise - false
            inline bool get_IsEmpty() const { return (m_x == 0 && m_y == 0 && m_width == 0 && m_height == 0); }

            /// Determines if the rectangles represented by the current and the specified objects are identical.
            /// @param rect The Rectangle object to compare the current object with
            /// @returns True if the rectangles represented by the current and the specified objects are identical, otherwise - false
            ASPOSECPP_SHARED_API bool Equals(const Rectangle & rect) const;

            /// Constructs a Rectangle object from the specified RectangleF object by rounding the RectangleF object's location and size values
            /// to the next higher integer values.
            /// @param rect The RectangleF object to convert
            /// @returns The Rectangle object constructed from @p rect
            static ASPOSECPP_SHARED_API Rectangle Ceiling(const RectangleF & rect);
            /// Constructs a Rectangle object from the specified RectangleF object by truncating the RectangleF object's location and size values
            /// to the next lower integer values.
            /// @param rect The RectangleF object to convert
            /// @returns The Rectangle object constructed from @p rect
            static ASPOSECPP_SHARED_API Rectangle Truncate(const RectangleF & rect);
            /// Constructs a Rectangle object from the specified RectangleF object by rounding the RectangleF object's location and size values
            /// to the nearest integer values.
            /// @param rect The RectangleF object to convert
            /// @returns The Rectangle object constructed from @p rect
            static ASPOSECPP_SHARED_API Rectangle Round(const RectangleF & rect);

            /// Determines if the specified point is located within the rectangle represented by the current object.
            /// @param x The X coordinate of the point to check
            /// @param y The Y coordinate of the point to check
            /// @returns True if the specified point is located within the rectangle represented by the current object,
            /// otherwise - false
            ASPOSECPP_SHARED_API bool Contains(int x, int y) const;
            /// Determines if the specified point is located within the rectangle represented by the current object.
            /// @param point A point to check
            /// @returns True if the specified point is located within the rectangle represented by the current object,
            /// otherwise - false
            ASPOSECPP_SHARED_API bool Contains(const Point & point) const;
            /// Determines if the specified rectangle is located within the rectangle represented by the current object.
            /// @param rect A rectangle to check
            /// @returns True if the specified rectangle is located within the rectangle represented by the current object,
            /// otherwise - false
            ASPOSECPP_SHARED_API bool Contains(const Rectangle & rect) const;

            /// Increases the width and height of the rectangle represented by the current object, maintaining
            /// the location of the geometrical center of the rectangle. The width and height are increased in both 
            /// directions by the specified amounts.
            /// @param width The amount by which the width of the rectangle is to be increased in both directions
            /// @param height The amount by which the height of the rectangle is to be increased in both directions
            ASPOSECPP_SHARED_API void Inflate(int width, int height);
            /// Increases the width and height of the rectangle represented by the current object, maintaining
            /// the location of the geometrical center of the rectangle. The width and height are increased in both 
            /// directions by the amounts specified by width and height values of the specified size object correspondingly.
            /// @param size The Size object specifying the amounts to increase the width and height of the rectangle by
            ASPOSECPP_SHARED_API void Inflate(const Size & size);

            /// Increases the width and height of the rectangle represented by the specified object, maintaining
            /// the location of the geometrical center of the rectangle. The width and height are increased in both 
            /// directions by the specified amounts.
            /// @param rect A rectangle to inflate
            /// @param x The amount by which the width of the rectangle is to be increased in both directions
            /// @param y The amount by which the height of the rectangle is to be increased in both directions
            /// @returns The Rectangle object representing the enlarged rectangle
            static ASPOSECPP_SHARED_API Rectangle Inflate(const Rectangle & rect, int x, int y);

            /// Replaces the rectangle represented by the current object with the rectangle that results from the
            /// its intersection with the rectangle represented by the specified object.
            /// @param rect The Rectangle object that represents the rectangle to intersect the rectangle represented by 
            /// the current object with
            ASPOSECPP_SHARED_API void Intersect(const Rectangle & rect);
            /// Returns a rectangle that is a result of intersection of the specified rectangles.
            /// @param a The first rectangle to intersect
            /// @param b The second rectangle to intersect
            /// @returns The result of intersection of @p a with @p b
            static ASPOSECPP_SHARED_API Rectangle Intersect(const Rectangle & a, const Rectangle  & b);
            /// Determines if the rectangles represented by the current and specified objects intesect.
            /// @param rect The rectangle to check
            /// @returns True if the rectangles represented by the current object and @p rect intersect, otherwise - false
            ASPOSECPP_SHARED_API bool IntersectsWith(const Rectangle & rect);

            /// Returns a rectangle that is a result of union of the specified rectangles.
            /// @param a The first rectangle to union
            /// @param b The second rectangle to union
            /// @returns The result of union of @p a with @p b
            static ASPOSECPP_SHARED_API Rectangle Union(const Rectangle & a, const Rectangle & b);

            /// Offsets the position of the rectangle represented by the current object by the specified amounts.
            /// @param pos The Point object that specifies the amount by which the rectangle is offset; the point's X coordinat value
            /// specifies the amount to add to the X coordinate of the upper left corner of the rectangle and the point's Y coordinate
            /// specifies the amount to add to the Y coordinate of the upper left corner of the rectangle
            ASPOSECPP_SHARED_API void Offset(const Point & pos);
            /// Offsets the position of the rectangle represented by the current object by the specified amounts.
            /// @param x The value to add to the current X coordinate of the rectangle
            /// @param y The value to add to the current Y coordinate of the rectangle
            ASPOSECPP_SHARED_API void Offset(int x, int y);

            /// Determines if the rectangles represented by the specified objects are identical.
            /// @param rect1 The first rectangle to compare
            /// @param rect2 The second rectangle to compare
            /// @returns True if the rectangles represented by @p rect1 and rect2 are identical, otherwise - false
            friend ASPOSECPP_SHARED_API bool operator==(const Rectangle & rect1, const Rectangle & rect2);

            /// Determines if the rectangles represented by the specified objects are not identical.
            /// @param rect1 The first rectangle to compare
            /// @param rect2 The second rectangle to compare
            /// @returns True if the rectangles represented by @p rect1 and rect2 are not identical, otherwise - false
            friend ASPOSECPP_SHARED_API bool operator!=(const Rectangle & rect1, const Rectangle & rect2);

            /// Always returns false.
            bool operator == (std::nullptr_t) const { return false; }
            /// Always returns true.
            bool operator != (std::nullptr_t) const { return true; }

            /// Returns the string representation of the current object.
            ASPOSECPP_SHARED_API String ToString() const;
            /// Returns a hash code of the current object.
            ASPOSECPP_SHARED_API int GetHashCode() const;

            //explicit operator int*() const { return nullptr; }
            /// Returns a RectangleF object that represents a rectangle equivalent to the rectangle represented by the
            /// current object.
            ASPOSECPP_SHARED_API operator RectangleF() const;

            /// An empty rectangle i.e. a rectangle whose location and size values have zero values.
            static const ASPOSECPP_SHARED_API Rectangle Empty;

        private:
            /// The X coordinate of the upper left corner of the rectangle represented by the current object.
            int m_x;
            /// The Y coordinate of the upper left corner of the rectangle represented by the current object.
            int m_y;
            /// The width of the rectangle represented by the current object.
            int m_width;
            /// The height of the rectangle represented by the current object.
            int m_height;

    };

}}

namespace System
{
    /// A template predicate that determines if System::Drawing::Rectangle class is boxable.
    template<> struct IsBoxable<Drawing::Rectangle> : std::true_type {};

    /// Represents a boxed value of System::Drawing::Rectangle type.
    template <>
    class BoxedValue<System::Drawing::Rectangle> : public DefaultBoxedValue<System::Drawing::Rectangle>
    {
    public:
        /// Constructs a BoxedValue object that represents the specified value boxed.
        /// @param value A Rectangle value to be boxed
        BoxedValue(const System::Drawing::Rectangle& value)
            : DefaultBoxedValue<System::Drawing::Rectangle>(value)
        {}
    };
}

#endif // _aspose_system_drawing_rectangle_h_
