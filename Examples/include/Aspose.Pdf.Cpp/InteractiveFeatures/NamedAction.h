#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/PdfAction.h"

namespace Aspose { namespace Pdf { namespace Annotations { enum class PredefinedAction; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents named actions that PDF viewer applications are expected to support.
/// </summary>
class ASPOSE_PDF_SHARED_API NamedAction FINAL : public Aspose::Pdf::Annotations::PdfAction
{
    typedef NamedAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PdfAction;
    
public:

    /// <summary>
    /// Gets the action to be performed.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Sets the action to be performed.
    /// </summary>
    void set_Name(System::String value);
    
    /// <summary>
    /// Constructor for Named Action class.
    /// </summary>
    /// <param name="action">Action for which this object is created.</param>
    NamedAction(PredefinedAction action);
    
protected:

    NamedAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


