#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void SplitToPages()
{
	// ExStart:SplitToPages	
	// Open document
	auto doc = MakeObject<Document>(u"..\\Data\\Pages\\SplitToPages.pdf");	
	auto count = doc->get_Pages()->get_Count();
	int i;
	for (i = 1; i <= count; ++i) 
	{
		SharedPtr<Page>  pdfPage = doc->get_Pages()->idx_get(i);
		auto newDoc = MakeObject<Document>();		
		//newDoc->get_Pages()->Add(pdfPage);
		newDoc->Save(u"..\\Data\\Text\\SplitToPages_out.pdf");
	}
	// ExEnd:SplitToPages	
}
