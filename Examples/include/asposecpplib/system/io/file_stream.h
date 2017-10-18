#ifndef _aspose_io_file_stream_h_
#define _aspose_io_file_stream_h_

#include <fstream>
#include "system/io/stream.h"
#include "system/io/file.h"
#include "system/io/file_mode.h"
#include "system/io/file_access.h"
#include "system/io/file_share.h"
#include "system/io/file_options.h"
#include "system/reflection.h"

namespace System { namespace IO {

class FileStream : public Stream
{
    RTTI_INFO(System::IO::FileStream, ::System::BaseTypesInfo<System::IO::Stream>);
public:
    static int const ASPOSECPP_SHARED_API DefaultBufferSize;
    FileStream(const String& path, FileMode mode,
               FileAccess access = FileAccess::ReadWrite,
               FileShare share = FileShare::ReadWrite,
               int bufferSize = DefaultBufferSize,
               FileOptions options = FileOptions::SequentialScan);
    ~FileStream();

    bool        get_CanRead() ASPOSE_CONST override;
    bool        get_CanSeek() ASPOSE_CONST override;
    bool        get_CanWrite() ASPOSE_CONST override;
    int64_t     get_Length() ASPOSE_CONST override;
    String      get_Name() ASPOSE_CONST;
    void        set_Position(int64_t value) override;
    int64_t     get_Position() ASPOSE_CONST override;

    void        Close() override;
    void        Flush() override;
    void        Flush(bool flushToDisk);

    int         ReadByte() override;
    int         Read(ArrayPtr<uint8_t> buffer, int offset, int count) override;

    int64_t     Seek(int64_t offset, SeekOrigin origin) override;
    void        SetLength(int64_t value) override;

    void        WriteByte(uint8_t value) override;
    void        Write(ArrayPtr<uint8_t> buffer, int offset, int count) override;

private:
    bool m_can_seek = true;
    bool m_can_read;
    bool m_can_write;

    std::fstream m_fstream;
    String m_fs_path;
    std::ios_base::openmode m_fs_mode;
    int m_fs_protection;

    bool m_reading = false;
    bool m_writing = false;

    void Open(std::ios_base::openmode mode);
    void CloseImpl();

    void FlushRead();
    void FlushWrite();
};

}}

#endif //_aspose_io_file_stream_h_
