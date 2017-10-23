#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void ValidatePDFABStandard()
{
	// ExStart:ValidatePDFABStandard	
	// Open document
	auto doc = MakeObject<Document>(L"..\\Data\\Document\\ValidatePDFAStandard.pdf");

	// Validate PDF for PDF/A-1a
	doc->Validate(L"..\\Data\\Document\\validation-result-A1A.xml", PdfFormat::PDF_A_1B);
	// ExEnd:ValidatePDFABStandard		
}
