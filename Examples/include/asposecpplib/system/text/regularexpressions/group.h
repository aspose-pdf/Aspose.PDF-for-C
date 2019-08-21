/// @file system/text/regularexpressions/group.h
#ifndef _group_h_
#define _group_h_

#include "system/text/regularexpressions/capture_collection.h"

namespace System { namespace Text { namespace RegularExpressions {

class GroupCollection;

class Group;
/// Pointer to group.
typedef SharedPtr<Group> GroupPtr;

/// Result of matching done by single capturing group.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Group : public Capture
{
    friend class GroupCollection;
    friend class Match;

public:
    /// Gets available captures.
    /// @return Capture collection held.
    CaptureCollectionPtr get_Captures() { return captures; }
    /// Checks if capturing was successful for this group.
    /// @return True if one or more groups were captured, false otherwise.
    bool get_Success() { return (captures != nullptr) && captures->get_Count() > 0; }
    
    /// Constructor.
    /// @param source Source string.
    /// @param index Matching beginning index.
    /// @param length Match length.
    ASPOSECPP_SHARED_API Group(UStringPtr source, int index, int length);
    /// Constructor of empty group.
    ASPOSECPP_SHARED_API Group();
    /// Adds capture into group.
    /// @param item Capture to add.
    ASPOSECPP_SHARED_API void AddCapture(const CapturePtr item);

protected:
    /// Captures caught.
    CaptureCollectionPtr captures;

    static GroupPtr emptygroup;

protected:
    /// Provides GetSharedMember() function for container for loop references lookup.
    virtual Object::shared_members_type GetSharedMembers() override
    {
        Object::shared_members_type result = Capture::GetSharedMembers();
        result.Add("System::Text::RegularExpressions::Group::captures", captures);
        return result;
    }

#ifdef __DBG_FOR_EACH_MEMEBR
public:
    /// Provides debug iteration throuhg container.
    /// @param visitor Visitor to apply to each element.
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        Capture::DBG_for_each_member(visitor);
        visitor.add_self(this);
        visitor.add_member(this, captures.get_shared(), "captures");
    }

    /// Provides debug class name.
    /// @return Pointer to string literal specifying class name.
    const char* DBG_class_name() const override { return "Group"; }
    /// Overrides default implementation to specify that class contains debug information.
    bool DBG_unknown_type() const override { return false; }
#endif
};

typedef SharedPtr<Group> GroupPtr;

}}}

#endif // _group_h_

