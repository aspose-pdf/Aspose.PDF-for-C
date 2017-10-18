#ifndef _aspose_system_io_file_h_
#define _aspose_system_io_file_h_

#include "fwd.h"
#include "system/object.h"
#include "system/array.h"
#include "system/date_time.h"
#include "system/collections/ienumerable.h"
#include "system/text/encoding.h"
#include "system/io/file_stream.h"
#include "system/io/stream_writer.h"
#include "system/io/stream_reader.h"
#include "system/io/file_mode.h"
#include "system/io/file_share.h"
#include "system/io/file_options.h"
#include "system/io/file_access.h"
#include "system/io/file_attributes.h"
#include "system/io/path.h"

#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

namespace System { namespace IO {

    class File
    {
        public:
            static const int ASPOSECPP_SHARED_API DefaultBufferSize;
            static void GetStat(const String& path, struct stat* data);

            static void AppendAllLines(const String& path, SharedPtr<Collections::Generic::IEnumerable<String>> contents, EncodingPtr encoding = Text::Encoding::get_UTF8Unmarked());
            static void AppendAllText(const String& path, const String& contents, EncodingPtr encoding = Text::Encoding::get_UTF8Unmarked());
            static StreamWriterPtr AppendText(const String& path);
            static void Copy(const String& sourceFileName, const String& destFileName, bool overwrite = false);
            static FileStreamPtr Create(const String& path, int bufferSize=DefaultBufferSize, FileOptions options=FileOptions::None);
            static StreamWriterPtr CreateText(const String& path);

            static void Decrypt(const String& path);
            static void Delete(const String& path);
            static void Encrypt(const String& path);
            static bool Exists(const String& path);

            static FileAttributes GetAttributesFromStMode(uint16_t st_mode);
            static FileAttributes GetAttributes(const String& path);
            static DateTime GetCreationTime(const String& path);
            static DateTime GetCreationTimeUtc(const String& path);
            static DateTime GetLastAccessTime(const String& path);
            static DateTime GetLastAccessTimeUtc(const String& path);
            static DateTime GetLastWriteTime(const String& path);
            static DateTime GetLastWriteTimeUtc(const String& path);

            static void Move(const String& sourceFileName, const String& destFileName);
            static FileStreamPtr Open(const String& path, FileMode mode);
            static FileStreamPtr Open(const String& path, FileMode mode, FileAccess access, FileShare share = FileShare::None);
            static FileStreamPtr OpenRead(const String& path);
            static StreamReaderPtr OpenText(const String& path, EncodingPtr encoding = Text::Encoding::get_UTF8Unmarked());
            static FileStreamPtr OpenWrite(const String& path);

            static ArrayPtr<uint8_t> ReadAllBytes(const String& path);
            static ArrayPtr<String> ReadAllLines(const String& path, EncodingPtr encoding = Text::Encoding::get_UTF8Unmarked());
            static String ReadAllText(const String& path, EncodingPtr encoding = Text::Encoding::get_UTF8Unmarked());
            static SharedPtr<Collections::Generic::IEnumerable<String> > ReadLines(const String& path, EncodingPtr encoding = Text::Encoding::get_UTF8Unmarked());
            static void Replace(const String& sourceFileName, const String& destinationFileName, const String& destinationBackupFileName, bool ignoreMetadataErrors = true);

            static void SetAttributes(const String& path, FileAttributes fileAttributes);
            static void SetCreationTime(const String& path, DateTime creationTime);
            static void SetCreationTimeUtc(const String& path, DateTime creationTimeUtc);
            static void SetLastWriteTime(const String& path, DateTime lastWriteTime);
            static void SetLastWriteTimeUtc(const String& path, DateTime lastWriteTimeUtc);
            static void SetLastAccessTime(const String& path, DateTime lastWriteTime);
            static void SetLastAccessTimeUtc(const String& path, DateTime lastWriteTimeUtc);

            static void WriteAllBytes(const String& path, ArrayPtr<uint8_t> bytes);

            static void WriteAllLines(const String& path, SharedPtr<Collections::Generic::IEnumerable<String>> contents, EncodingPtr encoding = Text::Encoding::get_UTF8Unmarked());
            static void WriteAllLines(const String& path, ArrayPtr<String> contents, EncodingPtr encoding = Text::Encoding::get_UTF8Unmarked());

            static void WriteAllText(const String& path, const String& contents, EncodingPtr encoding = Text::Encoding::get_UTF8Unmarked());
    };
}}

#endif // _aspose_system_io_file_h_

