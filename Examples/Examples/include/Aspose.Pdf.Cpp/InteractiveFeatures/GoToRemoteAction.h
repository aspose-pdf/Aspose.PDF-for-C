#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/GoToAction.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PdfAction; } } }
namespace Aspose { namespace Pdf { class FileSpecification; } }
namespace Aspose { namespace Pdf { enum class ExtendedBoolean; } }
namespace Aspose { namespace Pdf { namespace Annotations { class IAppointment; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class ExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a remote go-to action that is similar to an ordinary go-to action but jumps to a destination in another PDF file instead of the current file.
/// </summary>
class ASPOSE_PDF_SHARED_API GoToRemoteAction FINAL : public Aspose::Pdf::Annotations::GoToAction
{
    typedef GoToRemoteAction ThisType;
    typedef Aspose::Pdf::Annotations::GoToAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PdfAction;
    
public:

    /// <summary>
    /// Gets or sets the specification of the file in which the destination is located.
    /// </summary>
    System::SharedPtr<FileSpecification> get_File();
    /// <summary>
    /// Gets or sets the specification of the file in which the destination is located.
    /// </summary>
    void set_File(System::SharedPtr<FileSpecification> value);
    /// <summary>
    /// Gets or sets a flag specifying whether to open the destination document in a new window.
    /// </summary>
    ExtendedBoolean get_NewWindow();
    /// <summary>
    /// Gets or sets a flag specifying whether to open the destination document in a new window.
    /// </summary>
    void set_NewWindow(ExtendedBoolean value);
    /// <summary>
    /// Gets or sets the destination to jump to.
    /// </summary>
    virtual System::SharedPtr<IAppointment> get_Destination();
    /// <summary>
    /// Gets or sets the destination to jump to.
    /// </summary>
    virtual void set_Destination(System::SharedPtr<IAppointment> value);
    
    /// <summary>
    /// Initializes GoToRemoteAction object.
    /// </summary>
    /// <param name="remotePdf">Destination PDF document.</param>
    /// <param name="remotePageNumber">Destination page number.</param>
    GoToRemoteAction(System::String remotePdf, int32_t remotePageNumber);
    /// <summary>
    /// Initializes GoToRemoteAction object.
    /// </summary>
    /// <param name="remotePdf">Destination PDF document. </param>
    /// <param name="destination">Destination in the  PDF document.</param>
    GoToRemoteAction(System::String remotePdf, System::SharedPtr<ExplicitDestination> destination);
    
protected:

    GoToRemoteAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


