#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_RadioButtonField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_RadioButtonField_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "InteractiveFeatures/Forms/ChoiceField.h"

namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class BoxStyle; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class OptionCollection; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonOptionField; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Point; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class representing radio button field.
/// </summary>
class ASPOSE_PDF_SHARED_API RadioButtonField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::ChoiceField
{
    typedef RadioButtonField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::ChoiceField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::ApsToPdfConverter;
    
public:

    /// <summary>
    /// Style of field box.
    /// </summary>
    BoxStyle get_Style();
    /// <summary>
    /// Style of field box.
    /// </summary>
    void set_Style(BoxStyle value);
    /// <summary>
    /// Gets or sets index of selected item. Numbering of items is started from 1.
    /// </summary>
    virtual int32_t get_Selected();
    /// <summary>
    /// Gets or sets index of selected item. Numbering of items is started from 1.
    /// </summary>
    virtual void set_Selected(int32_t value);
    /// <summary>
    /// Gets collection of options of the radio button.
    /// </summary>
    virtual System::SharedPtr<OptionCollection> get_Options();
    /// <summary>
    /// Gets index of page which contains this RadioButton field.
    /// </summary>
    virtual int32_t get_PageIndex();
    /// <summary>
    /// Gets or sets value of field.
    /// </summary>
    virtual System::String get_Value();
    /// <summary>
    /// Gets or sets value of field.
    /// </summary>
    virtual void set_Value(System::String value);
    
    /// <summary>
    /// Constructor for RadiouttonField
    /// </summary>
    /// <param name="page">Page where radio button will be placed.</param>
    RadioButtonField(System::SharedPtr<Aspose::Pdf::Page> page);
    RadioButtonField(System::SharedPtr<Document> doc);
    
    /// <summary>
    /// Adds new option field to RadioButton field
    /// </summary>
    /// <param name="newItem">Item which should be added.</param>
    void Add(System::SharedPtr<RadioButtonOptionField> newItem);
    /// <summary>
    /// Add  to radio button option with specifed rectangle. 
    /// </summary>
    /// <param name="optionName">Name of new option.</param>
    /// <param name="rect">New item rectangle.</param>
    void AddOption(System::String optionName, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Add option to radion button. 
    /// </summary>
    /// <param name="optionName">Name of the option which will be added.</param>
    virtual void AddOption(System::String optionName);
    /// <summary>
    /// Move all subitems of radio button to specified positins on the page. 
    /// </summary>
    /// <param name="point">Sets position of RadioButton field annotations.</param>
    virtual void SetPosition(System::SharedPtr<Point> point);
    
protected:

    /// <summary>
    /// Returns true if checkbox value is equal to specified value.
    /// </summary>
    /// <param name="value">Value to compare.</param>
    /// <returns>True if checkbox value equals to specified value.</returns>
    virtual bool IsEqualTo(System::String value);
    virtual System::String GetConformXFAValue(System::String value);
    
    RadioButtonField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    RadioButtonField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    RadioButtonField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">The Aspose.Pdf.Page object where the field should be located.</param>
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    virtual void UpdateAppearances();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::String>> _validStates;
    int32_t _entryCount;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<RadioButtonOptionField>>> fieldsToAdd;
    
    System::SharedPtr<System::Collections::Generic::List<System::String>> GetValidStates();
    int32_t GetStateIndex();
    void SetStateIndex(int32_t index);
    void circle(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> op, double x, double y, double r);
    System::SharedPtr<Point> getLowestLeftPoint();
    void FixField();
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_RadioButtonField_h_

