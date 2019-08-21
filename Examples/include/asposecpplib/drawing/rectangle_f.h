/// @file drawing/rectangle_f.h
#ifndef _aspose_system_drawing_rectangle_f_h_
#define _aspose_system_drawing_rectangle_f_h_

#include "fwd.h"
#include "system/object.h"
#include "drawing/size_f.h"
#include "drawing/point_f.h"
#include <system/boxed_value.h>


namespace System { namespace Drawing {
/// Represents a rectangular area of an image defined as single-precision floating point X and Y coordinates of its upper left corner and its width and height.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS RectangleF
{
    RTTI_INFO_VALUE_TYPE(RectangleF);

public:
    /// Constructs a new instance of RectangleF object that represents a rectangle with X and Y coordinates and width and hegiht values set to 0.
    ASPOSECPP_SHARED_API RectangleF();
    /// Constructs a new instance of RectangleF object that represents a rectangle with the specified coordinates of its upper left corner and width and height.
    /// @param x A value of the X coordinate of the upper left corner of the rectangle
    /// @param y A value of the Y coordinate of the upper left corner of the rectangle
    /// @param width The width of the rectangle
    /// @param height The height of the rectangle
    ASPOSECPP_SHARED_API RectangleF(float x, float y, float width, float height);
    /// Constructs a new instance of RectangleF object that represents a rectangle with the coordinates of its upper left corner specified as an instance of 
    /// PointF class and its width and height as an instance of SizeF class.
    /// @param location Specifies the location of the upper left corner of the rectangle
    /// @param size Specifies the width and hegiht of the rectangle
    ASPOSECPP_SHARED_API RectangleF(const PointF & location, const SizeF & size);
    /// Constructs a new instance of RectangleF object that represents the rectangle equivalent to the specified one.
    /// @param rect An instance of Rectangle class that specifies the position and size of 
    /// the rectangle to be represented by the object being constructed
    explicit ASPOSECPP_SHARED_API RectangleF(const Rectangle &rect);
    /// Constructs a new RectangleF object that represents a rectangle with the specified edge locations.
    /// @param left The X coordinate of the left edge of the rectangle
    /// @param top The Y coordinate of the top edge of the rectangle
    /// @param right The X coordinate of the right edge of the rectangle
    /// @param bottom The Y coordinate of the bottom edge of the rectangle
    /// @returns An instance of RectangleF class that represents the speified rectangle
    inline static RectangleF FromLTRB(float left, float top, float right, float bottom) { return RectangleF(left, top, right - left, bottom - top); }

    /// Returns an instance of the PointF class that specifies the location of the upper left corner of the rectangle represented
    /// by the current object.
    inline PointF get_Location() const { return PointF(m_x, m_y); }
    /// Sets the location of the upper left corner of the rectangle represented by the current object.
    /// @param value The value to set
    inline void set_Location(PointF value) { m_x = value.get_X(); m_y = value.get_Y(); }

    /// Returns an instance of the SizeF class that specifies the width and height of the rectangle represented
    /// by the current object.
    inline SizeF get_Size() const { return SizeF(m_width, m_height); }
    /// Sets the width and height of the rectangle represented by the current object.
    /// @param value An instance of SizeF class specifying the width and height values to set
    inline void set_Size(SizeF value) { m_width = value.get_Width(); m_height = value.get_Height(); }
    /// Returns the X coordinate of the upper left corner of the rectangle represented by the current object.
    inline float get_X() const { return m_x; }
    /// Sets the X coordinate of the upper left corner of the rectangle represented by the current object.
    /// @param value The value to set
    inline void set_X(float value) { m_x = value; }

    /// Returns the Y coordinate of the upper left corner of the rectangle represented by the current object.
    inline float get_Y() const { return m_y; }
    /// Sets the Y coordinate of the upper left corner of the rectangle represented by the current object.
    /// @param value The value to set
    inline void set_Y(float value) { m_y = value; }

    /// Returns the width of the rectangle represented by the current object.
    inline float get_Width() const { return m_width; }
    /// Sets the width of the rectangle represented by the current object.
    /// @param value The value to set
    inline void set_Width(float value) { m_width = value; }

    /// Returns the height of the rectangle represented by the current object.
    inline float get_Height() const { return m_height; }
    /// Sets the height of the rectangle represented by the current object.
    /// @param value The value to set
    inline void set_Height(float value) { m_height = value; }
    /// Returns the X coordinate of the left edge of the rectangle represented by the current object.
    inline float get_Left() const { return m_x; }
    /// Returns the Y coordinate of the top edge of the rectangle represented by the current object.
    inline float get_Top() const { return m_y; }
    /// Returns the X coordinate of the right edge of the rectangle represented by the current object.
    inline float get_Right() const { return (m_x + m_width); }
    /// Returns the y coordinate of the bottom edge of the rectangle represented by the current object.
    inline float get_Bottom() const { return (m_y + m_height); }
    /// Determines if X and Y coordinates of the upper left corner of the recangle represented by the current object
    /// as well as its width and height have values of 0.
    /// @returns True if X and Y coordinates of the upper left corner of the recangle represented by the current object
    /// as well as its width and height have values of 0, otherwise - false
    inline bool get_IsEmpty() const { return ((m_width <= 0) || (m_height <= 0)); }

    /// Determines if the rectangles represented by the current and the specified objects are identical.
    /// @param rect The RectangleF object to compare the current object with
    /// @returns True if the rectangles represented by the current and the specified objects are identical, otherwise - false
    ASPOSECPP_SHARED_API bool Equals(const RectangleF & rect) const;

    /// Determines if the specified point is located within the rectangle represented by the current object.
    /// @param x The X coordinate of the point to check
    /// @param y The Y coordinate of the point to check
    /// @returns True if the specified point is located within the rectangle represented by the current object,
    /// otherwise - false
    ASPOSECPP_SHARED_API bool Contains(float x, float y);
    /// Determines if the specified point is located within the rectangle represented by the current object.
    /// @param point A point to check
    /// @returns True if the specified point is located within the rectangle represented by the current object,
    /// otherwise - false
    ASPOSECPP_SHARED_API bool Contains(const PointF & point);
    /// Determines if the specified rectangle is located within the rectangle represented by the current object.
    /// @param rect A rectangle to check
    /// @returns True if the specified rectangle is located within the rectangle represented by the current object,
    /// otherwise - false
    ASPOSECPP_SHARED_API bool Contains(const RectangleF & rect);

    /// Increases the width and height of the rectangle represented by the current object, maintaining
    /// the location of the geometrical center of the rectangle. The width and height are increased in both 
    /// directions by the specified amounts.
    /// @param width The amount by which the width of the rectangle is to be increased in both directions
    /// @param height The amount by which the height of the rectangle is to be increased in both directions
    ASPOSECPP_SHARED_API void Inflate(float width, float height);
    /// Increases the width and height of the rectangle represented by the current object, maintaining
    /// the location of the geometrical center of the rectangle. The width and height are increased in both 
    /// directions by the amounts specified by width and height values of the specified size object correspondingly.
    /// @param size The SizeF object specifying the amounts to increase the width and height of the rectangle by
    ASPOSECPP_SHARED_API void Inflate(const SizeF & size);
    /// Increases the width and height of the rectangle represented by the specified object, maintaining
    /// the location of the geometrical center of the rectangle. The width and height are increased in both 
    /// directions by the specified amounts.
    /// @param rect A rectangle to inflate
    /// @param x The amount by which the width of the rectangle is to be increased in both directions
    /// @param y The amount by which the height of the rectangle is to be increased in both directions
    /// @returns The RectangleF object representing the enlarged rectangle
    static ASPOSECPP_SHARED_API RectangleF Inflate(const RectangleF & rect, float x, float y);

    /// Replaces the rectangle represented by the current object with the rectangle that results from the
    /// its intersection with the rectangle represented by the specified object.
    /// @param rect The RectangleF object that represents the rectangle to intersect the rectangle represented by 
    /// the current object with
    ASPOSECPP_SHARED_API void Intersect(const RectangleF & rect);
    /// Returns a rectangle that is a result of intersection of the specified rectangles.
    /// @param a The first rectangle to intersect
    /// @param b The second rectangle to intersect
    /// @returns The result of intersection of @p a with @p b
    static ASPOSECPP_SHARED_API RectangleF Intersect(const RectangleF & a, const RectangleF  & b);
    /// Determines if the rectangles represented by the current and specified objects intesect.
    /// @param rect The rectangle to check
    /// @returns True if the rectangles represented by the current object and @p rect intersect, otherwise - false
    ASPOSECPP_SHARED_API bool IntersectsWith(const RectangleF & rect);

    /// Returns a rectangle that is a result of union of the specified rectangles.
    /// @param a The first rectangle to union
    /// @param b The second rectangle to union
    /// @returns The result of union of @p a with @p b
    static ASPOSECPP_SHARED_API RectangleF Union(const RectangleF & a, const RectangleF & b);

    /// Offsets the position of the rectangle represented by the current object by the specified amounts.
    /// @param pos The PointF object that specifies the amount by which the rectangle is offset; the point's X coordinat value
    /// specifies the amount to add to the X coordinate of the upper left corner of the rectangle and the point's Y coordinate
    /// specifies the amount to add to the Y coordinate of the upper left corner of the rectangle
    ASPOSECPP_SHARED_API void Offset(const PointF & pos);
    /// Offsets the position of the rectangle represented by the current object by the specified amounts.
    /// @param x The value to add to the current X coordinate of the rectangle
    /// @param y The value to add to the current Y coordinate of the rectangle
    ASPOSECPP_SHARED_API void Offset(float x, float y);

    /// Determines if the rectangles represented by the specified objects are identical.
    /// @param rect1 The first rectangle to compare
    /// @param rect2 The second rectangle to compare
    /// @returns True if the rectangles represented by @p rect1 and rect2 are identical, otherwise - false
    friend ASPOSECPP_SHARED_API bool operator==(const RectangleF & rect1, const RectangleF & rect2);
    /// Determines if the rectangles represented by the specified objects are not identical.
    /// @param rect1 The first rectangle to compare
    /// @param rect2 The second rectangle to compare
    /// @returns True if the rectangles represented by @p rect1 and rect2 are not identical, otherwise - false
    friend ASPOSECPP_SHARED_API bool operator!=(const RectangleF & rect1, const RectangleF & rect2);

    /// Always returns false.
    bool operator == (std::nullptr_t) const { return false; }
    /// Always returns true.
    bool operator != (std::nullptr_t) const { return true; }

    /// An empty rectangle i.e. a rectangle whose location and size values have zero values.
    static const ASPOSECPP_SHARED_API RectangleF Empty;
    /// Returns a hash code of the current object.
    ASPOSECPP_SHARED_API int GetHashCode() const;
    /// Returns the string representation of the current object.
    System::String ToString() const { return String::Format(u"{{X={0},Y={1},Width={2},Height={3}}}", m_x, m_y, m_width, m_height); }

private:
    /// The X coordinate of the upper left corner of the rectangle represented by the current object.
    float m_x;
    /// The Y coordinate of the upper left corner of the rectangle represented by the current object.
    float m_y;
    /// The width of the rectangle represented by the current object.
    float m_width;
    /// The height of the rectangle represented by the current object.
    float m_height;

};

}} // System::Drawing

namespace System
{
    /// A template predicate that determines if System::Drawing::RectangleF class is boxable.
    template<> struct IsBoxable<Drawing::RectangleF> : std::true_type {};

    /// Represents a boxed value of System::Drawing::RectangleF type.
    template <>
    class BoxedValue<System::Drawing::RectangleF> : public DefaultBoxedValue<System::Drawing::RectangleF>
    {
    public:
        /// Constructs a BoxedValue object that represents the specified value boxed.
        /// @param value A RectangleF value to be boxed
        BoxedValue(const System::Drawing::RectangleF& value)
            : DefaultBoxedValue<System::Drawing::RectangleF>(value)
        {}
    };
}

namespace std
{
    /// Hashing implementation for RectangleF class.
    template <>
    struct hash<System::Drawing::RectangleF>
    {
        /// Hasher algorithm which calls into actual GetHashCode() implementation.
        /// @param rect RectangleF object to hash
        std::size_t operator()(const System::Drawing::RectangleF& rect) const
        {
            return rect.GetHashCode();
        }
    };
}

#endif // _aspose_system_drawing_rectangle_f_h_
