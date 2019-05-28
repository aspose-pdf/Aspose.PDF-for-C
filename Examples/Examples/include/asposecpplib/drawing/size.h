/// @file drawing/size.h
#ifndef _aspose_system_drawing_size_h_
#define _aspose_system_drawing_size_h_

#include "fwd.h"
#include <system/boxed_value.h>
#include <system/string.h>

namespace System { namespace Drawing {
    /// Represents a pair of integer values that represent width and height of an image.
    /// This type should be allocated on stack and passed to functions by value or by reference.
    /// Never use System::SmartPtr class to manage objects of this type.
    class ASPOSECPP_SHARED_CLASS Size
    {
        RTTI_INFO_VALUE_TYPE(Size)
        public:
            /// Constructs a new Size object and initializes its width and height values with 0.
            ASPOSECPP_SHARED_API Size();
            /// Constructs a new Size object and initializes its width and height values
            /// with the values of X and Y coordinates of the specifide point correspondingly.
            /// @param point A Point object whose X and Y coordinates are used to initialize width and 
            /// height value of the Size object being created
            ASPOSECPP_SHARED_API Size(const Point& point);
            /// Constructs a new Size object and initializes it with the specified value.
            /// @param width The value to width
            /// @param height The value of height
            ASPOSECPP_SHARED_API Size(int width, int height);

            /// Determines if both width and hegiht values are equal to 0.
            /// @returns True if both width and height represented by the current object are 0; 
            /// otherwise - false
            inline bool get_IsEmpty() const { return (m_width == 0 && m_height == 0); }

            /// Returns the value of width represented by the current object.
            inline int get_Width() const { return m_width; }
            /// Returns the value of heght represented by the current object.
            inline int get_Height() const{ return m_height; }

            /// Sets the value of width represented by the current object.
            /// @param value The value to set
            inline void set_Width(int value) { m_width = value; }
            /// Sets the value of height represented by the current object.
            /// @param value The value to set
            inline void set_Height(int value) { m_height = value; }

            /// Determines if the current object and the specified object are equal, i.e. represent the same
            /// pair of width and hegiht values.
            /// @param size The object to compare the current object with
            /// @returns True if the objects are equal, otherwise - false
            ASPOSECPP_SHARED_API bool Equals(const Size& size) const;
            /// Returns the string representation of the pair of width and hegiht values represented
            /// by the current object.
            ASPOSECPP_SHARED_API String ToString() const;
            /// Returns a hash code for the current object.
            ASPOSECPP_SHARED_API int32_t GetHashCode() const;

            /// Returns a new Size object that is a sum of the specified Size object, i.e. whose width value is equal to the sum of width values of the specified objects and 
            /// height value is equal to the sum of height values of the specified objects.
            /// @param size1 The first operand
            /// @param size2 The second operand
            /// @returns The Size object which is the sum of @p size1 and @p size2
            static ASPOSECPP_SHARED_API Size Add(const Size& size1, const Size& size2);
            /// Returns a new Size object that is the results of subctraction of @p size2 from @p size1, i.e. whose width value is the result of subtraction of @p size2's width value from
            /// @p size1's width value and height value is the result of subtraction of @p size2's height value from @p size1's height value.
            /// @param size1 The Size object to subtract from
            /// @param size2 The Size object to subtract
            /// @returns The Size object which is the result of subtraction of @p size2 from @p size1
            static ASPOSECPP_SHARED_API Size Subtract(const Size& size1, const Size& size2);

            /// Constructs a Size object from the specified SizeF object by rounding the SizeF object's
            /// width and height values to the next higher integer values.
            /// @param size The SizeF object to convert
            /// @returns A Size object constructed from @p size
            static ASPOSECPP_SHARED_API Size Ceiling(const SizeF& size);
            /// Constructs a Size object from the specified SizeF object by truncating the SizeF object's
            /// width and height values to the next lower integer values.
            /// @param size The SizeF object to convert to construct Size object from
            /// @returns A Size object constructed from @p size
            static ASPOSECPP_SHARED_API Size Truncate(const SizeF& size);
            /// Constructs a Size object from the specified SizeF object by rounding the SizeF object's
            /// width and height values to the nearest integer values.
            /// @param size The SizeF object to convert to construct Size object from
            /// @returns A Size object constructed from @p size
            static ASPOSECPP_SHARED_API Size Round(const SizeF& size);

            /// Constructs an instance of SizeF object and initializes it with width and hegiht values
            /// of the current Size object.
            ASPOSECPP_SHARED_API operator SizeF() const;
            /// Constructs an instance of Point object and initializes its X and Y coordinate with the current object's 
            /// width and height values correspondingly.
            ASPOSECPP_SHARED_API operator Point() const;

            /// Returns a new Size object that is a sum of the specified Size object, i.e. whose width value is equal to the sum of width values of the specified objects and 
            /// height value is equal to the sum of height values of the specified objects.
            /// @param size1 The first operand
            /// @param size2 The second operand
            /// @returns The Size object which is the sum of @p size1 and @p size2
            friend ASPOSECPP_SHARED_API Size operator+(const Size& size1, const Size& size2);
            /// Returns a new Size object that is the results of subctraction of @p size2 from @p size1, i.e. whose width value is the result of subtraction of @p size2's width value from
            /// @p size1's width value and height value is the result of subtraction of @p size2's height value from @p size1's height value.
            /// @param size1 The Size object to subtract from
            /// @param size2 The Size object to subtract
            /// @returns The Size object which is the result of subtraction of @p size2 from @p size1
            friend ASPOSECPP_SHARED_API Size operator-(const Size& size1, const Size& size2);
            /// Determines the equality of two Size objects by comparing their corresponding width and height values.
            /// @param size1 The first comparand
            /// @param size2 The second comparand
            /// @returns True if @p size1 and @p size2 are equal, otherwise - false
            friend ASPOSECPP_SHARED_API bool operator==(const Size& size1, const Size& size2);
            /// Determines the inequality of two Size objects by comparing their corresponding width and height values.
            /// @param size1 The first comparand
            /// @param size2 The second comparand
            /// @returns True if @p size1 and @p size2 are not equal, otherwise - false
            friend ASPOSECPP_SHARED_API bool operator!=(const Size& size1, const Size& size2);

            /// An empty instance of Size class whose width and height values are 0.
            ASPOSECPP_SHARED_API static const Size Empty;

        private:
            /// The width represented by the current object.
            int m_width;
            /// The height represented by the current object.
            int m_height;

    };

}}

namespace System
{
    /// A template predicate that determines if Drawing::Size class is boxable.
    template<> struct IsBoxable<Drawing::Size> : std::true_type {};

    /// Represents a boxed value of System::Drawing::Size type.
    template <>
    class BoxedValue<System::Drawing::Size> : public DefaultBoxedValue<System::Drawing::Size>
    {
    public:
        /// Constructs a BoxedValue object that represents the specified value boxed.
        /// @param value A Size value to be boxed
        BoxedValue(const System::Drawing::Size& value)
            : DefaultBoxedValue<System::Drawing::Size>(value)
        {}
    };
}

#endif // _aspose_system_drawing_size_h_
