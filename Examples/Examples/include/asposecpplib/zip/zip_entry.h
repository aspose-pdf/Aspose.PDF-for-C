// NOTICE: AUTOPORTED from foundation/src/zip/ZipEntry.cs with some stylistic fixes

#ifndef _aspose_zip_zip_entry_h_
#define _aspose_zip_zip_entry_h_

#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/nullable.h>
#include <system/io/stream.h>
#include <system/io/file_attributes.h>
#include <system/enum_helpers.h>
#include <system/date_time.h>
#include <system/text/regularexpressions/regex.h>

#include "zip/events.h"
#include "zip/zip_error_action.h"
#include "zip/zip_entry_timestamp.h"
#include "zip/zip_entry_source.h"
#include "zip/extract_existing_file_action.h"
#include "zip/encryption_algorithm.h"

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
using namespace Enums;
#else
namespace Aspose { namespace Zip {
#endif

class CrcCalculatorStream;
class ZipErrorEventArgs;
class ZipFile;
class ZipCrypto;

/// Represents a single entry in a ZipFile. Typically, applications get a ZipEntry
/// by enumerating the entries within a ZipFile, or by adding an entry to a ZipFile.

class ASPOSECPP_SHARED_CLASS ZipEntry : public System::Object
{
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

    friend class ZipErrorEventArgs;
    friend class ZipFile;
    friend class ZipCrypto;

public:

    ASPOSECPP_SHARED_API ZipEntry();

    ASPOSECPP_SHARED_API System::DateTime get_LastModified() const;
    ASPOSECPP_SHARED_API void set_LastModified(const System::DateTime& value);

    ASPOSECPP_SHARED_API System::DateTime get_ModifiedTime() const;
    ASPOSECPP_SHARED_API System::DateTime get_AccessedTime() const;
    ASPOSECPP_SHARED_API System::DateTime get_CreationTime() const;

    ASPOSECPP_SHARED_API bool get_EmitTimesInWindowsFormatWhenSaving() const;
    ASPOSECPP_SHARED_API void set_EmitTimesInWindowsFormatWhenSaving(bool value);

    ASPOSECPP_SHARED_API bool get_EmitTimesInUnixFormatWhenSaving() const;
    ASPOSECPP_SHARED_API void set_EmitTimesInUnixFormatWhenSaving(bool value);

    ASPOSECPP_SHARED_API ZipEntryTimestamp get_Timestamp() const;

    ASPOSECPP_SHARED_API System::IO::FileAttributes get_Attributes() const;
    ASPOSECPP_SHARED_API void set_Attributes(System::IO::FileAttributes value);

    ASPOSECPP_SHARED_API bool get_ForceNoCompression() const;
    ASPOSECPP_SHARED_API void set_ForceNoCompression(bool value);

    ASPOSECPP_SHARED_API System::String get_FileName() const;
    ASPOSECPP_SHARED_API void set_FileName(const System::String& value);

    ASPOSECPP_SHARED_API System::IO::Stream::Ptr get_InputStream() const;
    ASPOSECPP_SHARED_API void set_InputStream(const System::IO::Stream::Ptr& value);

    ASPOSECPP_SHARED_API bool get_InputStreamWasJitProvided() const;

    ASPOSECPP_SHARED_API ZipEntrySource get_Source() const;

    ASPOSECPP_SHARED_API int16_t get_VersionNeeded() const;

    ASPOSECPP_SHARED_API System::String get_Comment() const;
    ASPOSECPP_SHARED_API void set_Comment(const System::String& value);

    ASPOSECPP_SHARED_API System::Nullable<bool> get_RequiresZip64() const;
    ASPOSECPP_SHARED_API System::Nullable<bool> get_OutputUsedZip64() const;

    ASPOSECPP_SHARED_API int16_t get_BitField() const;

    ASPOSECPP_SHARED_API int16_t get_CompressionMethod() const;
    ASPOSECPP_SHARED_API void set_CompressionMethod(int16_t value);

    ASPOSECPP_SHARED_API int64_t get_CompressedSize() const;
    ASPOSECPP_SHARED_API int64_t get_UncompressedSize() const;

    ASPOSECPP_SHARED_API double get_CompressionRatio() const;
    ASPOSECPP_SHARED_API int get_Crc() const;

    ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> get_ZipFile() const;

    ASPOSECPP_SHARED_API bool get_IsDirectory() const;
    ASPOSECPP_SHARED_API bool get_UsesEncryption() const;

    ASPOSECPP_SHARED_API EncryptionAlgorithm get_Encryption() const;
    ASPOSECPP_SHARED_API void set_Encryption(EncryptionAlgorithm value);

    ASPOSECPP_SHARED_API void set_Password(const System::String& value);

    ASPOSECPP_SHARED_API bool get_OverwriteOnExtract() const;
    ASPOSECPP_SHARED_API void set_OverwriteOnExtract(bool value);

    ASPOSECPP_SHARED_API ExtractExistingFileAction get_ExtractExistingFile() const;
    ASPOSECPP_SHARED_API void set_ExtractExistingFile(ExtractExistingFileAction value);

    ASPOSECPP_SHARED_API ZipErrorAction get_ZipErrorAction() const;
    ASPOSECPP_SHARED_API void set_ZipErrorAction(ZipErrorAction value);

    ASPOSECPP_SHARED_API bool get_IncludedInMostRecentSave() const;

    ASPOSECPP_SHARED_API ReReadApprovalCallback get_WillReadTwiceOnInflation() const;
    ASPOSECPP_SHARED_API void set_WillReadTwiceOnInflation(ReReadApprovalCallback value);

    ASPOSECPP_SHARED_API WantCompressionCallback get_WantCompression() const;
    ASPOSECPP_SHARED_API void set_WantCompression(WantCompressionCallback value);

    ASPOSECPP_SHARED_API bool get_UseUnicodeAsNecessary() const;
    ASPOSECPP_SHARED_API void set_UseUnicodeAsNecessary(bool value);

    ASPOSECPP_SHARED_API System::SharedPtr<System::Text::Encoding> get_ProvisionalAlternateEncoding() const;
    ASPOSECPP_SHARED_API void set_ProvisionalAlternateEncoding(const System::SharedPtr<System::Text::Encoding>& value);

    ASPOSECPP_SHARED_API System::SharedPtr<System::Text::Encoding> get_ActualEncoding() const;

    ASPOSECPP_SHARED_API bool get_IsText() const;
    ASPOSECPP_SHARED_API void set_IsText(bool value);

    ASPOSECPP_SHARED_API void SetEntryTimes(const System::DateTime& created, const System::DateTime& accessed, const System::DateTime& modified);
    ASPOSECPP_SHARED_API void SetNtfsTimes(const System::DateTime& created, const System::DateTime& accessed, const System::DateTime& modified);

    ASPOSECPP_SHARED_API System::String ToString() ASPOSE_CONST override;

    ASPOSECPP_SHARED_API void Extract();
    ASPOSECPP_SHARED_API void Extract(bool overwrite);
    ASPOSECPP_SHARED_API void Extract(ExtractExistingFileAction extractExistingFile);
    ASPOSECPP_SHARED_API void Extract(const System::SharedPtr<System::IO::Stream>& stream);
    ASPOSECPP_SHARED_API void Extract(const System::String& baseDirectory);
    ASPOSECPP_SHARED_API void Extract(const System::String& baseDirectory, bool overwrite);
    ASPOSECPP_SHARED_API void Extract(const System::String& baseDirectory, ExtractExistingFileAction extractExistingFile);

    ASPOSECPP_SHARED_API void ExtractWithPassword(const System::String& password);
    ASPOSECPP_SHARED_API void ExtractWithPassword(const System::String& baseDirectory, const System::String& password);
    ASPOSECPP_SHARED_API void ExtractWithPassword(bool overwrite, const System::String& password);
    ASPOSECPP_SHARED_API void ExtractWithPassword(ExtractExistingFileAction extractExistingFile, const System::String& password);
    ASPOSECPP_SHARED_API void ExtractWithPassword(const System::String& baseDirectory, bool overwrite, const System::String& password);
    ASPOSECPP_SHARED_API void ExtractWithPassword(const System::String& baseDirectory, ExtractExistingFileAction extractExistingFile, const System::String& password);
    ASPOSECPP_SHARED_API void ExtractWithPassword(const System::SharedPtr<System::IO::Stream>& stream, const System::String& password);

    ASPOSECPP_SHARED_API System::SharedPtr<CrcCalculatorStream> OpenReader();
    ASPOSECPP_SHARED_API System::SharedPtr<CrcCalculatorStream> OpenReader(const System::String& password);

protected:

    ASPOSECPP_SHARED_API System::String get_LocalFileName() const;
    ASPOSECPP_SHARED_API int get_LengthOfCryptoHeaderBytes() const;
    ASPOSECPP_SHARED_API int64_t get_FileDataPosition();

    System::SharedPtr<ZipCrypto> _zipCrypto;
    System::DateTime _LastModified;
    System::String _LocalFileName;
    int16_t _VersionNeeded;
    int16_t _BitField;
    int16_t _CompressionMethod;
    System::String _Comment;
    int64_t _CompressedSize;
    int64_t _CompressedFileDataSize;
    int64_t _UncompressedSize;
    int _TimeBlob;
    int _Crc32;
    System::ArrayPtr<uint8_t> _Extra;
    System::WeakPtr<ZipFile> _zipfile;
    int64_t __FileDataPosition;
    int64_t _RelativeOffsetOfLocalHeader;
    int _LengthOfHeader;
    int _LengthOfTrailer;
    System::String _Password;
    ZipEntrySource _Source;
    EncryptionAlgorithm _Encryption;
    System::ArrayPtr<uint8_t> _WeakEncryptionHeader;
    System::WeakPtr<System::IO::Stream> _archiveStream;

    bool get_AttributesIndicateDirectory() const;
    ASPOSECPP_SHARED_API System::SharedPtr<System::IO::Stream> get_ArchiveStream();

    static ASPOSECPP_SHARED_API System::String NameInArchive(const System::String& filename, const System::String& directoryPathInArchive);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> Create(const System::String& filename, const System::String& nameInArchive);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> Create(const System::String& filename, const System::String& nameInArchive, bool isStream, const System::SharedPtr<System::IO::Stream>& stream);
    ASPOSECPP_SHARED_API void MarkAsDirectory();
    ASPOSECPP_SHARED_API void ResetDirEntry();
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> ReadDirEntry(const System::SharedPtr<ZipFile>& zf);
    static ASPOSECPP_SHARED_API bool IsNotValidZipDirEntrySig(int signature);
    ASPOSECPP_SHARED_API void _SetTimes(const System::String& fileOrDirectory, bool isFile) const;
    static ASPOSECPP_SHARED_API int ReadWeakEncryptionHeader(const System::SharedPtr<System::IO::Stream>& s, const System::ArrayPtr<uint8_t>& buffer);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> Read(const System::SharedPtr<ZipFile>& zf, bool first);
    static ASPOSECPP_SHARED_API void HandlePK00Prefix(const System::SharedPtr<System::IO::Stream>& s);
    ASPOSECPP_SHARED_API int ProcessExtraField(int16_t extraFieldLength);
    ASPOSECPP_SHARED_API void WriteCentralDirectoryEntry(const System::SharedPtr<System::IO::Stream>& s);
    ASPOSECPP_SHARED_API void CopyMetaData(const System::SharedPtr<ZipEntry>& source);
    ASPOSECPP_SHARED_API void Write(const System::SharedPtr<System::IO::Stream>& s);
    ASPOSECPP_SHARED_API shared_members_type GetSharedMembers() override;

private:

    int get_BufferSize() const;

    ExtractExistingFileAction _ExtractExistingFile;
    ZipErrorAction _ZipErrorAction;
    ReReadApprovalCallback _WillReadTwiceOnInflation;
    WantCompressionCallback _WantCompression;

    int get_LengthOfHeader();

    System::DateTime _Mtime, _Atime, _Ctime;
    bool _ntfsTimesAreSet;
    bool _emitNtfsTimes;
    bool _emitUnixTimes;
    bool _TrimVolumeFromFullyQualifiedPaths;
    bool _ForceNoCompression;
    System::String _FileNameInArchive;
    bool _IsDirectory;
    System::ArrayPtr<uint8_t> _CommentBytes;
    bool _crcCalculated;
    bool _metadataChanged;
    bool _restreamRequiredOnSave;
    bool _sourceIsEncrypted;
    bool _skippedDuringSave;

    static System::SharedPtr<System::Text::Encoding>& IBM437();

    System::SharedPtr<System::Text::Encoding> _provisionalAlternateEncoding;
    System::SharedPtr<System::Text::Encoding> _actualEncoding;
    System::ArrayPtr<uint8_t> _EntryHeader;
    int64_t _TotalEntrySize;
    bool _InputUsesZip64;
    uint32_t _UnsupportedAlgorithmId;
    System::SharedPtr<System::IO::Stream> _sourceStream;
    System::Nullable<int64_t> _sourceStreamOriginalPosition;
    bool _sourceWasJitProvided;
    bool _ioOperationCanceled;
    bool _presumeZip64;
    System::Nullable<bool> _entryRequiresZip64;
    System::Nullable<bool> _OutputUsesZip64;
    bool _IsText;
    ZipEntryTimestamp _timestamp;
    static System::DateTime _unixEpoch;
    int16_t _VersionMadeBy;
    int16_t _InternalFileAttrs;
    int _ExternalFileAttrs;
    int16_t _filenameLength;
    int16_t _extraFieldLength;
    int16_t _commentLength;

    System::String get_UnsupportedAlgorithm() const;
    System::String get_UnsupportedCompressionMethod() const;

    int _readExtraDepth;
    static System::SharedPtr<System::Text::RegularExpressions::Regex>& gIncompressibleRegex();

    void SetFdpLoh();
    System::SharedPtr<CrcCalculatorStream> InternalOpenReader(const System::String& password);
    void OnExtractProgress(int64_t bytesWritten, int64_t totalBytesToWrite);
    void OnBeforeExtract(const System::String& path);
    void OnAfterExtract(const System::String& path);
    void OnExtractExisting(const System::String& path);
    void OnWriteBlock(int64_t bytesXferred, int64_t totalBytesToXfer);
    static void ReallyDelete(const System::String& fileName);
    void InternalExtract(const System::String& baseDir, const System::SharedPtr<System::IO::Stream>& outstream, const System::String& password);
    void ExternalExtractFinalization(const System::String& TargetFile, const System::SharedPtr<System::IO::Stream>& output, bool fileExistsBeforeExtraction) const;
    int CheckExtractExistingFile(const System::String& baseDir, const System::String& TargetFile);
    void _CheckRead(int nbytes) const;
    int _ExtractOne(const System::SharedPtr<System::IO::Stream>& output);
    void ValidateEncryption() const;
    void ValidateCompression() const;
    void SetupCrypto(const System::String& password);
    bool ValidateOutput(const System::String& basedir, const System::SharedPtr<System::IO::Stream>& outstream, System::String &OutputFile) const;
    void ReadExtraField();
    static bool ReadHeader(const System::SharedPtr<ZipEntry>& ze, const System::SharedPtr<System::Text::Encoding>& defaultEncoding);
    static bool IsNotValidSig(int signature);
    static void HandleUnexpectedDataDescriptor(const System::SharedPtr<ZipEntry>& entry);
    int ProcessExtraFieldPkwareStrongEncryption(const System::ArrayPtr<uint8_t>& Buffer, int j);
    int ProcessExtraFieldZip64(const System::ArrayPtr<uint8_t>& Buffer, int32_t j, int16_t DataSize, int64_t posn);
    int ProcessExtraFieldInfoZipTimes(const System::ArrayPtr<uint8_t>& Buffer, int32_t j, int16_t DataSize, int64_t posn);
    int ProcessExtraFieldUnixTimes(const System::ArrayPtr<uint8_t>& Buffer, int32_t j, int16_t DataSize, int64_t posn);
    int ProcessExtraFieldWindowsTimes(const System::ArrayPtr<uint8_t>& Buffer, int32_t j, int16_t DataSize, int64_t posn);
    void _ConsAndWriteCentralDirectoryEntry(const System::SharedPtr<System::IO::Stream>& s);
    System::ArrayPtr<uint8_t> ConsExtraField(bool forCentralDirectory) const;
    System::SharedPtr<System::Text::Encoding> GenerateCommentBytes();
    System::ArrayPtr<uint8_t> _GetEncodedFileNameBytes();
    bool WantReadAgain() const;
    static bool SeemsCompressible(const System::String& filename);
    bool DefaultWantCompression() const;
    void FigureCompressionMethodForWriting(int cycle);
    void WriteHeader(const System::SharedPtr<System::IO::Stream>& s, int cycle);
    int FigureCrc32();
    void PrepSourceStream();
    void _WriteFileData(const System::SharedPtr<System::IO::Stream>& s);
    void OnZipErrorWhileSaving(const System::Exception& e);
    void _EmitOne(const System::SharedPtr<System::IO::Stream>& outstream);
    void _WriteSecurityMetadata(const System::SharedPtr<System::IO::Stream>& outstream);
    void CopyThroughOneEntry(const System::SharedPtr<System::IO::Stream>& outstream);
    void CopyThroughWithRecompute(const System::SharedPtr<System::IO::Stream>& outstream, const System::SharedPtr<CrcCalculatorStream>& input1);
    void CopyThroughWithNoChange(const System::SharedPtr<System::IO::Stream>& outstream, const System::SharedPtr<CrcCalculatorStream>& input1);

};

#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_zip_entry_h_

