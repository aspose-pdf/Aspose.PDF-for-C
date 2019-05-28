#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace GroupProcessor { class IPdfTypeExtractor; } } }

namespace Aspose {

namespace Pdf {

namespace GroupProcessor {

namespace Creators {

/// <summary>
/// <p>The <b>Aspose.Pdf.GroupProcessor.Creators</b> namespace provides classes used to create instances of GroupProcessor classes. </p>
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Represents an creator of IPdfTypeExtractor object.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfTypeObjectCreator : public System::Object
{
    typedef PdfTypeObjectCreator ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates IPdfTypeExtractor object.
    /// </summary>
    /// <param name="pdfDocumentPath">Path to a pdf document.</param>
    /// <param name="bufferSize">Maximum size of content in bytes that can be kept in memory.</param>
    /// <param name="allowAsyncInitialization">Allows async initialization of resources.</param>
    /// <returns>object of IPdfTypeExtractor</returns>
    System::SharedPtr<IPdfTypeExtractor> CreateExtractor(System::String pdfDocumentPath, int32_t bufferSize, bool allowAsyncInitialization);
    /// <summary>
    /// Creates IPdfTypeExtractor object.
    /// </summary>
    /// <param name="pdfDocumentStream">Stream containing pdf document.</param>
    /// <param name="bufferSize">Maximum size of content in bytes that can be kept in memory.</param>
    /// <param name="allowAsyncInitialization">Allows async initialization of resources.</param>
    /// <returns>object of IPdfTypeExtractor</returns>
    System::SharedPtr<IPdfTypeExtractor> CreateExtractor(System::SharedPtr<System::IO::Stream> pdfDocumentStream, int32_t bufferSize, bool allowAsyncInitialization);
    /// <summary>
    /// Creates IPdfTypeExtractor object.
    /// </summary>
    /// <param name="pdfDocumentPath">Path to a pdf document.</param>
    /// <param name="password">Document password.</param>
    /// <param name="bufferSize">Maximum size of content in bytes that can be kept in memory.</param>
    /// <param name="allowAsyncInitialization">Allows async initialization of resources.</param>
    /// <returns>object of IPdfTypeExtractor</returns>
    System::SharedPtr<IPdfTypeExtractor> CreateExtractor(System::String pdfDocumentPath, System::String password, int32_t bufferSize, bool allowAsyncInitialization);
    /// <summary>
    /// Creates IPdfTypeExtractor object.
    /// </summary>
    /// <param name="pdfDocumentStream">Stream containing pdf document.</param>
    /// <param name="password">Document password.</param>
    /// <param name="bufferSize">Maximum size of content in bytes that can be kept in memory.</param>
    /// <param name="allowAsyncInitialization">Allows async initialization of resources.</param>
    /// <returns>object of IPdfTypeExtractor</returns>
    System::SharedPtr<IPdfTypeExtractor> CreateExtractor(System::SharedPtr<System::IO::Stream> pdfDocumentStream, System::String password, int32_t bufferSize, bool allowAsyncInitialization);
    
};

} // namespace Creators
} // namespace GroupProcessor
} // namespace Pdf
} // namespace Aspose


