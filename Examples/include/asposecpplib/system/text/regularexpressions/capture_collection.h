#ifndef _aspsoe_system_text_regularexpressions_capture_collection_h_
#define _aspsoe_system_text_regularexpressions_capture_collection_h_

#include <system/text/regularexpressions/capture.h>
#include <system/exceptions.h>
#include <vector>
#include "system/cycles_detection.h"

namespace System {
namespace Text {
namespace RegularExpressions {

    class Match;

    class CaptureCollection: public Object
    {
    public:
            int get_Count() const { return m_data.size(); }
            bool Add(const CapturePtr item) { return false; }
            void Clear() {}
            bool Contains(const CapturePtr item) const { return (m_data.size()>0) & (m_data[0] == item); }
            bool Remove(const CapturePtr item) { return false; }
            bool get_IsReadOnly() const { return true; }
            bool get_IsSynchronized() const { return false; }

            const CapturePtr get_Item(int index) const { return (*this)[index]; }

            const CapturePtr operator[](int index) const
            {
                if(index < 0 || index >= (int) m_data.size())
                    throw System::ArgumentOutOfRangeException();

                return m_data[index];
            }

            const CapturePtr idx_get(int index) const
            {
                return (*this)[index];
            }

    protected:
            std::vector<CapturePtr> m_data;

            friend class Match;

            virtual Object::shared_members_type GetSharedMembers() override
            {
                Object::shared_members_type result = Object::GetSharedMembers();
                Object::PopulateSharedMembers(result, "System::Text::RegularExpressions::CaptureCollection::m_data[]", m_data);
                return result;
            }

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            Object::DBG_for_each_member(visitor);
            visitor.add_self(this);
            for_each_of_Object(this, m_data, visitor);
        }

        const char* DBG_class_name() const override { return "CaptureCollection"; }
        bool DBG_unknown_type() const override { return false; }
#endif

    };

    typedef SharedPtr<CaptureCollection> CaptureCollectionPtr;

}}}

#endif // _aspsoe_system_text_regularexpressions_capture_collection_h_
