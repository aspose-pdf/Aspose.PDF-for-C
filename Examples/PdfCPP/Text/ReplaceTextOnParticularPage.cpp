#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void ReplaceTextOnParticularPage()
{
	// ExStart:ReplaceTextOnParticularPage	
	// Open input PDF
	auto ce = MakeObject<Facades::PdfContentEditor>();
	ce->BindPdf(L"..\\Data\\Text\\ReplaceText-Page.pdf");

	// Replace text on particular pages
	ce->ReplaceText(L"Hello", 1, L"World");

	ce->Save(L"..\\Data\\Text\\ReplaceTextOnParticularPage_out.pdf");
	// ExEnd:ReplaceTextOnParticularPage
	Console::WriteLine(L"Text replaced successfully on a particular page.");
}
