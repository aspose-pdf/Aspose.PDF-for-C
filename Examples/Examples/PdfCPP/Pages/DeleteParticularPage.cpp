#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void DeleteParticularPage()
{
	// ExStart:DeleteParticularPage	
	// Open document
	auto doc = MakeObject<Document>(u"..\\Data\\Pages\\DeleteParticularPage.pdf");
	// Delete a particular page
	doc->get_Pages()->Delete(2);
	// Save updated PDF
	doc->Save(u"..\\Data\\Pages\\DeleteParticularPage_out.pdf");
	// ExEnd:DeleteParticularPage	
}
