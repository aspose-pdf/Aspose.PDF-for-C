/// @file system/text/regularexpressions/group_collection.h
#ifndef _aspose_system_text_regularexpressions_group_collection_h_
#define _aspose_system_text_regularexpressions_group_collection_h_

#include <map>

#include <system/text/regularexpressions/group.h>
#include <system/collections/list.h>

namespace System {
namespace Text {
namespace RegularExpressions {

class Match;

/// List of capture groups in a single match.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS GroupCollection : public System::Collections::Generic::List<GroupPtr>
{
public:
    /// Base class.
    typedef System::Collections::Generic::List<GroupPtr> Base;
    /// Group accessor.
    using Base::idx_get;
    /// Group accessor.
    using Base::operator[];

    /// Constructor.
    /// @param match Match to catch groups for.
    ASPOSECPP_SHARED_API GroupCollection(WeakPtr<Match> match);

    /// Disables adding element into collection.
    /// @param item Item to add; ignored.
    void Add(const GroupPtr &item) override {}
    /// Disables dropping elements from collection.
    void Clear() override {}
    /// Disables removing element from collection.
    /// @param item Item to remove; ignored.
    bool Remove(const GroupPtr& item) override { return false; }
    /// Marks collection as read-only.
    /// @return Always returns true.
    bool IsReadOnly() const { return true; }

    /// Group accessor.
    /// @param name Group name.
    /// @return Group with specified name.
    GroupPtr operator[](const String& name) const
    {
        return idx_get(name);
    }
    /// Group accessor.
    /// @param name Group name.
    /// @return Group with specified name.
    virtual ASPOSECPP_SHARED_API GroupPtr idx_get(String name) const;

    /// Group accessor.
    /// @param index Group index.
    /// @return Group with specified index.
    GroupPtr get_Item(int index) const { return idx_get(index); }
    /// Group accessor.
    /// @param name Group name.
    /// @return Group with specified name.
    GroupPtr get_Item(const String& name) const { return idx_get(name); }
    /// Adds group into collection.
    /// @param item Item to add.
    void AddGroup(const GroupPtr &item);

protected:
    /// Constructor.
    GroupCollection() {};
    /// Match/
    WeakPtr<Match> match;


#ifdef __DBG_FOR_EACH_MEMEBR
public:
    /// Provides debug iteration throuhg container.
    /// @param visitor Visitor to apply to each element.
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        System::Collections::Generic::List<GroupPtr>::DBG_for_each_member(visitor);
        visitor.add_self(this);
    }

    /// Provides debug class name.
    /// @return Pointer to string literal specifying class name.
    const char* DBG_class_name() const override { return "GroupCollection"; }
    /// Overrides default implementation to specify that class contains debug information.
    bool DBG_unknown_type() const override { return false; }
#endif
};

/// Group collection pointer.
/// This type is a pointer to manage other object's deletion.
/// It should be allocated on stack and passed to functions either by value or by const reference.
class GroupCollectionPtr : public SharedPtr<GroupCollection>
{
public:
    /// Null pointer constructor.
    GroupCollectionPtr() {}
    /// Type convesion constructor.
    /// @param obj Object to reference.
    GroupCollectionPtr(const SharedPtr<GroupCollection>& obj) : SharedPtr<GroupCollection>(obj) { }

    /// Group accessor.
    /// @param idx Group index.
    /// @return Group with specified index.
    GroupPtr operator[] (size_t idx) const
    {
        return this->GetPointer()->get_Item((int)idx);
    }
};

}}}

#endif // _aspose_system_text_regularexpressions_group_collection_h_
