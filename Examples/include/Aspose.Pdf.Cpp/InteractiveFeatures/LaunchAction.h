#ifndef _Aspose_Pdf_InteractiveFeatures_LaunchAction_h_
#define _Aspose_Pdf_InteractiveFeatures_LaunchAction_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::String get_File();
    void set_File(System::String value);
    ExtendedBoolean get_NewWindow();
    void set_NewWindow(ExtendedBoolean value);
    
    LaunchAction(System::String file);
    LaunchAction(System::SharedPtr<Document> document, System::String file);
    
protected:

    LaunchAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "LaunchAction"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::String file);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_LaunchAction_h_

