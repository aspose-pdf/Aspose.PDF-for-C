/// @file windows/registry.h
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

/// Defines which of the registry views to use on 64-bit Windows.
enum class RegistryView
{
    /// Use default view.
    Default = 0,
    /// Use 64-bit registry view.
    Registry64 = 256,
    /// Use 32-bit registry view.
    Registry32 = 512
};

/// Defines which registry root item to use as base on remote machine.
enum class RegistryHive
{
    /// Use HKEY_CLASSES_ROOT.
    ClassesRoot = std::numeric_limits<int32_t>::min(),
    /// Use HKEY_CURRENT_USER.
    CurrentUser = -2147483647,
    /// Use HKEY_LOCAL_MACHINE.
    LocalMachine = -2147483646,
    /// Use HKEY_USERS.
    Users = -2147483645,
    /// Use HKEY_PERFORMANCE_DATA.
    PerformanceData = -2147483644,
    /// Use HKEY_CURRENT_CONFIG.
    CurrentConfig = -2147483643,
    /// Use HKEY_DYN_DATA.
    DynData = -2147483642
};

/// Defines how the security checks are performed on registry entries.
enum class RegistryKeyPermissionCheck
{
    /// Inherits parent permissions.
    Default = 0,
    /// No security checks when reading subtree.
    ReadSubTree = 1,
    /// No security checks when reading or writing subtree.
    ReadWriteSubTree = 2
};

/// Registry keys creation options.
enum class RegistryOptions
{
    /// Store value on disc.
    None = 0,
    /// Keep value in memory only.
    Volatile = 1
};

/// Specifies which part of security descriptor to save or load.
enum class AccessControlSections
{
    /// No sections.
    None = 0,
    /// Audit section.
    Audit = 1,
    /// Access section.
    Access = 2,
    /// Owner section.
    Owner = 4,
    /// Group section.
    Group = 8,
    /// All section.
    All = 15
};

/// Registry value write mode.
enum class RegistryValueOptions
{
    /// Default.
    None = 0,
    /// Without environment names expansion.
    DoNotExpandEnvironmentNames = 1
};

/// Type of registry value.
enum class RegistryValueKind
{
    /// No value.
    None = -1,
    /// Unknown type.
    Unknown = 0,
    /// String type.
    String = 1,
    /// Long string.
    ExpandString = 2,
    /// Binary type.
    Binary = 3,
    /// 32-bit integer.
    DWord = 4,
    /// Multiple strings.
    MultiString = 7,
    /// 64-bit integer.
    QWord = 11
};

/// Registry access rights.
enum class RegistryRights
{
    /// Reading values.
    QueryValues = 1,
    /// Setting values.
    SetValue = 2,
    /// Creating subkeys.
    CreateSubKey = 4,
    /// Listing subkeys.
    EnumerateSubKeys = 8,
    /// Sending notifications.
    Notify = 16,
    /// Link creation.
    CreateLink = 32,
    /// Section deletion.
    Delete = 65536,
    /// Reading permissions mask.
    ReadPermissions = 131072,
    /// Key writing permissions mask.
    WriteKey = 131078,
    /// Key execution permissions mask.
    ExecuteKey = 131097,
    /// Key reading permissions mask.
    ReadKey = 131097,
    /// Permission change.
    ChangePermissions = 262144,
    /// Ownership taking.
    TakeOwnership = 524288,
    /// Full control mask.
    FullControl = 983103
};

/// API to manipulate registry values.
/// Support is very limited and Windows-only.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS RegistryKey : public System::Object
{
    /// Unhiding constructor.
    FRIEND_FUNCTION_System_MakeObject;
    /// RTTI information.
    RTTI_INFO(Microsoft::Win32::RegistryKey, ::System::BaseTypesInfo<System::Object>)

private:
    /// Friendship declaration for implementation details.
    friend struct Registry;

    /// Key handle.
    void* m_key;
    /// Whether key is system.
    bool m_systemKey;

    /// Constructor.
    RegistryKey();
    /// Constructor.
    /// @param key Key handle.
    /// @param systemKey Whether key is system.
    RegistryKey(void* hkey, bool systemKey);

    /// Gets RegistryKey object for the root section.
    /// @param key Key handle.
    /// @return RegistryKey object.
    static System::SharedPtr<RegistryKey> GetBaseKey(void* hkey);

public:
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~RegistryKey() override;

    /// Gets raw handle of registry key. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<SafeRegistryHandle> get_Handle();
    /// Gets name of registry key. Not implemented.
    ASPOSECPP_SHARED_API System::String get_Name();
    /// Gets number of subkeys. Not implemented.
    ASPOSECPP_SHARED_API int get_SubKeyCount();
    /// Gets number of values. Not implemented.
    ASPOSECPP_SHARED_API int get_ValueCount();
    /// Gets view of registry key. Not implemented
    ASPOSECPP_SHARED_API RegistryView get_View();

    /// Opens key from handle. Not implemented.
    static ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> FromHandle(const System::SharedPtr<SafeRegistryHandle>& handle);
    /// Opens key from handle. Not implemented.
    static ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> FromHandle(const System::SharedPtr<SafeRegistryHandle>& handle, RegistryView view);
    /// Opens base key. Not implemented.
    static ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> OpenBaseKey(RegistryHive hKey, RegistryView view);
    /// Opens base key on remote host. Not implemented.
    static ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> OpenRemoteBaseKey(RegistryHive hKey, const System::String& machineName);
    /// Opens base key on remote host. Not implemented.
    static ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> OpenRemoteBaseKey(RegistryHive hKey, const System::String& machineName, RegistryView view);

    /// Closes registry key. Not implemented.
    ASPOSECPP_SHARED_API void Close();

    /// Creates subkey under current key. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> CreateSubKey(const System::String& subkey);
    /// Creates subkey under current key. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> CreateSubKey(const System::String& subkey, RegistryKeyPermissionCheck permissionCheck);
    /// Creates subkey under current key. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> CreateSubKey(const System::String& subkey, RegistryKeyPermissionCheck permissionCheck, const System::SharedPtr<RegistrySecurity>& registrySecurity);
    /// Creates subkey under current key. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> CreateSubKey(const System::String& subkey, RegistryKeyPermissionCheck permissionCheck, RegistryOptions options);
    /// Creates subkey under current key. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> CreateSubKey(const System::String& subkey, RegistryKeyPermissionCheck permissionCheck, RegistryOptions registryOptions, const System::SharedPtr<RegistrySecurity>& registrySecurity);

    /// Deletes subkey under current key. Not implemented.
    ASPOSECPP_SHARED_API void DeleteSubKey(const System::String& subkey);
    /// Deletes subkey under current key. Not implemented.
    ASPOSECPP_SHARED_API void DeleteSubKey(const System::String& subkey, bool throwOnMissingSubKey);
    /// Deletes subkey tree under current key. Not implemented.
    ASPOSECPP_SHARED_API void DeleteSubKeyTree(const System::String& subkey);
    /// Deletes subkey tree under current key. Not implemented.
    ASPOSECPP_SHARED_API void DeleteSubKeyTree(const System::String& subkey, bool throwOnMissingSubKey);
    /// Deletes value of current key. Not implemented.
    ASPOSECPP_SHARED_API void DeleteValue(const System::String& name);
    /// Deletes value of current key. Not implemented.
    ASPOSECPP_SHARED_API void DeleteValue(const System::String& name, bool throwOnMissingValue);
    /// Frees handles associated with key. Not implemented.
    ASPOSECPP_SHARED_API void Dispose();
    /// Writes all attributes of key to registry. Not implemented.
    ASPOSECPP_SHARED_API void Flush();

    /// Gets access control object associated with key. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<RegistrySecurity> GetAccessControl();
    /// Gets access control object associated with key. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<RegistrySecurity> GetAccessControl(AccessControlSections includeSections);
    /// Enumerates subkeys. Not implemented.
    ASPOSECPP_SHARED_API System::ArrayPtr<System::String> GetSubKeyNames();

    /// Gets key value. Windows only.
    /// @param valueName Name of the value under current key.
    /// @return Boxed value of key.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> GetValue(const System::String& valueName);
    /// Gets key value. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> GetValue(const System::String& name, const System::SharedPtr<System::Object>& defaultValue);
    /// Gets key value. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> GetValue(const System::String& name, const System::SharedPtr<System::Object>& defaultValue, RegistryValueOptions options);
    /// Gets key value type. Not implemented.
    ASPOSECPP_SHARED_API RegistryValueKind GetValueKind(const System::String& name);
    /// Gets list of value names under current key.
    /// @return List of string names.
    ASPOSECPP_SHARED_API System::ArrayPtr<System::String> GetValueNames();

    /// Opens subkey of current key.
    /// @param name Name of the subkey.
    /// @return RegistryKey object associated with subkey.
    ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> OpenSubKey(const System::String& name);
    /// Opens subkey of current key. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> OpenSubKey(const System::String& name, RegistryKeyPermissionCheck permissionCheck);
    /// Opens subkey of current key. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> OpenSubKey(const System::String& name, bool writable);
    /// Opens subkey of current key. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<RegistryKey> OpenSubKey(const System::String& name, RegistryKeyPermissionCheck permissionCheck, RegistryRights rights);

    /// Sets access control value. Not implemented.
    ASPOSECPP_SHARED_API void SetAccessControl(const System::SharedPtr<RegistrySecurity>& registrySecurity);

    /// Sets registry value. Not implemented.
    ASPOSECPP_SHARED_API void SetValue(const System::String& name, const System::SharedPtr<System::Object>& value);
    /// Sets registry value. Not implemented.
    ASPOSECPP_SHARED_API void SetValue(const System::String& name, const System::SharedPtr<System::Object>& value, RegistryValueKind valueKind);

    /// Converts key to string. Not implemented.
    ASPOSECPP_SHARED_API System::String ToString() ASPOSE_CONST override;
};

/// Windows system registry API.
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
struct Registry
{
    /// HKEY_CLASSES_ROOT key.
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API ClassesRoot;
    /// HKEY_CURRENT_CONFIG key.
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API CurrentConfig;
    /// HKEY_CURRENT_USER key.
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API CurrentUser;
    /// HKEY_DYN_DATA key.
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API DynData;
    /// HKEY_LOCAL_MACHINE key.
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API LocalMachine;
    /// HKEY_PERFORMANCE_DATA key.
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API PerformanceData;
    /// HKEY_USERS key.
    static const System::SharedPtr<RegistryKey> ASPOSECPP_SHARED_API Users;

    /// Gets value of specified key. Not implemented.
    static ASPOSECPP_SHARED_API System::SharedPtr<System::Object> GetValue(const System::String& keyName, const System::String& valueName, const System::SharedPtr<System::Object>& defaultValue);
    /// Sets value of specified key. Not implemented.
    static ASPOSECPP_SHARED_API void SetValue(const System::String& keyName, const System::String& valueName, const System::SharedPtr<System::Object>& value);
    /// Sets value of specified key. Not implemented.
    static ASPOSECPP_SHARED_API void SetValue(const System::String& keyName, const System::String& valueName, const System::SharedPtr<System::Object>& value, RegistryValueKind valueKind);
};

}
}

#endif // _MICROSOFT_WIN32_REGISTRY_H_
