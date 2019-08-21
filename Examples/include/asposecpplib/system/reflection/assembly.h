/// @file system/reflection/assembly.h
#ifndef _system_reflection_assembly_h_
#define _system_reflection_assembly_h_

#include <system/object.h>
#include <system/string.h>
#include <system/array.h>
#include <system/reflection/assembly_name.h>

#include <map>
#include <vector>

namespace System{ namespace Reflection{

/// Reflection class describing assembly.
/// Support is limited as the rules are quite different between C# and C++.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Assembly: public System::Object
{
public:
    /// Constructor.
    ASPOSECPP_SHARED_API Assembly();

    /// Gets executing assembly.
    /// @return Pointer to executing aseembly.
    static ASPOSECPP_SHARED_API System::SharedPtr<Assembly> GetExecutingAssembly();
    /// Gets entry assembly.
    /// @return Pointer to entry aseembly.
    static ASPOSECPP_SHARED_API System::SharedPtr<Assembly> GetEntryAssembly();
    /// Gets calling assembly.
    /// @return Pointer to calling aseembly.
    static ASPOSECPP_SHARED_API System::SharedPtr<Assembly> GetCallingAssembly();
    /// Gets assembly defining specific type.
    /// @param type Type to get defining assembly for.
    /// @return Pointer to assembly defining specific type.
    static ASPOSECPP_SHARED_API System::SharedPtr<Assembly> GetAssembly(const TypeInfo& type);

    /// Gets stream connected to manifest resource.
    /// @param name Resource name.
    /// @return Stream pointer.
    virtual ASPOSECPP_SHARED_API System::SharedPtr<System::IO::Stream> GetManifestResourceStream(String name) const;
    /// Gets names of manifest resources.
    /// @return Array of resoure names.
    virtual ASPOSECPP_SHARED_API ArrayPtr<String> GetManifestResourceNames() const;
    /// Gets types declared by assembly.
    /// @return Array of types declared by assembly.
    virtual ASPOSECPP_SHARED_API ArrayPtr<System::TypeInfo> GetTypes() const;

    /// Gets assembly name.
    /// @return Pointer to AssemblyName object.
    virtual ASPOSECPP_SHARED_API SharedPtr<AssemblyName> GetName() const;
    /// Gets assembly full name.
    /// @return Assembly full name.
    virtual ASPOSECPP_SHARED_API String get_FullName() const;
    /// Gets directory of current assembly. Support is limited.
    /// @return Path to directory with assembly.
    virtual ASPOSECPP_SHARED_API String get_CodeBase() const;
    /// Gets assembly location. Not implemented.
    virtual ASPOSECPP_SHARED_API String get_Location() const;

protected:
    /// Enables construction of this class.
    FRIEND_FUNCTION_System_MakeObject;
    /// Map of raw resources (name => {data, size}).
    typedef std::map<String, std::pair<const uint8_t*, uint32_t>> RawResources;

    /// Constructor.
    /// @param name Assembly short name.
    /// @param full_name Assembly long name.
    /// @param resource_names Names of resources available in assembly.
    /// @param raw_resources Resources held by assembly.
    ASPOSECPP_SHARED_API Assembly(const String& name, const String& full_name,
             const ArrayPtr<String>& resource_names,
             const RawResources& raw_resources);

    /// Sets assembly object parameters.
    /// @param assembly Assembly to set parameters of.
    /// @param name Assembly short name.
    /// @param full_name Assembly long name.
    /// @param resource_names Names of resources available in assembly.
    /// @param raw_resources Resources held by assembly.
    static ASPOSECPP_SHARED_API void Setup(const SharedPtr<Assembly>& assembly,
                      const String& name, const String& full_name,
                      const ArrayPtr<String>& resource_names,
                      const RawResources& raw_resources);

    /// Assembly name.
    String m_name;
    /// Assembly full name.
    String m_full_name;
    /// Resource names.
    System::ArrayPtr<String> m_manifest_resource_names;
    /// Resource data.
    RawResources m_resources_raw;

    /// Friend declaration for type registration.
    friend class AssemblyTypeRegistrationBase;
    /// Registers specific type in assembly.
    /// @param type Type to register.
    void ASPOSECPP_SHARED_API RegisterType(const System::TypeInfo& type);
};

}} // namespace System{ namespace Reflection{

#endif //_system_reflection_assembly_h_
