#ifndef _aspose_zip_events_h_
#define _aspose_zip_events_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/exceptions.h>
#include <system/eventargs.h>
#include <functional>

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
#else
namespace Aspose { namespace Zip {
#endif

class ZipEntry;
class ZipFile;

typedef std::function<bool(int64_t, int64_t, System::String)> ReReadApprovalCallback;
typedef std::function<bool(System::String, System::String)> WantCompressionCallback;

/// In an EventArgs type, indicates which sort of progress event is being reported.
/// There are events for reading, events for saving, and events for extracting.

enum class ZipProgressEventType
{
    Adding_Started,
    Adding_AfterAddEntry,
    Adding_Completed,
    Reading_Started,
    Reading_BeforeReadEntry,
    Reading_AfterReadEntry,
    Reading_Completed,
    Reading_ArchiveBytesRead,
    Saving_Started,
    Saving_BeforeWriteEntry,
    Saving_AfterWriteEntry,
    Saving_Completed,
    Saving_AfterSaveTempArchive,
    Saving_BeforeRenameTempArchive,
    Saving_AfterRenameTempArchive,
    Saving_AfterCompileSelfExtractor,
    Saving_EntryBytesRead,
    Extracting_BeforeExtractEntry,
    Extracting_AfterExtractEntry,
    Extracting_ExtractEntryWouldOverwrite,
    Extracting_EntryBytesWritten,
    Extracting_BeforeExtractAll,
    Extracting_AfterExtractAll,
    Error_Saving
};

/// Provides information about the progress of a save, read, or extract operation.
/// This is a base class; you will probably use one of the classes derived from this one.

class ZipProgressEventArgs : public System::EventArgs
{
    typedef ZipProgressEventArgs ThisType;
    typedef System::EventArgs BaseType;

    RTTI_INFO_DECL();

    friend class ZipFile;

public:

    int get_EntriesTotal();
    void set_EntriesTotal(int value);
    System::SharedPtr<ZipEntry> get_CurrentEntry();
    void set_CurrentEntry(System::SharedPtr<ZipEntry> value);
    bool get_Cancel();
    void set_Cancel(bool value);
    ZipProgressEventType get_EventType();
    void set_EventType(ZipProgressEventType value);
    System::String get_ArchiveName();
    void set_ArchiveName(System::String value);
    int64_t get_BytesTransferred();
    void set_BytesTransferred(int64_t value);
    int64_t get_TotalBytesToTransfer();
    void set_TotalBytesToTransfer(int64_t value);

protected:

    ZipProgressEventArgs();
    ZipProgressEventArgs(System::String archiveName, ZipProgressEventType flavor);

private:

    int _entriesTotal;
    bool _cancel;
    System::SharedPtr<ZipEntry> _latestEntry;
    ZipProgressEventType _flavor;
    System::String _archiveName;
    int64_t _bytesTransferred;
    int64_t _totalBytesToTransfer;
};

/// Provides information about the progress of a Read operation.

class ReadProgressEventArgs : public ZipProgressEventArgs
{
    FRIEND_FUNCTION_System_MakeObject;

    typedef ReadProgressEventArgs ThisType;
    typedef ZipProgressEventArgs BaseType;

    RTTI_INFO_DECL();

    friend class ZipFile;

protected:

    ReadProgressEventArgs();

    static System::SharedPtr<ReadProgressEventArgs> Before(System::String archiveName, int entriesTotal);
    static System::SharedPtr<ReadProgressEventArgs> After(System::String archiveName, System::SharedPtr<ZipEntry> entry, int entriesTotal);
    static System::SharedPtr<ReadProgressEventArgs> Started(System::String archiveName);
    static System::SharedPtr<ReadProgressEventArgs> ByteUpdate(System::String archiveName, System::SharedPtr<ZipEntry> entry, int64_t bytesXferred, int64_t totalBytes);
    static System::SharedPtr<ReadProgressEventArgs> Completed(System::String archiveName);

private:

    ReadProgressEventArgs(System::String archiveName, ZipProgressEventType flavor);
};

/// Provides information about the progress of a Add operation.

class AddProgressEventArgs : public ZipProgressEventArgs
{
    FRIEND_FUNCTION_System_MakeObject;

    typedef AddProgressEventArgs ThisType;
    typedef ZipProgressEventArgs BaseType;

    RTTI_INFO_DECL();

    friend class ZipFile;

protected:

    AddProgressEventArgs();

    static System::SharedPtr<AddProgressEventArgs> AfterEntry(System::String archiveName, System::SharedPtr<ZipEntry> entry, int entriesTotal);
    static System::SharedPtr<AddProgressEventArgs> Started(System::String archiveName);
    static System::SharedPtr<AddProgressEventArgs> Completed(System::String archiveName);

private:

    AddProgressEventArgs(System::String archiveName, ZipProgressEventType flavor);
};

/// Provides information about the progress of a save operation.

class SaveProgressEventArgs : public ZipProgressEventArgs
{
    FRIEND_FUNCTION_System_MakeObject;

    typedef SaveProgressEventArgs ThisType;
    typedef ZipProgressEventArgs BaseType;

    RTTI_INFO_DECL();

    friend class ZipFile;

public:

    int get_EntriesSaved();

protected:

    SaveProgressEventArgs(System::String archiveName, bool before, int entriesTotal, int entriesSaved, System::SharedPtr<ZipEntry> entry);
    SaveProgressEventArgs();
    SaveProgressEventArgs(System::String archiveName, ZipProgressEventType flavor);

    static System::SharedPtr<SaveProgressEventArgs> ByteUpdate(System::String archiveName, System::SharedPtr<ZipEntry> entry, int64_t bytesXferred, int64_t totalBytes);
    static System::SharedPtr<SaveProgressEventArgs> Started(System::String archiveName);
    static System::SharedPtr<SaveProgressEventArgs> Completed(System::String archiveName);

private:

    int _entriesSaved;
};

/// Provides information about the progress of the extract operation.

class ExtractProgressEventArgs : public ZipProgressEventArgs
{
    FRIEND_FUNCTION_System_MakeObject;

    typedef ExtractProgressEventArgs ThisType;
    typedef ZipProgressEventArgs BaseType;

    RTTI_INFO_DECL();

    friend class ZipFile;

public:

    int get_EntriesExtracted();
    System::String get_ExtractLocation();

protected:

    ExtractProgressEventArgs(System::String archiveName, bool before, int entriesTotal, int entriesExtracted, System::SharedPtr<ZipEntry> entry, System::String extractLocation);
    ExtractProgressEventArgs(System::String archiveName, ZipProgressEventType flavor);
    ExtractProgressEventArgs();

    static System::SharedPtr<ExtractProgressEventArgs> BeforeExtractEntry(System::String archiveName, System::SharedPtr<ZipEntry> entry, System::String extractLocation);
    static System::SharedPtr<ExtractProgressEventArgs> ExtractExisting(System::String archiveName, System::SharedPtr<ZipEntry> entry, System::String extractLocation);
    static System::SharedPtr<ExtractProgressEventArgs> AfterExtractEntry(System::String archiveName, System::SharedPtr<ZipEntry> entry, System::String extractLocation);
    static System::SharedPtr<ExtractProgressEventArgs> ExtractAllStarted(System::String archiveName, System::String extractLocation);
    static System::SharedPtr<ExtractProgressEventArgs> ExtractAllCompleted(System::String archiveName, System::String extractLocation);
    static System::SharedPtr<ExtractProgressEventArgs> ByteUpdate(System::String archiveName, System::SharedPtr<ZipEntry> entry, int64_t bytesWritten, int64_t totalBytes);

private:

    int _entriesExtracted;
    System::String _target;
};

/// Provides information about the an error that occurred while zipping.

class ZipErrorEventArgs : public ZipProgressEventArgs
{
    FRIEND_FUNCTION_System_MakeObject;

    typedef ZipErrorEventArgs ThisType;
    typedef ZipProgressEventArgs BaseType;

    RTTI_INFO_DECL();

    friend class ZipFile;

public:

    System::Exception get_Exception();
    System::String get_FileName();

    static System::SharedPtr<ZipErrorEventArgs> Saving(System::String archiveName, System::SharedPtr<ZipEntry> entry, System::Exception exception);

private:

    System::Exception _exc;

    ZipErrorEventArgs();
};

#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_events_h_

