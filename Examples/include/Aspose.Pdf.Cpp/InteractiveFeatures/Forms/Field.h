#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_Field_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_Field_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Doc.DocumentModel;

// C# preprocessor directive: #if SUPPORT_ASPOSE_JAVASCRIPT 

/* C# INACTIVE CODE:
using Aspose.JavaScript;
*/

// C# preprocessor directive: #endif 

//using Aspose.JavaScript;

#include <xml/xml_node.h>
#include <xml/xml_namespace_manager.h>
#include <system/io/stream.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/WidgetAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class FieldHandler; } } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class XFA; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class CheckboxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ChoiceField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ChoiceOption; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ComboBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Form; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ListBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonOptionField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class SignatureField; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class PageCollection; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class FieldHandlerList; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// The <b>Aspose.Pdf.InteractiveFeatures.Forms</b> namespace has classes which describes forms (standard, static, dynamic) and various types of fields like text box, list box, radio button etc.
/// </summary>
class ASPOSE_PDF_SHARED_API NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "NamespaceDoc"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// Base class for acro form fields.
/// </summary>
class ASPOSE_PDF_SHARED_API Field : public Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation, public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>
{
    typedef Field ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation BaseType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::FieldHandler;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::XFA;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ButtonField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::CheckboxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ChoiceField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ChoiceOption;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ComboBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ListBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::SignatureField;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::ApsToPdfConverter;
    
public:

    System::String get_PartialName();
    void set_PartialName(System::String value);
    System::String get_AlternateName();
    void set_AlternateName(System::String value);
    System::String get_MappingName();
    void set_MappingName(System::String value);
    virtual System::String get_Value();
    virtual void set_Value(System::String value);
    bool get_IsSynchronized();
    int32_t get_Count() const;
    System::SharedPtr<System::Object> get_SyncRoot();
    bool get_IsGroup();
    int32_t get_AnnotationIndex();
    void set_AnnotationIndex(int32_t value);
    virtual int32_t get_PageIndex();
    virtual System::SharedPtr<Rectangle> get_Rect();
    virtual void set_Rect(System::SharedPtr<Rectangle> value);
    bool get_IsSharedField();
    void set_IsSharedField(bool value);
    static bool get_FitIntoRectangle();
    static void set_FitIntoRectangle(bool value);
    
    bool Recalculate();
    void CopyTo(System::ArrayPtr<System::SharedPtr<Field>> array, int32_t index);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> GetEnumerator();
    virtual void Flatten();
    
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> idx_get(System::String name);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> idx_get(int32_t index);
    
    virtual void SetPosition(System::SharedPtr<Point> point);
    
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
    
    virtual bool IsEqualTo(System::String value);
    virtual System::String GetConformXFAValue(System::String value);
    bool isCalculated();
    static System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> CreateField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field, System::SharedPtr<Document> document);
    
    Field(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    
    Field();
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::SharedPtr<Rectangle> rect);
    
    Field(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    Field(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    System::SharedPtr<Field> findField(System::String name);
    void addField(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> field);
    System::SharedPtr<Field> remove(System::String name);
    void setValue(System::String value);
    virtual void UpdateAppearances();
    System::String GetFieldReferencePath();
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate();
    void SetFieldImage(System::SharedPtr<System::IO::Stream> image);
    System::ArrayPtr<uint8_t> GetFieldImage();
    void AddNext(System::SharedPtr<Field> field);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> CreateKidAnnotation(System::SharedPtr<Rectangle> rect);
    virtual System::SharedPtr<Field> CreateCopy();
    virtual bool AppearanceSupported();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Field"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    static bool _fitIntoRectangle;
    System::SharedPtr<FieldHandlerList> cache;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> hash;
    bool isGroup;
    System::String functions;
    
    bool get_IsReadOnly();
    
    System::String CollectFormFields();
    System::String GetPreValue();
    static bool IsRadioButtonOption(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    static bool IsRadioButton(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> get(System::String name);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> get(int32_t index);
    static bool isWidget(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field);
    static bool IsGroupField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    System::SharedPtr<Rectangle> GetKidsRectangle(int32_t pageIndex);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> Copy(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> src);
    void Add(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> const &item);
    void Clear();
    bool Contains(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> const &item) const;
    void CopyTo(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>> array, int32_t arrayIndex);
    bool Remove(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> const &item);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_Field_h_

