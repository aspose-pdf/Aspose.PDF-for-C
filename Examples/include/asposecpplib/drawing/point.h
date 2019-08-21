/// @file drawing/point.h
#ifndef _aspose_system_drawing_point_h_
#define _aspose_system_drawing_point_h_

#include "fwd.h"
#include <system/string.h>
#include <system/boxed_value.h>
#include <functional>

namespace System { namespace Drawing {
    /// Represents a pair of integer X and Y coordinates of a point on a 2-dimensional plane.
    /// This type should be allocated on stack and passed to functions by value or by reference.
    /// Never use System::SmartPtr class to manage objects of this type.
    class ASPOSECPP_SHARED_CLASS Point
    {
        RTTI_INFO_VALUE_TYPE(Point)
        public:
            /// Constructs a new Point object and initializes its X and Y coordinates values with 0.
            ASPOSECPP_SHARED_API Point();
            /// Constructs a new Point object and initializes it with the specified values.
            /// @param x The value of X coordinate
            /// @param y The value of Y coordinate
            ASPOSECPP_SHARED_API Point(int x, int y);
            /// Constructs a new Point object and initializes its X and Y coordinates values
            /// with the values of width and height of the specifide SizeF object correspondingly.
            /// @param size A SizeF object whose width and height values are used to initialize X and 
            /// Y coordinates values of the Point object being created
            ASPOSECPP_SHARED_API Point(const Size& size);
            /// Constructs a new Point object and initializes its X coordinate value with a value formed by high 16 bits
            /// of the specified 32-bit integer and its Y coordinate value with a vale formed by low 16 bits of the
            /// specified 32-bit integer value value.
            /// @param dw The 32-bit integer value whose high 16 bits specify the X coordinate value and low 16 bits specify
            /// the Y coordinate value of the object being created
            ASPOSECPP_SHARED_API Point(int dw);

            /// Determines if both X and Y coordinates values are equal to 0.
            /// @returns True if both X and Y coordinates represented by the current object are 0; 
            /// otherwise - false
            inline bool get_IsEmpty() const { return (m_x == 0 && m_y == 0); }

            /// Returns the value of X coordinate represented by the current object.
            inline int get_X() const { return m_x; }
            /// Returns the value of Y coordinate represented by the current object.
            inline int get_Y() const { return m_y; }

            /// Sets the value of X coordinate represented by the current object.
            /// @param value The value to set
            inline void set_X(int value) { m_x = value; }
            /// Sets the value of Y coordinate represented by the current object.
            /// @param value The value to set
            inline void set_Y(int value) { m_y = value; }

            /// Determines if the current object and the specified object are equal, i.e. represent the same
            /// pair of X and Y coordinates values.
            /// @param point Point The object to compare the current object with
            /// @returns True if the objects are equal, otherwise - false
            ASPOSECPP_SHARED_API bool Equals(const Point& point) const;

            /// Returns a hash code for the current object.
            ASPOSECPP_SHARED_API int GetHashCode() const;
            /// Returns the string representation of the pair of X and Y coordinates values represented
            /// by the current object.
            ASPOSECPP_SHARED_API String ToString() const;

            /// Adds the width and height values of the specified Size object to the X and Y coordinates values of the specified Point object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The Size object that specifies the values to add to the coordinates values of the @p point
            /// @returns A new Point object whose X coordinate value is equal to the sum of X coordinate value of @p point and the width value of @p size
            /// and Y coordinate value is equal to the sum of Y coordinate value of @p point and the height value of @p size
            static ASPOSECPP_SHARED_API Point Add(const Point& point, const Size& size);
            /// Subtracts the width and height values of the specified Size object from the X and Y coordinates values of the specified Point object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The Size object that specifies the values to subtract from the coordinates values of the @p point
            /// @returns A new Point object whose X coordinate value is equal to the result of subtraction of the width value of @p size from the X coordinate value of @p point
            /// and Y coordinate value is equal to the result of subtraction of the height value of @p size from the Y coordinate value of @p point
            static ASPOSECPP_SHARED_API Point Subtract(const Point& point, const Size& size);

            /// Constructs a Point object from the specified PointF object by rounding the PointF object's
            /// X and Y coordinates values to the next higher integer values.
            /// @param point The PointF object to construct a Point object from
            /// @returns A Point object constructed from @p point
            static ASPOSECPP_SHARED_API Point Ceiling(const PointF& point);
            /// Constructs a Point object from the specified PointF object by truncating the PointF object's
            /// X and Y coordinates values to the next lower integer values.
            /// @param point The PointF object to construct a Point object from
            /// @returns A Point object constructed from @p point
            static ASPOSECPP_SHARED_API Point Truncate(const PointF& point);
            /// Constructs a Point object from the specified PointF object by rounding the PointF object's
            /// X and Y coordinates values to the nearest integer values.
            /// @param point The PointF object to construct a Point object from
            /// @returns A Point object constructed from @p point
            static ASPOSECPP_SHARED_API Point Round(const PointF& point);

            /// Offsets the X and Y coordinates value represented by the current object by the specified 
            /// values.
            /// @param dx The value to offset the X coordinate value by
            /// @param dy The value to offset the Y coordinate value by
            inline void Offset(int dx, int dy) { m_x += dx; m_y += dy; }
            /// Offsets the X and Y coordinates represented by the current object by the 
            /// values of X and Y coordinates represented by the specified Point object correspondingly.
            /// @param point The Point object specifying the values to offset the X and Y coordinates by
            inline void Offset(Point point) { Offset(point.m_x, point.m_y); }

            /// Constructs an instance of PointF object and initializes it with X and Y coordinates values
            /// of the current Point object.
            ASPOSECPP_SHARED_API operator PointF() const;
            /// Constructs an instance of Size object and initializes its width and height values
            /// with X and Y coordinates values represented by the current object correspondingly.
            ASPOSECPP_SHARED_API operator Size() const;

            /// Adds the width and height values of the specified Size object to the X and Y coordinates values of the specified Point object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The Size object that specifies the values to add to the coordinates values of the @p point
            /// @returns A new Point object whose X coordinate value is equal to the sum of X coordinate value of @p point and the width value of @p size
            /// and Y coordinate value is equal to the sum of Y coordinate value of @p point and the height value of @p size
            friend ASPOSECPP_SHARED_API Point operator+(const Point& point, const Size& size);
            /// Subtracts the width and height values of the specified Size object from the X and Y coordinates values of the specified Point object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The Size object that specifies the values to subtract from the coordinates values of the @p point
            /// @returns A new Point object whose X coordinate value is equal to the result of subtraction of the width value of @p size from the X coordinate value of @p point
            /// and Y coordinate value is equal to the result of subtraction of the height value of @p size from the Y coordinate value of @p point
            friend ASPOSECPP_SHARED_API Point operator-(const Point& point, const Size& size);

            /// Determines if the specified Point objects are equal, i.e. represent the same
            /// pair of X and Y coordinates values.
            /// @param point1 The first comparand
            /// @param point2 The second comparand
            /// @returns True if the objects are equal, otherwise - false
            friend ASPOSECPP_SHARED_API bool operator==(const Point& point1, const Point& point2);
            /// Determines if the specified Point objects are not equal, i.e. represent the distinct
            /// pairs of X and Y coordinates values.
            /// @param point1 The first comparand
            /// @param point2 The second comparand
            /// @returns True if the objects are not equal, otherwise - false
            friend ASPOSECPP_SHARED_API bool operator!=(const Point& point1, const Point& point2);
            /// Always throws InvalidOperationException.
            /// @throws InvalidOperationException Always
            friend ASPOSECPP_SHARED_API bool operator<(const Point& point1, const Point& point2);

            /// An empty instance of Point class whose X and Y coordinates values are 0.
            static const ASPOSECPP_SHARED_API Point Empty;

            /// Always returns false.
            bool IsNull() const { return false; }
            /// Returns a hash value for the current object.
            size_t getStdHash() const;

        private:
            /// Returns high 16 bits of the specified 32-bit integer value.
            /// @param n A 32-bit integer value
            /// @returns High 16 bits of @p n
            inline int hi_word(int n) { return ((n >> 16) & 0xffff); }
            /// Returns low 16 bits of the specified 32-bit integer value.
            /// @param n A 32-bit integer value
            /// @returns Low 16 bits of @p n
            inline int lo_word(int n) { return (n & 0xffff); }

            /// The X coordinate value represented by the current object.
            int m_x;
            /// The Y coordinate value represented by the current object.
            int m_y;

    };

}}

namespace System
{
    /// A template predicate that determines if Drawing::Point class is boxable.
    template<> struct IsBoxable<Drawing::Point> : std::true_type {};

    /// Represents a boxed value of System::Drawing::Point type.
    template <>
    class BoxedValue<System::Drawing::Point> : public DefaultBoxedValue<System::Drawing::Point>
    {
    public:
        /// Constructs a BoxedValue object that represents the specified value boxed.
        /// @param value A Point value to be boxed
        BoxedValue(const System::Drawing::Point& value)
            : DefaultBoxedValue<System::Drawing::Point>(value)
        {}
    };
}
namespace std
{
    /// Hashing implementation for Guid class.
    template<> struct hash<System::Drawing::Point>
    {
        /// Hasher algorithm which calls into actual GetHashCode() implementation.
        /// @param p Point object to hash
        inline size_t operator()(System::Drawing::Point const& p) const
        {
            return p.getStdHash();
        }
    };
}

#endif // _aspose_system_drawing_point_h_
