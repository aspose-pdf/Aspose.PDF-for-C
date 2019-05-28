#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void OptimizeDoc()
{
	// ExStart:OptimizeDoc	
	// Open document
	auto doc = MakeObject<Document>(u"..\\Data\\Document\\OptimizeDocument.pdf");
	// Optimize document
	doc->Optimize();
	// Save updated document
	doc->Save(u"..\\Data\\Document\\OptimizeDocument_out.pdf");
	// ExEnd:OptimizeDoc		
}
