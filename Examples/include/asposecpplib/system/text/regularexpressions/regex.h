/// @file system/text/regularexpressions/regex.h
#ifndef _aspose_system_regex_h_
#define _aspose_system_regex_h_

#include <system/text/regularexpressions/match_collection.h>
#include <system/text/regularexpressions/match.h>
#include <system/exceptions.h>
#include <system/multicast_delegate.h>

namespace System { namespace Text { namespace RegularExpressions {

namespace Detail
{
    class RegexHolder;
}

/// Delegate type to evaluate match.
using MatchEvaluator = System::MulticastDelegate<System::String(MatchPtr)>;

class Regex;
/// Regexp pointer.
typedef System::SharedPtr<Regex> RegexPtr;
class Match;

/// Regular expression that follows C#-like syntax.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Regex: public Object
{
    friend class Match;
public:
    /// Special timeout value to disable match break by timeout.
    static TimeSpan ASPOSECPP_SHARED_API InfiniteMatchTimeout;

    /// Constructs empty regexp.
    ASPOSECPP_SHARED_API Regex();
    /// Constructor.
    /// @param pattern C#-syntaxed pattern.
    ASPOSECPP_SHARED_API Regex(const String& pattern);
    /// Constructor.
    /// @param pattern C#-syntaxed pattern.
    /// @param options Regex matching options.
    ASPOSECPP_SHARED_API Regex(const String& pattern, RegexOptions options);
    /// Constructor.
    /// @param pattern C#-syntaxed pattern.
    /// @param options Regex matching options.
    /// @param matchTimeout Timeout to break matching.
    ASPOSECPP_SHARED_API Regex(const String& pattern, RegexOptions options, TimeSpan matchTimeout);

    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~Regex();

    /// Gets matching timeout.
    /// @return Matching timeout set to regex.
    TimeSpan get_MatchTimeout() { return m_matchTimeout; }
    /// Gets regex options.
    /// @return Options regex is created with.
    RegexOptions get_Options() { return m_options; }
    /// Checks if matching is done in right-to-left mode.
    /// @return True if matching is done right-to-left, false if it is done left-to-right.
    bool get_RightToLeft() { return (m_options & RegexOptions::RightToLeft) == RegexOptions::RightToLeft; }

    /// Matches regex against string.
    /// @param input Target string.
    /// @param startat Beginning index.
    /// @return True if string matches regex, false otherwise.
    ASPOSECPP_SHARED_API bool IsMatch(const String& input, int startat = 0);

    /// Matches regex against string.
    /// @param input Target string.
    /// @return Match value containing match status and submatches.
    ASPOSECPP_SHARED_API MatchPtr Match(const String& input);
    /// Matches regex against string.
    /// @param input Target string.
    /// @param startat Beginning index.
    /// @param length Number of characters to look through (0 to look through the whole string).
    /// @return Match value containing match status and submatches.
    ASPOSECPP_SHARED_API MatchPtr Match(const String& input, int startat, int length = 0);

    /// Gets all matches of regex in given string by matching repeatedly.
    /// @param input Input string.
    /// @param startat Index to start matching at.
    /// @return Collection of all matches found.
    ASPOSECPP_SHARED_API MatchCollectionPtr Matches(const String& input, int startat = 0);

    /// Replaces all matches of regex in string with replacement string.
    /// @param input Input string.
    /// @param replacement Replacement string.
    /// @return Input string with all regex matches replaced with replacement string.
    ASPOSECPP_SHARED_API String Replace(const String& input, const String& replacement);
    /// Replaces all matches of regex in string with replacement string.
    /// @param input Input string.
    /// @param replacement Replacement string.
    /// @return Input string with all regex matches replaced with replacement string.
    ASPOSECPP_SHARED_API String Replace(const String& input, const char_t* replacement);

    /// Replaces all matches of regex in string with replacement string.
    /// @param input Input string.
    /// @param pattern Regex pattern.
    /// @param replacement Replacement string.
    /// @return Input string with all regex matches replaced with replacement string.
    static ASPOSECPP_SHARED_API String Replace(const String& input, const char_t* pattern, const char_t* replacement);
    /// Replaces all matches of regex in string with replacement string.
    /// @param input Input string.
    /// @param pattern Regex pattern.
    /// @param replacement Replacement string.
    /// @return Input string with all regex matches replaced with replacement string.
    static ASPOSECPP_SHARED_API String Replace(const String& input, const String& pattern, const char_t* replacement);

    /// Replaces all matches in string with delegate-generated replacement strings.
    /// @param input Input string.
    /// @param evaluator Delegate to generate replacement strings based on matches.
    /// @return Input strings with all matches replaced.
    ASPOSECPP_SHARED_API String Replace(const String& input, MatchEvaluator evaluator);
    /// Replaces all matches in string with delegate-generated replacement strings.
    /// @param input Input string.
    /// @param evaluator Delegate to generate replacement strings based on matches.
    /// @param count Number of replacements limit.
    /// @return Input strings with all matches replaced.
    ASPOSECPP_SHARED_API String Replace(const String& input, MatchEvaluator evaluator, int count);
    /// Replaces all matches in string with delegate-generated replacement strings.
    /// @param input Input string.
    /// @param evaluator Delegate to generate replacement strings based on matches.
    /// @param count Number of replacements limit.
    /// @param startat Index in input string to start replacement at.
    /// @return Input strings with all matches replaced.
    ASPOSECPP_SHARED_API String Replace(const String& input, MatchEvaluator evaluator, int count, int startat);

    /// Replaces all matches of regex in string with replacement string.
    /// @param input Input string.
    /// @param pattern Regex pattern.
    /// @param replacement Replacement string.
    /// @param options Regex options.
    /// @return Input string with all regex matches replaced with replacement string.
    static ASPOSECPP_SHARED_API String Replace(const String& input, const String& pattern, const String& replacement, RegexOptions options);
    /// Replaces substrings in string. Not implemented.
    static ASPOSECPP_SHARED_API String Replace(const String& input, const String& replacement, int count);

    /// Splits string by regex matches.
    /// @param input String to split.
    /// @return Array of substrings between matches.
    ASPOSECPP_SHARED_API ArrayPtr<String> Split(const String& input);
    /// Splits string by regex matches.
    /// @param input String to split.
    /// @param count Number of substrings limit.
    /// @return Array of substrings between matches.
    ASPOSECPP_SHARED_API ArrayPtr<String> Split(const String& input, int count);

    /// Converts regex to string.
    /// @return Regex pattern.
    String ToString() ASPOSE_CONST override { return m_pattern; }

    // static methods
    /// Checks if string matches pattern.
    /// @param input Input string.
    /// @param pattern Regexp pattern.
    /// @param options Matching options.
    /// @param matchTimeout Timeout.
    /// @param startat Match beginning position.
    /// @return True if match is found, false otherwise.
    static ASPOSECPP_SHARED_API bool IsMatch(const String& input, const String& pattern,
                        RegexOptions options = RegexOptions::None,
                        TimeSpan matchTimeout = InfiniteMatchTimeout,
                        int startat = 0);
    /// Matches string and pattern.
    /// @param input Input string.
    /// @param pattern Regexp pattern.
    /// @param options Matching options.
    /// @param matchTimeout Timeout.
    /// @param startat Match beginning position.
    /// @param length Number of characters to look through (0 diables limit).
    /// @return First match found.
    static ASPOSECPP_SHARED_API MatchPtr Match(const String& input, const String& pattern,
                            RegexOptions options = RegexOptions::None,
                            TimeSpan matchTimeout = InfiniteMatchTimeout,
                            int startat = 0, int length = 0);
    /// Gets all matches between string and pattern.
    /// @param input Input string.
    /// @param pattern Regexp pattern.
    /// @param options Matching options.
    /// @param matchTimeout Timeout.
    /// @param startat Match beginning position.
    /// @param length Number of characters to look through (0 diables limit).
    /// @return All matches found by matching repeatedly.
    static ASPOSECPP_SHARED_API MatchCollectionPtr Matches(const String& input, const String& pattern,
                                        RegexOptions options = RegexOptions::None,
                                        TimeSpan matchTimeout = InfiniteMatchTimeout,
                                        int startat = 0, int length = 0);

    /// Replaces regex matches.
    /// @param input Input string.
    /// @param pattern Regexp pattern.
    /// @param replacement Replacement string.
    /// @return String with all matches replaced.
    static ASPOSECPP_SHARED_API String Replace(const String& input, const String& pattern, const String& replacement);
    /// Replaces regex matches.
    /// @param input Input string.
    /// @param pattern Regexp pattern.
    /// @param evaluator Delegate to generate replacement string for each match.
    /// @return String with all matches replaced.
    static ASPOSECPP_SHARED_API String Replace(const String& input, const String& pattern, MatchEvaluator evaluator);

    /// Splits string by regexp.
    /// @param input Input string.
    /// @param pattern Regexp pattern.
    /// @param options Matching options.
    /// @param matchTimeout Timeout.
    /// @return Array of strings between matchse.
    static ASPOSECPP_SHARED_API ArrayPtr<String> Split(const String& input, const String& pattern,
                                  RegexOptions options = RegexOptions::None,
                                  TimeSpan matchTimeout = InfiniteMatchTimeout);
    /// Splits string by regexp.
    /// @param input Input string.
    /// @param pattern Regexp pattern.
    /// @param count Match number limit.
    /// @param options Matching options.
    /// @param matchTimeout Timeout.
    /// @return Array of strings between matchse.
    static ASPOSECPP_SHARED_API ArrayPtr<String> Split(const String& input, const String& pattern, int count,
                                  RegexOptions options = RegexOptions::None,
                                  TimeSpan matchTimeout = InfiniteMatchTimeout);

    /// Escapes special characters to use string as part of the pattern.
    /// @param str String to escape special characters in.
    /// @return String with escaped special characters.
    static ASPOSECPP_SHARED_API String Escape(const String& str);
    /// Unescapes special characters in string used as part of the pattern.
    /// @param str String to unescape special characters in.
    /// @return String with unescaped special characters.
    static ASPOSECPP_SHARED_API String Unescape(const String& str);

private:
    /// Does actual matching.
    /// @param source Source string.
    /// @param index Position to start lookup from.
    /// @return First match found.
    MatchPtr Match(UStringPtr source, int index);

    /// Checks if character is a meta.
    /// @param ch Character to check.
    /// @return True if character is a substitution, fals otherwise.
    static bool IsMetachar(char_t ch);

    /// Pattern value.
    String m_pattern;
    /// Matching options.
    RegexOptions m_options;
    /// Matching timeout.
    TimeSpan m_matchTimeout;
    /// Regex implementation.
    std::unique_ptr<Detail::RegexHolder> m_regex_holder;

    /// Symbols categories to use for metacharacters lookup.
    static const unsigned char s_category[];

#ifdef __DBG_FOR_EACH_MEMEBR
public:
    /// Provides debug iteration throuhg container.
    /// @param visitor Visitor to apply to each element.
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        Object::DBG_for_each_member(visitor);
        visitor.add_self(this);
    }

    /// Provides debug class name.
    /// @return Pointer to string literal specifying class name.
    const char* DBG_class_name() const override { return "Regex"; }
    /// Overrides default implementation to specify that class contains debug information.
    bool DBG_unknown_type() const override { return false; }
#endif
};

}}} // namespace System::Text::RegularExpressions

#endif // _aspose_system_regex_h_

