#include "..\Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void DeleteAnnotationsInPDF()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfAnnotationEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfAnnotationEditor>();
	// Load an existing PDF document
	editor->BindPdf(u"..\\Data\\Annotations\\DeleteAllAnnotations.pdf");
	// Delete All Annotations
	editor->DeleteAnnotations();
	// Save the document
	editor->Save(u"..\\Data\\Annotations\\DeleteAllAnnotations_out.pdf");
	// ExEnd:1
}