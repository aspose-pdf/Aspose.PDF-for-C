// NOTICE: AUTOPORTED from foundation/src/zip/ZipFile.cs with some stylistic fixes

#ifndef _aspose_zip_zip_file_h_
#define _aspose_zip_zip_file_h_

#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/nullable.h>
#include <system/io/text_writer.h>
#include <system/io/stream.h>
#include <system/eventhandler.h>
#include <system/collections/list.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>

#include "zip/zlib_compression_flags.h"
#include "zip/events.h"
#include "zip/zip64_option.h"
#include "zip/zip_error_action.h"
#include "zip/extract_existing_file_action.h"
#include "zip/encryption_algorithm.h"

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
using namespace Enums;
#else
namespace Aspose { namespace Zip {
#endif

class ZipEntry;

class ASPOSECPP_SHARED_CLASS ZipFile : public System::Collections::Generic::IEnumerable<System::SharedPtr<ZipEntry>>
{
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<ZipEntry>> BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();

    friend class ZipEntry;

public:

    ASPOSECPP_SHARED_API ZipFile();
    ASPOSECPP_SHARED_API ZipFile(const System::String& fileName);
    ASPOSECPP_SHARED_API ZipFile(const System::String& fileName, const System::Text::Encoding::Ptr& encoding);
    ASPOSECPP_SHARED_API ZipFile(const System::Text::Encoding::Ptr& encoding);
    ASPOSECPP_SHARED_API ZipFile(const System::String& fileName, const System::IO::TextWriter::Ptr& statusMessageWriter);
    ASPOSECPP_SHARED_API ZipFile(const System::String& fileName, const System::IO::TextWriter::Ptr& statusMessageWriter, const System::Text::Encoding::Ptr& encoding);

    virtual ASPOSECPP_SHARED_API ~ZipFile();

    ASPOSECPP_SHARED_API bool get_FullScan() const;
    ASPOSECPP_SHARED_API void set_FullScan(bool value);
    ASPOSECPP_SHARED_API int get_BufferSize() const;
    ASPOSECPP_SHARED_API void set_BufferSize(int value);
    ASPOSECPP_SHARED_API int get_CodecBufferSize() const;
    ASPOSECPP_SHARED_API void set_CodecBufferSize(int value);
    ASPOSECPP_SHARED_API bool get_FlattenFoldersOnExtract() const;
    ASPOSECPP_SHARED_API void set_FlattenFoldersOnExtract(bool value);
    ASPOSECPP_SHARED_API CompressionStrategy get_Strategy() const;
    ASPOSECPP_SHARED_API void set_Strategy(CompressionStrategy value);
    ASPOSECPP_SHARED_API System::String get_Name() const;
    ASPOSECPP_SHARED_API void set_Name(const System::String& value);
    ASPOSECPP_SHARED_API CompressionLevel get_CompressionLevel() const;
    ASPOSECPP_SHARED_API void set_CompressionLevel(CompressionLevel value);
    ASPOSECPP_SHARED_API System::String get_Comment() const;
    ASPOSECPP_SHARED_API void set_Comment(const System::String& value);
    ASPOSECPP_SHARED_API bool get_EmitTimesInWindowsFormatWhenSaving() const;
    ASPOSECPP_SHARED_API void set_EmitTimesInWindowsFormatWhenSaving(bool value);
    ASPOSECPP_SHARED_API bool get_EmitTimesInUnixFormatWhenSaving() const;
    ASPOSECPP_SHARED_API void set_EmitTimesInUnixFormatWhenSaving(bool value);
    ASPOSECPP_SHARED_API bool get_CaseSensitiveRetrieval() const;
    ASPOSECPP_SHARED_API void set_CaseSensitiveRetrieval(bool value);
    ASPOSECPP_SHARED_API bool get_UseUnicodeAsNecessary() const;
    ASPOSECPP_SHARED_API void set_UseUnicodeAsNecessary(bool value);
    ASPOSECPP_SHARED_API Zip64Option get_UseZip64WhenSaving() const;
    ASPOSECPP_SHARED_API void set_UseZip64WhenSaving(Zip64Option value);
    ASPOSECPP_SHARED_API System::Nullable<bool> get_RequiresZip64() const;
    ASPOSECPP_SHARED_API System::Nullable<bool> get_OutputUsedZip64() const;
    ASPOSECPP_SHARED_API System::SharedPtr<System::Text::Encoding> get_ProvisionalAlternateEncoding() const;
    ASPOSECPP_SHARED_API void set_ProvisionalAlternateEncoding(const System::SharedPtr<System::Text::Encoding>& value);

    static ASPOSECPP_SHARED_API System::SharedPtr<System::Text::Encoding>& DefaultEncoding();

    ASPOSECPP_SHARED_API System::SharedPtr<System::IO::TextWriter> get_StatusMessageTextWriter() const;
    ASPOSECPP_SHARED_API void set_StatusMessageTextWriter(const System::SharedPtr<System::IO::TextWriter>& value);
    ASPOSECPP_SHARED_API bool get_ForceNoCompression() const;
    ASPOSECPP_SHARED_API void set_ForceNoCompression(bool value);
    ASPOSECPP_SHARED_API System::String get_TempFileFolder() const;
    ASPOSECPP_SHARED_API void set_TempFileFolder(const System::String& value);
    ASPOSECPP_SHARED_API void set_Password(const System::String& value);
    ASPOSECPP_SHARED_API ExtractExistingFileAction get_ExtractExistingFile() const;
    ASPOSECPP_SHARED_API void set_ExtractExistingFile(ExtractExistingFileAction value);
    ASPOSECPP_SHARED_API ZipErrorAction get_ZipErrorAction() const;
    ASPOSECPP_SHARED_API void set_ZipErrorAction(ZipErrorAction value);
    ASPOSECPP_SHARED_API EncryptionAlgorithm get_Encryption() const;
    ASPOSECPP_SHARED_API void set_Encryption(EncryptionAlgorithm value);
    ASPOSECPP_SHARED_API ReReadApprovalCallback get_WillReadTwiceOnInflation() const;
    ASPOSECPP_SHARED_API void set_WillReadTwiceOnInflation(ReReadApprovalCallback value);
    ASPOSECPP_SHARED_API WantCompressionCallback get_WantCompression() const;
    ASPOSECPP_SHARED_API void set_WantCompression(WantCompressionCallback value);
    ASPOSECPP_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::String>> get_EntryFileNames() const;
    ASPOSECPP_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ZipEntry>>> get_Entries() const;
    ASPOSECPP_SHARED_API int get_Count() const;

    ASPOSECPP_SHARED_API System::String ToString() ASPOSE_CONST override;

    ASPOSECPP_SHARED_API void Initialize(const System::String& fileName);

    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> idx_get(int ix) const;
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> idx_set(int ix, const System::SharedPtr<ZipEntry>& value);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> idx_get(const System::String& fileName) const;
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> idx_set(const System::String& fileName, const System::SharedPtr<ZipEntry>& value);

    ASPOSECPP_SHARED_API void RemoveEntry(const System::SharedPtr<ZipEntry>& entry);
    ASPOSECPP_SHARED_API void RemoveEntry(const System::String& fileName);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddItem(const System::String& fileOrDirectoryName);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddItem(const System::String& fileOrDirectoryName, const System::String& directoryPathInArchive);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddFile(const System::String& fileName);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddFile(const System::String& fileName, const System::String& directoryPathInArchive);
    ASPOSECPP_SHARED_API void RemoveEntries(const System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ZipEntry>>>& entriesToRemove);
    ASPOSECPP_SHARED_API void RemoveEntries(const System::SharedPtr<System::Collections::Generic::List<System::String>>& entriesToRemove);
    ASPOSECPP_SHARED_API void AddFiles(const System::SharedPtr<System::Collections::Generic::List<System::String>>& fileNames);
    ASPOSECPP_SHARED_API void UpdateFiles(const System::SharedPtr<System::Collections::Generic::List<System::String>>& fileNames);
    ASPOSECPP_SHARED_API     void AddFiles(const System::SharedPtr<System::Collections::Generic::List<System::String>>& fileNames, const System::String& directoryPathInArchive);
    ASPOSECPP_SHARED_API void AddFiles(const System::SharedPtr<System::Collections::Generic::List<System::String>>& fileNames, bool preserveDirHierarchy, const System::String& directoryPathInArchive);
    ASPOSECPP_SHARED_API void UpdateFiles(const System::SharedPtr<System::Collections::Generic::List<System::String>>& fileNames, const System::String& directoryPathInArchive);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> UpdateFile(const System::String& fileName);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> UpdateFile(const System::String& fileName, const System::String& directoryPathInArchive);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> UpdateDirectory(const System::String& directoryName);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> UpdateDirectory(const System::String& directoryName, const System::String& directoryPathInArchive);
    ASPOSECPP_SHARED_API void UpdateItem(const System::String& itemName);
    ASPOSECPP_SHARED_API void UpdateItem(const System::String& itemName, const System::String& directoryPathInArchive);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddFileFromStream(const System::String& fileName, const System::String& directoryPathInArchive, const System::SharedPtr<System::IO::Stream>& stream);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddFileStream(const System::String& fileName, const System::String& directoryPathInArchive, const System::SharedPtr<System::IO::Stream>& stream);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddEntry(const System::String& fileName, const System::String& directoryPathInArchive, const System::String& content);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddEntry(const System::String& fileName, const System::String& directoryPathInArchive, const System::String& content, const System::SharedPtr<System::Text::Encoding>& encoding);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddEntry(const System::String& fileName, const System::String& directoryPathInArchive, System::SharedPtr<System::IO::Stream> stream);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddFileFromString(const System::String& fileName, const System::String& directoryPathInArchive, const System::String& content);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> UpdateEntry(const System::String& fileName, const System::String& directoryPathInArchive, const System::String& content);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> UpdateEntry(const System::String& fileName, const System::String& directoryPathInArchive, const System::String& content, const System::SharedPtr<System::Text::Encoding>& encoding);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> UpdateEntry(const System::String& fileName, const System::String& directoryPathInArchive, const System::SharedPtr<System::IO::Stream>& stream);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> UpdateFileStream(const System::String& fileName, const System::String& directoryPathInArchive, const System::SharedPtr<System::IO::Stream>& stream);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddEntry(const System::String& fileName, const System::String& directoryPathInArchive, const System::ArrayPtr<uint8_t>& byteContent);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> UpdateEntry(const System::String& fileName, const System::String& directoryPathInArchive, const System::ArrayPtr<uint8_t>& byteContent);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddDirectory(const System::String& directoryName);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddDirectory(const System::String& directoryName, const System::String& directoryPathInArchive);
    ASPOSECPP_SHARED_API System::SharedPtr<ZipEntry> AddDirectoryByName(const System::String& directoryNameInArchive);
    static ASPOSECPP_SHARED_API bool CheckZip(const System::String& zipFileName);
    static ASPOSECPP_SHARED_API bool CheckZip(const System::String& zipFileName, bool fixIfNecessary, System::SharedPtr<System::Collections::Generic::List<System::String>> &messages);
    static ASPOSECPP_SHARED_API void FixZipDirectory(const System::String& zipFileName);

    System::EventHandler<> SaveProgress;
    System::EventHandler<> ReadProgress;
    System::EventHandler<> ExtractProgress;
    System::EventHandler<> AddProgress;
    System::EventHandler<> ZipError;

    ASPOSECPP_SHARED_API void ExtractAll(const System::String& path);
    ASPOSECPP_SHARED_API void ExtractAll(const System::String& path, bool wantOverwrite);
    ASPOSECPP_SHARED_API void ExtractAll(const System::String& path, ExtractExistingFileAction extractExistingFile);
    ASPOSECPP_SHARED_API void Extract(const System::String& fileName);
    ASPOSECPP_SHARED_API void Extract(const System::String& entryName, const System::String& directoryName);
    ASPOSECPP_SHARED_API void Extract(const System::String& entryName, bool wantOverwrite);
    ASPOSECPP_SHARED_API void Extract(const System::String& entryName, ExtractExistingFileAction extractExistingFile);
    ASPOSECPP_SHARED_API void Extract(const System::String& entryName, const System::String& directoryName, bool wantOverwrite);
    ASPOSECPP_SHARED_API void Extract(const System::String& entryName, const System::String& directoryName, ExtractExistingFileAction extractExistingFile);
    ASPOSECPP_SHARED_API void Extract(const System::String& entryName, const System::SharedPtr<System::IO::Stream>& outputStream);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::String& fileName);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::String& fileName, System::EventHandler<> readProgress);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::String& fileName, const System::SharedPtr<System::IO::TextWriter>& statusMessageWriter);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::String& fileName, const System::SharedPtr<System::IO::TextWriter>& statusMessageWriter, System::EventHandler<> readProgress);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::String& fileName, const System::SharedPtr<System::Text::Encoding>& encoding);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::String& fileName, const System::SharedPtr<System::Text::Encoding>& encoding, System::EventHandler<> readProgress);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::String& fileName, const System::SharedPtr<System::IO::TextWriter>& statusMessageWriter, const System::SharedPtr<System::Text::Encoding>& encoding);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::String& fileName, const System::SharedPtr<System::IO::TextWriter>& statusMessageWriter, const System::SharedPtr<System::Text::Encoding>& encoding, System::EventHandler<> readProgress);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::SharedPtr<System::IO::Stream>& zipStream);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::SharedPtr<System::IO::Stream>& zipStream, System::EventHandler<> readProgress);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::SharedPtr<System::IO::Stream>& zipStream, const System::SharedPtr<System::IO::TextWriter>& statusMessageWriter);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::SharedPtr<System::IO::Stream>& zipStream, const System::SharedPtr<System::IO::TextWriter>& statusMessageWriter, System::EventHandler<> readProgress);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::SharedPtr<System::IO::Stream>& zipStream, const System::SharedPtr<System::Text::Encoding>& encoding);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::SharedPtr<System::IO::Stream>& zipStream, const System::SharedPtr<System::Text::Encoding>& encoding, System::EventHandler<> readProgress);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::SharedPtr<System::IO::Stream>& zipStream, const System::SharedPtr<System::IO::TextWriter>& statusMessageWriter, const System::SharedPtr<System::Text::Encoding>& encoding);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::SharedPtr<System::IO::Stream>& zipStream, const System::SharedPtr<System::IO::TextWriter>& statusMessageWriter, const System::SharedPtr<System::Text::Encoding>& encoding, System::EventHandler<> readProgress);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::ArrayPtr<uint8_t>& buffer);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::ArrayPtr<uint8_t>& buffer, const System::SharedPtr<System::IO::TextWriter>& statusMessageWriter);
    static ASPOSECPP_SHARED_API System::SharedPtr<ZipFile> Read(const System::ArrayPtr<uint8_t>& buffer, const System::SharedPtr<System::IO::TextWriter>& statusMessageWriter, const System::SharedPtr<System::Text::Encoding>& encoding);
    static ASPOSECPP_SHARED_API bool IsZipFile(const System::String& fileName);
    static ASPOSECPP_SHARED_API bool IsZipFile(const System::String& fileName, bool testExtract);
    static ASPOSECPP_SHARED_API bool IsZipFile(System::SharedPtr<System::IO::Stream> stream, bool testExtract);
    ASPOSECPP_SHARED_API void Save();
    ASPOSECPP_SHARED_API void Save(const System::String& fileName);
    ASPOSECPP_SHARED_API void Save(const System::SharedPtr<System::IO::Stream>& outputStream);

    ASPOSECPP_SHARED_API void Dispose() const;

    ASPOSECPP_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ZipEntry>>> GetEnumerator() override;
protected:

    ASPOSECPP_SHARED_API bool get_Verbose() const;
    ASPOSECPP_SHARED_API System::SharedPtr<System::IO::Stream> get_ReadStream();

    System::String _Password;
    bool _inExtractAll;
    Zip64Option _zip64;

    ASPOSECPP_SHARED_API int64_t get_RelativeOffset();

    ASPOSECPP_SHARED_API void NotifyEntryChanged();
    ASPOSECPP_SHARED_API void Reset();
    ASPOSECPP_SHARED_API bool OnSaveBlock(const System::SharedPtr<ZipEntry>& entry, int64_t bytesXferred, int64_t totalBytesToXfer);
    ASPOSECPP_SHARED_API void OnReadBytes(const System::SharedPtr<ZipEntry>& entry);
    ASPOSECPP_SHARED_API void OnReadEntry(bool before, const System::SharedPtr<ZipEntry>& entry);
    ASPOSECPP_SHARED_API bool OnExtractBlock(const System::SharedPtr<ZipEntry>& entry, int64_t bytesWritten, int64_t totalBytesToWrite);
    ASPOSECPP_SHARED_API bool OnSingleEntryExtract(const System::SharedPtr<ZipEntry>& entry, const System::String& path, bool before);
    ASPOSECPP_SHARED_API bool OnExtractExisting(const System::SharedPtr<ZipEntry>& entry, const System::String& path);
    ASPOSECPP_SHARED_API void AfterAddEntry(const System::SharedPtr<ZipEntry>& entry);
    ASPOSECPP_SHARED_API bool OnZipErrorSaving(const System::SharedPtr<ZipEntry>& entry, const System::Exception& exc);
    ASPOSECPP_SHARED_API void SeekFromOrigin(int64_t position);
    ASPOSECPP_SHARED_API shared_members_type GetSharedMembers() override;

private:

    enum class AddOrUpdateAction
    {
        AddOnly = 0,
        AddOrUpdate
    };

    bool _FullScan;
    int _CodecBufferSize;
    bool _FlattenFoldersOnExtract;
    CompressionLevel _CompressionLevel;
    ExtractExistingFileAction _ExtractExistingFile;
    ZipErrorAction _ZipErrorAction;
    ReReadApprovalCallback _WillReadTwiceOnInflation;
    WantCompressionCallback _WantCompression;

    System::SharedPtr<System::IO::TextWriter> _StatusMessageTextWriter;
    bool _CaseSensitiveRetrieval;
    System::SharedPtr<System::IO::Stream> _readstream;
    System::SharedPtr<System::IO::Stream> _writestream;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ZipEntry>>> _entries;
    bool _ForceNoCompression;
    System::String _name;
    System::String _Comment;
    bool _emitNtfsTimes;
    bool _emitUnixTimes;
    CompressionStrategy _Strategy;
    int64_t _originPosition;
    bool _fileAlreadyExists;
    System::String _temporaryFileName;
    bool _contentsChanged;
    bool _hasBeenSaved;
    System::String _TempFileFolder;
    bool _ReadStreamIsOurs;
    System::SharedPtr<System::Object> LOCK;
    bool _saveOperationCanceled;
    bool _extractOperationCanceled;
    EncryptionAlgorithm _Encryption;
    bool _JustSaved;
    bool _NeedZip64CentralDirectory;
    int64_t _locEndOfCDS;
    System::Nullable<bool> _OutputUsesZip64;
    System::SharedPtr<System::Text::Encoding> _provisionalAlternateEncoding;
    int _BufferSize;

    System::SharedPtr<System::IO::Stream> get_WriteStream();
    void set_WriteStream(const System::SharedPtr<System::IO::Stream>& value);

    System::String get_ArchiveNameForEvent() const;

    int64_t _lengthOfReadStream;

    int64_t get_LengthOfReadStream();

    void _InitInstance(const System::String& zipFileName, const System::SharedPtr<System::IO::TextWriter>& statusMessageWriter);
    void InsureUniqueEntry(const System::SharedPtr<ZipEntry>& ze1) const;
    System::SharedPtr<ZipEntry> AddOrUpdateDirectoryImpl(const System::String& directoryName, const System::String& rootDirectoryPathInArchive, AddOrUpdateAction action);
    System::SharedPtr<ZipEntry> AddOrUpdateDirectoryImpl(const System::String& directoryName, const System::String& rootDirectoryPathInArchive, AddOrUpdateAction action, int level);
    void OnSaveEntry(int current, const System::SharedPtr<ZipEntry>& entry, bool before);
    void OnSaveEvent(ZipProgressEventType eventFlavor);
    void OnSaveStarted();
    void OnSaveCompleted();
    void OnReadStarted();
    void OnReadCompleted();
    void OnExtractEntry(int current, bool before, const System::SharedPtr<ZipEntry>& currentEntry, const System::String& path);
    void OnExtractAllCompleted(const System::String& path);
    void OnExtractAllStarted(const System::String& path);
    void OnAddStarted();
    void OnAddCompleted();
    void _InternalExtractAll(const System::String& path, bool overrideExtractExistingProperty);
    static void ReadIntoInstance(const System::SharedPtr<ZipFile>& zf);
    static void Zip64SeekToCentralDirectory(const System::SharedPtr<ZipFile>& zf);
    static uint32_t VerifyBeginningOfZipFile(const System::SharedPtr<System::IO::Stream>& s);
    static void ReadCentralDirectory(const System::SharedPtr<ZipFile>& zf);
    static void ReadIntoInstance_Orig(const System::SharedPtr<ZipFile>& zf);
    static void ReadCentralDirectoryFooter(const System::SharedPtr<ZipFile>& zf);
    static void ReadZipFileComment(const System::SharedPtr<ZipFile>& zf);
    static bool BlocksAreEqual(const System::ArrayPtr<uint8_t>& a, const System::ArrayPtr<uint8_t>& b);
    void RemoveTempFile() const;
    void CleanupAfterSaveOperation();
    void WriteCentralDirectoryStructure(const System::SharedPtr<System::IO::Stream>& s);
    int CountEntries() const;
    void WriteZip64EndOfCentralDirectory(const System::SharedPtr<System::IO::Stream>& s, int64_t StartOfCentralDirectory, int64_t EndOfCentralDirectory) const;
    void WriteCentralDirectoryFooter(const System::SharedPtr<System::IO::Stream>& s, int64_t StartOfCentralDirectory, int64_t EndOfCentralDirectory) const;

};

#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_zip_file_h_

