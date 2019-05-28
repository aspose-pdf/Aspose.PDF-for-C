#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void UpdateDimensions()
{
	// ExStart:UpdateDimensions	
	// Open document
	auto doc = MakeObject<Document>(u"..\\Data\\Pages\\UpdateDimensions.pdf");
	// Set the page size as A4 (11.7 x 8.3 in) and in Aspose.Pdf, 1 inch = 72 points, so A4 dimensions in points will be (842.4, 597.6)
	doc->get_Pages()->idx_get(1)->SetPageSize(842.4, 597.6);
	// Save the updated document
	doc->Save(u"..\\Data\\Pages\\UpdateDimensions_out.pdf");
	// ExEnd:UpdateDimensions	
}
