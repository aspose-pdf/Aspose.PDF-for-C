#ifndef _Aspose_Pdf_InteractiveFeatures_GoToRemoteAction_h_
#define _Aspose_Pdf_InteractiveFeatures_GoToRemoteAction_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "InteractiveFeatures/GoToAction.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class PdfAction; } } }
namespace Aspose { namespace Pdf { class FileSpecification; } }
namespace Aspose { namespace Pdf { enum class ExtendedBoolean; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class IAppointment; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class ExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Represents a remote go-to action that is similar to an ordinary go-to action but jumps to a destination in another PDF file instead of the current file.
/// </summary>
class ASPOSE_PDF_SHARED_API GoToRemoteAction FINAL : public Aspose::Pdf::InteractiveFeatures::GoToAction
{
    typedef GoToRemoteAction ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::GoToAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::PdfAction;
    
public:

    System::SharedPtr<FileSpecification> get_File();
    void set_File(System::SharedPtr<FileSpecification> value);
    ExtendedBoolean get_NewWindow();
    void set_NewWindow(ExtendedBoolean value);
    virtual System::SharedPtr<IAppointment> get_Destination();
    virtual void set_Destination(System::SharedPtr<IAppointment> value);
    
    GoToRemoteAction(System::String remotePdf, int32_t remotePageNumber);
    GoToRemoteAction(System::String remotePdf, System::SharedPtr<ExplicitDestination> destination);
    
protected:

    GoToRemoteAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "GoToRemoteAction"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_GoToRemoteAction_h_

