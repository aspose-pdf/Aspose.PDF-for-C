#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_document.h>

#include "InteractiveFeatures/Forms/TextModel.h"
#include "InteractiveFeatures/Forms/TextBoxField.h"

namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Forms { class TextModel; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class Justification; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class describes rich text editor component.
/// </summary>
class ASPOSE_PDF_SHARED_API RichTextBoxField FINAL : public Aspose::Pdf::Forms::TextBoxField
{
    typedef RichTextBoxField ThisType;
    typedef Aspose::Pdf::Forms::TextBoxField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Forms::Field;
    
public:

    /// <summary>
    /// Gets or sets default style string of the rich text field.
    /// </summary>
    System::String get_Style();
    /// <summary>
    /// Gets or sets default style string of the rich text field.
    /// </summary>
    void set_Style(System::String value);
    /// <summary>
    /// Gets or sets rich text value.
    /// </summary>
    System::String get_RichTextValue();
    /// <summary>
    /// Gets or sets rich text value.
    /// </summary>
    void set_RichTextValue(System::String value);
    /// <summary>
    /// Gets or sets formatted rich text value with markup.
    /// </summary>
    System::String get_FormattedValue();
    /// <summary>
    /// Gets or sets formatted rich text value with markup.
    /// </summary>
    void set_FormattedValue(System::String value);
    /// <summary>
    /// Value of RichTextField.
    /// </summary>
    virtual System::String get_Value();
    /// <summary>
    /// Value of RichTextField.
    /// </summary>
    virtual void set_Value(System::String value);
    /// <summary>
    /// Gets or sets justification of the rich text box.
    /// </summary>
    Aspose::Pdf::Annotations::Justification get_Justify();
    /// <summary>
    /// Gets or sets justification of the rich text box.
    /// </summary>
    void set_Justify(Aspose::Pdf::Annotations::Justification value);
    
    /// <summary>
    /// Constructor for Rich Text Box  field. 
    /// </summary>
    /// <param name="page">Page where field will be placed.</param>
    /// <param name="rect">Position of the field on the page.</param>
    RichTextBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">The Aspose.Pdf.Page object where the field should be located.</param>
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    
    RichTextBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    double textPositionX;
    double textWidth;
    double textPositionY;
    double textStartPositionY;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> textOperators;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> graphicOperators;
    System::SharedPtr<TextModel> textModel;
    
    System::String ConvertBrs(System::String text);
    System::SharedPtr<System::Xml::XmlDocument> LoadXml(System::String text);
    System::String normalize(System::String s);
    void SetRichTextValue(System::String value);
    System::String GetInnerText(System::SharedPtr<System::Xml::XmlNode> node);
    System::String GetInnerText(System::String value);
    void Process(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<TextModel::TextAttributes> textAttributes);
    void OutText(System::String text, System::SharedPtr<TextModel::TextAttributes> textAttributes);
    void ProcessBody(System::SharedPtr<System::Xml::XmlNode> body, System::SharedPtr<TextModel::TextAttributes> textAttributes);
    void ProcessParagraph(System::SharedPtr<System::Xml::XmlNode> paragraph, System::SharedPtr<TextModel::TextAttributes> textAttributes);
    void ProcessSpan(System::SharedPtr<System::Xml::XmlNode> paragraph, System::SharedPtr<TextModel::TextAttributes> textAttributes);
    void CopyDefaultFonts(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> fonts, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> defaultResources);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


