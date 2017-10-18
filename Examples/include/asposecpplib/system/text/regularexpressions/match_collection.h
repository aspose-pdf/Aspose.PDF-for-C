#ifndef _match_collection_h_
#define _match_collection_h_

#include "system/text/regularexpressions/match.h"
#include "system/collections/arraylist.h"

namespace System {
namespace Text {
namespace RegularExpressions {

    class MatchCollection : public System::Collections::Generic::ArrayList<MatchPtr>
    {
        public:
            bool IsReadOnly() const { return true; };
        private:
            MatchCollection():ArrayList<MatchPtr>(){};
            friend class Match;
            FRIEND_FUNCTION_System_MakeObject
#ifdef __DBG_FOR_EACH_MEMEBR
        public:
            void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
            {
                System::Collections::Generic::ArrayList<MatchPtr>::DBG_for_each_member(visitor);
                visitor.add_self(this);
            }

            const char* DBG_class_name() const override { return "MatchCollection"; }
            bool DBG_unknown_type() const override { return false; }
#endif
    };

    typedef SharedPtr<MatchCollection> MatchCollectionPtr;

}}}

#endif // _match_collection_h_
