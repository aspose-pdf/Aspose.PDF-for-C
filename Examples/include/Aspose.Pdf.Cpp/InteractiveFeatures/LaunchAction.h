#ifndef _Aspose_Pdf_InteractiveFeatures_LaunchAction_h_
#define _Aspose_Pdf_InteractiveFeatures_LaunchAction_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

namespace InteractiveFeatures {

/// <summary>
/// Represents a launch action that launches an application or opens or prints a document.
/// </summary>
class ASPOSE_PDF_SHARED_API LaunchAction FINAL : public Aspose::Pdf::InteractiveFeatures::PdfAction
{
    typedef LaunchAction ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::PdfAction;
    
public:

    /// <summary>
    /// Gets or sets the application to be launched or the document to be opened or printed.
    /// </summary>
    System::String get_File();
    /// <summary>
    /// Gets or sets the application to be launched or the document to be opened or printed.
    /// </summary>
    void set_File(System::String value);
    /// <summary>
    /// Gets or sets a flag specifying whether to open the destination document in a new window (affect PDF documents only).
    /// </summary>
    ExtendedBoolean get_NewWindow();
    /// <summary>
    /// Gets or sets a flag specifying whether to open the destination document in a new window (affect PDF documents only).
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

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_LaunchAction_h_

