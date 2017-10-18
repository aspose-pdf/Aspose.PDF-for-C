#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_Annotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_Annotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <system/string.h>
#include <system/io/stream.h>
#include <system/globalization/culture_info.h>
#include <system/enum_helpers.h>
#include <system/date_time.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>
#include <drawing/color.h>
#include <cstdint>

#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfFileValidator; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Redaction; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class RedactionAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class FieldHandler; } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class AnnotationElement; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Measure; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { class FileSpecification; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationCollection; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class MarkupAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Characteristics; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class CircleAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FreeTextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class HighlightAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LineAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LinkAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class MovieAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class PopupAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class SquareAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class XFA; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class CheckboxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ComboBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Form; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ListBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RichTextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class GenericAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class TextStyle; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Border; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class XfdfReader; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class XfdfWriter; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class PageCollection; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class ScreenAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextModel; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class RenditionAction; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class DomFormTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace InteractiveFeatures { namespace Annotations { class PopupAnnotationTests; } } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationFlags; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AppearanceDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class TextAlignment; } } } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { class Resources; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// The <b>Aspose.Pdf.InteractiveFeatures.Annotations</b> namespace provides classes for almost all types of annotations document can have.
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
/// Class representing annotation object.
/// </summary>
class ASPOSE_PDF_SHARED_API Annotation : public Aspose::Pdf::BaseParagraph
{
    typedef Annotation ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::PdfFileValidator;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Redaction;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::FieldHandler;
    friend class Aspose::Pdf::PageModel::AnnotationElement;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Measure;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::FileSpecification;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Characteristics;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::CircleAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::HighlightAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::LineAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::LinkAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::MovieAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::PopupAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::SquareAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::XFA;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::CheckboxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ComboBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ListBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RichTextBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::GenericAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::TextStyle;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Border;
    friend class Aspose::Pdf::InteractiveFeatures::XfdfReader;
    friend class Aspose::Pdf::InteractiveFeatures::XfdfWriter;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::ScreenAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextModel;
    friend class Aspose::Pdf::InteractiveFeatures::RenditionAction;
    friend class Aspose::Pdf::Tests::Facades::DomFormTests;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::PopupAnnotationTests;
    
public:

    class ASPOSE_PDF_SHARED_API AppearanceParameters : public System::Object
    {
        typedef AppearanceParameters ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String appearanceType;
        bool isChecked;
        bool isSupported;
        
        AppearanceParameters(System::String appearanceType);
        AppearanceParameters(bool isChecked);
        AppearanceParameters(System::String appearanceType, bool isChecked);
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "AppearanceParameters"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    class ASPOSE_PDF_SHARED_API ITitledAnnotation : public virtual System::Object
    {
        typedef ITitledAnnotation ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        virtual System::String get_Title() = 0;
        virtual void set_Title(System::String value) = 0;
        
    };
    
    
public:

    static bool get_UseFontSubset();
    static void set_UseFontSubset(bool value);
    AnnotationFlags get_Flags();
    void set_Flags(AnnotationFlags value);
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType() = 0;
    virtual double get_Width();
    virtual void set_Width(double value);
    virtual double get_Height();
    virtual void set_Height(double value);
    virtual System::SharedPtr<Rectangle> get_Rect();
    virtual void set_Rect(System::SharedPtr<Rectangle> value);
    System::String get_Contents();
    void set_Contents(System::String value);
    System::String get_Name();
    void set_Name(System::String value);
    System::DateTime get_Modified();
    void set_Modified(System::DateTime value);
    System::SharedPtr<Aspose::Pdf::Color> get_Color();
    void set_Color(System::SharedPtr<Aspose::Pdf::Color> value);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Border> get_Border();
    void set_Border(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Border> value);
    virtual System::String get_ActiveState();
    virtual void set_ActiveState(System::String value);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Characteristics> get_Characteristics();
    System::SharedPtr<AppearanceDictionary> get_States();
    TextAlignment get_Alignment();
    void set_Alignment(TextAlignment value);
    Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    System::String get_FullName();
    System::SharedPtr<AppearanceDictionary> get_Appearance();
    virtual int32_t get_PageIndex();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor) = 0;
    virtual void Flatten();
    
protected:

    static System::String message1;
    System::SharedPtr<System::Globalization::CultureInfo> Culture;
    System::WeakPtr<Document> _document;
    bool _disableUpdateAppearance;
    bool _flatteningState;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_EngineObj();
    void set_EngineObj(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
    System::SharedPtr<XForm> get_NormalAppearance();
    bool get_FlatteningState();
    void set_FlatteningState(bool value);
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    void set_Page(System::SharedPtr<Aspose::Pdf::Page> value);
    System::SharedPtr<Rectangle> get_RotatedRect();
    virtual System::SharedPtr<Rectangle> get_InnerRect();
    double get_TemplateWidth();
    double get_TemplateHeight();
    
    void Initialize(System::SharedPtr<Document> doc);
    void assertAppearance();
    virtual void AfterImport();
    virtual System::Drawing::Color GetBackgroundColor();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateFrame(System::SharedPtr<Annotation::AppearanceParameters> parametes, System::SharedPtr<Annotation> annotation);
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    virtual void ClearAppearance(System::SharedPtr<OperatorCollection> appearance);
    virtual System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation);
    virtual bool AppearanceSupported();
    virtual void UpdateAppearance(System::SharedPtr<Annotation> annotation);
    virtual void UpdateAppearances();
    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void WriteXfdfElements(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    virtual void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    virtual void ReadXfdfElements(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> table);
    
    Annotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    Annotation();
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::SharedPtr<Rectangle> rect);
    void Initialize(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    virtual void AttachToPage(System::SharedPtr<Aspose::Pdf::Page> page);
    void Initialize(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    Annotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    Annotation(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    System::SharedPtr<Rectangle> GetRectangle(bool considerRotation);
    System::String GetCheckedStateName();
    static System::SharedPtr<Annotation> CreateAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotEngineObj, System::SharedPtr<Aspose::Pdf::Page> page);
    void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotEngineObj);
    virtual void InternalFlatten(System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual System::String InternalFlatten2(System::SharedPtr<Resources> resources);
    virtual System::String InternalFlatten3(System::SharedPtr<Resources> resources);
    static bool IsEmptyAppearance(System::SharedPtr<System::IO::Stream> s);
    static System::String InternalFlatten4(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> annotation, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> resources);
    virtual bool IsBackground();
    int32_t GetPageIndex(System::SharedPtr<Annotation> annotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Annotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Rectangle> _rect;
    System::String _contents;
    System::SharedPtr<Aspose::Pdf::Color> _color;
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Border> _border;
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Characteristics> _characteristics;
    System::DateTime _modified;
    AnnotationFlags _flags;
    System::WeakPtr<Aspose::Pdf::Page> _page;
    System::String _name;
    double _templateWidth;
    double _templateHeight;
    static bool _useFontSubset;
    System::SharedPtr<AppearanceDictionary> _appearance;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> _engineObj;
    System::SharedPtr<AppearanceDictionary> _states;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> CreateExtGStateWithOpacity(double opacity);
    void SetColor(System::SharedPtr<Aspose::Pdf::Color> value);
    static void SetColor(System::SharedPtr<Annotation> annotation, System::SharedPtr<Aspose::Pdf::Color> value);
    System::SharedPtr<Rectangle> ToOrigin(System::SharedPtr<Rectangle> rect);
    
};

/// <summary>
/// The class describes general annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API GenericAnnotation : public Aspose::Pdf::InteractiveFeatures::Annotations::Annotation
{
    typedef GenericAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    GenericAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "GenericAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// Class represents style of text in annotation 
/// </summary>
class ASPOSE_PDF_SHARED_API TextStyle : public System::Object
{
    typedef TextStyle ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FreeTextAnnotation;
    
public:

    System::String get_FontName();
    void set_FontName(System::String value);
    double get_FontSize();
    void set_FontSize(double value);
    TextAlignment get_Alignment();
    void set_Alignment(TextAlignment value);
    Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    System::Drawing::Color get_Color();
    void set_Color(System::Drawing::Color value);
    
    virtual System::String ToString();
    
protected:

    TextStyle(System::SharedPtr<FreeTextAnnotation> annotation);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextStyle"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::WeakPtr<Annotation> _annotation;
    System::String _fontName;
    double _fontSize;
    Aspose::Pdf::HorizontalAlignment _alignment;
    System::Drawing::Color _color;
    bool _isFontNameSpecified;
    bool _isFontSizeSpecified;
    bool _isColorSpecified;
    bool _isAlignmentSpecified;
    
    void UpdateAnnotation();
    static Aspose::Pdf::HorizontalAlignment ConvertAlign(System::String alignment);
    static System::String ConvertAlign(Aspose::Pdf::HorizontalAlignment alignment);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_Annotation_h_

