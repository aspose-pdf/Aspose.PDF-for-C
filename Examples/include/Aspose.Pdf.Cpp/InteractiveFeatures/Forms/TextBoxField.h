#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_TextBoxField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_TextBoxField_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if SUPPORT_ASPOSE_JAVASCRIPT 

/* C# INACTIVE CODE:
using Aspose.JavaScript;
*/

// C# preprocessor directive: #endif 


#include <system/text/string_builder.h>
#include <system/collections/list.h>
#include <drawing/image.h>

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class BarcodeField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class FileSelectBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class PasswordBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RichTextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class DomFormTests; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class IPdfFont; } } } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class representing text box field.
/// </summary>
class ASPOSE_PDF_SHARED_API TextBoxField : public Aspose::Pdf::InteractiveFeatures::Forms::Field
{
    typedef TextBoxField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::BarcodeField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::FileSelectBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::PasswordBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RichTextBoxField;
    friend class Aspose::Pdf::Tests::Facades::DomFormTests;
    
public:

    /// <summary>
    /// Gets or sets multiline flag of the field. If Multiline is true field can contain multiple lines of text.
    /// </summary>
    bool get_Multiline();
    /// <summary>
    /// Gets or sets multiline flag of the field. If Multiline is true field can contain multiple lines of text.
    /// </summary>
    void set_Multiline(bool value);
    /// <summary>
    /// Gets or sets spellcheck flag for field. If true field shall be spell checked.
    /// </summary>
    bool get_SpellCheck();
    /// <summary>
    /// Gets or sets spellcheck flag for field. If true field shall be spell checked.
    /// </summary>
    void set_SpellCheck(bool value);
    /// <summary>
    /// Gets or sets scrollable flag of field. If true field can be scrolled. 
    /// </summary>
    bool get_Scrollable();
    /// <summary>
    /// Gets or sets scrollable flag of field. If true field can be scrolled. 
    /// </summary>
    void set_Scrollable(bool value);
    /// <summary>
    /// Gets or sets flag which indicates is field divided into spaced positions.
    /// </summary>
    bool get_ForceCombs();
    /// <summary>
    /// Gets or sets flag which indicates is field divided into spaced positions.
    /// </summary>
    void set_ForceCombs(bool value);
    /// <summary>
    /// Gets or sets maximum length of text in the field. 
    /// </summary>
    int32_t get_MaxLen();
    /// <summary>
    /// Gets or sets maximum length of text in the field. 
    /// </summary>
    void set_MaxLen(int32_t value);
    /// <summary>
    /// Gets or sets value of the field.
    /// </summary>
    virtual System::String get_Value();
    /// <summary>
    /// Gets or sets value of the field.
    /// </summary>
    virtual void set_Value(System::String value);
    
    /// <summary>
    /// Create instance of TextBoxField.
    /// </summary>
    TextBoxField();
    /// <summary>
    /// Constructor of TextBox field.
    /// </summary>
    /// <param name="page">Page where text field is placed.</param>
    /// <param name="rect">Rectangle where the text field will be placed on the page.</param>
    TextBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    ///  Constructor of TextBox field.
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    /// <param name="rect">Rectangle of the field.</param>
    TextBoxField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Adds image into the field resources an draws it.
    /// </summary>
    /// <param name="image">
    /// Image to add into text field.
    /// </param>
    void AddImage(System::SharedPtr<System::Drawing::Image> image);
    /// <summary>
    /// Adds barcode 128 into the field. 
    /// Field value will be changed onto the code and field become read only.
    /// </summary>
    /// <param name="code">
    /// The text to generate barcode 128.
    /// </param>
    void AddBarcode(System::String code);
    
protected:

    bool get_Justification();
    void set_Justification(bool value);
    
    TextBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    /// <summary>
    /// Initializes field on the specified page. 
    /// </summary>
    /// <param name="page">Page where field is placed.</param>
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    
    TextBoxField(System::SharedPtr<Document> doc);
    
    /// <summary>
    /// Returns true if appearance is implemented in this class. 
    /// </summary>
    /// <returns>true if createAppearance is implemented.</returns>
    virtual bool AppearanceSupported();
    /// <summary>
    /// Returns sequence of operators which displays curent state of this text field.
    /// </summary>
    /// <param name="parameters">Appearance parameters.</param>
    /// <param name="annotation">Annotation where appearance is created.</param>
    /// <returns>List of operators of text field appearance.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    /// <summary>
    /// Remove only operators which show text. (marked by /Tx BMC .... EMC)
    /// </summary>
    /// <param name="appearance"></param>
    virtual void ClearAppearance(System::SharedPtr<OperatorCollection> appearance);
    
private:

    int32_t maxLen;
    System::String previousValue;
    bool _justification;
    
    int32_t getMaxLen(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annot);
    /// <summary>
    /// Returns width of text which is displayed usig specified font. 
    /// </summary>
    /// <param name="text">Text whose width is calcualted.</param>
    /// <param name="font">Font used to display the text.</param>
    /// <param name="fontSize">font size.</param>
    /// <returns></returns>
    double getTextWidth(System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize);
    bool IsNewLine(System::String text, int32_t i);
    bool IsWords(System::String text);
    bool IsSpace(System::SharedPtr<System::Text::StringBuilder> s);
    System::SharedPtr<System::Collections::Generic::List<System::String>> BreakStringIntoWords(System::String text);
    System::SharedPtr<System::Collections::Generic::List<System::String>> splitStringByWords(System::SharedPtr<System::Collections::Generic::List<System::String>> words, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize, double width);
    System::SharedPtr<System::Collections::Generic::List<System::String>> splitString(System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize, double width);
    double AdjustFontSize(System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double width, double height);
    void showCombs(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize);
    void AddImage(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annot, System::SharedPtr<System::Drawing::Image> image);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_TextBoxField_h_

