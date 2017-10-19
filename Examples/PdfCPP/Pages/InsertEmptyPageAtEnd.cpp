#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void InsertEmptyPageAtEnd()
{
	// ExStart:InsertEmptyPageAtEnd	
	// Open document
	auto doc = MakeObject<Document>(L"..\\Data\\Pages\\InsertEmptyPageAtEnd.pdf");
	// Insert an empty page at the end of PDF file
	doc->get_Pages()->Add();
	// Save output file
	doc->Save(L"..\\Data\\Pages\\InsertEmptyPageAtEnd_out.pdf");
	// ExEnd:InsertEmptyPageAtEnd	
}
