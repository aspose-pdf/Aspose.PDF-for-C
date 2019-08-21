#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace GroupProcessor { namespace Creators { class PdfTypeObjectCreator; } } } }

namespace Aspose {

namespace Pdf {

namespace GroupProcessor {

/// <summary>
/// <p>The <b>Aspose.Pdf.GroupProcessor</b> namespace provides classes used to work text and fonts.</p>
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Represents factory for creating IPdfTypeExtractor objects.
/// </summary>
class ASPOSE_PDF_SHARED_API ExtractorFactory
{
    typedef ExtractorFactory ThisType;
    
public:

    static System::SharedPtr<Creators::PdfTypeObjectCreator> Pdf;
    
};

} // namespace GroupProcessor
} // namespace Pdf
} // namespace Aspose


