#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "InteractiveFeatures/PdfAction.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { enum class ExtendedBoolean; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a launch action that launches an application or opens or prints a document.
/// </summary>
class ASPOSE_PDF_SHARED_API LaunchAction FINAL : public Aspose::Pdf::Annotations::PdfAction
{
    typedef LaunchAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PdfAction;
    
public:

    /// <summary>
    /// Gets the application to be launched or the document to be opened or printed.
    /// </summary>
    System::String get_File();
    /// <summary>
    /// Sets the application to be launched or the document to be opened or printed.
    /// </summary>
    void set_File(System::String value);
    /// <summary>
    /// Gets a flag specifying whether to open the destination document in a new window (affect PDF documents only).
    /// </summary>
    ExtendedBoolean get_NewWindow();
    /// <summary>
    /// Sets a flag specifying whether to open the destination document in a new window (affect PDF documents only).
    /// </summary>
    void set_NewWindow(ExtendedBoolean value);
    
    /// <summary>
    /// Creates a launch action.
    /// </summary>
    /// <param name="file">The file to be launched.</param>
    LaunchAction(System::String file);
    /// <summary>
    /// Creates a launch action.
    /// </summary>
    /// <param name="document">Document where action will be created.</param>
    /// <param name="file">The file to be launched.</param>
    LaunchAction(System::SharedPtr<Document> document, System::String file);
    
protected:

    LaunchAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
private:

    void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::String file);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


