#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { namespace Forms { class ComboBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ListBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class OptionCollection; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Represents base class for choice fields.
/// </summary>
class ASPOSE_PDF_SHARED_API ChoiceField : public Aspose::Pdf::Forms::Field
{
    typedef ChoiceField ThisType;
    typedef Aspose::Pdf::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    
public:

    /// <summary>
    /// Gets or sets commit on selection change flag.
    /// </summary>
    bool get_CommitImmediately();
    /// <summary>
    /// Gets or sets commit on selection change flag.
    /// </summary>
    void set_CommitImmediately(bool value);
    /// <summary>
    /// Gets or sets multiselection flag.
    /// </summary>
    bool get_MultiSelect();
    /// <summary>
    /// Gets or sets multiselection flag.
    /// </summary>
    void set_MultiSelect(bool value);
    /// <summary>
    /// Gets or sets index of selected option. This property allows to change selection. 
    /// </summary>
    virtual int32_t get_Selected();
    /// <summary>
    /// Gets or sets index of selected option. This property allows to change selection. 
    /// </summary>
    virtual void set_Selected(int32_t value);
    /// <summary>
    /// Gets or sets array of selected items. For multiselect list array contains more then one item. For single selection list it contains single item.
    /// </summary>
    virtual System::ArrayPtr<int32_t> get_SelectedItems();
    /// <summary>
    /// Gets or sets array of selected items. For multiselect list array contains more then one item. For single selection list it contains single item.
    /// </summary>
    virtual void set_SelectedItems(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets collection of choice options.
    /// </summary>
    virtual System::SharedPtr<OptionCollection> get_Options();
    /// <summary>
    /// Gets or sets value of the field.
    /// </summary>
    virtual System::String get_Value();
    /// <summary>
    /// Gets or sets value of the field.
    /// </summary>
    virtual void set_Value(System::String value);
    
    /// <summary>
    /// Constructor for ChoiceField.
    /// </summary>
    /// <param name="page">Page where field is situated.</param>
    /// <param name="rect">Rectangle of the field.</param>
    ChoiceField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Creates choice field (for Generator)
    /// </summary>
    /// <param name="doc">Document where choice field will be created.</param>
    ChoiceField(System::SharedPtr<Document> doc);
    /// <summary>
    /// Constructor for ChoiceField.
    /// </summary>
    /// <param name="doc">Document where field will be created. </param>
    /// <param name="rect">Rectangle of the field. </param>
    ChoiceField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Adds new option with specified name. 
    /// </summary>
    /// <param name="optionName">Name of the new option.</param>
    virtual void AddOption(System::String optionName);
    /// <summary>
    /// Adds new option with specified export value and name.
    /// </summary>
    /// <param name="export">Export value.</param>
    /// <param name="name">Name of the new option.</param>
    virtual void AddOption(System::String export_, System::String name);
    /// <summary>
    /// Deletes option by its name.
    /// </summary>
    /// <param name="optionName">Name of the option which must be deleted.</param>
    virtual void DeleteOption(System::String optionName);
    
protected:

    ChoiceField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    ChoiceField();
    
    virtual System::SharedPtr<Field> CreateCopy();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<OptionCollection> _options;
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


