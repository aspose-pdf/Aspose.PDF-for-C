#ifndef _aspose_system_text_match_h_
#define _aspose_system_text_match_h_

#include "system/text/regularexpressions/group_collection.h"
#include "system/text/regularexpressions/regex_options.h"
#include "system/timespan.h"
#include "system/array.h"

namespace System { namespace Text { namespace RegularExpressions {

    namespace Detail
    {
        struct RegexHolder;
        struct MatchResultsHolder;
    }

    class Regex;
    typedef System::SharedPtr<Regex> RegexPtr;


    class Match;
    typedef SharedPtr<Match> MatchPtr;

    class Match : public Group
    {
        friend GroupCollection;
        friend class Regex;
    public:

        Match(WStringPtr source, int index, int length);

        static MatchPtr get_Empty();
        GroupCollectionPtr get_Groups();
        MatchPtr NextMatch();
        virtual String Result(const String& replacement);

        void AddGroup(const GroupPtr &item);
        void AddCapture(const CapturePtr item);

    private:

        int getGroupIndexFromName(const String& name);

        GroupCollectionPtr groups;
        std::unique_ptr<Detail::MatchResultsHolder> what;
        RegexPtr regex;

        static MatchPtr emptyMatch;

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
