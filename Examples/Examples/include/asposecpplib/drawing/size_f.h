/// @file drawing/size_f.h
#ifndef _aspose_system_drawing_size_f_h_
#define _aspose_system_drawing_size_f_h_

#include "fwd.h"
#include <system/string.h>
#include <system/boxed_value.h>

namespace System { namespace Drawing {
    /// Represents a pair of single-precision floating point values that represent width and height of an image.
    /// This type should be allocated on stack and passed to functions by value or by reference.
    /// Never use System::SmartPtr class to manage objects of this type.
    class ASPOSECPP_SHARED_CLASS SizeF
    {
        public:
            /// Constructs a new SizeF object and initializes its width and height values with 0.
            ASPOSECPP_SHARED_API SizeF();
            /// Constructs a new SizeF object and initializes its width and height values
            /// with the values of X and Y coordinates of the specifide point correspondingly.
            /// @param point A Point object whose X and Y coordinates are used to initialize width and 
            /// height value of the SizeF object being created
            ASPOSECPP_SHARED_API SizeF(const PointF& point);
            /// Constructs a new SizeF object and initializes it with the specified value.
            /// @param width The value to width
            /// @param height The value of height
            ASPOSECPP_SHARED_API SizeF(float width, float height);

            /// Determines if both width and hegiht values are equal to 0.
            /// @returns True if both width and height represented by the current object are 0; 
            /// otherwise - false
            inline bool get_IsEmpty() const { return (m_width == 0.0f && m_height == 0.0f); }

            /// Returns the value of width represented by the current object.
            inline float get_Width() const { return m_width; }
            /// Returns the value of height represented by the current object.
            inline float get_Height() const { return m_height; }

            /// Sets the value of width represented by the current object.
            /// @param value The value to set
            inline void set_Width(float value) { m_width = value; }
            /// Sets the value of height represented by the current object.
            /// @param value The value to set
            inline void set_Height(float value) { m_height = value; }

            /// Determines if the current object and the specified object are equal, i.e. represent the same
            /// pair of width and hegiht values.
            /// @param size The object to compare the current object with
            /// @returns True if the objects are equal, otherwise - false
            ASPOSECPP_SHARED_API bool Equals(const SizeF& size) const;

            /// Converts the current object to an instance of Point object by initializing its X and Y coordinate with the current object's 
            /// width and height values correspondingly.
            ASPOSECPP_SHARED_API PointF ToPointF() const;

            /// Constructs a Size object from the current SizeF object by truncating the SizeF object's
            /// width and height values to the next lower integer values.
            /// @returns A Size object constructed from the current object
            ASPOSECPP_SHARED_API Size ToSize() const;

            /// Returns the string representation of the pair of width and hegiht values represented
            /// by the current object.
            System::String ToString() const { return String::Format(u"{{Width={0}, Height={1}}}", m_width, m_height); }
            /// Returns a hash code for the current object.
            ASPOSECPP_SHARED_API int32_t GetHashCode() const;

            /// Returns a new SizeF object that is a sum of the specified SizeF objects, i.e. whose width value is equal to the sum of width values of the specified objects and 
            /// height value is equal to the sum of height values of the specified objects.
            /// @param size1 The first operand
            /// @param size2 The second operand
            /// @returns The SizeF object which is the sum of @p size1 and @p size2
            static ASPOSECPP_SHARED_API SizeF Add(const SizeF& size1, const SizeF& size2);
            /// Returns a new SizeF object that is the results of subctraction of @p size2 from @p size1, i.e. whose width value is the result of subtraction of @p size2's width value from
            /// @p size1's width value and height value is the result of subtraction of @p size2's height value from @p size1's height value.
            /// @param size1 The SizeF object to subtract from
            /// @param size2 The SizeF object to subtract
            /// @returns The SizeF object which is the result of subtraction of @p size2 from @p size1
            static ASPOSECPP_SHARED_API SizeF Subtract(const SizeF& size1, const SizeF& size2);

            /// Converts the current object to an instance of Point object by initializing its X and Y coordinate with the current object's 
            /// width and height values correspondingly.
            ASPOSECPP_SHARED_API operator PointF() const;

            /// Returns a new SizeF object that is a sum of the specified SizeF objects, i.e. whose width value is equal to the sum of width values of the specified objects and 
            /// height value is equal to the sum of height values of the specified objects.
            /// @param size1 The first operand
            /// @param size2 The second operand
            /// @returns The SizeF object which is the sum of @p size1 and @p size2
            friend ASPOSECPP_SHARED_API SizeF operator+(const SizeF& size1, const SizeF& size2);
            /// Returns a new SizeF object that is the results of subctraction of @p size2 from @p size1, i.e. whose width value is the result of subtraction of @p size2's width value from
            /// @p size1's width value and height value is the result of subtraction of @p size2's height value from @p size1's height value.
            /// @param size1 The SizeF object to subtract from
            /// @param size2 The SizeF object to subtract
            /// @returns The SizeF object which is the result of subtraction of @p size2 from @p size1
            friend ASPOSECPP_SHARED_API SizeF operator-(const SizeF& size1, const SizeF& size2);
            /// Determines the equality of two SizeF objects by comparing their corresponding width and height values.
            /// @param size1 The first comparand
            /// @param size2 The second comparand
            /// @returns True if @p size1 and @p size2 are equal, otherwise - false
            friend ASPOSECPP_SHARED_API bool operator==(const SizeF& size1, const SizeF& size2);
            /// Determines the inequality of two SizeF objects by comparing their corresponding width and height values.
            /// @param size1 The first comparand
            /// @param size2 The second comparand
            /// @returns True if @p size1 and @p size2 are not equal, otherwise - false
            friend ASPOSECPP_SHARED_API bool operator!=(const SizeF& size1, const SizeF& size2);

            /// Adds the specified SizeF object's width and height values to the width and height values of the 
            /// current SizeF object correspondingly.
            /// @param size The object to add
            /// @returns A reference to the self
            ASPOSECPP_SHARED_API SizeF& operator+=(const SizeF& size);

            /// An empty instance of SizeF class whose width and height values are 0.
            static ASPOSECPP_SHARED_API const SizeF Empty;

        private:
            /// The width represented by the current object.
            float m_width;
            /// The height represented by the current object.
            float m_height;

    };

}}

namespace System
{
    /// A template predicate that determines if Drawing::SizeF class is boxable.
    template<> struct IsBoxable<Drawing::SizeF> : std::true_type {};

    /// Represents a boxed value of System::Drawing::SizeF type.
    template <>
    class BoxedValue<System::Drawing::SizeF> : public DefaultBoxedValue<System::Drawing::SizeF>
    {
    public:
        /// Constructs a BoxedValue object that represents the specified value boxed.
        /// @param value A SizeF value to be boxed
        BoxedValue(const System::Drawing::SizeF& value)
            : DefaultBoxedValue<System::Drawing::SizeF>(value)
        {}
    };
}

#endif // _aspose_system_drawing_size_f_h_
