#ifndef _group_h_
#define _group_h_

#include "system/text/regularexpressions/capture_collection.h"

namespace System { namespace Text { namespace RegularExpressions {

class GroupCollection;

class Group;
typedef SharedPtr<Group> GroupPtr;

class Group : public Capture
{
    friend class GroupCollection;
    friend class Match;

public:

    CaptureCollectionPtr get_Captures() { return captures; }
    bool get_Success() { return captures.get() && captures->get_Count() > 0; }
    
    Group(std::shared_ptr<const std::wstring> source, int index, int length);
    void AddCapture(const CapturePtr item);

protected:

    CaptureCollectionPtr captures;


    int GetGroupIndexFromName(const String& name);

protected:

    virtual Object::shared_members_type GetSharedMembers() override
    {
        Object::shared_members_type result = Capture::GetSharedMembers();
        result.Add("System::Text::RegularExpressions::Group::captures", captures);
        return result;
    }

#ifdef __DBG_FOR_EACH_MEMEBR
public:
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        Capture::DBG_for_each_member(visitor);
        visitor.add_self(this);
        visitor.add_member(this, captures.get(), "captures");
    }

    const char* DBG_class_name() const override { return "Group"; }
    bool DBG_unknown_type() const override { return false; }
#endif
};

typedef SharedPtr<Group> GroupPtr;

}}}

#endif // _group_h_

