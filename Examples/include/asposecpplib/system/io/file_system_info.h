#ifndef _file_system_info_h_
#define _file_system_info_h_

#include "fwd.h"
#include "system/object.h"
#include "system/io/file.h"
#include "system/io/file.h"
#include "system/io/path.h"

namespace System { namespace IO {

    class FileSystemInfoStat {
    public:
        FileAttributes attr;
        DateTime cTime, wTime, aTime;
        int64_t size;
    };

    class FileSystemInfo : public Object {
    protected:
        FileSystemInfo();
        String FullPath;
        String OriginalPath;

    public:
        //********* Properties
        //Attributes
        FileAttributes get_Attributes();
        void set_Attributes(FileAttributes value);
        //CreationTime
        DateTime get_CreationTime();
        void set_CreationTime(DateTime value);
        //CreationTimeUtc
        DateTime get_CreationTimeUtc();
        void set_CreationTimeUtc(DateTime value);
        //LastAccessTime
        DateTime get_LastAccessTime();
        void set_LastAccessTime(DateTime value);
        //LastAccessTimeUtc
        DateTime get_LastAccessTimeUtc();
        void set_LastAccessTimeUtc(DateTime value);
        //LastWriteTime
        DateTime get_LastWriteTime();
        void set_LastWriteTime(DateTime value);
        //LastWriteTimeUtc
        DateTime get_LastWriteTimeUtc();
        void set_LastWriteTimeUtc(DateTime value);
        //Exists
        virtual bool get_Exists() = 0;
        //Extension
        String get_Extension();
        //FullName
        virtual String get_FullName();
        //Name
        virtual String get_Name() = 0;

        //********* Methods
        virtual void Delete() = 0;
        virtual void Finalize();
        void Refresh();

    protected:
        FileSystemInfoStat info;
        bool valid;
        void Refresh(bool force);
    };

}}

#endif // _file_system_info_h_

