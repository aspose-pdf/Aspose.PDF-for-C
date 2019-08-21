#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/idictionary.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DArtwork; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DViewArray; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Filters { class IDecoder; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Filters { class IEncoder; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class PdfStream; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DContent; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DStream.
/// </summary>
class ASPOSE_PDF_SHARED_API PDF3DStream : public System::Object
{
    typedef PDF3DStream ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::PDF3DArtwork;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    
public:

    /// <summary>
    /// Gets or sets the content.
    /// </summary>
    /// <value>The content.</value>
    System::SharedPtr<PDF3DContent> get_Content();
    /// <summary>
    /// Gets or sets the content.
    /// </summary>
    /// <value>The content.</value>
    void set_Content(System::SharedPtr<PDF3DContent> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DStream"/> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    /// <param name="pdf3DArtwork">The 3D Artwork.</param>
    PDF3DStream(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DArtwork> pdf3DArtwork);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::PdfStream> PdfStream;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> StreamPdfObject;
    System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, int32_t>> StreamAnnotationLinksDictionary;
    System::SharedPtr<PDF3DViewArray> ViewArray;
    System::SharedPtr<PDF3DArtwork> Pdf3DArtwork;
    int32_t ObjectID;
    
    PDF3DStream(System::SharedPtr<Document> doc, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> stream);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<Aspose::Pdf::Engine::Filters::IDecoder> _decoder;
    System::SharedPtr<Aspose::Pdf::Engine::Filters::IEncoder> _encoder;
    System::String _extension;
    System::SharedPtr<PDF3DContent> _pdf3DContent;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


