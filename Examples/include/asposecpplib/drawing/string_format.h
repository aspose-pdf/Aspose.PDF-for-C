/// @file drawing/string_format.h
#ifndef _string_format_h_
#define _string_format_h_

#include "drawing/string_format_flags.h"
#include "drawing/string_alignment.h"
#include "drawing/string_trimming.h"
#include "drawing/string_digit_substitute.h"
#include "drawing/text/hotkey_prefix.h"
#include "drawing/character_range.h"

#include "system/array.h"
#include "system/exceptions.h"


namespace System { namespace Drawing {

class Graphics;

/// Encapsulates text layout information, display manipulations and OpenType features.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS StringFormat: public System::Object // ICloneable
{
public:
    /// Constructs a new instance of StringFormat class.
    ASPOSECPP_SHARED_API StringFormat();
    /// Constructs a new instance of StringFormat class with the specified format flags and language.
    /// @param options A bitwise combination of StringFormatFlags enum value that specify the string
    /// format to be represented by the object being created
    /// @param language A language of the text
    ASPOSECPP_SHARED_API StringFormat(StringFormatFlags options, int32_t language = 0);

    /// Copy constructor.
    /// @param format A StringFormat object to copy from
    ASPOSECPP_SHARED_API StringFormat(const SharedPtr<StringFormat>& format);

    /// Returns a StringFormat object that represents a generic typographic format.
    static ASPOSECPP_SHARED_API SharedPtr<StringFormat> get_GenericTypographic();
    /// Returns a StringFormat object that represents a generic default format.
    static ASPOSECPP_SHARED_API SharedPtr<StringFormat> get_GenericDefault();

    /// Returns a bitwise combination of StringFormatFlags that specifies the string format
    /// represented by the current object.
    ASPOSECPP_SHARED_API StringFormatFlags get_FormatFlags() const;
    /// Sets the string format flags.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_FormatFlags(StringFormatFlags value);

    /// Returns a value that indicates horizontal alignment of the string.
    ASPOSECPP_SHARED_API StringAlignment get_Alignment() const;
    /// Sets horizontal alignment of the string.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Alignment(StringAlignment value);

    /// Returns a value that indicates vertical alignment of the string.
    ASPOSECPP_SHARED_API StringAlignment get_LineAlignment() const;
    /// Sets vertical alignment of the string.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_LineAlignment(StringAlignment value);

    /// Returns a value that indicates how the string is trimmed.
    ASPOSECPP_SHARED_API StringTrimming get_Trimming() const;
    /// Sets a value that specifies how the string is trimmed.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Trimming(StringTrimming value);

    /// Returns the tab stops for the current StringFormat object.
    /// @param first_tab_offset Output argumnt; Contains the number of spaces between the beginning of a text line and the first tab stop
    /// @returns An array containing values which are the numbers of spaces between tab stops
    ASPOSECPP_SHARED_API ArrayPtr<float> GetTabStops(float &first_tab_offset) const;
    /// Sets the tab stops for the current StringFormat object.
    /// @param first_tab_offset The number of spaces between the beginning of a text line and the first tab stop
    /// @param tab_stops An array containing values which are the numbers of spaces between tab stops.
    ASPOSECPP_SHARED_API void SetTabStops(float first_tab_offset, const ArrayPtr<float>& tab_stops);

    /// Returns a value that indicats the language that is used when local digits are substituted with western digits.
    ASPOSECPP_SHARED_API int32_t get_DigitSubstitutionLanguage() const;
    /// Returns digit substitution method.
    ASPOSECPP_SHARED_API StringDigitSubstitute get_DigitSubstitutionMethod() const;

    /// Returns the value that indicates how the hot key prefix is displayed.
    ASPOSECPP_SHARED_API Text::HotkeyPrefix get_HotkeyPrefix() const;
    /// Sets the value that specifies how the hot key prefix should be displayed.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_HotkeyPrefix(Text::HotkeyPrefix value);

    /// Sets digit substitution language and method.
    /// @param language A language to bu esed when local digits are substituted with western digits.
    /// @param substitute Specifies how digits are displayed
    ASPOSECPP_SHARED_API void SetDigitSubstitution(int32_t language, StringDigitSubstitute substitute);

    /// Sets an array of CharacterRange objects that represent the chracter ranges
    /// measured by a call to the MeasureCharacterRanges() method.
    /// @param ranges The character ranges to set
    ASPOSECPP_SHARED_API void SetMeasurableCharacterRanges(const ArrayPtr<CharacterRange>& ranges);

    /// Returns an exact copy of the current object.
    ASPOSECPP_SHARED_API SharedPtr<StringFormat> Clone();

protected:
    friend class System::Drawing::Graphics;

    /// A bitwise combination of StringFormatFlags that specifies the string format
    /// represented by the current object.
    StringFormatFlags m_string_format_flags;
    /// A value that indicates horizontal alignment of the string.
    StringAlignment m_alignment;
    /// A value that indicates vertical alignment of the string.
    StringAlignment m_line_alignment;
    /// A value that indicates how the string is trimmed.
    StringTrimming m_trimming;
    /// Indicates the number of spaces between the beginning of a text line and the first tab stop.
    float m_first_tab_offset;
    /// Contains the numbers of spaces between tab stops.
    ArrayPtr<float> m_tab_stops;

private:
    /// Indicates whether the currnet object represents a generic typographic string format.
    bool m_is_generic_typographic = false;
    /// Indicates whether the currnet object represents a generic default string format.
    bool m_is_generic_default = false;

    Text::HotkeyPrefix m_hotkey_prefix;
    ArrayPtr<CharacterRange> m_character_ranges;
};

}}


#endif
