#include "Aspose.Pdf.h"
#include <DocSaveOptions.h>
using namespace System;
using namespace Aspose::Pdf;

void ConvertToDOCX()
{
	// ExStart:ConvertToDocx	
	auto doc = MakeObject<Document>(u"..\\Data\\Document\\input.pdf");
	SharedPtr<DocSaveOptions> options = MakeObject<DocSaveOptions>();
	options->set_Format(DocSaveOptions::DocFormat::DocX);
	doc->Save(u"..\\Data\\Document\\input_out.docx", options);
	// ExEnd:ConvertToDocx	
}