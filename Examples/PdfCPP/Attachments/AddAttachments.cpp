#include "Aspose.Pdf.h"

using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void AddAttachments()
{
	// ExStart:AddAttachments	
	// Create text file
	System::IO::File::WriteAllText(L"..\\Data\\Attachment.txt", L"Some info");
	SharedPtr<FileSpecification> fileSpecification = MakeObject<FileSpecification>(L"..\\Data\\Attachment.txt", L"Sample text file");

	// Add attachment to document's attachment collection
	auto doc = MakeObject<Document>();
	doc->get_EmbeddedFiles()->Add(fileSpecification);

	doc->get_Pages()->Add();
	doc->Save(L"..\\Data\\Attachment.pdf");	
	// ExEnd:AddAttachments	
}
