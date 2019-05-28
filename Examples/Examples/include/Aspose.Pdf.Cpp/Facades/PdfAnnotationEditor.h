#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary> 
/// Represents a class for work with PDF document annotations (comments).
/// </summary>
class ASPOSE_PDF_SHARED_API PdfAnnotationEditor FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfAnnotationEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Imports all annotations from XFDF file.
    /// </summary>
    /// <param name="xfdfFile">The input XFDF file.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.ImportAnnotationFromXfdf("annots.xfdf");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void ImportAnnotationFromXfdf(System::String xfdfFile);
    /// <summary>
    /// Imports the specified annotations from XFDF file.
    /// </summary>
    /// <param name="xfdfFile">The input XFDF file.</param>
    /// <param name="annotType">The annotations array to be imported.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// AnnotationType[] annotTypes = {AnnotationType.Highlight, AnnotationType.Text};
    /// editor.ImportAnnotationFromXfdf("annots.xfdf", annotTypes);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void ImportAnnotationFromXfdf(System::String xfdfFile, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotType);
    /// <summary>
    /// Imports the specified annotations from XFDF data stream.
    /// </summary>
    /// <param name="xfdfStream">The input XFDF data stream.</param>
    /// <param name="annotType">The array of annotation types to be imported.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// AnnotationType[] annotTypes ={ AnnotationType.Highlight, AnnotationType.Line };
    /// editor.ImportAnnotationFromXfdf(File.OpenRead("annots.xfdf"), annotTypes);
    /// editor.Save("example_out.pdf");
    /// </code> 
    /// </example>
    void ImportAnnotationFromXfdf(System::SharedPtr<System::IO::Stream> xfdfStream, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotType);
    /// <summary>
    /// Imports all annotations from XFDF data stream.
    /// </summary>
    /// <param name="xfdfStream">The input XFDF data stream.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.ImportAnnotationFromXfdf(File.OpenRead("annots.xfdf"));
    /// editor.Save("example_out.pdf");
    /// </code> 
    /// </example>
    void ImportAnnotationFromXfdf(System::SharedPtr<System::IO::Stream> xfdfStream);
    /// <summary>
    /// Imports the specified annotations into document from array of another PDF documents.
    /// </summary>
    /// <param name="annotFile">The array of paths of PDF documents that contain source annotations.</param>
    /// <param name="annotType">The array of annotation types to be imported.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// string[] paths = new string[2] {"with_annots1.pdf", "with_annots2.pdf"};
    /// AnnotationType[] annotTypes = {AnnotationType.Highlight, AnnotationType.Text};
    /// editor.ImportAnnotations(paths, annotTypes);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void ImportAnnotations(System::ArrayPtr<System::String> annotFile, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotType);
    /// <summary>
    /// Imports annotations into document from array of another PDF documents.
    /// </summary>
    /// <param name="annotFile">The array of paths of PDF documents that contain source annotations.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// string[] paths = new string[2] {"with_annots1.pdf", "with_annots2.pdf"};
    /// editor.ImportAnnotations(paths);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void ImportAnnotations(System::ArrayPtr<System::String> annotFile);
    /// <summary>
    /// Imports the specified annotations into document from array of another PDF document streams.
    /// </summary>
    /// <param name="annotFileStream">The array of streams of PDF documents that contain source annotations.</param>
    /// <param name="annotType">The annotation types to be imported.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// Stream[] streams = new FileStream[2];
    /// stream[0]= File.OpenRead("with_annots1.pdf");
    /// stream[1]= File.OpenRead("with_annots2.pdf");
    /// AnnotationType[] annotTypes = {AnnotationType.Highlight, AnnotationType.Text};
    /// editor.ImportAnnotations(streams, annotTypes);
    /// editor.Save("example_out.pdf");
    /// stream[0].Close();
    /// stream[1].Close();
    /// </code>
    /// </example> 
    void ImportAnnotations(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> annotFileStream, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotType);
    /// <summary>
    /// Imports annotations into document from array of another PDF document streams.
    /// </summary>
    /// <param name="annotFileStream">The array of streams of PDF documents that contain source annotations.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// Stream[] streams = new FileStream[2];
    /// streams[0]= File.OpenRead("with_annots1.pdf");
    /// streams[1]= File.OpenRead("with_annots2.pdf");
    /// editor.ImportAnnotations(streams);
    /// editor.Save("example_out.pdf");
    /// streams[0].Close();
    /// streams[1].Close();
    /// </code>
    /// </example> 
    void ImportAnnotations(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> annotFileStream);
    /// <summary>
    /// Modifies the author of annotations on the specified page range.
    /// </summary>
    /// <param name="start">The start page number.</param>
    /// <param name="end">The end page number.</param>
    /// <param name="srcAuthor">The author that must be modified.</param>
    /// <param name="desAuthor">The new author.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.ModifyAnnotationsAuthor(1, 2, "PREV AUTHOR", "NEW AUTHOR");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void ModifyAnnotationsAuthor(int32_t start, int32_t end, System::String srcAuthor, System::String desAuthor);
    /// <summary>
    /// Flattens all annotations in the document.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.FlatteningAnnotations();
    /// editor.Save(example_out.pdf");
    /// </code>
    /// </example>
    void FlatteningAnnotations();
    /// <summary>
    /// Flattens the annotations of the specified types.
    /// </summary>
    /// <param name="start">The start page.</param>
    /// <param name="end">Then end page.</param>
    /// <param name="annotType">The annotation types should be flattened.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// AnnotationType[] annotTypes ={AnnotationType.Line, AnnotationType.FreeText};
    /// editor.FlatteningAnnotations(1, 2, annotTypes);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void FlatteningAnnotations(int32_t start, int32_t end, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotType);
    /// <summary>
    /// Deletes all annotations in the document.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.DeleteAnnotations();
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void DeleteAnnotations();
    /// <summary>
    /// Deletes all annotations of the specified type in the document.
    /// </summary>
    /// <param name="annotType">The type of annotation will be deleted.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.DeleteAnnotations("Text");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void DeleteAnnotations(System::String annotType);
    /// <summary>
    /// Deletes the annotation with specified annotation name.
    /// </summary>
    /// <param name="annotName">The annotation name</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.DeleteAnnotation("4cfa69cd-9bff-49e0-9005-e22a77cebf38");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>  
    void DeleteAnnotation(System::String annotName);
    /// <summary>
    /// Exports the content of the specified annotation types into XFDF
    /// </summary>
    /// <param name="xmlOutputStream">The output XFDF stream.</param>
    /// <param name="start">Start page from which the annotations of the document will be exported.</param>
    /// <param name="end">End page to which the annotations of the document will be exported.</param>
    /// <param name="annotTypes">The array of annotation types need be exported.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// string[] annotTypes = new string[] {"Text", "Highlight"};
    /// using (Stream stream = File.Create("example.xfdf"))
    /// {
    ///     editor.ExportAnnotationsXfdf(stream, 1, 2, annotTypes);
    /// }
    /// </code>
    /// </example>
    void ExportAnnotationsXfdf(System::SharedPtr<System::IO::Stream> xmlOutputStream, int32_t start, int32_t end, System::ArrayPtr<System::String> annotTypes);
    /// <summary>
    /// Exports the content of the specified annotation types into XFDF
    /// </summary>
    /// <param name="xmlOutputStream">The output XFDF stream.</param>
    /// <param name="start">Start page from which the annotations of the document will be exported.</param>
    /// <param name="end">End page to which the annotations of the document will be exported.</param>
    /// <param name="annotTypes">The array of annotation types need be exported.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// AnnotationType[] annotTypes = new AnnotationType[] {AnnotationType.Text, AnnotationType.Highlight};
    /// using (Stream stream = File.Create("example.xfdf"))
    /// {
    ///     editor.ExportAnnotationsXfdf(stream, 1, 2, annotTypes);
    /// }
    /// </code>
    /// </example>
    void ExportAnnotationsXfdf(System::SharedPtr<System::IO::Stream> xmlOutputStream, int32_t start, int32_t end, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotTypes);
    /// <summary>
    /// Gets the list of annotations of the specified types.
    /// </summary>
    /// <param name="start">Start page from which the annotations will be selected.</param>
    /// <param name="end">End page to which the annotations will be selected.</param>
    /// <param name="annotTypes">The array of needed annotation types.</param>
    /// <returns>Annotations list.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// string[] annotTypes = new string[] {"Text", "Highlight"};
    /// IList annotList = editor.ExtractAnnotations(1, 2 , annotTypes);
    /// </code>
    /// </example>
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>> ExtractAnnotations(int32_t start, int32_t end, System::ArrayPtr<System::String> annotTypes);
    /// <summary>
    /// Gets the list of annotations of the specified types.
    /// </summary>
    /// <param name="start">Start page from which the annotations will be selected.</param>
    /// <param name="end">End page to which the annotations will be selected.</param>
    /// <param name="annotTypes">The array of needed annotation types.</param>
    /// <returns>Annotations list.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// AnnotationType[] annotTypes = new AnnotationType[] {AnnotationType.Text, AnnotationType.Highlight};
    /// IList annotList = editor.ExtractAnnotations(1, 2 , annotTypes);
    /// </code>
    /// </example>
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>> ExtractAnnotations(int32_t start, int32_t end, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotTypes);
    
    /// <summary>
    /// Initializes new <see cref="PdfAnnotationEditor"/> object.
    /// </summary>
    PdfAnnotationEditor();
    /// <summary>
    /// Initializes new <see cref="PdfAnnotationEditor"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    PdfAnnotationEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Modifies the annotations of the specifed type on the specified page range.
    /// It supports to modify next annotation properties: Modified, Title, Contents, Color, Subject and Open.
    /// </summary>
    /// <param name="start">The start page number.</param>
    /// <param name="end">The end page number.</param>
    /// <param name="annotation">The annotation object contains new properties.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfAnnotationEditor editor = new PdfAnnotationEditor();
    /// editor.BindPdf("example.pdf");
    /// TextAnnotation annot = new TextAnnotation();
    /// annot.Modified = DateTime.Now;
    /// annot.Title = "NEW AUTHOR";
    /// annot.Contents = "NEW CONTENTS";
    /// annot.Color = Color.Red;
    /// annot.Subject = "NEW SUBJECT";
    /// annot.Open = true;
    /// editor.ModifyAnnotations(1, 2, annot);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void ModifyAnnotations(int32_t start, int32_t end, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    /// <summary>
    /// Redacts area on the specified page. All contents is removed. 
    /// </summary>
    /// <param name="pageIndex">Index of the page.</param>
    /// <param name="rect">Area rectangle.</param>
    /// <param name="color">Filling color.</param>
    void RedactArea(int32_t pageIndex, System::SharedPtr<Rectangle> rect, System::Drawing::Color color);
    
private:

    System::ArrayPtr<int32_t> GetAnnotCounts();
    void Decimate(System::ArrayPtr<int32_t> prevAnnotCounts, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotTypes);
    void Decimate(System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotTypes);
    static System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> ConvertAnnotTypeArray(System::ArrayPtr<System::String> annotTypes);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


