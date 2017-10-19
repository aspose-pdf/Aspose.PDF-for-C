#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void InsertEmptyPage()
{
	// ExStart:InsertEmptyPage	
	// Open document
	auto doc = MakeObject<Document>(L"..\\Data\\Pages\\InsertEmptyPage.pdf");
	// Insert a empty page in a PDF
	doc->get_Pages()->Insert(2);
	// Save output file
	doc->Save(L"..\\Data\\Pages\\InsertEmptyPage_out.pdf");
	// ExEnd:InsertEmptyPage	
}
