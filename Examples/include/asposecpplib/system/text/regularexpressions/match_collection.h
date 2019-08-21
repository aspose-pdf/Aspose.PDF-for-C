/// @file system/text/regularexpressions/match_collection.h
#ifndef _match_collection_h_
#define _match_collection_h_

#include "system/text/regularexpressions/match.h"
#include "system/collections/arraylist.h"

namespace System {
namespace Text {
namespace RegularExpressions {

/// Collection of matches done by repeatedly applying regexp to string.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS MatchCollection : public System::Collections::Generic::ArrayList<MatchPtr>
{
public:
    /// Marks collection as read-only.
    /// @return Always returns true.
    bool IsReadOnly() const { return true; };
private:
    /// Constructor.
    MatchCollection():ArrayList<MatchPtr>(){};
    friend class Match;
    /// Declaring template function System::MakeObject(...) a friend of this class.
    FRIEND_FUNCTION_System_MakeObject
#ifdef __DBG_FOR_EACH_MEMEBR
public:
    /// Provides debug iteration throuhg container.
    /// @param visitor Visitor to apply to each element.
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        System::Collections::Generic::ArrayList<MatchPtr>::DBG_for_each_member(visitor);
        visitor.add_self(this);
    }

    /// Provides debug class name.
    /// @return Pointer to string literal specifying class name.
    const char* DBG_class_name() const override { return "MatchCollection"; }
    /// Overrides default implementation to specify that class contains debug information.
    bool DBG_unknown_type() const override { return false; }
#endif
};

/// Match collection pointer.
typedef SharedPtr<MatchCollection> MatchCollectionPtr;

}}}

#endif // _match_collection_h_
