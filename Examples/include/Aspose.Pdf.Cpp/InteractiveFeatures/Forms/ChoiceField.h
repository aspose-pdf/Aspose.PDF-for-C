#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_ChoiceField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_ChoiceField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ComboBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ListBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class OptionCollection; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Represents base class for choice fields.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT ChoiceField : public Aspose::Pdf::InteractiveFeatures::Forms::Field
{
    typedef ChoiceField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ComboBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ListBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonField;
    
public:

    bool get_CommitImmediately();
    void set_CommitImmediately(bool value);
    bool get_MultiSelect();
    void set_MultiSelect(bool value);
    virtual int32_t get_Selected();
    virtual void set_Selected(int32_t value);
    virtual System::ArrayPtr<int32_t> get_SelectedItems();
    virtual void set_SelectedItems(System::ArrayPtr<int32_t> value);
    virtual System::SharedPtr<OptionCollection> get_Options();
    virtual System::String get_Value();
    virtual void set_Value(System::String value);
    
    ChoiceField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    ChoiceField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    virtual void AddOption(System::String optionName);
    virtual void AddOption(System::String export_, System::String name);
    virtual void DeleteOption(System::String optionName);
    
protected:

    ChoiceField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    ChoiceField();
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ChoiceField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<OptionCollection> _options;
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_ChoiceField_h_

