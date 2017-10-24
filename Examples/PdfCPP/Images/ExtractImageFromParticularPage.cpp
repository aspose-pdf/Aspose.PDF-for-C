#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;

void ExtractImageFromParticularPage()
{
	// ExStart:ExtractImageFromParticularPage	
	auto pdfExtractor = MakeObject<Facades::PdfExtractor>();
	pdfExtractor->BindPdf(L"..\\Data\\Images\\ExtractImages.pdf");

	// Set StartPage and EndPage properties to the page number to you want to extract images from
	pdfExtractor->set_StartPage(2);
	pdfExtractor->set_EndPage(2);
	// Extract images
	pdfExtractor->ExtractImage();
	while (pdfExtractor->HasNextImage())
	{		
		pdfExtractor->GetNextImage(L"..\\Data\\Images\\extractImage_out.jpg");
	}
	// ExEnd:ExtractImageFromParticularPage	
}