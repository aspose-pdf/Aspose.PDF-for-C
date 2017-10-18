#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_ComboBoxField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_ComboBoxField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "InteractiveFeatures/Forms/ChoiceField.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class representing Combobox field of the form.
/// </summary>
class ASPOSE_PDF_SHARED_API ComboBoxField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::ChoiceField
{
    typedef ComboBoxField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::ChoiceField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    
public:

    bool get_Editable();
    void set_Editable(bool value);
    bool get_SpellCheck();
    void set_SpellCheck(bool value);
    virtual void set_Selected(int32_t value);
    
    ComboBoxField();
    ComboBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    ComboBoxField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    ComboBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ComboBoxField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_ComboBoxField_h_

