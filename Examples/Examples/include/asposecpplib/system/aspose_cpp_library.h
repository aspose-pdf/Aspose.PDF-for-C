/// @file system/aspose_cpp_library.h
/// Contains declaration of System::AsposeCppLibrary class.
#ifndef _aspose_system_aspose_cpp_library_h_
#define _aspose_system_aspose_cpp_library_h_


#include "defines.h"


namespace System
{
    /// Represents Asposecpplib library and contains library initialization/uninitialization methods.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    class AsposeCppLibrary
    {
    public:
        /// Prepares the library for unload. Blocks until all worker threads exit.
        static ASPOSECPP_SHARED_API void PrepareForUnload();
    };

}


#endif //_aspose_system_aspose_cpp_library_h_
