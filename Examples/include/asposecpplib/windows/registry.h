#ifndef _MICROSOFT_WIN32_REGISTRY_H_
#define _MICROSOFT_WIN32_REGISTRY_H_

#include <system/object.h>
#include <system/shared_ptr.h>
#include <system/array.h>
#include <system/string.h>
#include <system/reflection.h>
#include <limits>
#include <cstdint>
#include <defines.h>

namespace Microsoft
{
namespace Win32
{

class SafeRegistryHandle;
class RegistrySecurity;

enum class RegistryView
{
    Default = 0,
    Registry64 = 256,
    Registry32 = 512
};

enum class RegistryHive
{
    ClassesRoot = std::numeric_limits<int32_t>::min(),
    CurrentUser = -2147483647,
    LocalMachine = -2147483646,
    Users = -2147483645,
    PerformanceData = -2147483644,
    CurrentConfig = -2147483643,
    DynData = -2147483642
};

enum class RegistryKeyPermissionCheck
{
    Default = 0,
    ReadSubTree = 1,
    ReadWriteSubTree = 2
};

enum class RegistryOptions
{
    None = 0,
    Volatile = 1
};

enum class AccessControlSections
{
    None = 0,
    Audit = 1,
    Access = 2,
    Owner = 4,
    Group = 8,
    All = 15
};

enum class RegistryValueOptions
{
    None = 0,
    DoNotExpandEnvironmentNames = 1
};

enum class RegistryValueKind
{
    None = -1,
    Unknown = 0,
    String = 1,
    ExpandString = 2,
    Binary = 3,
    DWord = 4,
    MultiString = 7,
    QWord = 11
};

enum class RegistryRights
{
    QueryValues = 1,
    SetValue = 2,
    CreateSubKey = 4,
    EnumerateSubKeys = 8,
    Notify = 16,
    CreateLink = 32,
    Delete = 65536,
    ReadPermissions = 131072,
    WriteKey = 131078,
    ExecuteKey = 131097,
    ReadKey = 131097,
    ChangePermissions = 262144,
    TakeOwnership = 524288,
    FullControl = 983103
};

class RegistryKey : public System::Object
{
    FRIEND_FUNCTION_System_MakeObject;
    RTTI_INFO(Microsoft::Win32::RegistryKey, ::System::BaseTypesInfo<System::Object>)

private:
    RegistryKey();

public:
    System::SharedPtr<SafeRegistryHandle> get_Handle();
    System::String get_Name();
    int get_SubKeyCount();
    int get_ValueCount();
    RegistryView get_View();

    static System::SharedPtr<RegistryKey> FromHandle(System::SharedPtr<SafeRegistryHandle> handle);
    static System::SharedPtr<RegistryKey> FromHandle(System::SharedPtr<SafeRegistryHandle> handle, RegistryView view);
    static System::SharedPtr<RegistryKey> OpenBaseKey(RegistryHive hKey, RegistryView view);
    static System::SharedPtr<RegistryKey> OpenRemoteBaseKey(RegistryHive hKey, System::String machineName);
    static System::SharedPtr<RegistryKey> OpenRemoteBaseKey(RegistryHive hKey, System::String machineName, RegistryView view);

    void Close();
    System::SharedPtr<RegistryKey> CreateSubKey(System::String subkey);
    System::SharedPtr<RegistryKey> CreateSubKey(System::String subkey, RegistryKeyPermissionCheck permissionCheck);
    System::SharedPtr<RegistryKey> CreateSubKey(System::String subkey, RegistryKeyPermissionCheck permissionCheck, System::SharedPtr<RegistrySecurity> registrySecurity);
    System::SharedPtr<RegistryKey> CreateSubKey(System::String subkey, RegistryKeyPermissionCheck permissionCheck, RegistryOptions options);
    System::SharedPtr<RegistryKey> CreateSubKey(System::String subkey, RegistryKeyPermissionCheck permissionCheck, RegistryOptions registryOptions, System::SharedPtr<RegistrySecurity> registrySecurity);

    void DeleteSubKey(System::String subkey);
    void DeleteSubKey(System::String subkey, bool throwOnMissingSubKey);
    void DeleteSubKeyTree(System::String subkey);
    void DeleteSubKeyTree(System::String subkey, bool throwOnMissingSubKey);
    void DeleteValue(System::String name);
    void DeleteValue(System::String name, bool throwOnMissingValue);
    void Dispose();
    void Flush();

    System::SharedPtr<RegistrySecurity> GetAccessControl();
    System::SharedPtr<RegistrySecurity> GetAccessControl(AccessControlSections includeSections);
    System::ArrayPtr<System::String> GetSubKeyNames();
    System::SharedPtr<System::Object> GetValue(System::String valueName);
    System::SharedPtr<System::Object> GetValue(System::String name, System::SharedPtr<System::Object> defaultValue);
    System::SharedPtr<System::Object> GetValue(System::String name, System::SharedPtr<System::Object> defaultValue, RegistryValueOptions options);
    RegistryValueKind GetValueKind(System::String name);
    System::ArrayPtr<System::String> GetValueNames();

    System::SharedPtr<RegistryKey> OpenSubKey(System::String name);
    System::SharedPtr<RegistryKey> OpenSubKey(System::String name, RegistryKeyPermissionCheck permissionCheck);
    System::SharedPtr<RegistryKey> OpenSubKey(System::String name, bool writable);
    System::SharedPtr<RegistryKey> OpenSubKey(System::String name, RegistryKeyPermissionCheck permissionCheck, RegistryRights rights);

    void SetAccessControl(System::SharedPtr<RegistrySecurity> registrySecurity);
    void SetValue(System::String name, System::SharedPtr<System::Object> value);
    void SetValue(System::String name, System::SharedPtr<System::Object> value, RegistryValueKind valueKind);

    System::String ToString() ASPOSE_CONST override;
};

struct Registry
{
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API ClassesRoot;
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API CurrentConfig;
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API CurrentUser;
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API DynData;
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API LocalMachine;
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API PerformanceData;
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API Users;

    static System::SharedPtr<System::Object> GetValue(System::String keyName, System::String valueName, System::SharedPtr<System::Object> defaultValue);
    static void SetValue(System::String keyName, System::String valueName, System::SharedPtr<System::Object> value);
    static void SetValue(System::String keyName, System::String valueName, System::SharedPtr<System::Object> value, RegistryValueKind valueKind);
};

}
}

#endif // _MICROSOFT_WIN32_REGISTRY_H_
