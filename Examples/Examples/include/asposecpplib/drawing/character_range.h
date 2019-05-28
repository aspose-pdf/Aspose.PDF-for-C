/// @file drawing/character_range.h
#ifndef _aspose_system_drawing_character_range_h_
#define _aspose_system_drawing_character_range_h_

#include "fwd.h"
#include "defines.h"

namespace System { namespace Drawing {

/// Represents a range of character positions in a string.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS CharacterRange
{
public:
    /// Constructs a new instance of CharacterRange class that represents the specified range.
    /// @param first The position in a string of the first characeter of the range represented by the current object
    /// @param length The number of characters in the range
    ASPOSECPP_SHARED_API CharacterRange(int32_t first, int32_t length);
    /// Constructs a new instance of CharacterRange class that represents an empty range.
    ASPOSECPP_SHARED_API CharacterRange();

    /// Returns the position of the first character of the range represented by the current object.
    ASPOSECPP_SHARED_API int32_t get_First() const;
    /// Sets the position of the first character of the range represented by the current object.
    /// @param first The value to set
    ASPOSECPP_SHARED_API void set_First(int32_t first);

    /// Returns the number of characters in the range represented by the current object.
    ASPOSECPP_SHARED_API int32_t get_Length() const;
    /// Returns the number of characters in the range represented by the current object.
    /// @param length The value to set
    ASPOSECPP_SHARED_API void set_Length(int32_t length);

    /// Determines if the current and specified objects represent the same range.
    /// @param cr The CharacterRange object to compare the current object with
    /// @returns True if both @p cr and the current objects represent the same range, otherwise - false
    ASPOSECPP_SHARED_API bool operator==(const CharacterRange& cr) const;
    /// Determines if the current and specified objects represent distinct ranges.
    /// @param cr The CharacterRange object to compare the current object with
    /// @returns True if @p cr and the current objects represent distinct ranges, otherwise - false
    ASPOSECPP_SHARED_API bool operator!=(const CharacterRange& cr) const;
    
private:
    /// The position of the first character of the range represented by the current object.
    int32_t m_first;
    /// The number of characters in the range represented by the current object.
    int32_t m_length;
};
}}


#endif
