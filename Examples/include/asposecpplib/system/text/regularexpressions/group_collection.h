#ifndef _aspose_system_text_regularexpressions_group_collection_h_
#define _aspose_system_text_regularexpressions_group_collection_h_

#include <map>

#include <system/text/regularexpressions/group.h>
#include <system/collections/list.h>

namespace System {
namespace Text {
namespace RegularExpressions {

    class Match;
    class GroupCollection : public System::Collections::Generic::List<GroupPtr>
    {
    public:
        typedef System::Collections::Generic::List<GroupPtr> Base;
        using Base::idx_get;
        using Base::operator[];

        GroupCollection(WeakPtr<Match> match);

        void Add(const GroupPtr &item) override {}

        void Clear() override {}

        bool Remove(const GroupPtr& item) override { return false; }

        bool IsReadOnly() const { return true; }

        GroupPtr operator[](String name) const
        {
            return idx_get(name);
        }

        virtual GroupPtr idx_get(String name) const;

        GroupPtr get_Item(int index) const { return idx_get(index); }
        GroupPtr get_Item(String name) const { return idx_get(name); }
        void AddGroup(const GroupPtr &item);

    protected:
        GroupCollection() {};
        WeakPtr<Match> match;


#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            System::Collections::Generic::List<GroupPtr>::DBG_for_each_member(visitor);
            visitor.add_self(this);
        }

        const char* DBG_class_name() const override { return "GroupCollection"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };

    class GroupCollectionPtr : public SharedPtr<GroupCollection>
    {
    public:

        GroupCollectionPtr() {}
        GroupCollectionPtr(const SharedPtr<GroupCollection>& obj) : SharedPtr<GroupCollection>(obj) { }

        GroupPtr operator[] (size_t idx) const
        {
            return (*this)->idx_get((int)idx);
        }

    };

}}}

#endif // _aspose_system_text_regularexpressions_group_collection_h_
