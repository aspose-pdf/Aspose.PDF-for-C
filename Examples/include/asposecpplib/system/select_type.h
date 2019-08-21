/// @file system/select_type.h
/// Contains the declaration System::BytBool class and SelectType tempate struct.
#pragma once

#include <type_traits>
#include <fwd.h>

namespace System
{

namespace Details
{

/// Represents a boolean value through a 8-bit integer value.
struct ByteBool
{
    /// Alias for the type used to represent the boolean value.
    typedef uint8_t InternalType;

    /// The value storage.
    InternalType m_val;

    /// Constructs an instance of ByteBool that represents false.
    ByteBool()
        : m_val(false) {}

    /// Constructs an instance of ByteBool that represents the specified value.
    /// @param b The boolean value to be represented by the instance being constructed.
    explicit ByteBool(bool b)
        : m_val(b) {}

    /// Assigns the new boolean value to the current object.
    /// @param b The new value to assign
    /// @returns A reference to the self
    ByteBool& operator=(bool b)
    {
        m_val = b;
        return *this;
    }

    /// Casting to bool.
    /// @returns True if the current object represents boolean value true, otherwise - false
    operator bool() const
    {
        return !!m_val;
    }

    /// Determines if the current and the specified objects both represent the same boolean value.
    /// @param rhs The comparand
    /// @returns True if the current and the specified objects both represent the same boolean value, otherwise - false
    bool operator==(ByteBool rhs) const { return !!m_val == !!rhs.m_val; }
    
    /// Determines if the current object represents the specified boolean value.
    /// @param rhs The boolean value to compare with
    /// @returns True if the current object represents the specified boolean value, otherwise - false
    bool operator==(bool rhs) const { return !!m_val == rhs; }

    /// Determines if the current object represents a boolean value that is less than the value represented by the specified object.
    /// @param rhs The comparand
    /// @returns True if the current object represents false and the specified object represents true, otherwise - false
    bool operator<(ByteBool rhs) const { return !!m_val < !!rhs.m_val; }
    
    /// Determines if the current object represents a boolean value that is less than the specified value.
    /// @param rhs The comparand
    /// @returns True if the current object represents false and the specified value is true, otherwise - false
    bool operator<(bool rhs) const { return !!m_val < rhs; }
};

/// Determines if the specified ByteBool object represents the specified boolean value.
/// @param lhs The value to compare with
/// @param rhs The ByteBool object
/// @returns True if @p lhs is equal to the boolean value represented by @p rhs, otherwise - false
inline bool operator==(bool lhs, ByteBool rhs) { return rhs.operator==(lhs); }

/// Determines if the the specified objects represent different boolean values.
/// @param lhs The first comparand
/// @param rhs The second comparand
/// @returns True if @p lhs and @p rhs represent different boolean value, otherwise - false
inline bool operator!=(ByteBool lhs, ByteBool rhs) { return !lhs.operator==(rhs);  }

/// Determines if the boolean value represented by the specified ByteBool object is different from the specified boolean value.
/// @param lhs The ByteBool object
/// @param rhs The boolean value
/// @returns True if the boolean value represented by ByteBool object @p lhs is not equal to the boolean value @p rhs, otherwise - false
inline bool operator!=(ByteBool lhs, bool rhs) { return !lhs.operator==(rhs); }

/// Determines if the boolean value represented by the specified ByteBool object is different from the specified boolean value.
/// @param lhs The boolean value
/// @param rhs The ByteBool object
/// @returns True if the boolean value represented by ByteBool object @p rhs is not equal to the boolean value @p lhs, otherwise - false
inline bool operator!=(bool lhs, ByteBool rhs) { return !operator==(lhs, rhs);  }

/// Determines if the specified boolnean value is less than the boolean value represented by the specified ByteBool object.
/// @param lhs The boolean value
/// @param rhs The ByteBool object
/// @returns True @p lhs is false and @p rhs represents true, otherwise - false
inline bool operator<(bool lhs, ByteBool rhs) { return (lhs != rhs) && !(rhs < lhs); }
//TODO >, <=, >= operators

static_assert(sizeof(ByteBool) == 1, "Size of ByteBool must be 1");
static_assert(sizeof(ByteBool[17]) == 17, "Alignment of ByteBool must be 1");
static_assert(std::is_standard_layout<ByteBool>::value, "ByteBool must have Standard Layout");

/// Defines an alias for the type specified as a template parameter.
template<typename T>
struct SelectType
{
    /// An alias for a type to which this tempalate maps type @p T. 
    using type = T;
};

/// Specialization for bool which maps type bool to ByteBool.
template<>
struct SelectType<bool>
{
    /// An alias for a type to which this tempalate maps type bool.
    using type = Details::ByteBool;
};

} // namespace Details
} // namespace System
