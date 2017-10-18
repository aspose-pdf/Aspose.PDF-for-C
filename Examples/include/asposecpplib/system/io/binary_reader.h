#ifndef __BinaryReader_h__
#define __BinaryReader_h__

#include "system/array.h"
#include "system/string.h"
#include "system/idisposable.h"
#include "system/decimal.h"
#include "fwd.h"

namespace System {
    namespace IO {
        class Stream;
    }
    namespace Text {
        class Encoding;
        class Decoder;
    }
}

namespace System { namespace IO {

    class BinaryReader: public IDisposable
    {
        RTTI_INFO(System::IO::BinaryReader, ::System::BaseTypesInfo<System::IDisposable>)
    private:
        SharedPtr<Stream> m_stream;
        SharedPtr<Text::Encoding> m_encoding;

        ArrayPtr<uint8_t> m_buffer;

        SharedPtr<Text::Decoder> decoder;
        ArrayPtr<char_t> charBuffer;
        ArrayPtr<uint8_t> charByteBuffer;

        //
        // 128 chars should cover most strings in one grab.
        enum {
            MaxBufferSize = 128
        };

        bool m_disposed;
        const bool leave_open;

    //C# TO C++ CONVERTER WARNING: Unlike C#, there is no automatic call to this finalizer method in native C++:
    private:
        void Finalize()
        {
            this->Dispose(false);
        }

    public:
    //C# TO C++ CONVERTER TODO TASK: Calls to same-class constructors are not supported in C++ prior to C++11:
    //ORIGINAL LINE: public BinaryReader(Stream input) : this(input, Encoding.UTF8UnmarkedUnsafe)
        BinaryReader(SharedPtr<Stream> input);
        BinaryReader(SharedPtr<Stream> input, SharedPtr<Text::Encoding> encoding, bool leaveOpen = false);

        virtual SharedPtr<Stream> get_BaseStream();

        virtual void Close();

    private:
        void ctor_Init();
        void Dispose(bool disposing);

    public:
        virtual ~BinaryReader();

    protected:
        virtual void FillBuffer(int numBytes);

    public:
        virtual int PeekChar();

        virtual int Read();

        virtual int Read(ArrayPtr<uint8_t> buffer, int index, int count);

        virtual int Read(ArrayPtr<char_t> buffer, int index, int count);

    private:
        int ReadCharBytes(ArrayPtr<char_t> buffer, int index, int count, int &bytes_read);

    protected:
        int Read7BitEncodedInt();

    public:
        virtual bool ReadBoolean();

        virtual uint8_t ReadByte();

        virtual ArrayPtr<uint8_t> ReadBytes(int count);

        virtual char_t ReadChar();

        virtual ArrayPtr<char_t> ReadChars(int count);

        //virtual decimal ReadDecimal();

        virtual double ReadDouble();

        virtual int16_t ReadInt16();

        virtual int ReadInt32();

        virtual int64_t ReadInt64();

    //C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
    //ORIGINAL LINE: [CLSCompliant(false)] public virtual sbyte ReadSByte()
        virtual int8_t ReadSByte();

        virtual String ReadString();

        virtual float ReadSingle();

        virtual uint16_t ReadUInt16();

        virtual uint32_t ReadUInt32();

        virtual uint64_t ReadUInt64();
        virtual Decimal ReadDecimal();

        virtual void Dispose() override;

        /* Ensures that m_buffer is at least length bytes
         * long, growing it if necessary
         */
    private:
        void CheckBuffer(int length);

    private:
        void InitializeInstanceFields();
    };

}}


#endif  //#ifndef __BINARYREADER__
