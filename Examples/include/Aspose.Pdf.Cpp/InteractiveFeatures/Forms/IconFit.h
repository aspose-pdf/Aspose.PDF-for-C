#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_IconFit_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_IconFit_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ButtonField; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class ScalingReason; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class ScalingMode; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

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
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ButtonField;
    
public:

    Aspose::Pdf::InteractiveFeatures::Forms::ScalingReason get_ScalingReason();
    void set_ScalingReason(Aspose::Pdf::InteractiveFeatures::Forms::ScalingReason value);
    Aspose::Pdf::InteractiveFeatures::Forms::ScalingMode get_ScalingMode();
    void set_ScalingMode(Aspose::Pdf::InteractiveFeatures::Forms::ScalingMode value);
    double get_LeftoverLeft();
    void set_LeftoverLeft(double value);
    double get_LeftoverBottom();
    void set_LeftoverBottom(double value);
    bool get_SpreadOnBorder();
    void set_SpreadOnBorder(bool value);
    
    static Aspose::Pdf::InteractiveFeatures::Forms::ScalingReason NameToScalingReason(System::String reason);
    static System::String ScalingReasonToName(Aspose::Pdf::InteractiveFeatures::Forms::ScalingReason reason);
    static Aspose::Pdf::InteractiveFeatures::Forms::ScalingMode NameToScalingMode(System::String mode);
    static System::String ScalingModeToName(Aspose::Pdf::InteractiveFeatures::Forms::ScalingMode mode);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation;
    
    IconFit(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "IconFit"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    void assertFitIcon();
    void setName(System::String entry, System::String value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> getA();
    void setAEntry(int32_t index, double value);
    void assertA();
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_IconFit_h_

