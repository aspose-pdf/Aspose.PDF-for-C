/// @file system/details/format_parser.h
#ifndef _fmt_details_format_parser_h_
#define _fmt_details_format_parser_h_

#include <string>
#include <vector>
#include "fwd.h"
#include "system/details/has_tostring.h"

namespace System { namespace Details
{

/// Description of single format text fragment or substitution with argument index and optional format.
struct FormatItem
{
    enum 
    { 
        /// Argument index is unset.
        unset = -1 
    };

    /// Text (for text fragment) or format (for substitution item).
    std::u16string text_or_format;
    /// Argument index.
    int          arg_index;
    /// Padding; parsed, but ignored.
    int          padding;

    /// Initializes substitution item.
    /// @param idx Index of argument to paste in place of this format string fragment.
    FormatItem(int idx) : arg_index(idx), padding(0) {}
    /// Initializes text framgent item.
    /// @param str Text fragment.
    FormatItem(const std::u16string& str) : text_or_format(str), arg_index(unset), padding(0) {}
};

/// Holds list of format items defined in format string.
typedef std::vector<FormatItem> FormatItems;

/// Parses format string into vector of items.
class ASPOSECPP_SHARED_CLASS FormatParser
{
public:
    /// Initializes parser with given format string.
    /// @param format_str Format string to parse.
    ASPOSECPP_SHARED_API FormatParser(const std::u16string& format_str);

    /// Gets parsed list of format items.
    /// @return Parsed list of format items.
    FormatItems& items()
    {
        return m_items;
    }

private:
    /// Holds original format string.
    std::u16string m_holder;
    /// Iterator used to parse format string.
    std::u16string::const_iterator m_value_start;
    /// Iterator used to parse format string.
    std::u16string::const_iterator m_end;
    /// Current token length when parsing format string.
    size_t                       m_value_length;
    /// Parsed items.
    FormatItems                  m_items;

    /// Parses format string globally.
    ASPOSECPP_SHARED_API void Parse();
    /// Parses single item.
    ASPOSECPP_SHARED_API void ParseFormatItem();
    /// Parses padding entry.
    /// @param item Item to store parsed value into.
    ASPOSECPP_SHARED_API void ParsePadding(FormatItem& item);
    /// Parses format entry.
    /// @param item Item to store format into.
    ASPOSECPP_SHARED_API void ParseTypeFormat(FormatItem& item);
    /// Parses int entry.
    /// @return Parsed value.
    ASPOSECPP_SHARED_API int ParseInt();
    /// Adds text item from stream to m_items; optionally adds suffix.
    ASPOSECPP_SHARED_API void AddTextItem(const char_t * suffix = nullptr);
    /// Throws format error exception.
    ASPOSECPP_SHARED_API void ThrowFormatError();
};

}} // namespace System::Details
#endif // _fmt_details_format_parser_h_
