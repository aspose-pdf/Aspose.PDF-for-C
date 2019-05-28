/// @file system/io/file_system_info.h
#ifndef _file_system_info_h_
#define _file_system_info_h_

#include "fwd.h"
#include "system/object.h"
#include "system/io/file.h"
#include "system/io/file.h"
#include "system/io/path.h"

namespace System { namespace IO {
    /// Represents information about a file or directory.
    class FileSystemInfoStat {
    public:
        /// Attributes of a file or a directory.
        FileAttributes attr;
        /// Creation time.
        DateTime cTime;
        /// Last write time
        DateTime wTime;
        /// Last access time.
        DateTime aTime;
        /// File size in bytes.
        int64_t size;
    };

    /// The base class for FileInfo and DirectoryInfo.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS FileSystemInfo : public Object {
    protected:
        /// Constructs a new instance of FileSystemInfo class.
        ASPOSECPP_SHARED_API FileSystemInfo();
        /// The full path of the entity represented by the current object.
        String FullPath;
        /// The original path, passed to the current object's constructor, of the entity
        /// represented by the current object.
        String OriginalPath;

    public:
        //********* Properties
        /// Returns the attributes of the entity represented by the current object.
        ASPOSECPP_SHARED_API FileAttributes get_Attributes();
        /// Sets the specified attributes on the entity represeted by the current object.
        /// @param value A bitwise combination of FileAttributes values representing the attributes to set
        ASPOSECPP_SHARED_API void set_Attributes(FileAttributes value);
        /// Returns the creation time of the entity represented by the current object as local time.
        ASPOSECPP_SHARED_API DateTime get_CreationTime();
        /// Sets the creation time of the entity represented by the current object as local time.
        /// @param value A DateTime object representing the time to set as local time
        ASPOSECPP_SHARED_API void set_CreationTime(DateTime value);
        /// Returns the creation time of the entity represented by the current object as UTC time.
        ASPOSECPP_SHARED_API DateTime get_CreationTimeUtc();
        /// Sets the creation time of the entity represented by the current object as UTC time.
        /// @param value A DateTime object representing the time to set as UTC time
        ASPOSECPP_SHARED_API void set_CreationTimeUtc(DateTime value);
        /// Returns the last access time of the entity represented by the current object as local time.
        ASPOSECPP_SHARED_API DateTime get_LastAccessTime();
        /// Sets the last access time of the entity represented by the current object as local time.
        /// @param value A DateTime object representing the time to set as local time
        ASPOSECPP_SHARED_API void set_LastAccessTime(DateTime value);
        /// Returns the last access time of the entity represented by the current object as UTC time.
        ASPOSECPP_SHARED_API DateTime get_LastAccessTimeUtc();
        /// Sets the last access time of the entity represented by the current object as UTC time.
        /// @param value A DateTime object representing the time to set as UTC time
        ASPOSECPP_SHARED_API void set_LastAccessTimeUtc(DateTime value);
        /// Returns the last write time of the entity represented by the current object as local time.
        ASPOSECPP_SHARED_API DateTime get_LastWriteTime();
        /// Sets the last write time of the entity represented by the current object as local time.
        /// @param value A DateTime object representing the time to set as local time
        ASPOSECPP_SHARED_API void set_LastWriteTime(DateTime value);
        /// Returns the last write time of the entity represented by the current object as UTC time.
        ASPOSECPP_SHARED_API DateTime get_LastWriteTimeUtc();
        /// Sets the last write time of the entity represented by the current object as UTC time.
        /// @param value A DateTime object representing the time to set as UTC time
        ASPOSECPP_SHARED_API void set_LastWriteTimeUtc(DateTime value);
        /// Determines if the entity referenced by the path represented by the current object exists.
        /// @returns True if the entity referenced by the path represented by the current object exists,
        /// otherwise - false
        virtual ASPOSECPP_SHARED_API bool get_Exists() = 0;
        /// Returns the extension of the file represented by the current object.
        ASPOSECPP_SHARED_API String get_Extension();
        /// Returns the full name (including path) of the entity represented by the current object.
        virtual ASPOSECPP_SHARED_API String get_FullName();
        /// Returns a name of the entity represented by the current object.
        virtual ASPOSECPP_SHARED_API String get_Name() = 0;

        //********* Methods
        /// Deletes the entity represented by the current object.
        virtual ASPOSECPP_SHARED_API void Delete() = 0;
        /// Does nothing.
        virtual ASPOSECPP_SHARED_API void Finalize();
        /// Refreshes the state of the current object.
        ASPOSECPP_SHARED_API void Refresh();

    protected:
        /// Information describing the entity represented by the current object.
        FileSystemInfoStat info;
        /// Indicates if the path represented by the current object references an existing entity.
        bool valid;
        /// Refreshes the state of the current object.
        /// @param force Specifies if refreshing should be forced if it has already been done (true)
        /// or not (false)
        ASPOSECPP_SHARED_API void Refresh(bool force);
    };

}}

#endif // _file_system_info_h_

