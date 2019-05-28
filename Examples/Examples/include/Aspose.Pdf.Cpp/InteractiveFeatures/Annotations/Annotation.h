#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <system/nullable.h>
#include <system/io/stream.h>
#include <system/globalization/culture_info.h>
#include <system/enum_helpers.h>
#include <system/date_time.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>
#include <drawing/imaging/image_format.h>
#include <drawing/color.h>

#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class AnnotationElement; } } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class HideAction; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PdfActionCollection; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FixedPrint; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DArtwork; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DViewArray; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class RedactionAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Redaction; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class RichMediaAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class RichMediaContent; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WatermarkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class AnnotationElement; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Measure; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Devices { class DocumentDevice; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfAnnotationEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { class FileSpecification; } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationCollection; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class MarkupAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Characteristics; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class CircleAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FreeTextAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class HighlightAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class InkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class LineAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class LinkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class MovieAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PolyAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PopupAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class SquareAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Forms { class XFA; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { namespace Forms { class CheckboxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ComboBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Form; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ListBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonOptionField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RichTextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class SignatureField; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class GenericAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class TextStyle; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Border; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class XfdfReader; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class XfdfWriter; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class PageCollection; } }
namespace Aspose { namespace Pdf { namespace Annotations { class ScreenAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextModel; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class RenditionAction; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileValidator; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class DomFormTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace InteractiveFeatures { namespace Annotations { class PopupAnnotationTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Annotations { class PdfActionTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Annotations { class PopupAnnotationTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v12_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v16_12; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_11; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_12; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v18_11; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_5; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationFlags; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AppearanceDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class TextAlignment; } } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { class Resources; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/*
    /// <summary>
    /// The <b>Aspose.Pdf.Annotations</b> namespace provides classes for almost all types of annotations document can have.
    /// </summary>
    [System.Runtime.CompilerServices.CompilerGeneratedAttribute()]
    class NamespaceDoc
    {
    }
     */
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
    friend class Aspose::Pdf::LogicalStructure::AnnotationElement;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Annotations::HideAction;
    friend class Aspose::Pdf::Annotations::PdfActionCollection;
    friend class Aspose::Pdf::Annotations::PdfActionCollection;
    friend class Aspose::Pdf::Annotations::FixedPrint;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::PDF3DArtwork;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    friend class Aspose::Pdf::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::Annotations::RichMediaAnnotation;
    friend class Aspose::Pdf::Annotations::RichMediaContent;
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::PageModel::AnnotationElement;
    friend class Aspose::Pdf::Annotations::Measure;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Devices::DocumentDevice;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfAnnotationEditor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::FileSpecification;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::MarkupAnnotation;
    friend class Aspose::Pdf::Annotations::Characteristics;
    friend class Aspose::Pdf::Annotations::CircleAnnotation;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::HighlightAnnotation;
    friend class Aspose::Pdf::Annotations::InkAnnotation;
    friend class Aspose::Pdf::Annotations::LineAnnotation;
    friend class Aspose::Pdf::Annotations::LinkAnnotation;
    friend class Aspose::Pdf::Annotations::MovieAnnotation;
    friend class Aspose::Pdf::Annotations::PolyAnnotation;
    friend class Aspose::Pdf::Annotations::PopupAnnotation;
    friend class Aspose::Pdf::Annotations::SquareAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::XFA;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Forms::RichTextBoxField;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Annotations::GenericAnnotation;
    friend class Aspose::Pdf::Annotations::TextStyle;
    friend class Aspose::Pdf::Annotations::Border;
    friend class Aspose::Pdf::Annotations::XfdfReader;
    friend class Aspose::Pdf::Annotations::XfdfWriter;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Annotations::ScreenAnnotation;
    friend class Aspose::Pdf::Forms::TextModel;
    friend class Aspose::Pdf::Annotations::RenditionAction;
    friend class Aspose::Pdf::Facades::PdfFileValidator;
    friend class Aspose::Pdf::Tests::Facades::DomFormTests;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::PopupAnnotationTests;
    friend class Aspose::Pdf::Tests::Annotations::PdfActionTests;
    friend class Aspose::Pdf::Tests::Annotations::PopupAnnotationTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v12_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    
protected:

    class AppearanceParameters : public System::Object
    {
        typedef AppearanceParameters ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String appearanceType;
        bool isChecked;
        bool isSupported;
        
        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="appearanceType">Type of appearance (Normal etc)</param>
        AppearanceParameters(System::String appearanceType);
        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="isChecked">true if checked (applicable for Checbox field)</param>
        AppearanceParameters(bool isChecked);
        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="appearanceType">Type of apperance</param>
        /// <param name="isChecked">true if checked (applicable for checkbox)</param>
        AppearanceParameters(System::String appearanceType, bool isChecked);
        
    };
    
    class ITitledAnnotation : public virtual System::Object
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

    /// <summary>
    /// If true, annotation appearance will be updated before converting PF document into image. This allows convert fields correctly but probably demand more time.
    /// </summary>
    static bool get_UpdateAppearanceOnConvert();
    /// <summary>
    /// If true, annotation appearance will be updated before converting PF document into image. This allows convert fields correctly but probably demand more time.
    /// </summary>
    static void set_UpdateAppearanceOnConvert(bool value);
    /// <summary>
    /// If this property set to true, fonts will be added to document as subsets. Default value is true.
    /// </summary>
    static bool get_UseFontSubset();
    /// <summary>
    /// If this property set to true, fonts will be added to document as subsets. Default value is true.
    /// </summary>
    static void set_UseFontSubset(bool value);
    /// <summary>
    /// Flags of the annotation.
    /// </summary>
    AnnotationFlags get_Flags();
    /// <summary>
    /// Flags of the annotation.
    /// </summary>
    void set_Flags(AnnotationFlags value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() = 0;
    /// <summary>
    /// Gets or sets width of the annotation.
    /// </summary>
    virtual double get_Width();
    /// <summary>
    /// Gets or sets width of the annotation.
    /// </summary>
    virtual void set_Width(double value);
    /// <summary>
    /// Gets list of annotatation actions.
    /// </summary>
    System::SharedPtr<PdfActionCollection> get_Actions();
    /// <summary>
    /// Gets or sets height of the annotation.
    /// </summary>
    virtual double get_Height();
    /// <summary>
    /// Gets or sets height of the annotation.
    /// </summary>
    virtual void set_Height(double value);
    /// <summary>
    /// Gets or sets annotation rectangle.
    /// </summary>
    virtual System::SharedPtr<Rectangle> get_Rect();
    /// <summary>
    /// Gets or sets annotation rectangle.
    /// </summary>
    virtual void set_Rect(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Gets or sets annotation text.
    /// </summary>
    System::String get_Contents();
    /// <summary>
    /// Gets or sets annotation text.
    /// </summary>
    void set_Contents(System::String value);
    /// <summary>
    /// Gets or sets annotation name on the page.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Gets or sets annotation name on the page.
    /// </summary>
    void set_Name(System::String value);
    /// <summary>
    /// Gets or sets date and time when annotation was recently modified.
    /// </summary>
    System::DateTime get_Modified();
    /// <summary>
    /// Gets or sets date and time when annotation was recently modified.
    /// </summary>
    void set_Modified(System::DateTime value);
    /// <summary>
    /// Gets or sets annotation color.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Color> get_Color();
    /// <summary>
    /// Gets or sets annotation color.
    /// </summary>
    void set_Color(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets or sets annotation border characteristics. <see cref="Border"/>
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Annotations::Border> get_Border();
    /// <summary>
    /// Gets or sets annotation border characteristics. <see cref="Border"/>
    /// </summary>
    void set_Border(System::SharedPtr<Aspose::Pdf::Annotations::Border> value);
    /// <summary>
    /// Gets or sets current annotation appearance state.
    /// </summary>
    virtual System::String get_ActiveState();
    /// <summary>
    /// Gets or sets current annotation appearance state.
    /// </summary>
    virtual void set_ActiveState(System::String value);
    /// <summary>
    /// Gets annotation characteristics.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Annotations::Characteristics> get_Characteristics();
    /// <summary>
    /// Gets appearance dictionary of annotation.
    /// </summary>
    System::SharedPtr<AppearanceDictionary> get_States();
    /// <summary>
    /// Annotation alignment. This property is obsolete. Use HorizontalAligment instead.
    /// </summary>
    TextAlignment get_Alignment();
    /// <summary>
    /// Annotation alignment. This property is obsolete. Use HorizontalAligment instead.
    /// </summary>
    void set_Alignment(TextAlignment value);
    /// <summary>
    /// Gets or sets text alignmennt for annotation.
    /// </summary>
    Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Gets or sets text alignmennt for annotation.
    /// </summary>
    void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets full qualified name of the annotation. 
    /// </summary>
    /// <returns></returns>
    System::String get_FullName();
    /// <summary>
    /// Gets appearance dictionary of the annotation.
    /// </summary>
    System::SharedPtr<AppearanceDictionary> get_Appearance();
    /// <summary>
    /// Gets index of page which contains annotation.
    /// </summary>
    virtual int32_t get_PageIndex();
    
    /// <summary>
    /// Returns rectangle of annotation taking into consideration page rotation.
    /// </summary>
    /// <param name="considerRotation">If true, page rotation is takein into consideration.</param>
    /// <returns></returns>
    System::SharedPtr<Rectangle> GetRectangle(bool considerRotation);
    /// <summary>
    /// Accepts visitor for annotation processing.
    /// </summary>
    /// <param name="visitor">AnnotationSelector object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor) = 0;
    /// <summary>
    /// Places annotation contents directly on the page,
    /// annotation object will be removed.
    /// </summary>
    virtual void Flatten();
    
protected:

    static System::String message1;
    System::SharedPtr<System::Globalization::CultureInfo> Culture;
    System::WeakPtr<Document> _document;
    bool _disableUpdateAppearance;
    bool _flatteningState;
    bool needBaseInitialization;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_EngineObj();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
    int32_t get_StructParent();
    void set_StructParent(int32_t value);
    /// <summary>
    /// Gets normal appearance.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<XForm> get_NormalAppearance();
    bool get_FlatteningState();
    void set_FlatteningState(bool value);
    /// <summary>
    /// Gets the page object with which this annotation is associated.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    /// <summary>
    /// Gets the page object with which this annotation is associated.
    /// </summary>
    void set_Page(System::SharedPtr<Aspose::Pdf::Page> value);
    /// <summary>
    /// Gets rotated rectangle.
    /// </summary>
    System::SharedPtr<Rectangle> get_RotatedRect();
    /// <summary>
    /// Returns internal rectnagle of annotation, i.e. rectangle recalculated according to RD entry of annotation
    /// </summary>
    virtual System::SharedPtr<Rectangle> get_InnerRect();
    /// <summary>
    /// Property for generator support. This property gets field width originally set by user (width of the "template").
    /// </summary>
    double get_TemplateWidth();
    /// <summary>
    /// Property for generator support. This property gets field height originally set by user (height of the "template").
    /// </summary>
    double get_TemplateHeight();
    
    virtual void DeleteAllChildElements();
    void Initialize(System::SharedPtr<Document> doc);
    void assertAppearance();
    /// <summary>
    /// Method which must be called after annotation import. 
    /// </summary>
    virtual void AfterImport();
    virtual System::Drawing::Color GetBackgroundColor();
    /// <summary>
    /// Create frame.
    /// </summary>
    /// <param name="parametes">Appearance parameters.</param>
    /// <param name="annotation">The annotation.</param>
    /// <returns>List of frame appearance commands.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateFrame(System::SharedPtr<Annotation::AppearanceParameters> parametes, System::SharedPtr<Annotation> annotation);
    /// <summary>
    /// Create program for displaying this annotation.  
    /// </summary>
    /// <param name="parameters">Appearance parameters for this field (normal/mouse moved appearance, pressed/unpressed for button etc)
    /// </param>
    /// <param name="annotation">Annotation of the appearance</param>
    /// <returns>List of appearance program.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    virtual void ClearAppearance(System::SharedPtr<OperatorCollection> appearance);
    virtual System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation);
    /// <summary>
    /// This method must be overriden to return true in classes where apperance generation is supported. 
    /// </summary>
    /// <returns></returns>
    virtual bool AppearanceSupported();
    /// <summary>
    /// Updated appearance dictionary of the field.
    /// </summary>
    virtual void UpdateAppearance(System::SharedPtr<Annotation> annotation);
    virtual void UpdateAppearances();
    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    /// <summary>
    /// When overridden in a derived class, exports annotation attributes into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    virtual void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    /// <summary>
    /// When overridden in a derived class, exports annotation elements into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    virtual void WriteXfdfElements(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    /// <summary>
    /// When overridden in a derived class, import annotation attributes from XFDF.
    /// </summary>
    /// <param name="reader">Reader of XFDF file.</param>
    virtual void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    /// <summary>
    /// When overridden in a derived class, import annotation elements from XFDF.
    /// </summary>
    /// <param name="table">Hashtable with information parsed from the XFDF file.</param>
    virtual void ReadXfdfElements(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> table);
    
    Annotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor to use in Generator.
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    Annotation(System::SharedPtr<Document> document);
    Annotation();
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initialize the annotation.
    /// </summary>
    /// <param name="page">The Aspose.Pdf.Page object.</param>
    /// <param name="rect">The rectangle of the annotation.</param>
    void Initialize(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    virtual void AttachToPage(System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Create annotation data structure. 
    /// </summary>
    /// <param name="doc">Document where annotation is created.</param>
    /// <param name="rect">Annotation rectangle.</param>
    void Initialize(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    Annotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Constructor for Annotation. 
    /// </summary>
    /// <param name="doc">Document where annotation is added.</param>
    /// <param name="rect">Annotation rectangle.</param>
    Annotation(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// This method should be called if annotation requires some additional actions when generator updates its rectangle. 
    /// </summary>
    /// <param name="rect"></param>
    virtual void GeneratorUpdateRectangle(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Returns name of "checked" state according to existing state names. 
    /// </summary>
    /// <returns></returns>
    System::String GetCheckedStateName();
    /// <summary>
    /// Initializes annotation from PDF object which describes the annotation. 
    /// </summary>
    /// <param name="annotEngineObj">PDF obejct describing annotation</param>
    /// <param name="page">TODO:</param>
    /// <returns>Created annotation object of appropriate type</returns>
    static System::SharedPtr<Annotation> CreateAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotEngineObj, System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Initializes this object with internal engine annotation object.
    /// </summary>
    /// <param name="annotEngineObj">Internal engine annotEngineObj object.</param>
    void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotEngineObj);
    virtual void InternalFlatten(System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual System::String InternalFlatten2(System::SharedPtr<Resources> resources);
    virtual System::String InternalFlatten3(System::SharedPtr<Resources> resources);
    static bool IsEmptyAppearance(System::SharedPtr<System::IO::Stream> s);
    static System::String InternalFlatten4(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> annotation, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> resources);
    /// <summary>
    /// true if the annotation must be background. 
    /// </summary>
    /// <returns></returns>
    virtual bool IsBackground();
    int32_t GetPageIndex(System::SharedPtr<Annotation> annotation);
    System::SharedPtr<System::IO::Stream> ToImage(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Rectangle> _rect;
    System::String _contents;
    System::SharedPtr<Aspose::Pdf::Color> _color;
    System::SharedPtr<Aspose::Pdf::Annotations::Border> _border;
    System::SharedPtr<Aspose::Pdf::Annotations::Characteristics> _characteristics;
    System::DateTime _modified;
    AnnotationFlags _flags;
    System::WeakPtr<Aspose::Pdf::Page> _page;
    System::String _name;
    double _templateWidth;
    double _templateHeight;
    
    static System::Nullable<bool>& _useFontSubset();
    static bool& _updateAppearanceOnConvert();
    
    System::SharedPtr<AppearanceDictionary> _appearance;
    int32_t _structParent;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> _engineObj;
    System::SharedPtr<PdfActionCollection> _actions;
    System::SharedPtr<AppearanceDictionary> _states;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> CreateExtGStateWithOpacity(double opacity);
    void SetColor(System::SharedPtr<Aspose::Pdf::Color> value);
    static void SetColor(System::SharedPtr<Annotation> annotation, System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Moves rectangle to origin.
    /// </summary>
    /// <param name="rect"></param>
    /// <returns></returns>
    System::SharedPtr<Rectangle> ToOrigin(System::SharedPtr<Rectangle> rect);
    
};

/// <summary>
/// The class describes general annotation.
/// </summary>
class GenericAnnotation : public Aspose::Pdf::Annotations::Annotation
{
    typedef GenericAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    GenericAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
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
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    
public:

    /// <summary>
    /// Name of the font.
    /// </summary>
    System::String get_FontName();
    /// <summary>
    /// Name of the font.
    /// </summary>
    void set_FontName(System::String value);
    /// <summary>
    /// Fonst size.
    /// </summary>
    double get_FontSize();
    /// <summary>
    /// Fonst size.
    /// </summary>
    void set_FontSize(double value);
    /// <summary>
    /// Gets or sets horizontal alignment of the text. 
    /// </summary>
    TextAlignment get_Alignment();
    /// <summary>
    /// Gets or sets horizontal alignment of the text. 
    /// </summary>
    void set_Alignment(TextAlignment value);
    /// <summary>
    /// Text alignment. Valid values are: Left, Center, Rigth.
    /// </summary>
    Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Text alignment. Valid values are: Left, Center, Rigth.
    /// </summary>
    void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Color of the text.
    /// </summary>
    System::Drawing::Color get_Color();
    /// <summary>
    /// Color of the text.
    /// </summary>
    void set_Color(System::Drawing::Color value);
    
    /// <summary>
    /// String representation of TextStyle.
    /// </summary>
    /// <returns>String representation.</returns>
    virtual System::String ToString();
    
protected:

    TextStyle(System::SharedPtr<FreeTextAnnotation> annotation);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
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
} // namespace Pdf
} // namespace Aspose


