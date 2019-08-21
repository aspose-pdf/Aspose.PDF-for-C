/// @file system/io/unmanaged_memory_stream.h
#ifndef _csharptest_UnmanagedMemoryStream_h_
#define _csharptest_UnmanagedMemoryStream_h_
// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.
/*============================================================
**
**
**
**
** Purpose: Create a stream over unmanaged memory, mostly
**          useful for memory-mapped files.
**
**
===========================================================*/

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/io/seekorigin.h>
#include <system/io/file_access.h>
#include <system/enum_helpers.h>
#include <system/array.h>

namespace System {

namespace IO {

/*
     * This class is used to access a contiguous block of memory, likely outside
     * the GC heap (or pinned in place in the GC heap, but a MemoryStream may
     * make more sense in those cases).  It's great if you have a pointer and
     * a length for a section of memory mapped in by someone else and you don't
     * want to copy this into the GC heap.  UnmanagedMemoryStream assumes these
     * two things:
     *
     * 1) All the memory in the specified block is readable or writable,
     *    depending on the values you pass to the constructor.
     * 2) The lifetime of the block of memory is at least as long as the lifetime
     *    of the UnmanagedMemoryStream.
     * 3) You clean up the memory when appropriate.  The UnmanagedMemoryStream
     *    currently will do NOTHING to free this memory.
     * 4) All calls to Write and WriteByte may not be threadsafe currently.
     *
     * It may become necessary to add in some sort of
     * DeallocationMode enum, specifying whether we unmap a section of memory,
     * call free, run a user-provided delegate to free the memory, etc etc.
     * We'll suggest user write a subclass of UnmanagedMemoryStream that uses
     * a SafeHandle subclass to hold onto the memory.
     * Check for problems when using this in the negative parts of a
     * process's address space.  We may need to use unsigned longs internally
     * and change the overflow detection logic.
     *
     * -----SECURITY MODEL AND SILVERLIGHT-----
     * A few key notes about exposing UMS in silverlight:
     * 1. No ctors are exposed to transparent code. This version of UMS only
     * supports byte* (not SafeBuffer). Therefore, framework code can create
     * a UMS and hand it to transparent code. Transparent code can use most
     * operations on a UMS, but not operations that directly expose a
     * pointer.
     *
     * 2. Scope of "unsafe" and non-CLS compliant operations reduced: The
     * Whidbey version of this class has CLSCompliant(false) at the class
     * level and unsafe modifiers at the method level. These were reduced to
     * only where the unsafe operation is performed -- i.e. immediately
     * around the pointer manipulation. Note that this brings UMS in line
     * with recent changes in pu/clr to support SafeBuffer.
     *
     * 3. Currently, the only caller that creates a UMS is ResourceManager,
     * which creates read-only UMSs, and therefore operations that can
     * change the length will throw because write isn't supported. A
     * conservative option would be to formalize the concept that _only_
     * read-only UMSs can be creates, and enforce this by making WriteX and
     * SetLength SecurityCritical. However, this is a violation of
     * security inheritance rules, so we must keep these safe. The
     * following notes make this acceptable for future use.
     *    a. a race condition in WriteX that could have allowed a thread to
     *    read from unzeroed memory was fixed
     *    b. memory region cannot be expanded beyond _capacity; in other
     *    words, a UMS creator is saying a writeable UMS is safe to
     *    write to anywhere in the memory range up to _capacity, specified
     *    in the ctor. Even if the caller doesn't specify a capacity, then
     *    length is used as the capacity.
     */

/// Provides access to unmanaged memory.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS UnmanagedMemoryStream : public Stream
{
    /// An alias for this class.
    typedef UnmanagedMemoryStream ThisType;
    /// An alias for a base class.
    typedef Stream BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();
    /// Declaring template function System::MakeObject(...) a friend of this class.
    FRIEND_FUNCTION_System_MakeObject;

public:
    /// Determines if the stream is readable.
    /// @returns True if the stream is readable; otherwise - false
    virtual ASPOSECPP_SHARED_API bool get_CanRead() ASPOSE_CONST override;
    /// Determines if the stream supports seeking.
    /// @returns True if the stream supports seeking; otherwise - false
    virtual ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;
    /// Determines if the stream is writable.
    /// @returns True if the stream is writable; otherwise - false
    virtual ASPOSECPP_SHARED_API bool get_CanWrite() ASPOSE_CONST override;
    /// Returns the length of the stream in bytes.
    virtual ASPOSECPP_SHARED_API int64_t get_Length() ASPOSE_CONST override;
    /// Returns the current capacity of the underlying memory buffer.
    virtual ASPOSECPP_SHARED_API int64_t get_Capacity() ASPOSE_CONST;
    /// Returns the current position of the stream.
    virtual ASPOSECPP_SHARED_API int64_t get_Position() ASPOSE_CONST override;
    /// Sets the stream's position.
    /// @param value The byte offset to set the stream's position to
    virtual ASPOSECPP_SHARED_API void set_Position(int64_t value) override;
    /// NOT IMPLEMENTED.
    ASPOSECPP_SHARED_API unsigned char* get_PositionPointer();
    /// NOT IMPLEMENTED.
    ASPOSECPP_SHARED_API void set_PositionPointer(unsigned char* value);

    /// Constructs a new instance of UnmanagedMemoryStream.
    /// @param pointer A pointer to unmanaged buffer
    /// @param length The size of unmanaged buffer in bytes
    ASPOSECPP_SHARED_API UnmanagedMemoryStream(unsigned char* pointer, int64_t length);
    /// Constructs a new instance of UnmanagedMemoryStream.
    /// @param pointer A pointer to unmanaged buffer
    /// @param length The size of unmanaged buffer in bytes
    /// @param capacity The total amount of memory assigned to the stream
    /// @param access Specifies if the stream should be read-only, write-onle or both
    ASPOSECPP_SHARED_API UnmanagedMemoryStream(unsigned char* pointer, int64_t length, int64_t capacity, FileAccess access);

    /// Does nothing.
    virtual ASPOSECPP_SHARED_API void Flush() override;
    /// Reads the specified number of bytes from the stream and writes them to the specified byte array.
    /// @param buffer The byte array to write the read bytes to
    /// @param offset A 0-based position in @p buffer to start writing at
    /// @param count The number of bytes to read
    /// @returns The number of bytes read
    virtual ASPOSECPP_SHARED_API int Read(ArrayPtr<unsigned char> buffer, int offset, int count) override;
    /// Sets the position of the stream represented by the current object.
    /// @param offset The byte offset relative to a position specified by @p origin
    /// @param loc Specifies the position from which and the direction toward which the offset is calculated
    /// @returns The new position of the stream
    virtual ASPOSECPP_SHARED_API int64_t Seek(int64_t offset, SeekOrigin loc) override;
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    virtual ASPOSECPP_SHARED_API void SetLength(int64_t value) override;
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    virtual ASPOSECPP_SHARED_API void Write(ArrayPtr<unsigned char> buffer, int offset, int count) override;

protected:
    /// Indicates if the stream is in open state.
    bool _isOpen;
    /// NOT IMPLEMENTED.
    ASPOSECPP_SHARED_API unsigned char* get_Pointer();

    /// Constructs a new instnace of UnmanagedMemoryStream class.
    ASPOSECPP_SHARED_API UnmanagedMemoryStream();

    /// Constructs a new instance of UnmanagedMemoryStream.
    /// @param pointer A pointer to unmanaged buffer
    /// @param length The size of unmanaged buffer in bytes
    /// @param capacity The total amount of memory assigned to the stream
    /// @param access Specifies if the stream should be read-only, write-onle or both
    /// @param skipSecurityCheck IGNORED
    ASPOSECPP_SHARED_API UnmanagedMemoryStream(unsigned char* pointer, int64_t length, int64_t capacity, FileAccess access, bool skipSecurityCheck);

    /// Initializes a newly created instance of UnmanagedMemoryStream class.
    /// @param pointer A pointer to unmanaged buffer
    /// @param length The size of unmanaged buffer in bytes
    /// @param capacity The total amount of memory assigned to the stream
    /// @param access Specifies if the stream should be read-only, write-onle or both
    ASPOSECPP_SHARED_API void Initialize(unsigned char* pointer, int64_t length, int64_t capacity, FileAccess access);
    /// Initializes a newly created instance of UnmanagedMemoryStream class.
    /// @param pointer A pointer to unmanaged buffer
    /// @param length The size of unmanaged buffer in bytes
    /// @param capacity The total amount of memory assigned to the stream
    /// @param access Specifies if the stream should be read-only, write-onle or both
    /// @param skipSecurityCheck IGNORED
    ASPOSECPP_SHARED_API void Initialize(unsigned char* pointer, int64_t length, int64_t capacity, FileAccess access, bool skipSecurityCheck);
    /// Releases all resources used by the current object and closes the stream.
    /// @param disposing IGNORED
    virtual ASPOSECPP_SHARED_API void Dispose(bool disposing) override;
    /// Copies bytes from the specified source buffer starting to the specified byte array.
    /// @param dest A byte array to copy to
    /// @param destIndex A 0-based index in @p dest at which to start writing
    /// @param src A pointer to the buffer to copy from
    /// @param srcIndex A 0-based index in @p src to start copying from
    /// @param len The number of bytes to copy
    static ASPOSECPP_SHARED_API void Memcpy(const ArrayPtr<unsigned char>& dest, int destIndex, unsigned char* src, int srcIndex, int len);

private:
    /// The maximum length of a stream.
    static const int64_t UnmanagedMemStreamMaxLength;
    //System::SharedPtr<Runtime::InteropServices::SafeBuffer> _buffer;
    /// Pointer to the underlying unmanaged buffer.
    uint8_t * _mem = nullptr;
    /// The size of the unmanaged buffer in bytes.
    int64_t _length;
    /// The total amount of memory assigned to the stream.
    int64_t _capacity;
    /// Current position of the stream.
    int64_t _position;
    /// NOT USED.
    int64_t _offset;
    /// Specifies if the stream has a read-only access, write-only access or both read and write access.
    FileAccess _access;
    //System::SharedPtr<Threading::Tasks::Task<int>> _lastReadTask;

};

} // namespace IO
} // namespace System

#endif // _csharptest_UnmanagedMemoryStream_h_

