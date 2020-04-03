#include "..\Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void ExtractAnnotationsInPDF()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfAnnotationEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfAnnotationEditor>();
	// Load Document where you want to import document
	editor->BindPdf(u"..\\Data\\Annotations\\ExtractAnnotations.pdf");
	System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotTypes = System::MakeArray<Aspose::Pdf::Annotations::AnnotationType>({ Aspose::Pdf::Annotations::AnnotationType::Text, Aspose::Pdf::Annotations::AnnotationType::Highlight }); 
	// Extract Annotations
	System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>> annotList = editor->ExtractAnnotations(1, 2, annotTypes);
	//ExEnd:1
}