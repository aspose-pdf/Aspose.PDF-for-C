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

class ZipEntry : public System::Object
{
    RTTI_INFO_DECL();

    friend class ZipErrorEventArgs;
    friend class ZipFile;
    friend class ZipCrypto;

public:

    ZipEntry();

    System::DateTime get_LastModified() const;
    void set_LastModified(const System::DateTime& value);

    System::DateTime get_ModifiedTime() const;
    System::DateTime get_AccessedTime() const;
    System::DateTime get_CreationTime() const;

    bool get_EmitTimesInWindowsFormatWhenSaving() const;
    void set_EmitTimesInWindowsFormatWhenSaving(bool value);

    bool get_EmitTimesInUnixFormatWhenSaving() const;
    void set_EmitTimesInUnixFormatWhenSaving(bool value);

    ZipEntryTimestamp get_Timestamp() const;

    System::IO::FileAttributes get_Attributes() const;
    void set_Attributes(System::IO::FileAttributes value);

    bool get_ForceNoCompression() const;
    void set_ForceNoCompression(bool value);

    System::String get_FileName() const;
    void set_FileName(const System::String& value);

    System::IO::Stream::Ptr get_InputStream() const;
    void set_InputStream(const System::IO::Stream::Ptr& value);

    bool get_InputStreamWasJitProvided() const;

    ZipEntrySource get_Source() const;

    int16_t get_VersionNeeded() const;

    System::String get_Comment() const;
    void set_Comment(const System::String& value);

    System::Nullable<bool> get_RequiresZip64() const;
    System::Nullable<bool> get_OutputUsedZip64() const;

    int16_t get_BitField() const;

    int16_t get_CompressionMethod() const;
    void set_CompressionMethod(int16_t value);

    int64_t get_CompressedSize() const;
    int64_t get_UncompressedSize() const;

    double get_CompressionRatio() const;
    int get_Crc() const;
    bool get_IsDirectory() const;
    bool get_UsesEncryption() const;

    EncryptionAlgorithm get_Encryption() const;
    void set_Encryption(EncryptionAlgorithm value);

    void set_Password(const System::String& value);

    bool get_OverwriteOnExtract() const;
    void set_OverwriteOnExtract(bool value);

    ExtractExistingFileAction get_ExtractExistingFile() const;
    void set_ExtractExistingFile(ExtractExistingFileAction value);

    ZipErrorAction get_ZipErrorAction() const;
    void set_ZipErrorAction(ZipErrorAction value);

    bool get_IncludedInMostRecentSave() const;

    ReReadApprovalCallback get_WillReadTwiceOnInflation() const;
    void set_WillReadTwiceOnInflation(ReReadApprovalCallback value);

    WantCompressionCallback get_WantCompression() const;
    void set_WantCompression(WantCompressionCallback value);

    bool get_UseUnicodeAsNecessary() const;
    void set_UseUnicodeAsNecessary(bool value);

    System::SharedPtr<System::Text::Encoding> get_ProvisionalAlternateEncoding() const;
    void set_ProvisionalAlternateEncoding(const System::SharedPtr<System::Text::Encoding>& value);

    System::SharedPtr<System::Text::Encoding> get_ActualEncoding() const;

    bool get_IsText() const;
    void set_IsText(bool value);

    void SetEntryTimes(const System::DateTime& created, const System::DateTime& accessed, const System::DateTime& modified);
    void SetNtfsTimes(const System::DateTime& created, const System::DateTime& accessed, const System::DateTime& modified);

    System::String ToString() ASPOSE_CONST override;

    void Extract();
    void Extract(bool overwrite);
    void Extract(ExtractExistingFileAction extractExistingFile);
    void Extract(const System::SharedPtr<System::IO::Stream>& stream);
    void Extract(const System::String& baseDirectory);
    void Extract(const System::String& baseDirectory, bool overwrite);
    void Extract(const System::String& baseDirectory, ExtractExistingFileAction extractExistingFile);

    void ExtractWithPassword(const System::String& password);
    void ExtractWithPassword(const System::String& baseDirectory, const System::String& password);
    void ExtractWithPassword(bool overwrite, const System::String& password);
    void ExtractWithPassword(ExtractExistingFileAction extractExistingFile, const System::String& password);
    void ExtractWithPassword(const System::String& baseDirectory, bool overwrite, const System::String& password);
    void ExtractWithPassword(const System::String& baseDirectory, ExtractExistingFileAction extractExistingFile, const System::String& password);
    void ExtractWithPassword(const System::SharedPtr<System::IO::Stream>& stream, const System::String& password);

    System::SharedPtr<CrcCalculatorStream> OpenReader();
    System::SharedPtr<CrcCalculatorStream> OpenReader(const System::String& password);

protected:

    System::String get_LocalFileName() const;
    int get_LengthOfCryptoHeaderBytes() const;
    int64_t get_FileDataPosition();

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
    System::SharedPtr<System::IO::Stream> get_ArchiveStream();

    static System::String NameInArchive(const System::String& filename, const System::String& directoryPathInArchive);
    static System::SharedPtr<ZipEntry> Create(const System::String& filename, const System::String& nameInArchive);
    static System::SharedPtr<ZipEntry> Create(const System::String& filename, const System::String& nameInArchive, bool isStream, const System::SharedPtr<System::IO::Stream>& stream);
    void MarkAsDirectory();
    void ResetDirEntry();
    static System::SharedPtr<ZipEntry> ReadDirEntry(const System::SharedPtr<ZipFile>& zf);
    static bool IsNotValidZipDirEntrySig(int signature);
    void _SetTimes(const System::String& fileOrDirectory, bool isFile) const;
    static int ReadWeakEncryptionHeader(const System::SharedPtr<System::IO::Stream>& s, const System::ArrayPtr<uint8_t>& buffer);
    static System::SharedPtr<ZipEntry> Read(const System::SharedPtr<ZipFile>& zf, bool first);
    static void HandlePK00Prefix(const System::SharedPtr<System::IO::Stream>& s);
    int ProcessExtraField(int16_t extraFieldLength);
    void WriteCentralDirectoryEntry(const System::SharedPtr<System::IO::Stream>& s);
    void CopyMetaData(const System::SharedPtr<ZipEntry>& source);
    void Write(const System::SharedPtr<System::IO::Stream>& s);
    shared_members_type GetSharedMembers() override;

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

