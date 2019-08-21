#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/dictionary.h>
#include <drawing/color.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class IconFit; } } }
namespace Aspose { namespace Pdf { enum class Rotation; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents annotation characteristics
/// </summary>
class ASPOSE_PDF_SHARED_API Characteristics FINAL : public System::Object
{
    typedef Characteristics ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::IconFit;
    
public:

    /// <summary>
    /// Gets color of the background
    /// </summary>
    System::Drawing::Color get_Background();
    /// <summary>
    /// Sets color of the background
    /// </summary>
    void set_Background(System::Drawing::Color value);
    /// <summary>
    /// Gets color of the border.
    /// </summary>
    System::Drawing::Color get_Border();
    /// <summary>
    /// Sets color of the border.
    /// </summary>
    void set_Border(System::Drawing::Color value);
    /// <summary>
    /// Gets rotation of the annotation.
    /// </summary>
    Rotation get_Rotate();
    /// <summary>
    /// Sets rotation of the annotation.
    /// </summary>
    void set_Rotate(Rotation value);
    
protected:

    System::WeakPtr<Annotation> annotation;
    
    static void assertMK(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation);
    
    Characteristics(System::SharedPtr<Annotation> annotation);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> cache;
    
    System::Drawing::Color getColor(System::String entry);
    void setColor(System::String entry, System::Drawing::Color color);
    static void setColor(System::SharedPtr<Annotation> current, System::String entry, System::Drawing::Color color);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


