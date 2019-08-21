#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void AddAnnotation()
{
	// ExStart:AddAnnotation	
	auto editor = MakeObject<Facades::PdfContentEditor>();
	editor->BindPdf(u"..\\Data\\Annotations\\input.pdf");

	editor->CreateText(System::Drawing::Rectangle(400, 700, 100, 100), u"Title", u"Welcome to Aspose", true, u"Comment", 1);	
	editor->Save(u"..\\Data\\Annotations\\input_out.pdf");
	// ExEnd:AddAnnotation
	Console::WriteLine(u"Comments(annotations) added successfully to a document.");
}