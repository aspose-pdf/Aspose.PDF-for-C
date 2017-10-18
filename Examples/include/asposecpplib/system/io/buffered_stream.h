#ifndef __BufferedStream_h__
#define __BufferedStream_h__

#include "system/io/stream.h"
#include "system/reflection.h"

namespace System { namespace IO {

    class BufferedStream : public Stream
    {
        RTTI_INFO(System::IO::BufferedStream, ::System::BaseTypesInfo<System::IO::Stream>);
    public:
        BufferedStream(SharedPtr<Stream> stream);
        BufferedStream(SharedPtr<Stream> stream, int bufferSize);
        virtual ~BufferedStream();

    public: //Stream impl.
        virtual int         ReadByte();
        virtual void        WriteByte(uint8_t value);
        virtual int         Read(ArrayPtr<uint8_t> buffer, int offset, int count);
        virtual void        Write(ArrayPtr<uint8_t> buffer, int offset, int count);
        virtual int64_t   Seek(int64_t offset, SeekOrigin origin);
        virtual void        SetLength(int64_t value);
        virtual void        Flush();

    public: //Stream impl.
        virtual void        set_Position(int64_t value);
        virtual int64_t   get_Position() ASPOSE_CONST;
        virtual int64_t   get_Length() ASPOSE_CONST;
        virtual bool        get_CanRead() ASPOSE_CONST;
        virtual bool        get_CanSeek() ASPOSE_CONST;
        virtual bool        get_CanWrite() ASPOSE_CONST;

    private:
        SharedPtr<Stream> m_stream;
        ArrayPtr<uint8_t> m_buffer;
        int m_buffer_pos;
        int m_buffer_read_ahead;
        bool m_buffer_reading;
    };

}}

#endif
