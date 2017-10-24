#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;

void ExtractImage()
{
	// ExStart:ExtractImage	
	auto pdfExtractor = MakeObject<Facades::PdfExtractor>();
	pdfExtractor->BindPdf(L"..\\Data\\Images\\ExtractImages.pdf");

	// Extract all the images
	pdfExtractor->ExtractImage();
	while (pdfExtractor->HasNextImage())
	{
		pdfExtractor->GetNextImage(L"..\\Data\\Images\\extractImage_out.jpg");
	}	
	// ExEnd:ExtractImage	
}