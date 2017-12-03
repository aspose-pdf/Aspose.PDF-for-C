#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void ModifyAnnotationInPDF()
{
	// ExStart:1
	auto doc = MakeObject <Aspose::Pdf::Document>(L"..\\Data\\Annotations\\input.pdf");
	System::SharedPtr<Aspose::Pdf::Facades::PdfAnnotationEditor> editor =  System::MakeObject<Aspose::Pdf::Facades::PdfAnnotationEditor>();
	// Load an existing PDF document
	editor->BindPdf(doc);
	// Create an annotation object
	System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::TextAnnotation> annot = System::MakeObject<Aspose::Pdf::InteractiveFeatures::Annotations::TextAnnotation>(doc->get_Pages()->idx_get(1), MakeObject<Aspose::Pdf::Rectangle>(200, 400, 400, 600));
	// Set modified date
	annot->set_Modified(System::DateTime::get_Now());
	// Set Title
	annot->set_Title(L"NEW AUTHOR");
	// Set Content
	annot->set_Contents(L"NEW CONTENTS");
	// Set Color
	annot->set_Color(Color::get_Red());
	// Set Object
	annot->set_Subject(L"NEW SUBJECT");
	// Set open flag
	annot->set_Open(true);
	// Modify Annotation
	editor->ModifyAnnotations(1, 1, annot);
	// Save the document
	editor->Save(L"..\\Data\\Annotations\\output_out.pdf");
	// ExEnd:1
}