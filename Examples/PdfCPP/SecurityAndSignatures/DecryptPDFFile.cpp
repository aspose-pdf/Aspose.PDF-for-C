#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void DecryptDocument()
{
	// ExStart:1
	// Load an existing PDF document
	auto doc = MakeObject<Document>(L"..\\Data\\SecurityAndSignatures\\Decrypt.pdf", L"password");
	// Decrypt PDF
	doc->Decrypt();
	// Save the updated document
	doc->Save(L"..\\Data\\SecurityAndSignatures\\Decrypt_out.pdf");
	// ExEnd:1
}