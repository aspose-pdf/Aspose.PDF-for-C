#ifndef _aspose_system_regex_h_
#define _aspose_system_regex_h_

#include <system/text/regularexpressions/match_collection.h>
#include <system/exceptions.h>
#include <system/multicast_delegate.h>

namespace System { namespace Text { namespace RegularExpressions {

using MatchEvaluator = System::MulticastDelegate<System::String(MatchPtr)>;

class Regex: public Object
{
public:

    typedef System::SharedPtr<Regex> Ptr;

    static TimeSpan ASPOSECPP_SHARED_API InfiniteMatchTimeout;

    Regex() : m_pattern(L""), m_options(RegexOptions::None), m_matchTimeout(InfiniteMatchTimeout) {}

    Regex(String pattern)
        : m_pattern(pattern), m_options(RegexOptions::None), m_matchTimeout(InfiniteMatchTimeout) {}

    Regex(String pattern, RegexOptions options)
        : m_pattern(pattern), m_options(options), m_matchTimeout(InfiniteMatchTimeout){}

    Regex(String pattern, RegexOptions options, TimeSpan matchTimeout)
        : m_pattern(pattern), m_options(options), m_matchTimeout(matchTimeout) {}

    TimeSpan get_MatchTimeout() { return m_matchTimeout; }

    RegexOptions get_Options() { return m_options; }

    bool get_RightToLeft() { return (m_options & RegexOptions::RightToLeft) == RegexOptions::RightToLeft; }

    bool IsMatch(const String& input, int startat = 0)
    {
        return IsMatch(input, m_pattern, m_options, m_matchTimeout, startat);
    }

    MatchPtr Match(const String& input) { return Match(input, 0, 0); }

    MatchPtr Match(const String& input, int startat, int length = 0)
    {
        return Match(input, m_pattern, m_options, m_matchTimeout, startat, length);
    }

    MatchCollectionPtr Matches(const String& input, int startat = 0) const
    {
        return Matches(input, m_pattern, RegexOptions::None, InfiniteMatchTimeout, startat);
    }

    String Replace(const String& input, String replacement) const
    {
        return Replace(input, m_pattern, replacement);
    }

    String Replace(const String& input, const wchar_t* replacement) const
    {
        return Replace(input, m_pattern, String(replacement));
    }

    static String Replace(const String& input, const wchar_t* pattern, const wchar_t* replacement)
    {
        return Replace(input, String(pattern), String(replacement));
    }

    static String Replace(const String& input, const String& pattern, const wchar_t* replacement)
    {
        return Replace(input, pattern, String(replacement));
    }

    String Replace(const String& input, MatchEvaluator evaluator) const
    {
        return Replace(input, m_pattern, evaluator);
    }

    String Replace(const String& input, MatchEvaluator evaluator, int count) const;

    String Replace(const String& input, MatchEvaluator evaluator, int count, int startat) const;

    static String Replace(const String& input, const String& pattern, const String& replacement, RegexOptions options)
    {
        throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }

    static String Replace(const String& input, const String& replacement, int count)
    {
        throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }


    ArrayPtr<String> Split(const String& input) const
    {
        return Split(input, m_pattern, m_options, m_matchTimeout);
    }

    ArrayPtr<String> Split(const String& input, int count) const
    {
        return Split(input, m_pattern, count, m_options, m_matchTimeout);
    }

    String ToString() ASPOSE_CONST override { return m_pattern; }

    // static methods

    static bool IsMatch(const String& input, const String& pattern,
                        RegexOptions options = RegexOptions::None,
                        TimeSpan matchTimeout = InfiniteMatchTimeout,
                        int startat = 0);

    static MatchPtr Match(const String& input, const String& pattern,
                            RegexOptions options = RegexOptions::None,
                            TimeSpan matchTimeout = InfiniteMatchTimeout,
                            int startat = 0, int length = 0);

    static MatchCollectionPtr Matches(const String& input, const String& pattern,
                                        RegexOptions options = RegexOptions::None,
                                        TimeSpan matchTimeout = InfiniteMatchTimeout,
                                        int startat = 0, int length = 0);

    static String Replace(const String& input, const String& pattern, const String& replacement);

    static String Replace(const String& input, const String& pattern, MatchEvaluator evaluator);

    static ArrayPtr<String> Split(const String& input, const String& pattern,
                                  RegexOptions options = RegexOptions::None,
                                  TimeSpan matchTimeout = InfiniteMatchTimeout);

    static ArrayPtr<String> Split(const String& input, const String& pattern, int count,
                                  RegexOptions options = RegexOptions::None,
                                  TimeSpan matchTimeout = InfiniteMatchTimeout);

    static String Escape(String str);


private:

    static String ProcessHexEscape(const String& pattern);
    static bool IsMetachar(wchar_t ch);

    String m_pattern;
    RegexOptions m_options;
    TimeSpan m_matchTimeout;

    static const unsigned char s_category[];

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            Object::DBG_for_each_member(visitor);
            visitor.add_self(this);
        }

        const char* DBG_class_name() const override { return "Regex"; }
        bool DBG_unknown_type() const override { return false; }
#endif
};

}}} // namespace System::Text::RegularExpressions

#endif // _aspose_system_regex_h_

