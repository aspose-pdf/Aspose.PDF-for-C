#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_RadioButtonOptionField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_RadioButtonOptionField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonField; } } } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class represents item of RadioButton field.
/// </summary>
class ASPOSE_PDF_SHARED_API RadioButtonOptionField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::Field
{
    typedef RadioButtonOptionField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonField;
    friend class Aspose::Pdf::ApsToPdfConverter;
    
public:

    System::String get_OptionName();
    void set_OptionName(System::String value);
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_Caption();
    void set_Caption(System::SharedPtr<Aspose::Pdf::Text::TextFragment> value);
    
    RadioButtonOptionField();
    
protected:

    System::SharedPtr<RadioButtonField> owner;
    
    System::String get_NormalCaption();
    
    RadioButtonOptionField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    virtual void AttachToPage(System::SharedPtr<Aspose::Pdf::Page> page);
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    
    RadioButtonOptionField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    virtual void UpdateAppearance(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    System::SharedPtr<XForm> createXForm(bool check, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    void setOptionName(System::String value);
    System::String getOptionName();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "RadioButtonOptionField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String optionName;
    static System::String fontName;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> caption;
    
    void circle(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> op, double x, double y, double r);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_RadioButtonOptionField_h_

