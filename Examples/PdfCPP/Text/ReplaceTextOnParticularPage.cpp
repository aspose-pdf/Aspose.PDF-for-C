#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void ReplaceTextOnParticularPage()
{
	// ExStart:ReplaceTextOnParticularPage	
	// Open input PDF
	auto ce = MakeObject<Facades::PdfContentEditor>();
	ce->BindPdf(u"..\\Data\\Text\\ReplaceText-Page.pdf");

	// Replace text on particular pages
	ce->ReplaceText(u"Hello", 1, u"World");

	ce->Save(u"..\\Data\\Text\\ReplaceTextOnParticularPage_out.pdf");
	// ExEnd:ReplaceTextOnParticularPage
	Console::WriteLine(u"Text replaced successfully on a particular page.");
}
