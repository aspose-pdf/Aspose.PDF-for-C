#ifndef _aspose_singletons_api_defs_h_
#define _aspose_singletons_api_defs_h_

#if defined(_MSC_VER)
    #ifdef Singletons_EXPORTS
        #define ASPOSE_SINGLETONS_SHARED_API __declspec(dllexport)
    #else
        #define ASPOSE_SINGLETONS_SHARED_API __declspec(dllimport)
    #endif
#else
    #define ASPOSE_SINGLETONS_SHARED_API
#endif

#endif

