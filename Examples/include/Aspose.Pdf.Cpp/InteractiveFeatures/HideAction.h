#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>

#include "InteractiveFeatures/PdfAction.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a hide action that hides or shows one or more annotations on the screen by setting or clearing their Hidden flags.
/// </summary>
class ASPOSE_PDF_SHARED_API HideAction : public Aspose::Pdf::Annotations::PdfAction
{
    typedef HideAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    /// <summary>
    /// Gets status of the annotation(s) to hide/display.
    /// </summary>
    bool get_IsHidden();
    /// <summary>
    /// Sets status of the annotation(s) to hide/display.
    /// </summary>
    void set_IsHidden(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="HideAction"/> class for the specified annotation.
    /// </summary>
    /// <param name="annotation">An annotation to be hidden.</param>
    HideAction(System::SharedPtr<Annotation> annotation);
    /// <summary>
    /// Initializes a new instance of the <see cref="HideAction"/> class for the specified annotation and invisibility flag.
    /// </summary>
    /// <param name="annotation">An annotation to be hidden or shown.</param>
    /// <param name="isHidden">A flag indicating whether to hide the annotation (true) or show it (false).</param>
    HideAction(System::SharedPtr<Annotation> annotation, bool isHidden);
    /// <summary>
    /// Initializes a new instance of the <see cref="HideAction"/> class for the specified field name.
    /// </summary>
    /// <param name="fieldName">A text string giving the fully qualified field name of an interactive form field.</param>
    HideAction(System::String fieldName);
    /// <summary>
    /// Initializes a new instance of the <see cref="HideAction"/> class for the specified field name and invisibility flag.
    /// </summary>
    /// <param name="fieldName">A text string giving the fully qualified field name of an interactive form field.</param>
    /// <param name="isHidden">A flag indicating whether to hide the field (true) or show it (false).</param>
    HideAction(System::String fieldName, bool isHidden);
    /// <summary>
    /// Initializes a new instance of the <see cref="HideAction"/> class for the specified annotations.
    /// </summary>
    /// <param name="annotations">An array of annotations to be hidden.</param>
    HideAction(System::ArrayPtr<System::SharedPtr<Annotation>> annotations);
    /// <summary>
    /// Initializes a new instance of the <see cref="HideAction"/> class for the specified annotations and for invisibility flag.
    /// </summary>
    /// <param name="annotations">An array of annotations to be hidden or shown.</param>
    /// <param name="isHidden">A flag indicating whether to hide the annotations (true) or show it (false).</param>
    HideAction(System::ArrayPtr<System::SharedPtr<Annotation>> annotations, bool isHidden);
    /// <summary>
    /// Initializes a new instance of the <see cref="HideAction"/> class for the specified field names.
    /// </summary>
    /// <param name="names">An array of strings giving the fully qualified field names of an interactive form fields.</param>
    HideAction(System::ArrayPtr<System::String> names);
    /// <summary>
    /// Initializes a new instance of the <see cref="HideAction"/> class for the specified field names and for invisibility flag.
    /// </summary>
    /// <param name="names">An array of strings giving the fully qualified field names of an interactive form fields.</param>
    /// <param name="isHidden">A flag indicating whether to hide the fields (true) or show it (false).</param>
    HideAction(System::ArrayPtr<System::String> names, bool isHidden);
    
protected:

    HideAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


