#include "Aspose.Pdf.h"
#include <DocSaveOptions.h>
using namespace System;
using namespace Aspose::Pdf;

void ConvertToDOC()
{
	// ExStart:ConvertToDoc	
	auto doc = MakeObject<Document>(u"..\\Data\\Document\\input.pdf");
	doc->Save(u"..\\Data\\Document\\input_out.doc", MakeObject<DocSaveOptions>());
	// ExEnd:ConvertToDoc	
}