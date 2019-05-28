#pragma once

#ifndef ASPOSE_PDF_SHARED_LIBRARY
#define ASPOSE_PDF_SHARED_LIBRARY true
#endif

#if ASPOSE_PDF_SHARED_LIBRARY && !defined(ASPOSE_PDF_UNIT_TEST)

    #if defined(_MSC_VER)

        #if defined(ASPOSE_PDF_SHARED_EXPORTS)
            #define ASPOSE_PDF_SHARED_API __declspec(dllexport)
        #else
            #define ASPOSE_PDF_SHARED_API __declspec(dllimport)
        #endif

        #define ASPOSE_PDF_LOCAL_API
        #define ASPOSE_PDF_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSE_PDF_SHARED_API)

    #elif defined(__GNUC__)

        #if defined(ASPOSE_PDF_SHARED_EXPORTS)
            #define ASPOSE_PDF_SHARED_API __attribute__((visibility("default")))
            #define ASPOSE_PDF_LOCAL_API __attribute__((visibility("hidden")))
            #define ASPOSE_PDF_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSE_PDF_SHARED_API)
        #else
            #define ASPOSE_PDF_SHARED_API
            #define ASPOSE_PDF_LOCAL_API
            #define ASPOSE_PDF_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
        #endif

    #else
        #define ASPOSE_PDF_LOCAL_API
        #define ASPOSE_PDF_SHARED_API
        #define ASPOSE_PDF_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
    #endif

#else
    #define ASPOSE_PDF_LOCAL_API
    #define ASPOSE_PDF_SHARED_API
    #define ASPOSE_PDF_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
#endif
