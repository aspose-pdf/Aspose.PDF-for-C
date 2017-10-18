#ifndef __binary_writer_h__
#define __binary_writer_h__

#include "system/idisposable.h"
#include "system/text/encoding.h"
#include "system/io/seekorigin.h"
#include "system/io/stream.h"
#include "system/array.h"
#include "system/decimal.h"
#include "fwd.h"

namespace System { namespace IO {

    class BinaryWriter: public IDisposable
    {
        RTTI_INFO(System::IO::BinaryWriter, ::System::BaseTypesInfo<System::IDisposable>)

    public:
        BinaryWriter(StreamPtr stream, EncodingPtr encoding = System::Text::Encoding::get_UTF8Unmarked(), bool leaveopen = false);
        ~BinaryWriter();

        StreamPtr get_BaseStream();
        void Flush();
        void Close();
        void Dispose() override;
        int64_t Seek(int offset, System::IO::SeekOrigin origin = System::IO::SeekOrigin::Begin);
        virtual void Write(uint8_t value);
        virtual void Write(ArrayPtr<uint8_t> buffer, int index = 0, int count = -1);
        virtual void Write(SharedPtr<Array<uint8_t> > buffer);
        virtual void Write(bool value);
        virtual void Write(int16_t value);
        virtual void Write(int value);
        virtual void Write(int64_t value);
        virtual void Write(uint16_t value);
        virtual void Write(uint32_t value);
        virtual void Write(uint64_t value);
        virtual void Write(float value);
        virtual void Write(double value);
        virtual void Write(Decimal value);

    protected:
        void Dispose(bool disposing);

    private:
        StreamPtr m_stream;
        EncodingPtr m_encoding;
        ArrayPtr<uint8_t> m_buffer;
        bool m_leaveopen;

    };

    typedef SharedPtr<BinaryWriter> BinaryWriterPtr;

}}

#endif
