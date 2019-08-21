#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents file identifier structure.
/// </summary>
/// <example>
/// <code lang="C#">
/// Document doc = new Document("example.pdf");
/// string original = doc.Id.Original;
/// string modified = doc.Id.Modified;
/// </code>
/// </example>
class ASPOSE_PDF_SHARED_API Id : public System::Object
{
    typedef Id ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Permanent identifier based on the contents of the document at the time it was originally created.
    /// </summary>
    System::String get_Original();
    /// <summary>
    /// Changing identifier based on the document's contents at the time it was last updated.
    /// </summary>
    System::String get_Modified();
    
protected:

    Id(System::SharedPtr<Engine::Data::IPdfArray> pdfArray);
    
private:

    System::String _original;
    System::String _modified;
    
};

} // namespace Pdf
} // namespace Aspose


