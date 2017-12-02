#ifndef _aspose_system_regex_h_
#define _aspose_system_regex_h_

#include <system/text/regularexpressions/match_collection.h>
#include <system/text/regularexpressions/match.h>
#include <system/exceptions.h>
#include <system/multicast_delegate.h>

namespace System { namespace Text { namespace RegularExpressions {

namespace Detail
{
    struct RegexHolder;
}

using MatchEvaluator = System::MulticastDelegate<System::String(MatchPtr)>;

class Regex;
typedef System::SharedPtr<Regex> RegexPtr;
class Match;

class Regex: public Object
{
    friend class Match;
public:

    static TimeSpan ASPOSECPP_SHARED_API InfiniteMatchTimeout;

    Regex();
    Regex(String pattern);
    Regex(String pattern, RegexOptions options);
    Regex(String pattern, RegexOptions options, TimeSpan matchTimeout);

    TimeSpan get_MatchTimeout() { return m_matchTimeout; }
    RegexOptions get_Options() { return m_options; }
    bool get_RightToLeft() { return (m_options & RegexOptions::RightToLeft) == RegexOptions::RightToLeft; }

    bool IsMatch(const String& input, int startat = 0);

    MatchPtr Match(const String& input);
    MatchPtr Match(const String& input, int startat, int length = 0);

    MatchCollectionPtr Matches(const String& input, int startat = 0);

    String Replace(const String& input, const String& replacement);
    String Replace(const String& input, const wchar_t* replacement);

    static String Replace(const String& input, const wchar_t* pattern, const wchar_t* replacement);
    static String Replace(const String& input, const String& pattern, const wchar_t* replacement);

    String Replace(const String& input, MatchEvaluator evaluator);
    String Replace(const String& input, MatchEvaluator evaluator, int count);
    String Replace(const String& input, MatchEvaluator evaluator, int count, int startat);

    static String Replace(const String& input, const String& pattern, const String& replacement, RegexOptions options)
    {
        throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }

    static String Replace(const String& input, const String& replacement, int count)
    {
        throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }

    ArrayPtr<String> Split(const String& input);
    ArrayPtr<String> Split(const String& input, int count);

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
    static String Unescape(String str)
    {
        throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }

private:

    MatchPtr Match(WStringPtr source, int index);

    static String ProcessHexEscape(const String& pattern);
    static bool IsMetachar(wchar_t ch);

    String m_pattern;
    RegexOptions m_options;
    TimeSpan m_matchTimeout;
    std::unique_ptr<Detail::RegexHolder> regex;

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

