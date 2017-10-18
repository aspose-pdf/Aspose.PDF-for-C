#ifndef _aspose_system_text_regularexpressions_group_collection_h_
#define _aspose_system_text_regularexpressions_group_collection_h_

#include <system/text/regularexpressions/group.h>
#include <system/collections/list.h>

namespace System {
namespace Text {
namespace RegularExpressions {

    class Match;

    class GroupCollection : public System::Collections::Generic::List<GroupPtr>
    {
    public:

        void Add(const GroupPtr &item) override {}

        void Clear() override {}

        bool Remove(const GroupPtr& item) override { return false; }

        bool IsReadOnly() const { return true; }

        GroupPtr& operator[](int index)
        {
            return m_data[index];
        }

        GroupPtr operator[](String name) const
        {
            if (get_Count()<2)
                System::ArgumentOutOfRangeException();
            return m_data[m_data[0]->GetGroupIndexFromName(name)];
        }

        GroupPtr idx_get(int index)
        {
            return m_data[index];
        }

        GroupPtr idx_get(String name) const
        {
            if (get_Count()<2)
                System::ArgumentOutOfRangeException();
            return m_data[m_data[0]->GetGroupIndexFromName(name)];
        }

        GroupPtr get_Item(int index) const { return m_data[index]; }
        GroupPtr get_Item(String name) const { return (*this)[name]; }

        friend class Match;

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
            return this->get()->get_Item((int)idx);
        }

    };

}}}

#endif // _aspose_system_text_regularexpressions_group_collection_h_
