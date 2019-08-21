/// @file security/secure_string.h
#pragma once

#include <system/object.h>
#include <system/idisposable.h>
#include <system/string.h>
#include <system/details/spin_lock.h>
#include <mutex>
#include <memory>

namespace System { namespace Runtime { namespace InteropServices { class Marshal; }}}

namespace System { namespace Security {

class SecureString;
/// SecureString pointer type.
typedef SharedPtr<SecureString> SecureStringPtr;

/// Secure string, represents text that should be kept confidential.
/// This class DON'T ENCRYPTING the internal data.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SecureString final : public IDisposable
{
    /// RTTI information.
    RTTI_INFO(System::Security::SecureString, ::System::BaseTypesInfo<System::Object>)

    /// Allows construction using MakeObject().
    FRIEND_FUNCTION_System_MakeObject;

    /// Default constructor.
    ASPOSECPP_SHARED_API SecureString();

    /// Constructor.
    /// @param value A pointer to an array of characters.
    /// @param length The number of elements in @p value array.
    ASPOSECPP_SHARED_API SecureString(const char16_t* value, int32_t length);

public:
    /// Destructor.
    ASPOSECPP_SHARED_API ~SecureString();

    SecureString(const SecureString&) = delete;
    SecureString& operator=(const SecureString&) = delete;

    /// Gets number of characters in this secure string.
    ASPOSECPP_SHARED_API int32_t get_Length() const;

    /// Appends a character to the end of the string.
    /// @param c A character to append.
    ASPOSECPP_SHARED_API void AppendChar(char16_t c);

    /// Delete all characters from the current secure string.
    ASPOSECPP_SHARED_API void Clear();

    /// Creates a duplicate of this secure string.
    ASPOSECPP_SHARED_API SecureStringPtr Copy() const;

    /// Inserts a character at the specified index.
    /// @param index The position where character is inserted.
    /// @param c A character to insert.
    ASPOSECPP_SHARED_API void InsertAt(int32_t index, char16_t c);

    /// Gets flag that indicates whether this object is marked read-only.
    ASPOSECPP_SHARED_API bool IsReadOnly() const;

    /// Makes this secure string read-only.
    ASPOSECPP_SHARED_API void MakeReadOnly();

    /// Removes the character at the specified position.
    /// @param index The position of a character.
    ASPOSECPP_SHARED_API void RemoveAt(int32_t index);

    /// Replaces the existing character at the specified position.
    /// @param index The position of a character.
    /// @param c A new character.
    ASPOSECPP_SHARED_API void SetAt(int32_t index, char16_t c);

    /// Release all resources used by the current object.
    ASPOSECPP_SHARED_API void Dispose() override;

    /// Copies contents of this secure string into unsecure String object. Use with caution.
    /// @return Unsecure string.
    ASPOSECPP_SHARED_API String ToUnsecureString() const;

private:
    struct Impl;
    std::unique_ptr<Impl> m_impl;

    using Lockable = Details::SpinLock;
    using LockGuard = std::lock_guard<Lockable>;

    /// Mutex.
    mutable Lockable m_lockable;

    /// Verify that instance is not read-only.
    void VerifyWriteable() const;
    /// Verify that instance is not disposed.
    void VerifyNotDisposed() const;
    /// Verify that instance characters buffer has enough space.
    void VerifyEnoughSpace() const;

    friend class System::Runtime::InteropServices::Marshal;

    /// Copies contents of this secure string into unmanaged memory.
    IntPtr MarshalToString(bool global_alloc, bool unicode);
};

}} // namespace System::Security
