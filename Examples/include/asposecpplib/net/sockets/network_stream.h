#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/io/seekorigin.h>
#include <system/io/file_access.h>
#include <system/iasyncresult.h>
#include <system/async_callback.h>
#include <system/array.h>
#include <cstdint>

#include <net/sockets/socket.h>

namespace System {
namespace Net {
namespace Sockets {

// Provides the underlying stream of data for network access.
class ASPOSECPP_SHARED_CLASS NetworkStream : public System::IO::Stream
{
    typedef NetworkStream ThisType;
    typedef System::IO::Stream BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    virtual ASPOSECPP_SHARED_API  bool get_CanRead() ASPOSE_CONST;
    virtual ASPOSECPP_SHARED_API  bool get_CanSeek() ASPOSE_CONST;
    virtual ASPOSECPP_SHARED_API  bool get_CanWrite() ASPOSE_CONST;
    virtual ASPOSECPP_SHARED_API  bool get_CanTimeout() ASPOSE_CONST;
    virtual ASPOSECPP_SHARED_API  int32_t get_ReadTimeout() ASPOSE_CONST;
    virtual ASPOSECPP_SHARED_API  void set_ReadTimeout(int32_t value);
    virtual ASPOSECPP_SHARED_API  int32_t get_WriteTimeout() ASPOSE_CONST;
    virtual ASPOSECPP_SHARED_API  void set_WriteTimeout(int32_t value);
    virtual ASPOSECPP_SHARED_API  bool get_DataAvailable() ASPOSE_CONST;
    virtual ASPOSECPP_SHARED_API  int64_t get_Length() ASPOSE_CONST;
    virtual ASPOSECPP_SHARED_API  int64_t get_Position() ASPOSE_CONST;
    virtual ASPOSECPP_SHARED_API  void set_Position(int64_t value);

    ASPOSECPP_SHARED_API NetworkStream(System::SharedPtr<System::Net::Sockets::Socket> socket);
    ASPOSECPP_SHARED_API NetworkStream(System::SharedPtr<System::Net::Sockets::Socket> socket, System::IO::FileAccess access, bool ownsSocket);
    ASPOSECPP_SHARED_API NetworkStream(System::SharedPtr<System::Net::Sockets::Socket> socket, bool ownsSocket);

    virtual ASPOSECPP_SHARED_API  int64_t Seek(int64_t offset, IO::SeekOrigin origin);
    virtual ASPOSECPP_SHARED_API  int32_t Read(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size);
    virtual ASPOSECPP_SHARED_API  void Write(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size);

    ASPOSECPP_SHARED_API void Close(int timeout);

    virtual ASPOSECPP_SHARED_API  ~NetworkStream();

    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginRead(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size, AsyncCallback callback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API int32_t EndRead(System::SharedPtr<IAsyncResult> asyncResult);
    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginWrite(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size, AsyncCallback callback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API void EndWrite(System::SharedPtr<IAsyncResult> asyncResult);
    virtual ASPOSECPP_SHARED_API  void Flush();
    virtual ASPOSECPP_SHARED_API  void SetLength(int64_t value);

private:
    void InitNetworkStream(System::SharedPtr<System::Net::Sockets::Socket> socket, System::IO::FileAccess Access);

    System::SharedPtr<System::Net::Sockets::Socket> m_StreamSocket;

    bool      m_Readable;

    bool      m_Writeable;
    bool      m_OwnsSocket;
};
} // namespace Sockets
} // namespace Net
} // namespace System
