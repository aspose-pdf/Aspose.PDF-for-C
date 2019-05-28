/// @file system/io/path.h
#ifndef _aspose_system_io_path_h_
#define _aspose_system_io_path_h_

#include <system/exceptions.h>
#include <system/array.h>
#include <system/string.h>

#ifdef GetCurrentDirectory
#pragma message("!!! GetCurrentDirectory defined, please do not include windows.h manually")
#undef GetCurrentDirectory
#undef SetCurrentDirectory
#endif

namespace boost { namespace filesystem {
    class path;
} }

namespace System { namespace IO {

class File;
class Directory;
    /// Provides methods for manipulating paths.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    class Path
    {
    public:
        /// Changes the extension in the specified file path.
        /// @param path A file path
        /// @param extension The extension to replace the one in @p path with
        /// @returns @p path with extension replaced with @p extension
        static ASPOSECPP_SHARED_API String ChangeExtension(const String& path, const String& extension);

        /// Combines the specified path segments into a single path inserting directory separator characters
        /// between the segments if necessary.
        /// @param paths An array containing path segments to combine
        /// @returns The combined path
        static ASPOSECPP_SHARED_API String Combine(const ArrayPtr<String>& paths);
        /// Combines two specified path segments into a single path inserting directory separator character
        /// between the segments if necessary.
        /// @param path1 The first path segment
        /// @param path2 The second path segment
        /// @returns The combined path
        static ASPOSECPP_SHARED_API String Combine(const String& path1, const String& path2);
        /// Combines three specified path segments into a single path inserting directory separator characters
        /// between the segments if necessary.
        /// @param path1 The first path segment
        /// @param path2 The second path segment
        /// @param path3 The third path segment
        /// @returns The combined path
        static ASPOSECPP_SHARED_API String Combine(const String& path1, const String& path2, const String& path3);
        /// Combines four specified path segments into a single path inserting directory separator characters
        /// between the segments if necessary.
        /// @param path1 The first path segment
        /// @param path2 The second path segment
        /// @param path3 The third path segment
        /// @param path4 The fourth path segment
        /// @returns The combined path
        static ASPOSECPP_SHARED_API String Combine(const String& path1, const String& path2, const String& path3, const String& path4);

        /// Returns the name of the directory referenced by the specified path.
        /// @param path A path to a directory
        /// @returns The directory's name
        static ASPOSECPP_SHARED_API String GetDirectoryName(const String& path);
        /// Returns the extension of the file referenced by the specified path.
        /// @param path A path to a file
        /// @returns The extension of the file
        static ASPOSECPP_SHARED_API String GetExtension(const String& path);
        /// Returns the name of the file referenced by the specified path.
        /// @param path A path to a file
        /// @returns The file's name
        static ASPOSECPP_SHARED_API String GetFileName(const String& path);
        /// Returns the name without extension of the file referenced by the specified path.
        /// @param path A path to a file
        /// @returns The file's name without extension
        static ASPOSECPP_SHARED_API String GetFileNameWithoutExtension(const String& path);
        /// Converts the specified path into absolute path.
        /// @param path The path to convert
        /// @returns The absolute path referencing the same antity (which does not have to exist) as @p path
        static ASPOSECPP_SHARED_API String GetFullPath(const String& path);

        /// Returns an array containing characters that are not allowed in the names of files.
        static ASPOSECPP_SHARED_API ArrayPtr<char_t> GetInvalidFileNameChars();
        /// Returns an array containing characters that are not allowed in path names.
        static ASPOSECPP_SHARED_API ArrayPtr<char_t> GetInvalidPathChars();

        /// Returns the root directory of the specified path.
        /// @param path The path from which to obtain the root
        /// @returns The root directory of @p path
        static ASPOSECPP_SHARED_API String GetPathRoot(const String& path);
        /// Returns a randomly generated file name.
        static ASPOSECPP_SHARED_API String GetRandomFileName();
        /// Creates a new file with a unique name and returns a full path to it.
        /// @returns A full path to the cretaed file
        static ASPOSECPP_SHARED_API String GetTempFileName_();
        /// Creates a new file with a unique name and returns a full path to it.
        /// Is a synonym of GetTempFileName_() method.
        /// @returns A full path to the cretaed file
        static ASPOSECPP_SHARED_API String GetTempFileNameSafe();
        /// Returns the path of the current user's temporary directory.
        static ASPOSECPP_SHARED_API String GetTempPath();
        /// Determines if the specified path references a file with extension.
        /// @param path A path to check
        /// @returns True if @p path references a file with extension, otherwise - false
        static ASPOSECPP_SHARED_API bool HasExtension(const String& path);
        /// Determines if the spacified path contains a root.
        /// @param path A path to check
        /// @returns True if @p path contains a root, otherwise - false
        static ASPOSECPP_SHARED_API bool IsPathRooted(const String& path);

        /// An alternate character used to separate directory levels in a path.
        static const char_t ASPOSECPP_SHARED_API AltDirectorySeparatorChar;
        /// A character used to separate directory levels in a path.
        static const char_t ASPOSECPP_SHARED_API DirectorySeparatorChar;
        /// A separator character used to separate path strings in environment variables.
        static const char_t ASPOSECPP_SHARED_API PathSeparator;
        /// A volume separator character.
        static const char_t ASPOSECPP_SHARED_API VolumeSeparatorChar;

        /// Determines if the specified path is valid by checking if it contains invalid characters.
        /// An excetion is thrown if the path contains invalid characters.
        /// @param path The path to check
        /// @param msg The message to pass to the exception object's constructor
        /// @param allow_empty Specifies whether an empty or null string should be considered a correct path (true) or not (false);
        /// if this parameter is false and @p path is empty an ArgumentException is thrown; if this parameter is false and @p path is
        /// null an ArgumentNullException is thrown 
        static ASPOSECPP_SHARED_API void CheckPath(const String& path, const String& msg = u"path", bool allow_empty = true);

        /// Returns a string representation of the specified Boost's path object.
        /// @param path The boost::filesystem::path object to convert to string
        /// @returns A string representation of @p path
        static ASPOSECPP_SHARED_API String ToString(const boost::filesystem::path& path);
        /// Returns an instance of boost::filesystem::path class that represents the specified path.
        /// @param path A path
        /// @returns a new instance of boost::filesystem::path class that represents @p path
        static ASPOSECPP_SHARED_API boost::filesystem::path ToBoost(const String& path);

        /// Normalizes the specified path.
        /// @param path A path to normalize
        /// @returns The normalized path
        static ASPOSECPP_SHARED_API String NormalizePath(const String& path);

    private:
        /// Determines if the specified path contains invalid path characters.
        /// @param path The path to test
        /// @returns True if @p path contains invalid path characters, otherwise - false
        static bool HasInvalidChars(const String& path);

        /// Combines two specified path segments into a single path inserting directory separator character
        /// between the segments if necessary. The arguments are not checked for not containing invalid path characters.
        /// @param path1 The first path segment
        /// @param path2 The second path segment
        /// @returns The combined path
        static String CombineNoCheck(const String& path1, const String& path2);

        /// Determines if the specified character is a directory separator character
        /// or alternate directory separator character.
        /// @param ch The character to check
        /// @returns True if @p ch is a directory separator character or alternate 
        /// directory separator character, otherwise - false
        static bool IsDSC(char_t ch);

        /// Determines if the specified character is a directory separator character
        /// or alternate directory separator character or a volume separator character.
        /// @param ch The character to check
        /// @returns True if @p ch is a directory separator character or alternate 
        /// directory separator character or a volume separator character, otherwise - false
        static bool IsSeparatorChar(char_t ch);

        /// Normalizes the specified path.
        /// @param path A path to normalize
        /// @returns The normalized path
        static String NormalizePath_(boost::filesystem::path path);
    };
}}

#endif // _aspose_system_io_path_h_
