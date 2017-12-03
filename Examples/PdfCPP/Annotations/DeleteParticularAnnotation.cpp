#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void DeleteParticularAnnotationsInPDF()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfAnnotationEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfAnnotationEditor>();
	// Load an existing PDF document
	editor->BindPdf(L"..\\Data\\Annotations\\DeleteAllAnnotations.pdf");
	// Delete All Text Annotations
	editor->DeleteAnnotations(L"Text");
	// Save the document
	editor->Save(L"..\\Data\\Annotations\\DeleteAllAnnotations_out.pdf");
	// ExEnd:1
}