#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_RichTextBoxField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_RichTextBoxField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "InteractiveFeatures/Forms/TextBoxField.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextModel; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { enum class Justification; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextModel_TextAttributes; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class describes rich text editor component.
/// </summary>
class ASPOSE_PDF_SHARED_API RichTextBoxField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField
{
    typedef RichTextBoxField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    
public:

    System::String get_Style();
    void set_Style(System::String value);
    System::String get_RichTextValue();
    void set_RichTextValue(System::String value);
    System::String get_FormattedValue();
    void set_FormattedValue(System::String value);
    virtual System::String get_Value();
    virtual void set_Value(System::String value);
    Aspose::Pdf::InteractiveFeatures::Justification get_Justify();
    void set_Justify(Aspose::Pdf::InteractiveFeatures::Justification value);
    
    RichTextBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    
    RichTextBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "RichTextBoxField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double textPositionX;
    double textWidth;
    double textPositionY;
    double textStartPositionY;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> textOperators;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> graphicOperators;
    System::SharedPtr<TextModel> textModel;
    
    bool IsValidXml(System::String text);
    System::String normalize(System::String s);
    void SetRichTextValue(System::String value);
    System::String GetInnerText(System::SharedPtr<System::Xml::XmlNode> node);
    System::String GetInnerText(System::String value);
    void Process(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<TextModel_TextAttributes> textAttributes);
    void OutText(System::String text, System::SharedPtr<TextModel_TextAttributes> textAttributes);
    void ProcessBody(System::SharedPtr<System::Xml::XmlNode> body, System::SharedPtr<TextModel_TextAttributes> textAttributes);
    void ProcessParagraph(System::SharedPtr<System::Xml::XmlNode> paragraph, System::SharedPtr<TextModel_TextAttributes> textAttributes);
    void ProcessSpan(System::SharedPtr<System::Xml::XmlNode> paragraph, System::SharedPtr<TextModel_TextAttributes> textAttributes);
    void CopyDefaultFonts(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> fonts, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> defaultResources);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_RichTextBoxField_h_

