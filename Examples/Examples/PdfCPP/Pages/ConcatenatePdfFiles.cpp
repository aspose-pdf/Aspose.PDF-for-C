#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void ConcatenatePdfFiles()
{
	// ExStart:ConcatenatePdfFiles	
	// Open first document
	auto doc1 = MakeObject<Document>(u"..\\Data\\Pages\\Concat1.pdf");
	// Open second document
	auto doc2 = MakeObject<Document>(u"..\\Data\\Pages\\Concat2.pdf");
	// Add pages of second document to the first
	doc1->get_Pages()->Add(doc2->get_Pages());
	// Save concatenated output file
	doc1->Save(u"..\\Data\\Pages\\ConcatenatePdfFiles_out.pdf");
	// ExEnd:ConcatenatePdfFiles	
}
