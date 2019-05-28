/// @file system/io/stream.h
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
/// A base class for a variety of stream implementations.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Stream : public System::IDisposable
{
    RTTI_INFO(System::IO::Stream, ::System::BaseTypesInfo<System::IDisposable>)

public:
    /// An alias for a shared pointer to this class.
    typedef SharedPtr<Stream> Ptr;

    // There no need to define an empty virtual dtor, virtual dtor for inheritance already defined in the Object class
    // virtual ~Stream() {}
    /// Reads a single byte from the stream and returns a 32-bit integer value
    /// equivalent to the value of the read byte.
    virtual ASPOSECPP_SHARED_API int ReadByte();
    /// Writes the specified unsigned 8-bit integer value to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void WriteByte(uint8_t value);

    /// Reads the specified number of bytes from the stream and writes them to the specified byte array.
    /// @param buffer The byte array to write the read bytes to
    /// @param offset A 0-based position in @p buffer to start writing at
    /// @param count The number of bytes to read
    /// @returns The number of bytes read
    virtual ASPOSECPP_SHARED_API int Read(ArrayPtr<uint8_t> buffer, int offset, int count) = 0;
    /// Writes the specified subrange of bytes from the specified byte array to the stream.
    /// @param buffer The array containing the bytes to write
    /// @param offset A 0-based index of the elemnet in @p buffer at which the subrange to write begins
    /// @param count The number of elements in the subrange to write
    virtual ASPOSECPP_SHARED_API void Write(ArrayPtr<uint8_t> buffer, int offset, int count) = 0;
    /// Sets the position of the stream represented by the current object.
    /// @param offset The byte offset relative to a position specified by @p origin
    /// @param origin Specifies the position from which and the direction toward which the offset is calculated
    /// @returns The new position of the stream
    virtual ASPOSECPP_SHARED_API int64_t Seek(int64_t offset, SeekOrigin origin) = 0;
    /// Sets the length of the stream represented by the current object.
    /// @param value The length in bytes to set
    virtual ASPOSECPP_SHARED_API void SetLength(int64_t value) = 0;
    /// Clears this stream's buffers and writes all buffered data to the underlying storage.
    virtual ASPOSECPP_SHARED_API void Flush() = 0;
    /// Closes the stream.
    virtual void Close() {}
    /// Releases all resources used by the current object and closes the stream.
    virtual ASPOSECPP_SHARED_API void Dispose() override;

    /// Initiates an asynchronous read operation.
    /// @param buffer A buffer to read to
    /// @param offset A 0-based offset in @p buffer indicating the position from which to start writing the read data
    /// @param count The number of bytes to read
    /// @param callback A callback to be called when the operation completes
    /// @param state User-provided data used to uniquly identify each particular asynchronous read operation
    /// @returns An IAsyncResult object representing the initiated asynchronous read operation
    virtual ASPOSECPP_SHARED_API System::SharedPtr<System::IAsyncResult> BeginRead(System::ArrayPtr<uint8_t> buffer, int offset, int count, System::AsyncCallback callback, System::SharedPtr<System::Object> state);
    /// Initiates an asynchronous write operation.
    /// @param buffer A buffer containing data to be written
    /// @param offset A 0-based offset in @p buffer indicating the position from which the data to write begins
    /// @param count The number of bytes to write
    /// @param callback A callback to be called when the operation completes
    /// @param state User-provided data used to uniquly identify each particular asynchronous write operation
    /// @returns An IAsyncResult object representing the initiated asynchronous write operation
    virtual ASPOSECPP_SHARED_API System::SharedPtr<System::IAsyncResult> BeginWrite(System::ArrayPtr<uint8_t> buffer, int offset, int count, System::AsyncCallback callback, System::SharedPtr<System::Object> state);
    /// Waits until the specified asynchronous read operation completes.
    /// @param asyncResult An IAsyncResult object that represents an asynchronous read operation
    /// @returns The number of bytes read during the read operation represented by @p asyncResult
    virtual ASPOSECPP_SHARED_API int EndRead(System::SharedPtr<System::IAsyncResult> asyncResult);
    /// Ends an asynchronous write operation. Waits until the specified asynchronous write operation completes.
    /// @param asyncResult An IAsyncResult object that represents an asynchronous write operation
    virtual ASPOSECPP_SHARED_API void EndWrite(System::SharedPtr<System::IAsyncResult> asyncResult);

    /// Sets the stream's position.
    /// @param value The byte offset to set the stream's position to
    virtual ASPOSECPP_SHARED_API void set_Position(int64_t value) = 0;
    /// Returns the current position of the stream.
    virtual ASPOSECPP_SHARED_API int64_t get_Position() ASPOSE_CONST = 0;
    /// Returns the length of the stream in bytes.
    virtual ASPOSECPP_SHARED_API int64_t get_Length() ASPOSE_CONST = 0;
    /// Determines if the stream is readable.
    /// @returns True if the stream is readable; otherwise - false
    virtual ASPOSECPP_SHARED_API bool get_CanRead() ASPOSE_CONST = 0;
    /// Determines if the stream supports seeking.
    /// @returns True if the stream supports seeking; otherwise - false
    virtual ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST = 0;
    /// Determines if the stream is writable.
    /// @returns True if the stream is writable; otherwise - false
    virtual ASPOSECPP_SHARED_API bool get_CanWrite() ASPOSE_CONST = 0;

    /// Gets a value that determines whether the current stream can time out.
    virtual ASPOSECPP_SHARED_API bool get_CanTimeout() ASPOSE_CONST;


    virtual ASPOSECPP_SHARED_API void set_ReadTimeout(int timeout);
    /// Gets or sets a value, in miliseconds, that determines how long the stream will attempt to read before timing out.
    virtual ASPOSECPP_SHARED_API int get_ReadTimeout() ASPOSE_CONST;

    virtual ASPOSECPP_SHARED_API void set_WriteTimeout(int timeout);
    /// Gets or sets a value, in miliseconds, that determines how long the stream will attempt to write before timing out.
    virtual ASPOSECPP_SHARED_API int get_WriteTimeout() ASPOSE_CONST;

    /// A stream with no underlying storage.
    static const System::SharedPtr<Stream> ASPOSECPP_SHARED_API Null;

protected:
    /// Releases all resources used by the current object and closes the stream.
    /// @param disposing Specifies whether the stream should be closed.
    virtual ASPOSECPP_SHARED_API void Dispose(bool disposing);

};

}} // System::IO

#endif // _aspose_system_io_stream_h_
