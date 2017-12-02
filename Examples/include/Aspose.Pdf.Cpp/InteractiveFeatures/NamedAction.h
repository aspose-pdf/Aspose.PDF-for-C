#ifndef _Aspose_Pdf_InteractiveFeatures_NamedAction_h_
#define _Aspose_Pdf_InteractiveFeatures_NamedAction_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "InteractiveFeatures/PdfAction.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { enum class PredefinedAction; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Represents named actions that PDF viewer applications are expected to support.
/// </summary>
class ASPOSE_PDF_SHARED_API NamedAction FINAL : public Aspose::Pdf::InteractiveFeatures::PdfAction
{
    typedef NamedAction ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::PdfAction;
    
public:

    /// <summary>
    /// Gets or sets the action to be performed.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Gets or sets the action to be performed.
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

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_NamedAction_h_

