#ifndef _Aspose_Pdf_InteractiveFeatures_NamedAction_h_
#define _Aspose_Pdf_InteractiveFeatures_NamedAction_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::String get_Name();
    void set_Name(System::String value);
    
    NamedAction(PredefinedAction action);
    
protected:

    NamedAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "NamedAction"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_NamedAction_h_

