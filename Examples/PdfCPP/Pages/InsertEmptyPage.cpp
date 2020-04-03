#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void InsertEmptyPage()
{
	// ExStart:InsertEmptyPage	
	// Open document
	auto doc = MakeObject<Document>(u"..\\Data\\Pages\\InsertEmptyPage.pdf");
	// Insert a empty page in a PDF
	doc->get_Pages()->Insert(2);
	// Save output file
	doc->Save(u"..\\Data\\Pages\\InsertEmptyPage_out.pdf");
	// ExEnd:InsertEmptyPage	
}
