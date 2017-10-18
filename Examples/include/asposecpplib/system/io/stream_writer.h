#ifndef __StreamWriter_h__
#define __StreamWriter_h__

#include "system/io/text_writer.h"
#include "system/text/encoding.h"

#include "fwd.h"

namespace System { namespace IO {

    class Stream;

    class StreamWriter : public TextWriter
    {
    public:
        using TextWriter::Write;
        using TextWriter::WriteLine;

        StreamWriter(SharedPtr<Stream> stream);
        StreamWriter(SharedPtr<Stream> stream, EncodingPtr encoding);
        StreamWriter(SharedPtr<Stream> stream, EncodingPtr encoding, int buffer_size, bool leave_open = false);

        StreamWriter(String path);
        StreamWriter(String path, bool append, EncodingPtr encoding = System::Text::Encoding::get_UTF8Unmarked());

        ~StreamWriter();

        bool get_AutoFlush();
        void set_AutoFlush(bool value);
        SharedPtr<Stream> get_BaseStream();
        EncodingPtr get_Encoding();

        virtual void Write(wchar_t value);
        virtual void Write(const String &value);
        virtual void Write(Object::ptr obj);

        virtual void Write(SharedPtr<Array<wchar_t>> buffer);
        virtual void Write(SharedPtr<Array<wchar_t>> buffer, int index, int count);
        virtual void Write(wchar_t* buffer) { Write(String(buffer)); }

        virtual void WriteLine();
        virtual void WriteLine(const String &value);
        virtual void WriteLine(Object::ptr obj);
        virtual void WriteLine(SharedPtr<Array<wchar_t>> buffer);
        virtual void WriteLine(SharedPtr<Array<wchar_t>> buffer, int index, int count);
        virtual void WriteLine(wchar_t* buffer) { Write(buffer); WriteLine(); }

        template <class T>
        void Write(System::SharedPtr<T> obj)
        {
            Write((Object::ptr)obj);
        }
        template <class T>
        void WriteLine(System::SharedPtr<T> obj)
        {
            WriteLine((Object::ptr)obj);
        }

        using TextWriter::Dispose;
        virtual void Close();
        virtual void Flush();

    protected:
        void Dispose(bool disposing) override;

    private:
        void FlushCore();
        void FlushBytes();
        void Decode();
        void CheckState();

        void LowLevelWrite (SharedPtr<Array<wchar_t>> buffer, int index, int count);
        void LowLevelWrite (const String &s);

        void Initialize(EncodingPtr encoding, int buffer_size);
        void _this_0(SharedPtr<Stream> stream, EncodingPtr encoding, int buffer_size, bool leave_open);


        bool m_flush;
        bool m_preamble_done;
        ArrayPtr<uint8_t> m_byte_buf;
        ArrayPtr<wchar_t> m_decode_buf;
        int m_byte_pos;
        int m_decode_pos;
        bool m_leave_open;

        SharedPtr<Stream> m_internal_stream;
        EncodingPtr m_internal_encoding;

    protected:
        virtual Object::shared_members_type GetSharedMembers() override;

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "StreamWriter"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };

}}

#endif
