#ifndef _system_reflection_assembly_h_
#define _system_reflection_assembly_h_

#include <system/object.h>
#include <system/string.h>
#include <system/array.h>
#include <system/reflection/assembly_name.h>

#include <map>
#include <vector>

namespace System{ namespace Reflection{

class Assembly: public System::Object
{
public:
    Assembly();

    static System::SharedPtr<Assembly> GetExecutingAssembly();
    static System::SharedPtr<Assembly> GetEntryAssembly();
    static System::SharedPtr<Assembly> GetCallingAssembly();

    virtual System::SharedPtr<System::IO::Stream> GetManifestResourceStream(String name) const;
    virtual ArrayPtr<String> GetManifestResourceNames() const;

    virtual SharedPtr<AssemblyName> GetName() const;

    virtual String get_FullName() const;
    virtual String get_CodeBase() const;
    virtual String get_Location() const;

protected:
    friend struct AssemblyHelper;
    String m_name;
    String m_full_name;
    System::ArrayPtr<String> m_manifest_resource_names;
    std::map<String, std::vector<uint8_t>> m_resources;
};

}} // namespace System{ namespace Reflection{

#endif //assembly_h