#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void ValidatePDFAStandard()
{
	// ExStart:ValidatePDFAStandard	
	// Open document
	auto doc = MakeObject<Document>(u"..\\Data\\Document\\ValidatePDFAStandard.pdf");
	
	// Validate PDF for PDF/A-1a
	doc->Validate(u"..\\Data\\Document\\validation-result-A1A.xml", PdfFormat::PDF_A_1A);
	// ExEnd:ValidatePDFAStandard		
}
