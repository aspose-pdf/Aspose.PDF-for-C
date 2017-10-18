#ifndef _aspose_system_text_match_h_
#define _aspose_system_text_match_h_

#include "system/text/regularexpressions/group_collection.h"
#include "system/text/regularexpressions/regex_options.h"
#include "system/timespan.h"
#include "system/array.h"

namespace System { namespace Text { namespace RegularExpressions {

    class Regex;

    class Match;
    typedef SharedPtr<Match> MatchPtr;

    class Match : public Group
    {
    public:

        static MatchPtr get_Empty();
        GroupCollectionPtr get_Groups();
        MatchPtr NextMatch();
        virtual String Result(const String& replacement);

        Match();
        Match(const Match &copy);
        ~Match();

    private:

        GroupCollectionPtr groups;

        String pattern;
        std::wstring substring;
        RegexOptions options;

        static MatchPtr emptyMatch;
        static MatchPtr CreateEmptyMatch();
        static MatchPtr CreateMatch(const String& input, const String& pattern, RegexOptions options = RegexOptions::None, int startat = 0);

        friend class Regex;

    protected:
        virtual Object::shared_members_type GetSharedMembers() override;

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            Group::DBG_for_each_member(visitor);
            visitor.add_self(this);
            visitor.add_member(this, groups.get(), "groups");
        }

        const char* DBG_class_name() const override { return "Match"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };

}}} // namespace System::Text::RegularExpressions

#endif // _aspose_system_text_match_h_
