#ifndef _aspose_pdf_api_defs_h_
#define _aspose_pdf_api_defs_h_

#if true && defined(_MSC_VER) && !defined(ASPOSE_PDF_UNIT_TEST)
    #ifdef ASPOSE_PDF_SHARED_EXPORTS
        #define ASPOSE_PDF_SHARED_API __declspec(dllexport)
    #else
        #define ASPOSE_PDF_SHARED_API __declspec(dllimport)
    #endif
    #define ASPOSE_PDF_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSE_PDF_SHARED_API)
#else
    #define ASPOSE_PDF_SHARED_API
    #define ASPOSE_PDF_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
#endif

#endif
