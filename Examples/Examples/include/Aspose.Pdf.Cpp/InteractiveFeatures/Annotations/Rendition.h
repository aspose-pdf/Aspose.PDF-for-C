#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class MediaRendition; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class SelectorRendition; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class RenditionAction; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class RenditionType; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class which describes rendition object of RendtionAnnotation.
/// </summary>
class ASPOSE_PDF_SHARED_API Rendition : public System::Object
{
    typedef Rendition ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::MediaRendition;
    friend class Aspose::Pdf::Annotations::SelectorRendition;
    friend class Aspose::Pdf::Annotations::RenditionAction;
    
public:

    /// <summary>
    /// Text string specifying the name of the rendition for use in a user interface and for name tree lookup by JavaScript actions.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Text string specifying the name of the rendition for use in a user interface and for name tree lookup by JavaScript actions.
    /// </summary>
    void set_Name(System::String value);
    /// <summary>
    /// Gets rendition type.
    /// </summary>
    Aspose::Pdf::Annotations::RenditionType get_RenditionType();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
    
    Rendition(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
    static System::SharedPtr<Rendition> Create(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


