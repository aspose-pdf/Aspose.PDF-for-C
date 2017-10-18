#ifndef _compare_options_h_
#define _compare_options_h_

namespace System { namespace Globalization {

    enum class CompareOptions {
        None = 0x00000000,
        IgnoreCase = 0x00000001,
        IgnoreNonSpace = 0x00000002,
        IgnoreSymbols = 0x00000004,
        IgnoreKanaType = 0x00000008,
        IgnoreWidth = 0x00000010,
        OrdinalIgnoreCase = 0x10000000,
        StringSort = 0x20000000,
        Ordinal = 0x40000000,
        };
}} // namespace System::Globalization
#endif
