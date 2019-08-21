/// @file system/details/format_parser.h
#pragma once

#ifndef _aspose_system_string_h_
#error "Don't include this file directly, use <system/string.h> instead"
#endif

#include <vector>

namespace System { namespace Details {

/// Description of single format text fragment or substitution with argument index and optional format.
struct FormatItem final
{
    enum 
    { 
        /// Argument index is unset.
        unset = -1 
    };

    /// Text (for text fragment) or format (for substitution item).
    String text_or_format;
    /// Argument index.
    int arg_index = unset;
    /// Padding.
    int padding = 0;

    /// Initializes substitution item.
    /// @param idx Index of argument to paste in place of this format string fragment.
    FormatItem(int idx) : arg_index(idx) {}
    /// Initializes text framgent item.
    /// @param str Text fragment.
    FormatItem(String str) : text_or_format(std::move(str)) {}
};

/// Holds list of format items defined in format string.
typedef std::vector<FormatItem> FormatItems;

/// Parses format string into vector of items.
class ASPOSECPP_SHARED_CLASS FormatParser final
{
public:
    /// Initializes parser with given format string.
    /// @param format Format string to parse.
    ASPOSECPP_SHARED_API FormatParser(const String& format);

    /// Gets parsed list of format items.
    /// @return Parsed list of format items.
    FormatItems& items() { return m_items; }

    /// Gets parsed list of format items.
    /// @return Parsed list of format items.
    const FormatItems& items() const { return m_items; }

private:
    /// Holds original format string.
    String m_holder;
    /// Iterator used to parse format string.
    const char16_t* m_value_start;
    /// Iterator used to parse format string.
    const char16_t* m_end;
    /// Current token length when parsing format string.
    size_t m_value_length;
    /// Parsed items.
    FormatItems m_items;

    /// Parses format string globally.
    void Parse();
    /// Parses single item.
    void ParseFormatItem();
    /// Parses padding entry.
    /// @param item Item to store parsed value into.
    void ParsePadding(FormatItem& item);
    /// Parses format entry.
    /// @param item Item to store format into.
    void ParseTypeFormat(FormatItem& item);
    /// Parses int entry.
    /// @param allow_leading_whitespaces Allow leading whitespaces.
    /// @return Parsed value.
    int ParseInt(bool allow_leading_whitespaces);
    /// Adds text item from stream to m_items.
    void AddTextItem();
    /// Throws format error exception.
    [[noreturn]] void ThrowFormatError();
};

}} // namespace System::Details
