/// @file system/globalization/compare_options.h
#ifndef _compare_options_h_
#define _compare_options_h_

namespace System { namespace Globalization {

/// String comparison options.
enum class CompareOptions
{
    /// No special options.
    None = 0x00000000,
    /// Ignore case.
    IgnoreCase = 0x00000001,
    /// Ignore nonspacing combining characters, e. g. diacritics.
    IgnoreNonSpace = 0x00000002,
    /// Include whitespaces, punctuation signs and so on.
    IgnoreSymbols = 0x00000004,
    /// Ignore kana type (Japanese).
    IgnoreKanaType = 0x00000008,
    /// Ignore character width wen comparing strings.
    IgnoreWidth = 0x00000010,
    /// Ordinal comparison with case difference ignored.
    OrdinalIgnoreCase = 0x10000000,
    /// Use string sort algorithm to compare characters.
    StringSort = 0x20000000,
    /// Compare UTF codes directly for first comparison.
    Ordinal = 0x40000000,
};

}} // namespace System::Globalization
#endif
