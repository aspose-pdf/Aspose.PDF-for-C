#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void DeleteAttachments()
{
	// ExStart:DeleteAttachments	
	// Open document
	auto doc = MakeObject<Document>(u"..\\Data\\Attachments\\DeleteAllAttachments.pdf");
	// Delete all attachments
	doc->get_EmbeddedFiles()->Delete();
	// Save updated file
	doc->Save(u"..\\Data\\Attachments\\DeleteAllAttachments_out.pdf");
	// ExEnd:DeleteAttachments	
}
