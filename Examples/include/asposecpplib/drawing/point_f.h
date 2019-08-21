/// @file drawing/point_f.h
#ifndef _aspose_system_drawing_point_f_h_
#define _aspose_system_drawing_point_f_h_

#include "fwd.h"
#include <system/string.h>
#include <system/boxed_value.h>

namespace System { namespace Drawing {
    /// Represents a pair of single-precision floating point X and Y coordinates of a point on a 2-dimensional plane.
    /// This type should be allocated on stack and passed to functions by value or by reference.
    /// Never use System::SmartPtr class to manage objects of this type.
    class ASPOSECPP_SHARED_CLASS PointF
    {
        public:
            /// Constructs a new PointF object and initializes its X and Y coordinates values with 0.
            ASPOSECPP_SHARED_API PointF();
            /// Constructs a new PointF object and initializes it with the specified values.
            /// @param x The value of X coordinate
            /// @param y The value of Y coordinate
            ASPOSECPP_SHARED_API PointF(float x, float y);
            /// Constructs a new PointF object and initializes its X and Y coordinates values
            /// with the values of width and height of the specifide SizeF object correspondingly.
            /// @param size A SizeF object whose width and height values are used to initialize X and 
            /// Y coordinates values of the PointF object being created
            ASPOSECPP_SHARED_API PointF(const SizeF& size);

            /// Determines if both X and Y coordinates values are equal to 0.
            /// @returns True if both X and Y coordinates represented by the current object are 0; 
            /// otherwise - false
            inline bool get_IsEmpty() const { return (m_x == 0.0f && m_y == 0.0f); }

            /// Returns the value of X coordinate represented by the current object.
            inline float get_X() const { return m_x; }
            /// Returns the value of Y coordinate represented by the current object.
            inline float get_Y() const { return m_y; }

            /// Sets the value of X coordinate represented by the current object.
            /// @param value The value to set
            inline void set_X(float value) { m_x = value; }
            /// Sets the value of Y coordinate represented by the current object.
            /// @param value The value to set
            inline void set_Y(float value) { m_y = value; }

            /// Determines if the current object and the specified object are equal, i.e. represent the same
            /// pair of X and Y coordinates values.
            /// @param point PointF The object to compare the current object with
            /// @returns True if the objects are equal, otherwise - false
            ASPOSECPP_SHARED_API bool Equals(const PointF& point) const;

            /// Adds the width and height values of the specified SizeF object to the X and Y coordinates values of the specified PointF object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The SizeF object that specifies the values to add to the coordinates values of the @p point
            /// @returns A new PointF object whose X coordinate value is equal to the sum of X coordinate value of @p point and the width value of @p size
            /// and Y coordinate value is equal to the sum of Y coordinate value of @p point and the height value of @p size
            static ASPOSECPP_SHARED_API PointF Add(const PointF& point, const SizeF& size);

            /// Subtracts the width and height values of the specified SizeF object from the X and Y coordinates values of the specified PointF object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The SizeF object that specifies the values to subtract from the coordinates values of the @p point
            /// @returns A new PointF object whose X coordinate value is equal to the result of subtraction of the width value of @p size from the X coordinate value of @p point
            /// and Y coordinate value is equal to the result of subtraction of the height value of @p size from the Y coordinate value of @p point
            static ASPOSECPP_SHARED_API PointF Subtract(const PointF& point, const SizeF& size);

            /// Adds the width and height values of the specified Size object to the X and Y coordinates values of the specified PointF object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The Size object that specifies the values to add to the coordinates values of the @p point
            /// @returns A new PointF object whose X coordinate value is equal to the sum of X coordinate value of @p point and the width value of @p size
            /// and Y coordinate value is equal to the sum of Y coordinate value of @p point and the height value of @p size
            static ASPOSECPP_SHARED_API PointF Add(const PointF& point, const Size& size);

            /// Subtracts the width and height values of the specified Size object from the X and Y coordinates values of the specified PointF object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The Size object that specifies the values to subtract from the coordinates values of the @p point
            /// @returns A new PointF object whose X coordinate value is equal to the result of subtraction of the width value of @p size from the X coordinate value of @p point
            /// and Y coordinate value is equal to the result of subtraction of the height value of @p size from the Y coordinate value of @p point
            static ASPOSECPP_SHARED_API PointF Subtract(const PointF& point, const Size& size);

            /// Adds the width and height values of the specified SizeF object to the X and Y coordinates values of the specified PointF object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The SizeF object that specifies the values to add to the coordinates values of the @p point
            /// @returns A new PointF object whose X coordinate value is equal to the sum of X coordinate value of @p point and the width value of @p size
            /// and Y coordinate value is equal to the sum of Y coordinate value of @p point and the height value of @p size
            friend ASPOSECPP_SHARED_API PointF operator+(const PointF& point, const SizeF& size);
            /// Subtracts the width and height values of the specified SizeF object from the X and Y coordinates values of the specified PointF object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The SizeF object that specifies the values to subtract from the coordinates values of the @p point
            /// @returns A new PointF object whose X coordinate value is equal to the result of subtraction of the width value of @p size from the X coordinate value of @p point
            /// and Y coordinate value is equal to the result of subtraction of the height value of @p size from the Y coordinate value of @p point
            friend ASPOSECPP_SHARED_API PointF operator-(const PointF& point, const SizeF& size);

            /// Adds the width and height values of the specified Size object to the X and Y coordinates values of the specified PointF object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The Size object that specifies the values to add to the coordinates values of the @p point
            /// @returns A new PointF object whose X coordinate value is equal to the sum of X coordinate value of @p point and the width value of @p size
            /// and Y coordinate value is equal to the sum of Y coordinate value of @p point and the height value of @p size
            friend ASPOSECPP_SHARED_API PointF operator+(const PointF& point, const Size& size);
            /// Subtracts the width and height values of the specified Size object from the X and Y coordinates values of the specified PointF object
            /// correspondingly.
            /// @param point The point to translate
            /// @param size The Size object that specifies the values to subtract from the coordinates values of the @p point
            /// @returns A new PointF object whose X coordinate value is equal to the result of subtraction of the width value of @p size from the X coordinate value of @p point
            /// and Y coordinate value is equal to the result of subtraction of the height value of @p size from the Y coordinate value of @p point
            friend ASPOSECPP_SHARED_API PointF operator-(const PointF& point, const Size& size);

            /// Determines if the specified PointF objects are equal, i.e. represent the same
            /// pair of X and Y coordinates values.
            /// @param point1 The first comparand
            /// @param point2 The second comparand
            /// @returns True if the objects are equal, otherwise - false
            friend ASPOSECPP_SHARED_API bool operator==(const PointF& point1, const PointF& point2);
            /// Determines if the specified PointF objects are not equal, i.e. represent the distinct
            /// pairs of X and Y coordinates values.
            /// @param point1 The first comparand
            /// @param point2 The second comparand
            /// @returns True if the objects are not equal, otherwise - false
            friend ASPOSECPP_SHARED_API bool operator!=(const PointF& point1, const PointF& point2);

            /// Always throws InvalidOperationException.
            /// @throws InvalidOperationException Always
            friend ASPOSECPP_SHARED_API bool operator<(const PointF& point1, const PointF& point2);

            /// An empty instance of PointF class whose X and Y coordinates values are 0.
            static const ASPOSECPP_SHARED_API PointF Empty;

            /// Returns a hash code for the current object.
            int GetHashCode() const { return (int)((int)m_x ^ (((int)m_y << 13) | ((int)m_y >> 19))); }

            /// Returns the string representation of the pair of X and Y coordinates values represented
            /// by the current object.
            System::String ToString() const { return String::Format(u"{{X={0}, Y={1}}}", m_x, m_y); }

            /// Always returns false.
            bool IsNull() const { return false; }

            // To solve this:
            //    auto enumerator_0 = (bbox)->GetEnumerator();
            //    System::Drawing::PointF e_0;
            //    while (enumerator_0->MoveNext() && ((e_0 = enumerator_0->get_Current()) || true))
            /// Always returns true.
            explicit operator bool() { return true; }

        private:
            /// The X coordinate value represented by the current object.
            float m_x;
            /// The Y coordinate value represented by the current object.
            float m_y;
    };

}}


namespace System
{
    /// A template predicate that determines if Drawing::PointF class is boxable.
    template<> struct IsBoxable<Drawing::PointF> : std::true_type {};

    /// Represents a boxed value of System::Drawing::PointF type.
    template <>
    class BoxedValue<System::Drawing::PointF> : public DefaultBoxedValue<System::Drawing::PointF>
    {
    public:
        /// Constructs a BoxedValue object that represents the specified value boxed.
        /// @param value A PointF value to be boxed
        BoxedValue(const System::Drawing::PointF& value)
            : DefaultBoxedValue<System::Drawing::PointF>(value)
        {}
    };
}

#endif // _aspose_system_drawing_point_f_h_
