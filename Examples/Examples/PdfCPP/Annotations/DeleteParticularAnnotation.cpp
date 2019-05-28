#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void DeleteParticularAnnotationsInPDF()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfAnnotationEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfAnnotationEditor>();
	// Load an existing PDF document
	editor->BindPdf(u"..\\Data\\Annotations\\DeleteAllAnnotations.pdf");
	// Delete All Text Annotations
	editor->DeleteAnnotations(u"Text");
	// Save the document
	editor->Save(u"..\\Data\\Annotations\\DeleteAllAnnotations_out.pdf");
	// ExEnd:1
}