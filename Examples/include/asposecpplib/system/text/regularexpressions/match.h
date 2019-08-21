/// @file system/text/regularexpressions/match.h
#ifndef _aspose_system_text_match_h_
#define _aspose_system_text_match_h_

#include "system/text/regularexpressions/group_collection.h"
#include "system/text/regularexpressions/regex_options.h"
#include "system/timespan.h"
#include "system/array.h"

// Wrappers for types from 3rd party libraries
#ifdef ASPOSECPP_SHARED_EXPORTS
#include <regex_holders.h>
#endif

namespace System { namespace Text { namespace RegularExpressions {

namespace Detail
{
    /// Forward declaration of MatchHolder class
    ASPOSECPP_3RD_PARTY_CLASS(MatchHolder);

    /// Implementation container for regexp.
    class RegexHolder;

    /// This structure is used for dynamic independent calculation of MatchHolder size
    class DummyMatchHolder
    {
        std::unique_ptr<void, void(*)()> p1;
        std::unique_ptr<void, void(*)()> p2;
        bool b1;
        std::shared_ptr<int> s1;

        // Explicitly deleting constructor to avoid warnings.
        DummyMatchHolder() = delete;
    };
}

/// Wrapper to hold MatchHolder class without its including as well as PCRE2
ASPOSECPP_3RD_PARTY_UNCOPYBALE_TYPE_HOLDER(Detail::MatchHolder, MatchHolder, sizeof(Detail::DummyMatchHolder),
                                           Detail::DummyMatchHolder, MatchHolderAlias);

class Regex;
/// Regex pointer.
typedef System::SharedPtr<Regex> RegexPtr;


class Match;
/// Match pointer.
typedef SharedPtr<Match> MatchPtr;

/// Single match of regexp over string.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Match : public Group
{
    friend GroupCollection;
    friend class Regex;
public:
    /// Constructor.
    /// @param source Source stirng.
    /// @param index Match start index.
    /// @param length Match length.
    ASPOSECPP_SHARED_API Match(UStringPtr source, int index, int length);

    /// Empty match accessor.
    /// @return Empty match singleton.
    static ASPOSECPP_SHARED_API MatchPtr get_Empty();
    /// Gets group list.
    /// @return Groups owned by match.
    ASPOSECPP_SHARED_API GroupCollectionPtr get_Groups();
    /// Iteration over matches.
    /// @return Next match.
    ASPOSECPP_SHARED_API MatchPtr NextMatch();
    /// Formats string by replacing submatch references with their values.
    /// @param replacement Format string with '$?'-styled substitutions.
    /// @return Format string with substitutions done.
    virtual ASPOSECPP_SHARED_API String Result(const String& replacement);
    
    ASPOSECPP_SHARED_API void SetMappedIndexes(const std::vector<int>& mapped_indexes);

    /// Adds group into match.
    /// @param item Item to add.
    ASPOSECPP_SHARED_API void AddGroup(const GroupPtr &item);
    /// Adds capture into match.
    /// @param item Item to add.
    ASPOSECPP_SHARED_API void AddCapture(const CapturePtr item);

private:
    /// Converts subexpression name to index.
    /// @param name Subexpression name.
    /// @return Subexpression index.
    int GetGroupIndexFromName(const String& name);

    /// Match groups.
    GroupCollectionPtr groups;
    /// Group's index from original sets
    std::vector<int> m_mapped_indexes;
    /// Actual match results (pointer implementation).
    MatchHolderAlias what;
    /// Regular expression used to create match.
    RegexPtr regex;
    /// Empty match.
    static MatchPtr emptyMatch;

protected:
    /// Provides GetSharedMember() function for container for loop references lookup.
    virtual ASPOSECPP_SHARED_API Object::shared_members_type GetSharedMembers() override;

#ifdef __DBG_FOR_EACH_MEMEBR
public:
    /// Provides debug iteration throuhg container.
    /// @param visitor Visitor to apply to each element.
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        Group::DBG_for_each_member(visitor);
        visitor.add_self(this);
        visitor.add_member(this, groups.get_shared(), "groups");
    }

    /// Provides debug class name.
    /// @return Pointer to string literal specifying class name.
    const char* DBG_class_name() const override { return "Match"; }
    /// Overrides default implementation to specify that class contains debug information.
    bool DBG_unknown_type() const override { return false; }
#endif
};

}}} // namespace System::Text::RegularExpressions

#endif // _aspose_system_text_match_h_
