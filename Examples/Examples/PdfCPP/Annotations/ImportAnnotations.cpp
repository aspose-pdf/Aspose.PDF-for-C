#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void ImportAnnotationsInPDF()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfAnnotationEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfAnnotationEditor>();
	// Load Document where you want to import document
	editor->BindPdf(u"..\\Data\\Annotations\\ImportAnnotations.pdf");
	// Import annotations from XFDF file
	editor->ImportAnnotationFromXfdf(u"..\\Data\\Annotations\\annotations.xfdf");
	// Save the document
	editor->Save(u"..\\Data\\Annotations\\ImportAnnotations_out.pdf");
	//ExEnd:1
}