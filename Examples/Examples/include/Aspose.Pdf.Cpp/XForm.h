#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "ISupportsMemoryCleanup.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class LowLevelFontSubstitutor; } } } } } }
namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequenceXForm; } } }
namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequenceXObject; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Opi; } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class TransparentContentRemoval; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ImageCompressor; } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ResourceOptimizer; } } }
namespace Aspose { namespace Pdf { namespace Text { class TableAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextExtractionVerifier; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfPageEditor; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AppearanceDictionary; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FreeTextAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class StampAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class CheckboxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ComboBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonOptionField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RichTextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class SignatureField; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class PdfPageStamp; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { namespace Text { class TextAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { class XFormCollection; } }
namespace Aspose { namespace Pdf { class ContentsAppender; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Collections { class ResourcesTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v16_12; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class PdfFileStampTests; } } } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Matrix; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class Copier; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Filters { class IEncoder; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represent XForm
/// </summary>
class ASPOSE_PDF_SHARED_API XForm FINAL : public Aspose::Pdf::ISupportsMemoryCleanup
{
    typedef XForm ThisType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Interchange::ContentSequenceXForm;
    friend class Aspose::Pdf::Interchange::ContentSequenceXObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Opi;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Optimization::ImageCompressor;
    friend class Aspose::Pdf::Optimization::ResourceOptimizer;
    friend class Aspose::Pdf::Text::TableAbsorber;
    friend class Aspose::Pdf::Text::TextExtractionVerifier;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfPageEditor;
    friend class Aspose::Pdf::Annotations::AppearanceDictionary;
    friend class Aspose::Pdf::Annotations::AppearanceDictionary;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::StampAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Forms::RichTextBoxField;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::PdfPageStamp;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Text::TextAbsorber;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::ContentsAppender;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Tests::Collections::ResourcesTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::Facades::PdfFileStampTests;
    
public:

    /// <summary>
    /// Gets or sets form bounding box.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_BBox();
    /// <summary>
    /// Gets or sets form bounding box.
    /// </summary>
    void set_BBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets or sets form name. Form name is name which used to reference form in XObejct ductionary in page resources.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Gets or sets form name. Form name is name which used to reference form in XObejct ductionary in page resources.
    /// </summary>
    void set_Name(System::String value);
    /// <summary>
    /// Gets operators of the form.
    /// </summary>
    System::SharedPtr<OperatorCollection> get_Contents();
    /// <summary>
    /// Gets The Open Prepress Interface (OPI).
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Opi> get_Opi();
    /// <summary>
    /// Gets or sets matrix of the form.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix();
    /// <summary>
    /// Gets or sets matrix of the form.
    /// </summary>
    void set_Matrix(System::SharedPtr<Aspose::Pdf::Matrix> value);
    /// <summary>
    /// Gets Form XObject resources.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Resources> get_Resources();
    /// <summary>
    /// Gets or sets rectangel of the form.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    
    /// <summary>
    /// Creates XForm which duplicates contents of the page. 
    /// </summary>
    /// <param name="source">Source page</param>
    /// <param name="document">Document where new XForm will be added.</param>
    /// <returns>Newly created XForm.</returns>
    static System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Page> source, System::SharedPtr<Document> document);
    /// <summary>
    /// Clears cached data
    /// </summary>
    void FreeMemory();
    
protected:

    System::SharedPtr<Aspose::Pdf::Resources> resources;
    System::WeakPtr<Document> _document;
    System::SharedPtr<Engine::Data::IPdfObject> EngineObj;
    
    /// <summary>
    /// Constructor of XForm.Constructs XForm on base of Pdf.Kit.Engine PDf object.
    /// </summary>
    /// <param name="xform"></param>
    XForm(System::SharedPtr<Engine::Data::IPdfObject> xform);
    
    /// <summary>
    /// Creates new XForm in the document.
    /// </summary>
    /// <param name="trailerable">Describes ITrailerable object</param>
    /// <returns>Newly created XForm</returns>
    static System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    bool ContainsOwnResources();
    /// <summary>
    /// Change resources entry for x-form.
    /// </summary>
    /// <param name="resources"></param>
    void setResources(System::SharedPtr<Engine::Data::IPdfPrimitive> resources);
    static System::SharedPtr<XForm> CreateNewForm_OLD(System::SharedPtr<Page> source, System::SharedPtr<Engine::Data::ITrailerable> trailerable, System::SharedPtr<Copier> copier);
    static System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Page> source, System::SharedPtr<Engine::Data::ITrailerable> trailerable, System::SharedPtr<Copier> copier);
    static System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Page> source, System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    System::ArrayPtr<double> GetRectangle();
    /// <summary>
    /// Returns rectangle occupied by text of XForm. 
    /// </summary>
    /// <returns>X-Form object rectangle</returns>
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangleOfText();
    /// <summary>
    /// Frees up memory
    /// </summary>
    void Dispose();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> FindReferecnes(System::String name);
    void ReleaseResources();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<OperatorCollection> _contents;
    System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
    System::SharedPtr<Aspose::Pdf::Opi> _opi;
    
    /// <summary>
    /// Encodes stream data using specified encoder.
    /// (TODO: do we need to have IEncoder.Encode(Stream) method? So we dont need to allocate memory for all stream data...
    /// </summary>
    /// <param name="stream"></param>
    /// <param name="encoder"></param>
    /// <returns></returns>
    static System::SharedPtr<System::IO::Stream> EncodeStream(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Filters::IEncoder> encoder);
    /// <summary>
    /// Compares rectnangle with bounding rectangle and update bounding rectangle
    /// </summary>
    /// <param name="rect"></param>
    /// <param name="r"></param>
    /// <returns></returns>
    System::ArrayPtr<double> UpdateBoundRectangle(System::ArrayPtr<double> boundRect, System::SharedPtr<Aspose::Pdf::Rectangle> r);
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangleOfObject(System::String name, System::SharedPtr<Aspose::Pdf::Matrix> matrix);
    
};

} // namespace Pdf
} // namespace Aspose


