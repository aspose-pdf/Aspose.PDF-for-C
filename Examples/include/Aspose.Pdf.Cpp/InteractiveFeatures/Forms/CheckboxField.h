#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_CheckboxField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_CheckboxField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class BoxStyle; } } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class representing checkbox field
/// </summary>
class ASPOSE_PDF_SHARED_API CheckboxField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::Field
{
    typedef CheckboxField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonField;
    
public:

    System::SharedPtr<System::Collections::Generic::List<System::String>> get_AllowedStates();
    BoxStyle get_Style();
    void set_Style(BoxStyle value);
    virtual System::String get_ActiveState();
    virtual void set_ActiveState(System::String value);
    bool get_Checked();
    void set_Checked(bool value);
    virtual System::String get_Value();
    virtual void set_Value(System::String value);
    
    CheckboxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    CheckboxField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    CheckboxField();
    
protected:

    System::String get_OnState();
    System::String get_OffState();
    System::String get_NormalCaption();
    void set_NormalCaption(System::String value);
    
    static BoxStyle GetStyle(System::SharedPtr<XForm> xform, BoxStyle defaultStyle);
    static void SetStyle(System::SharedPtr<XForm> xform, BoxStyle style);
    
    CheckboxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    virtual void UpdateAppearance(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CheckboxField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::String>> _allowedStates;
    static System::String fontName;
    
    System::String ExtractStateName(System::String stateKey);
    System::String GetString(System::String entry);
    static void SetString(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annot, System::String entry, System::String value);
    void SetString(System::String entry, System::String value);
    BoxStyle GetStyle(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    System::String GetNormalCaption(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    System::SharedPtr<XForm> CreateItemXForm(bool check, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    bool SetActiveState(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation, System::String value, bool throwExcpetion);
    System::String TranslateStyle(BoxStyle style);
    BoxStyle TranslateCaption(System::String caption);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_CheckboxField_h_

