/// @file system/type_info.h
/// Contains the declaration System::TypeInfo class and supporting classes.
#ifndef _TypeInfo_h_
#define _TypeInfo_h_

#include <system/shared_ptr.h>
#include <system/reflection.h>

#include <memory>
#include <vector>
#include <functional>
#include <type_traits>
#include <cwchar>
#include <iosfwd>

#include <fwd.h>

namespace System { namespace Reflection { class Assembly; } }

namespace System
{

    class Object;
    class String;

/// A helper class that generates a hash value from a c-string.
/// @tparam i The length of the string for which the hash value has to be generated.
template<unsigned i>
class StringHashCompiletime
{
public:
    /// Generates a hash value from the specified c-string of the specified length.
    /// @param input A pointer to the beginning of the c-string.
    /// @param strLen The length of the specified c-string
    /// @param hash The output parameter, which contains the resulting hash value on method return
    static void Hash(uint32_t &hash, int strLen, const char_t *input)
    {
        hash = input[strLen - i] + (hash << 6) + (hash << 16) - hash;
        StringHashCompiletime<i - 1>::Hash(hash, strLen, input);
    }
};

/// Specialization for the empty string.
template<>
class StringHashCompiletime<0>
{
public:
    /// Does nothing.
    static void Hash(uint32_t &hash, int strLen, const char_t* input) { }
};

class TypeInfo;

/// Wrapper for a pointer to an instance of TypeInfo class.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
struct TypeInfoPtr
{
    /// Unique pointer to the TypeInfo object.
    std::unique_ptr<TypeInfo> ptr;
    /// Returns a raw pointer to the represented TypeInfo object.
    operator TypeInfo*() { return ptr.get(); }

    // Explicitly deleting some members to avoid warnings.
    TypeInfoPtr() = default;
    TypeInfoPtr(const TypeInfoPtr&) = delete;
    TypeInfoPtr& operator = (const TypeInfoPtr&) = delete;
};

/// Represents a particular type and provides information about it.
class ASPOSECPP_SHARED_CLASS TypeInfo
{
    /// C-string containing the name of the type represented by the current object.
    const char_t *m_name;
    /// The length of the c-string containing the name of the type represented by the current object.
    uint32_t m_name_size;
    /// Type name hash to boost up typenames comparison.
    uint32_t m_hash;
        
    /// Alias for a shared pointer to Object.
    typedef SharedPtr<Object> ObjectPtr;
    /// Alias for a vector of shared pointers to Object.
    typedef std::vector< ObjectPtr > ObjectVector;
    /// Type's attributes.
    ObjectVector m_attributes;
public:

    // SDBM hash algorithm
    /// Calculates a hash value ofor the specified c-string.
    /// @param str A pointer to the beginning of a c-string
    /// @returns A 32-bit integer hash value for the specified string
    static uint32_t StringHash(const char_t *str)
    {
        uint32_t hash = 0;

        while (char_t c = *str++)
            hash = c + (hash << 6) + (hash << 16) - hash;

        return hash;
    }

    //The constructor to be used if System.Type gets used as a class field
    /// Constructs an instance of TypeInfo class that does not represent any type.
    TypeInfo() : m_name(u""), m_name_size(0), m_hash(0)
    {}

    /// Constructs an instance of TypeInfo class that represents a type with the specified name and associates the specified hash value with it.
    /// @param name The name of the type to be represented by the instance being constructed
    /// @param hash The hash value to associated with the type; if the argument is equal to 0, the hash value is generated
    template<uint32_t N>
    TypeInfo(const char_t(&name)[N], uint32_t hash) : m_name(name), m_name_size(N - 1), m_hash(hash)
    {
        if (!hash)
            StringHashCompiletime<N - 1>::Hash(m_hash, N - 1, name);
    }

    /// Constructs an instance of TypeInfo class that represents a type with the specified name and associates the specified hash value with it.
    /// @param name The name of the type to be represented by the instance being constructed
    TypeInfo(const char_t * name) : m_name(name), m_name_size(ASPOSECPP_CHECKED_CAST(uint32_t, std::char_traits<char_t>::length(name))), m_hash(0)
    {
        m_hash = StringHash(m_name);
    }

    /// Constructs an instance of TypeInfo class that does not represent any type.
    TypeInfo(std::nullptr_t) : m_name(u""), m_name_size(0), m_hash(0)
    {}

    /// Returns the name of the type represented by the current object.
    ASPOSECPP_SHARED_API String get_Name() const;

    /// Returns the fully qualified name (but without the assembly name) of the type represented by the current object.
    ASPOSECPP_SHARED_API String get_FullName() const;

    /// NOT IMPLEMENTED.
    /// Returns a pointer to the assembly in which the type represented by the current object is declared.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Reflection::Assembly> get_Assembly() const;

    /// NOT IMPLEMENTED.
    /// Returns the fully qualified name including the assembly name of the type represented by the current object.
    ASPOSECPP_SHARED_API String get_AssemblyQualifiedName() const;

    /// NOT IMPLEMENTED.
    /// Determines whether the type represented by the current object is a subclass of the specified class.
    ASPOSECPP_SHARED_API bool IsSubclassOf(const TypeInfo& type) const;

    /// Returns a string containing the name of the type represented by the current object.
    ASPOSECPP_SHARED_API String ToString() const;

    /// Returns a hash value associated with the type represented by the current object.
    uint32_t Hash() const
    {
        return m_hash;
    }

    /// Returns a hash code associated with this instance.
    int GetHashCode() const
    {
        return (int)m_hash;
    }

    /// Determines if the current and the specified TypeInfo objects are equal.
    /// @param info The TypeInfo object to compare with
    /// @returns True if the objects' hashes are equal, otherwise - false
    bool operator == (const TypeInfo& info) const
    {
        return m_hash == info.Hash();
    }

    /// Determines if the current and the specified TypeInfo objects are not equal.
    /// @param info The TypeInfo object to compare with
    /// @returns True if the objects' hashes are not equal, otherwise - false
    bool operator != (const TypeInfo& info) const
    {
        return m_hash != info.Hash();
    }
        
    /// Determines if the current TypeInfo object is a null-object, i.e. does not represent any type.
    /// @returns True if the current TypeInfo object is a null-object, otherwise - false
    bool operator == (std::nullptr_t) const
    {
        return m_name_size == 0;
    }

    /// Determines if the current TypeInfo object is not a null-object, i.e. it represents some type.
    /// @returns True if the current TypeInfo object is not a null-object, otherwise - false
    bool operator != (std::nullptr_t) const
    {
        return m_name_size != 0;
    }

    /// Adds the specified attribute to the list of type's attributes.
    /// @param attribute A constant reference to an object that represents an attribute to be added
    void AddAttribute(const ObjectPtr& attribute)
    {
        m_attributes.push_back(attribute);
    }

    /// Searches for the custom attribute applied having the specified type and applied to the type reprsented by the current object.
    /// @param attributeType The constant reference to the TypeInfo object representing the type of the attribute to search
    /// @returns A pointer to an object representing the found attribute, or null-pointer if no attribute was foud matching the search criteria
    ASPOSECPP_SHARED_API ObjectPtr GetCustomAttribute(const TypeInfo& attributeType) const;

    /// Returns an array containing objects that represent all custom attributes applied to the type represented by the current object.
    ASPOSECPP_SHARED_API ArrayPtr<ObjectPtr> GetCustomAttributes() const;

    /// Provides unique TypeInfo structure for BoxedValue type to be shared by multiple Boxed* classes.
    /// @tparam T Type to hold TypeInfo structure for.
    /// @return TypeInfo structure which is unique per class.
    template <class T>
    static inline const TypeInfo& BoxedValueType()
    {
        return *System::static_holder<BoxedValue<T>>::GetValue();
    }

    /// TypeInfo structure for BoxedValue class.
    template <class T>
    struct BoxedValue : System::TypeInfoPtr
    {
        /// String representation of type name.
        std::u16string wname;
        /// Fills appropriate type name.
        BoxedValue()
        {
            std::string name = typeid(BoxedValue<T>).name();
            wname = std::u16string(name.size(), 0);
            for (size_t i = 0; i < name.size(); ++i)
                wname[i] = (char_t)name[i];
            ptr = std::make_unique<System::TypeInfo>(wname.c_str());
        }
    };
};

/// Prints string to ostream. Mostly used for debug.
/// @param value to print.
/// @param os target ostream.
ASPOSECPP_SHARED_API void PrintTo(const System::TypeInfo& value, std::ostream* os);

} // namespace System

namespace std
{
/// Template specification for TypeInfo type.
template<>
struct hash<System::TypeInfo> {
public:
    /// Generates hash for the specified value.
    /// @param ti An object for which to generate a hash
    /// @returns A hash for @p ti
    size_t operator()(const System::TypeInfo &ti) const
    {
        return ti.Hash();
    }
};
}

#endif // _TypeInfo_h_
