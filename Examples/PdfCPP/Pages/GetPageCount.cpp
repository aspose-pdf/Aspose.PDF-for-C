#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetPageCount()
{
	// ExStart:GetPageCount	
	// Open document
	auto doc = MakeObject<Document>(u"..\\Data\\Pages\\GetNumberofPages.pdf");
	// Get page count
	Console::WriteLine(u"Page Count : {0}", doc->get_Pages()->get_Count());
	// ExEnd:GetPageCount	
}
