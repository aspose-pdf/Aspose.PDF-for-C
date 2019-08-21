#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/PdfAction.h"

namespace Aspose { namespace Pdf { namespace Annotations { class ScreenAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class RenditionOperation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Rendition; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// A rendition action that controls the playing of multimedia content.
/// </summary>
class ASPOSE_PDF_SHARED_API RenditionAction FINAL : public Aspose::Pdf::Annotations::PdfAction
{
    typedef RenditionAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PdfAction;
    friend class Aspose::Pdf::Annotations::ScreenAnnotation;
    
public:

    /// <summary>
    /// Gets rendition associated with the action.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Annotations::Rendition> get_Rendition();
    /// <summary>
    /// The operation to perform when the action is triggered.
    /// </summary>
    Aspose::Pdf::Annotations::RenditionOperation get_RenditionOperation();
    /// <summary>
    /// The operation to perform when the action is triggered.
    /// </summary>
    void set_RenditionOperation(Aspose::Pdf::Annotations::RenditionOperation value);
    /// <summary>
    /// Gets JavaScript code associated with the action.
    /// </summary>
    System::String get_JavaScript();
    /// <summary>
    /// Sets JavaScript code associated with the action.
    /// </summary>
    void set_JavaScript(System::String value);
    
protected:

    /// <summary>
    /// Creates the rendition action.
    /// </summary>
    /// <param name="mediaFile">The path to multimedia file.</param>
    /// <param name="screen">The ScreenAnnotation object the RenditionAction will be bound with.</param>
    RenditionAction(System::String mediaFile, System::SharedPtr<ScreenAnnotation> screen);
    RenditionAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::Rendition> _rendition;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


