#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace LicenseManagement { class VentureLicenser; } } }
namespace Aspose { namespace Pdf { namespace LicenseManagement { class VentureLicense; } } }
namespace Aspose { namespace Pdf { class LoadOptions; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class which allows to create/load documents of different types.
/// </summary>
class ASPOSE_PDF_SHARED_API DocumentFactory : public System::Object
{
    typedef DocumentFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LicenseManagement::VentureLicenser;
    
public:

    /// <summary>
    /// Create document.
    /// </summary>
    /// <param name="input">Input stream.</param>
    /// <param name="options">Document load options.</param>
    /// <returns>Created document.</returns>
    System::SharedPtr<Document> CreateDocument(System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    /// <summary>
    /// Create empty document.
    /// </summary>
    /// <returns>Created document.</returns>
    System::SharedPtr<Document> CreateDocument();
    /// <summary>
    /// Load document from a stream.
    /// </summary>
    /// <param name="input">Input stream.</param>
    /// <returns>Created document.</returns>
    System::SharedPtr<Document> CreateDocument(System::SharedPtr<System::IO::Stream> input);
    /// <summary>
    /// Load password protected document from a stream.
    /// </summary>
    /// <param name="input">Source stream.</param>
    /// <param name="password">Passowrd for access to document.</param>
    /// <returns>Created document.</returns>
    System::SharedPtr<Document> CreateDocument(System::SharedPtr<System::IO::Stream> input, System::String password);
    /// <summary>
    /// Load document from a file. 
    /// </summary>
    /// <param name="fileName">Name of PDF file.</param>
    /// <returns>Created document.</returns>
    System::SharedPtr<Document> CreateDocument(System::String fileName);
    
    DocumentFactory();
    
protected:

    void SetVentureLicense(System::SharedPtr<LicenseManagement::VentureLicense> license);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<LicenseManagement::VentureLicense> _license;
    
    void Initialize(System::SharedPtr<Document> doc, System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    
};

} // namespace Pdf
} // namespace Aspose


