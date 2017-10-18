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
class UnmanagedMemoryStream : public Stream
{
    typedef UnmanagedMemoryStream ThisType;
    typedef Stream BaseType;

    RTTI_INFO_DECL();

    FRIEND_FUNCTION_System_MakeObject;

public:

    virtual bool get_CanRead() ASPOSE_CONST override;
    virtual bool get_CanSeek() ASPOSE_CONST override;
    virtual bool get_CanWrite() ASPOSE_CONST override;
    virtual int64_t get_Length() ASPOSE_CONST override;
    virtual int64_t get_Capacity() ASPOSE_CONST;
    virtual int64_t get_Position() ASPOSE_CONST override;
    virtual void set_Position(int64_t value);
    unsigned char* get_PositionPointer();
    void set_PositionPointer(unsigned char* value);

    UnmanagedMemoryStream(unsigned char* pointer, int64_t length);
    UnmanagedMemoryStream(unsigned char* pointer, int64_t length, int64_t capacity, FileAccess access);

    virtual void Flush();
    virtual int Read(ArrayPtr<unsigned char> buffer, int offset, int count);
    virtual int64_t Seek(int64_t offset, SeekOrigin loc);
    virtual void SetLength(int64_t value);
    virtual void Write(ArrayPtr<unsigned char> buffer, int offset, int count);

protected:

    bool _isOpen;

    unsigned char* get_Pointer();

    UnmanagedMemoryStream();
    UnmanagedMemoryStream(unsigned char* pointer, int64_t length, int64_t capacity, FileAccess access, bool skipSecurityCheck);

    void Initialize(unsigned char* pointer, int64_t length, int64_t capacity, FileAccess access);
    void Initialize(unsigned char* pointer, int64_t length, int64_t capacity, FileAccess access, bool skipSecurityCheck);
    virtual void Dispose(bool disposing);
    static void Memcpy(ArrayPtr<unsigned char> dest, int destIndex, unsigned char* src, int srcIndex, int len);

private:

    static const int64_t UnmanagedMemStreamMaxLength;
    //System::SharedPtr<Runtime::InteropServices::SafeBuffer> _buffer;
    unsigned char* _mem;
    int64_t _length;
    int64_t _capacity;
    int64_t _position;
    int64_t _offset;
    FileAccess _access;
    //System::SharedPtr<Threading::Tasks::Task<int>> _lastReadTask;

};

} // namespace IO
} // namespace System

#endif // _csharptest_UnmanagedMemoryStream_h_

