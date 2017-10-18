#ifndef _aspose_system_io_memory_stream_h_
#define _aspose_system_io_memory_stream_h_

#include "system/io/stream.h"
#include "system/array.h"
#include "system/reflection.h"

#include "fwd.h"

namespace System { namespace IO {

    class MemoryStream : public Stream
    {
        RTTI_INFO(System::IO::MemoryStream, ::System::BaseTypesInfo<System::IO::Stream>);
    public:

        typedef System::SharedPtr<System::IO::MemoryStream> Ptr;

        MemoryStream();
        MemoryStream(int capacity_);
        MemoryStream(ArrayPtr<uint8_t> content, bool writable = true);
        MemoryStream(ArrayPtr<uint8_t> content, int index, int count, bool writable = true, bool publiclyVisible = true);

        void    set_Capacity(int value);
        int     get_Capacity();

        virtual const ArrayPtr<uint8_t> ToArray() const;

        // Stream impl.

        int         ReadByte() override;
        void        WriteByte(uint8_t value) override;
        int         Read(ArrayPtr<uint8_t> buffer, int offset, int count) override;
        void        Write(ArrayPtr<uint8_t> buffer, int offset, int count) override;
        int64_t   Seek(int64_t offset, SeekOrigin origin) override;
        void        SetLength(int64_t value) override;
        void        Flush() override;
        virtual void        WriteTo(SharedPtr<Stream> stream);
        virtual ArrayPtr<uint8_t> GetBuffer();

        void        set_Position(int64_t value) override;
        int64_t   get_Position() ASPOSE_CONST override;
        int64_t   get_Length() ASPOSE_CONST override;
        bool        get_CanRead() ASPOSE_CONST override;
        bool        get_CanSeek() ASPOSE_CONST override;
        bool        get_CanWrite() ASPOSE_CONST override;

        virtual void        Close() override;

    private:

        void CheckIfClosedThrowDisposed() const;
        void Expand (int newSize);
        int  CalculateNewCapacity (int minimum);

        ArrayPtr<uint8_t> internalBuffer;
        bool expandable;
        bool m_readable = true;
        bool m_seekable = true;
        bool m_writable;
        int capacity;
        int position;
        int length;
        int initialIndex;
        int dirty_bytes;
        bool _publiclyVisible;

    protected:
        virtual Object::shared_members_type GetSharedMembers() override;

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            visitor.add_self(this);
        }

        const char* DBG_class_name() const override { return "MemoryStream"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };

}}

#endif // _aspose_system_io_memory_stream_h_
