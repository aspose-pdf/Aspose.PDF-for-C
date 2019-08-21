#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Forms { class ButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { enum class ScalingReason; } } }
namespace Aspose { namespace Pdf { namespace Forms { enum class ScalingMode; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Describes how the widget annotation's icon shall be displayed within its annotation rectangle.
/// </summary>
class ASPOSE_PDF_SHARED_API IconFit FINAL : public System::Object
{
    typedef IconFit ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Forms::ButtonField;
    
public:

    /// <summary>
    /// Gets scaling reason. 
    /// </summary>
    Aspose::Pdf::Forms::ScalingReason get_ScalingReason();
    /// <summary>
    /// Sets scaling reason. 
    /// </summary>
    void set_ScalingReason(Aspose::Pdf::Forms::ScalingReason value);
    /// <summary>
    /// The type of scaling that shall be used.        /// </summary>
    Aspose::Pdf::Forms::ScalingMode get_ScalingMode();
    /// <summary>
    /// The type of scaling that shall be used.        /// </summary>
    void set_ScalingMode(Aspose::Pdf::Forms::ScalingMode value);
    /// <summary>
    /// Gets space to allocate at the left of the icon.
    /// </summary>
    double get_LeftoverLeft();
    /// <summary>
    /// Sets space to allocate at the left of the icon.
    /// </summary>
    void set_LeftoverLeft(double value);
    /// <summary>
    /// Gets space to allocate at the bottom of the icon.
    /// </summary>
    double get_LeftoverBottom();
    /// <summary>
    /// Sets space to allocate at the bottom of the icon.
    /// </summary>
    void set_LeftoverBottom(double value);
    /// <summary>
    /// If true, indicates that the button appearance shall be scaled to fit fully within the bounds of the annotation without taking into consideration the line width of the border.
    /// </summary>
    bool get_SpreadOnBorder();
    /// <summary>
    /// If true, indicates that the button appearance shall be scaled to fit fully within the bounds of the annotation without taking into consideration the line width of the border.
    /// </summary>
    void set_SpreadOnBorder(bool value);
    
    /// <summary>
    /// Converts name of scaling reason into ScalingReason object. 
    /// </summary>
    /// <param name="reason">Name of scaling reason. </param>
    /// <returns>Scaling reason object.</returns>
    static Aspose::Pdf::Forms::ScalingReason NameToScalingReason(System::String reason);
    /// <summary>
    /// Converts scaling reason obejct to name. 
    /// </summary>
    /// <param name="reason">Scaling reason object to be converted.</param>
    /// <returns>Name of scaling reasong.</returns>
    static System::String ScalingReasonToName(Aspose::Pdf::Forms::ScalingReason reason);
    /// <summary>
    /// Converts scaling mode name into ScalingMode object.
    /// </summary>
    /// <param name="mode">Scaling mode name.</param>
    /// <returns>Scaling mode object.</returns>
    static Aspose::Pdf::Forms::ScalingMode NameToScalingMode(System::String mode);
    /// <summary>
    /// Converts scaling mode object into name.
    /// </summary>
    /// <param name="mode">Scaling mode object.</param>
    /// <returns>Scaling mode name.</returns>
    static System::String ScalingModeToName(Aspose::Pdf::Forms::ScalingMode mode);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation;
    
    IconFit(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    void assertFitIcon();
    void setName(System::String entry, System::String value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> getA();
    void setAEntry(int32_t index, double value);
    void assertA();
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


