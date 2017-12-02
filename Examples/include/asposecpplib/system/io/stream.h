#ifndef _aspose_system_io_stream_h_
#define _aspose_system_io_stream_h_

#include "system/array.h"
#include "system/idisposable.h"
#include "system/io/seekorigin.h"
#include "system/async_callback.h"

#include "system/exceptions.h"

namespace System {
    class IAsyncResult;
};

namespace System { namespace IO {

class Stream : public System::IDisposable
{
    RTTI_INFO(System::IO::Stream, ::System::BaseTypesInfo<System::IDisposable>)

public:

    typedef SharedPtr<Stream> Ptr;

    // There no need to define an empty virtual dtor, virtual dtor for inheritance already defined in the Object class
    // virtual ~Stream() {}

    virtual int ReadByte();
    virtual void WriteByte(uint8_t value);

    virtual int         Read(ArrayPtr<uint8_t> buffer, int offset, int count) = 0;
    virtual void        Write(ArrayPtr<uint8_t> buffer, int offset, int count) = 0;
    virtual int64_t   Seek(int64_t offset, SeekOrigin origin) = 0;
    virtual void        SetLength(int64_t value) = 0;
    virtual void        Flush() = 0;
    virtual void        Close() {}
    virtual void        Dispose() override;

    virtual System::SharedPtr<System::IAsyncResult> BeginRead(System::ArrayPtr<uint8_t> buffer, int offset, int count, System::AsyncCallback callback, System::SharedPtr<System::Object> state);
    virtual System::SharedPtr<System::IAsyncResult> BeginWrite(System::ArrayPtr<uint8_t> buffer, int offset, int count, System::AsyncCallback callback, System::SharedPtr<System::Object> state);
    virtual int EndRead(System::SharedPtr<System::IAsyncResult> asyncResult);
    virtual void EndWrite(System::SharedPtr<System::IAsyncResult> asyncResult);

    virtual void        set_Position(int64_t value) = 0;
    virtual int64_t   get_Position() ASPOSE_CONST = 0;
    virtual int64_t   get_Length() ASPOSE_CONST = 0;
    virtual bool        get_CanRead() ASPOSE_CONST = 0;
    virtual bool        get_CanSeek() ASPOSE_CONST = 0;
    virtual bool        get_CanWrite() ASPOSE_CONST = 0;

    static const System::SharedPtr<Stream> ASPOSECPP_SHARED_API Null;

protected:
    virtual void        Dispose(bool disposing);

};

}} // System::IO

#endif // _aspose_system_io_stream_h_
