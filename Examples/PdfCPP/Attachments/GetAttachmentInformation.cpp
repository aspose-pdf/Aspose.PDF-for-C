#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetAttachmentInformation()
{
	// ExStart:GetAttachmentInformation	
	// Open document
	auto doc = MakeObject<Document>(L"..\\Data\\Attachments\\GetAttachmentInfo.pdf");
	// Get particular embedded file
	SharedPtr<FileSpecification> fileSpecification = doc->get_EmbeddedFiles()->idx_get(1);
	// Get the file properties
	Console::WriteLine(L"Name: {0}", fileSpecification->get_Name());
	Console::WriteLine(L"Description: {0}", fileSpecification->get_Description());
	Console::WriteLine(L"Mime Type: {0}", fileSpecification->get_MIMEType());	
	// ExEnd:GetAttachment	
}
