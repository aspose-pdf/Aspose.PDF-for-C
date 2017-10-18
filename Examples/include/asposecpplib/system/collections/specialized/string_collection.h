#ifndef _aspose_system_collections_specialized_string_collection_h
#define _aspose_system_collections_specialized_string_collection_h

#include "system/object.h"
#include "system/string.h"
#include "system/array.h"

#include "system/collections/icollection.h"
#include "system/collections/base_enumerator.h"

namespace System {
namespace Collections {
namespace Specialized {

    class StringCollection : virtual public Object, public Generic::IEnumerable<System::String>
    {
        RTTI_INFO(StringCollection, ::System::BaseTypesInfo<System::Object>);

    public:

        class Enumerator : virtual public Object, public Generic::SimpleEnumerator<std::vector<System::String> >
        {
        public:
            Enumerator(const SharedPtr<StringCollection>& data) : Generic::SimpleEnumerator<std::vector<System::String> >(data, data->m_data) { }
            RTTI_INFO(StringCollection::Enumerator, ::System::BaseTypesInfo<System::Object>);
        };

        StringCollection();

        SharedPtr<Generic::IEnumerator<System::String> > GetEnumerator() override
        {
            return MakeObject<Enumerator>(MakeSharedPtr(this));
        }

        int get_Count() const;

        System::String& operator[](int index);

        System::String idx_get(int index) const;
        void           idx_set(int index, const System::String& value);

        int Add(const System::String& value);

        void AddRange(const ArrayPtr<System::String>& range);

        void Clear();

        bool Contains(const System::String& value) const;

        int IndexOf(const System::String& value) const;

        void Insert(int index, const System::String& value);

        void Remove(const System::String& value);

        void RemoveAt(int index);

        std::vector<System::String>& data();
        const std::vector<System::String>& data() const;

    protected:

        std::vector<System::String> m_data;

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            visitor.add_self(this);
        }

        const char* DBG_class_name() const override { return "StringCollection<T>"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };

    class StringCollectionPtr : public SharedPtr<StringCollection>
    {
    public:
        StringCollectionPtr() {}
        StringCollectionPtr(const SharedPtr<StringCollection>& obj) : SharedPtr<StringCollection>(obj) { }

        System::String& operator[] (size_t idx) const
        {
            return (*(this->get()))[idx];
        }
    };

} // namespace Specialized
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_specialized_string_collection_h