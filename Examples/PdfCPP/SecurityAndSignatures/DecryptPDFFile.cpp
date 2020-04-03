#include "..\Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void DecryptDocument()
{
	// ExStart:1
	// Load an existing PDF document
	auto doc = MakeObject<Document>(u"..\\Data\\SecurityAndSignatures\\Decrypt.pdf", u"password");
	// Decrypt PDF
	doc->Decrypt();
	// Save the updated document
	doc->Save(u"..\\Data\\SecurityAndSignatures\\Decrypt_out.pdf");
	// ExEnd:1
}