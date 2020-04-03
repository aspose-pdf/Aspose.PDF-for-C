#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetAttachmentInformation()
{
	// ExStart:GetAttachmentInformation	
	// Open document
	auto doc = MakeObject<Document>(u"..\\Data\\Attachments\\GetAttachmentInfo.pdf");
	// Get particular embedded file
	SharedPtr<FileSpecification> fileSpecification = doc->get_EmbeddedFiles()->idx_get(1);
	// Get the file properties
	Console::WriteLine(u"Name: {0}", fileSpecification->get_Name());
	Console::WriteLine(u"Description: {0}", fileSpecification->get_Description());
	Console::WriteLine(u"Mime Type: {0}", fileSpecification->get_MIMEType());	
	// ExEnd:GetAttachment	
}
