#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void ExtractAnnotationsInPDF()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfAnnotationEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfAnnotationEditor>();
	// Load Document where you want to import document
	editor->BindPdf(L"..\\Data\\Annotations\\ExtractAnnotations.pdf");
	System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType> annotTypes = System::MakeArray<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType>({ Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType::Text, Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType::Highlight }); 
	// Extract Annotations
	System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation>>> annotList = editor->ExtractAnnotations(1, 2, annotTypes);
	//ExEnd:1
}