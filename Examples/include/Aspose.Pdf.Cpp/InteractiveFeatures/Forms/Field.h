#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Doc.DocumentModel;

#include <xml/xml_node.h>
#include <xml/xml_namespace_manager.h>
#include <system/nullable.h>
#include <system/io/stream.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/WidgetAnnotation.h"

namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Devices { class DocumentDevice; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Forms { class XFA; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class CheckboxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ChoiceField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ChoiceOption; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ComboBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Form; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ListBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonOptionField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class SignatureField; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class JavascriptAction; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class PageCollection; } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v12_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_3; } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// The <b>Aspose.Pdf.Forms</b> namespace has classes which describes forms (standard, static, dynamic) and various types of fields like text box, list box, radio button etc.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Base class for acro form fields.
/// </summary>
class ASPOSE_PDF_SHARED_API Field : public Aspose::Pdf::Annotations::WidgetAnnotation, public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>
{
    typedef Field ThisType;
    typedef Aspose::Pdf::Annotations::WidgetAnnotation BaseType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Devices::DocumentDevice;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::XFA;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::ChoiceField;
    friend class Aspose::Pdf::Forms::ChoiceOption;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Annotations::JavascriptAction;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Tests::RegressionTests_v12_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_3;
    
public:

    /// <summary>
    /// Gets partial name of the field.
    /// </summary>
    System::String get_PartialName();
    /// <summary>
    /// Sets partial name of the field.
    /// </summary>
    void set_PartialName(System::String value);
    /// <summary>
    /// Gets alternate name of the field (An alternate field 
    /// name that shall be used in place of the actual field name 
    /// wherever the field shall be identified in the user interface).
    /// Alternate name is used as field tooltip in Adobe Acrobat.
    /// </summary>
    System::String get_AlternateName();
    /// <summary>
    /// Sets alternate name of the field (An alternate field 
    /// name that shall be used in place of the actual field name 
    /// wherever the field shall be identified in the user interface).
    /// Alternate name is used as field tooltip in Adobe Acrobat.
    /// </summary>
    void set_AlternateName(System::String value);
    /// <summary>
    /// Gets mapping name  of the field that shall be used when exporting interactive form field data from the document.
    /// </summary>
    System::String get_MappingName();
    /// <summary>
    /// Sets mapping name  of the field that shall be used when exporting interactive form field data from the document.
    /// </summary>
    void set_MappingName(System::String value);
    /// <summary>
    /// Gets value of the field.
    /// </summary>
    virtual System::String get_Value();
    /// <summary>
    /// Sets value of the field.
    /// </summary>
    virtual void set_Value(System::String value);
    /// <summary>
    /// Returns true if dictionary is synchronized.
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets number of subfields in this field. (For example number of items in radio button field).
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Synchronization object.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets boolean value which indicates is this field non-terminal field i.e. group of fields.
    /// </summary>
    bool get_IsGroup();
    /// <summary>
    /// Gets index of this anotation on the page.
    /// </summary>
    int32_t get_AnnotationIndex();
    /// <summary>
    /// Sets index of this anotation on the page.
    /// </summary>
    void set_AnnotationIndex(int32_t value);
    /// <summary>
    /// Gets index of page which contains this field.
    /// </summary>
    virtual int32_t get_PageIndex();
    /// <summary>
    /// Gets the field rectangle.
    /// </summary>
    virtual System::SharedPtr<Rectangle> get_Rect();
    /// <summary>
    /// Sets the field rectangle.
    /// </summary>
    virtual void set_Rect(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Property for Generator support. Used when field is added to header or footer. If true, this field will created once and it's appearance will be visible on all pages of the document. If false, separated field will be created for every document page. 
    /// </summary>
    bool get_IsSharedField();
    /// <summary>
    /// Property for Generator support. Used when field is added to header or footer. If true, this field will created once and it's appearance will be visible on all pages of the document. If false, separated field will be created for every document page. 
    /// </summary>
    void set_IsSharedField(bool value);
    /// <summary>
    /// If true then font size will reduced to fit text to specified rectangle. 
    /// </summary>
    static bool get_FitIntoRectangle();
    /// <summary>
    /// If true then font size will reduced to fit text to specified rectangle. 
    /// </summary>
    static void set_FitIntoRectangle(bool value);
    /// <summary>
    /// Maximail font size which can be used for field contents. -1 to don't check size. 
    /// </summary>
    static double get_MaxFontSize();
    /// <summary>
    /// Maximail font size which can be used for field contents. -1 to don't check size. 
    /// </summary>
    static void set_MaxFontSize(double value);
    /// <summary>
    /// Gets tab order of the field.
    /// </summary>
    int32_t get_TabOrder();
    /// <summary>
    /// Sets tab order of the field.
    /// </summary>
    void set_TabOrder(int32_t value);
    bool get_IsReadOnly();
    
    /// <summary>
    /// Recaculates all calculated fields on the form. 
    /// </summary>
    /// <returns>true if field value was changed during recalculation.</returns>
    bool Recalculate();
    /// <summary>
    /// Copies subfields of this field into array starting from specified index.
    /// </summary>
    /// <param name="array">Array where field must be copied.</param>
    /// <param name="index">Starting index where fields will be copied.</param>
    void CopyTo(System::ArrayPtr<System::SharedPtr<Field>> array, int32_t index);
    /// <summary>
    /// Returns enumerator of contained fields.
    /// </summary>
    /// <returns>Enumerator.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> GetEnumerator();
    
    /// <summary>
    /// Creates field for use in Generator.
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    Field(System::SharedPtr<Document> doc);
    
    /// <summary>
    /// Removes this field and place its value directly on the page.
    /// </summary>
    virtual void Flatten();
    
    /// <summary>
    /// Gets subfield contained in this field by name of the subfield.
    /// </summary>
    /// <param name="name">Contained subfield name.</param>
    /// <returns>Field instance.</returns>
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> idx_get(System::String name);
    /// <summary>
    /// Gets subfield contained in this field by index.
    /// </summary>
    /// <param name="index">Index of the reuqested subfield.</param>
    /// <returns>Field instance.</returns>
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> idx_get(int32_t index);
    
    /// <summary>
    /// Set position of the field.
    /// </summary>
    /// <param name="point">Point where field should be positioned.</param>
    virtual void SetPosition(System::SharedPtr<Point> point);
    void Add(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> const &item);
    void Clear();
    bool Contains(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> const &item) const;
    void CopyTo(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>> array, int32_t arrayIndex);
    bool Remove(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> const &item);
    void SetTemplateWeakPtr(unsigned int argument) override;
    
protected:

    static const int32_t _NoToggleToOff;
    static const int32_t _Radio;
    static const int32_t _Pushbutton;
    static const int32_t _RadiosInUnison;
    static const int32_t _Multiline;
    static const int32_t _Password;
    static const int32_t _FileSelect;
    static const int32_t _DoNotSpellCheck;
    static const int32_t _DoNotScroll;
    static const int32_t _Comb;
    static const int32_t _RichText;
    static const int32_t _Combo;
    static const int32_t _Edit;
    static const int32_t _Sort;
    static const int32_t _MultiSelect;
    static const int32_t _CommitOnSelChange;
    System::String _value;
    
    System::SharedPtr<System::Xml::XmlNamespaceManager> get_NamespaceManager();
    
    /// <summary>
    /// Operator for comparision field value with given value.
    /// </summary>
    /// <param name="value">Value to check the field value on.</param>
    /// <returns>True if field value and passed value are equals.</returns>
    virtual bool IsEqualTo(System::String value);
    /// <summary>
    /// Returns value correctly encoded for placing into XFA dataset.
    /// </summary>
    /// <param name="value">Value for placing into XFA form.</param>
    /// <returns>Encoded value.</returns>
    virtual System::String GetConformXFAValue(System::String value);
    bool isCalculated();
    static System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> CreateField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field, System::SharedPtr<Document> document);
    
    Field(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">The Aspose.Pdf.Page object where the field should be located.</param>
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    
    Field();
    Field(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    Field(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    System::SharedPtr<Field> findField(System::String name);
    void addField(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> field);
    System::SharedPtr<Field> remove(System::String name);
    /// <summary>
    /// Set value of the field.
    /// </summary>
    /// <param name="value">NEw value of the field.</param>
    void setValue(System::String value);
    virtual void UpdateAppearances();
    System::String GetFieldReferencePath();
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate();
    void SetFieldImage(System::SharedPtr<System::IO::Stream> image);
    System::ArrayPtr<uint8_t> GetFieldImage();
    void AddNext(System::SharedPtr<Field> field);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> CreateKidAnnotation(System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// This method is required for Generator support. This method creates copy of field "template" when generator uses Footer/Header functionality.
    /// </summary>
    /// <returns></returns>
    virtual System::SharedPtr<Field> CreateCopy();
    virtual bool AppearanceSupported();
    System::String GetCharacteristicsString(System::String entry);
    static void SetCharacteristicsString(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annot, System::String entry, System::String value);
    void SetCharacteristicsString(System::String entry, System::String value);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::String partialName;
    System::String alternateName;
    System::String mappingName;
    bool enableRecalculate;
    System::String _ReferencePath;
    System::SharedPtr<Field> _next;
    System::SharedPtr<System::Xml::XmlNamespaceManager> _nsmgr;
    bool _isSharedField;
    
    static System::Nullable<bool>& _fitIntoRectangle();
    static System::Nullable<double>& _maxFontSize();
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> cache;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> hash;
    bool isGroup;
    System::String functions;
    
    System::String CollectFormFields();
    System::String GetPreValue();
    static bool IsRadioButtonOption(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    static bool IsRadioButton(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> get(System::String name);
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> get(int32_t index);
    static bool isWidget(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field);
    static bool IsGroupField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    /// <summary>
    /// Returns rectangle of all kids of the field. This is required for fields
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Rectangle> GetKidsRectangle(int32_t pageIndex);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> Copy(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> src);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


