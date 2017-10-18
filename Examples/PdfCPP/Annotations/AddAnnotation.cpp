#include "Aspose.Pdf.h"

using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void AddAnnotation()
{
	// ExStart:AddAnnotation	
	auto editor = MakeObject<Facades::PdfContentEditor>();
	editor->BindPdf(L"..\\Data\\input.pdf");

	editor->CreateText(System::Drawing::Rectangle(400, 700, 100, 100), L"Title", L"Welcome to Aspose", true, L"Comment", 1);	
	editor->Save(L"..\\Data\\input_out.pdf");
	// ExEnd:AddAnnotation
	Console::WriteLine(L"Comments(annotations) added successfully to a document.");
}