#ifndef _fmt_details_format_parser_h_
#define _fmt_details_format_parser_h_

#include <string>
#include <vector>
#include "fwd.h"
#include "system/details/has_tostring.h"

namespace System { namespace Details
{
    struct FormatItem
    {
        enum { unset = -1 };

        std::wstring text_or_format;
        int          arg_index;
        int          padding; // not used, only parsed!

        FormatItem(int idx) : arg_index(idx), padding(0) {}
        FormatItem(const std::wstring& str) : text_or_format(str), arg_index(unset), padding(0) {}
    };

    typedef std::vector<FormatItem> FormatItems;

    class FormatParser
    {
    public:

        FormatParser(const std::wstring& format_str);

        FormatItems& items()
        {
            return m_items;
        }

    private:

        std::wstring m_holder;
        std::wstring::const_iterator m_value_start;
        std::wstring::const_iterator m_end;
        size_t                       m_value_length; // current token length
        FormatItems                  m_items;

        void Parse();
        void ParseFormatItem();
        void ParsePadding(FormatItem& item);
        void ParseTypeFormat(FormatItem& item);
        int ParseInt();
        void AddTextItem(const wchar_t * suffix = nullptr);
        void ThrowFormatError();
    };
}} // namespace System::Details
#endif // _fmt_details_format_parser_h_
