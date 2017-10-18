#ifndef __StreamReader_h__
#define __StreamReader_h__

#include "system/io/text_reader.h"
#include "system/text/string_builder.h"
#include "system/string.h"

#include "fwd.h"
#include <mutex>

namespace System { namespace IO {

    //fw
    class Stream;


    class StreamReader : public TextReader
    {
    public:
        StreamReader(SharedPtr<Stream> stream);
        StreamReader(SharedPtr<Stream> stream, bool detectEncodingFromByteOrderMarks);
        StreamReader(SharedPtr<Stream> stream, EncodingPtr encoding);
        StreamReader(SharedPtr<Stream> stream, EncodingPtr encoding, bool detectEncodingFromByteOrderMarks);
        StreamReader(SharedPtr<Stream> stream, EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, int bufferSize);

        StreamReader(const System::String & path);
        StreamReader(const System::String & path, bool detectEncodingFromByteOrderMarks);
        StreamReader(const System::String & path, EncodingPtr encoding);
        StreamReader(const System::String & path, EncodingPtr encoding, bool detectEncodingFromByteOrderMarks);
        StreamReader(const System::String & path, EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, int bufferSize);

        ~StreamReader();

    private:
        void Init(EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, int bufferSize);

    public:
        using TextReader::Dispose;
        virtual int Peek() ;
        virtual int Read() ;
        virtual int Read(ArrayPtr<char_t> buffer, int index, int count) ;
        virtual String ReadLine() ;
        virtual String ReadToEnd() ;
        virtual void Close() ;

        bool get_EndOfStream();
        EncodingPtr get_CurrentEncoding() { return encoding; }
        SharedPtr<Stream> get_BaseStream() const { return base_stream; }

    protected:
        void Dispose(bool disposing) override;

    private:
        int ReadBuffer();
        int ReadBufferCore(int cbEncoded);

        // Provides auto-detection of the encoding, as well as skipping over
        // byte marks at the beginning of a stream.
        //
        int DoChecks(int count);

        SharedPtr<Stream> base_stream;

        // The input buffer
        ArrayPtr<uint8_t> input_buffer;

        // Input buffer ready for recycling
        static ArrayPtr<uint8_t> input_buffer_recycle;
        std::mutex               input_buffer_recycle_lock;

        // The decoded buffer from the above input buffer
        ArrayPtr<char_t> decoded_buffer;
        static ArrayPtr<char_t> decoded_buffer_recycle;

        EncodingPtr encoding;
        DecoderPtr decoder;
        Text::StringBuilder line_builder;

        // Decoded bytes in decoded_buffer.
        int decoded_count;

        // Current position in the decoded_buffer
        int pos;

        // The buffer size that we are using
        int buffer_size;

        int do_checks;

        bool mayBlock;

        bool foundCR;
        int FindNextEOL();

        static const int DefaultBufferSize = 1024;
        static const int DefaultFileBufferSize = 4096;
        static const int MinimumBufferSize = 128;

    protected:
        virtual Object::shared_members_type GetSharedMembers() override;

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "StreamReader"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };

}}

#endif
