#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_RadioButtonField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_RadioButtonField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    BoxStyle get_Style();
    void set_Style(BoxStyle value);
    virtual int32_t get_Selected();
    virtual void set_Selected(int32_t value);
    virtual System::SharedPtr<OptionCollection> get_Options();
    virtual int32_t get_PageIndex();
    virtual System::String get_Value();
    virtual void set_Value(System::String value);
    
    RadioButtonField(System::SharedPtr<Aspose::Pdf::Page> page);
    RadioButtonField(System::SharedPtr<Document> doc);
    
    void Add(System::SharedPtr<RadioButtonOptionField> newItem);
    void AddOption(System::String optionName, System::SharedPtr<Rectangle> rect);
    virtual void AddOption(System::String optionName);
    virtual void SetPosition(System::SharedPtr<Point> point);
    
protected:

    virtual bool IsEqualTo(System::String value);
    virtual System::String GetConformXFAValue(System::String value);
    
    RadioButtonField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    RadioButtonField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    RadioButtonField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    virtual void UpdateAppearances();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "RadioButtonField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

