#ifndef _aspose_system_reflection_member_info_h_
#define _aspose_system_reflection_member_info_h_

#include <system/object.h>
#include <system/string.h>

namespace System { namespace Reflection {

        class MemberInfo : public System::Object
        {
        public:
            class TypeInternal
            {
            public:
                friend MemberInfo;
                const String& get_FullName() const { return m_full_name; }
            private:
                String m_full_name;
            };

            const String& get_Name() const ;

            const TypeInternal& get_DeclaringType() const;

            const String& get_FullName() const; //method for manually implemented parts

        protected:
            MemberInfo(const String& full_name);

        private:
            String m_full_name;
            String m_name;
            TypeInternal m_type_internal;
        };

}}

#endif