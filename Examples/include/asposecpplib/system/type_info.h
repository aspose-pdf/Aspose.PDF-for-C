#ifndef _TypeInfo_h_
#define _TypeInfo_h_

#include <system/reflection.h>

#include <memory>
#include <vector>
#include <functional>
#include <type_traits>
#include <cwchar>

#include <fwd.h>

namespace System { namespace Reflection { class Assembly; } }

namespace System
{
    class Object;
    class String;

    template <typename T>
    class ArrayPtr;

    // Calculationg hash in compile-time
    template<unsigned i>
    class StringHashCompiletime
    {
    public:
        static void Hash(uint32_t &hash, int strLen, const wchar_t *input)
        {
            hash = input[strLen - i] + (hash << 6) + (hash << 16) - hash;
            StringHashCompiletime<i - 1>::Hash(hash, strLen, input);
        }
    };

    // Specialization for last element
    template<>
    class StringHashCompiletime<0>
    {
    public:
        static void Hash(uint32_t &hash, int strLen, const wchar_t * input) { }
    };

    class TypeInfo;

    struct TypeInfoPtr
    {
        std::unique_ptr<TypeInfo> ptr;
        operator TypeInfo*() { return ptr.get(); }
    };

    class TypeInfo
    {
        const wchar_t *m_name;
        uint32_t m_nameSize;
        uint32_t m_hash;

        typedef SharedPtr<Object> ObjectPtr;
        typedef std::vector< ObjectPtr > ObjectVector;

        ObjectVector m_attributes;

    public:

        // SDBM hash algorithm
        static uint32_t StringHash(const wchar_t *str)
        {
            uint32_t hash = 0;

            while (wchar_t c = *str++)
                hash = c + (hash << 6) + (hash << 16) - hash;

            return hash;
        }

        //The constructor to be used if System.Type gets used as a class field
        TypeInfo() : m_name(L""), m_nameSize(0), m_hash(0)
        {}

        template<uint32_t N>
        TypeInfo(const wchar_t(&name)[N], uint32_t hash) : m_name(name), m_nameSize(N - 1), m_hash(hash)
        {
            if (!hash)
                StringHashCompiletime<N - 1>::Hash(m_hash, N - 1, name);
        }

        TypeInfo(const wchar_t * name) : m_name(name), m_nameSize(wcslen(name)), m_hash(0)
        {
            m_hash = StringHash(m_name);
        }

        String get_Name() const;

        String get_FullName() const;

        System::SharedPtr<System::Reflection::Assembly> get_Assembly() const;

        String get_AssemblyQualifiedName() const;

        bool IsSubclassOf(const TypeInfo& type) const;

        String ToString() const;

        uint32_t Hash() const
        {
            return m_hash;
        }

        int GetHashCode() const
        {
            return (int)m_hash;
        }

        bool operator == (const TypeInfo& info) const
        {
            return m_hash == info.Hash();
        }

        bool operator != (const TypeInfo& info) const
        {
            return m_hash != info.Hash();
        }

        void AddAttribute(const ObjectPtr& attribute)
        {
            m_attributes.push_back(attribute);
        }

        ObjectPtr GetCustomAttribute(const TypeInfo& attributeType) const;

        ArrayPtr<ObjectPtr> GetCustomAttributes() const;

        template <class T>
        static inline const TypeInfo& BoxedValueType()
        {
            return *System::static_holder<BoxedValue<T>>::GetValue();
        }

        template <class T>
        struct BoxedValue : System::TypeInfoPtr
        {
            std::wstring wname;
            BoxedValue()
            {
                std::string name = typeid(BoxedValue<T>).name();
                wname = std::wstring(name.size(), 0);
                for (size_t i = 0; i < name.size(); ++i)
                    wname[i] = (wchar_t)name[i];
                ptr = std::make_unique<System::TypeInfo>(wname.c_str());
            }
        };
    };

} // namespace System

namespace std
{
template<>
struct hash<System::TypeInfo> {
public:
    size_t operator()(const System::TypeInfo &ti) const
    {
        return ti.Hash();
    }
};
}

#endif // _TypeInfo_h_
