#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void ChangePDFPassword()
{
	// ExStart:1
	// Load an existing PDF document
	auto doc = MakeObject<Document>(L"..\\Data\\SecurityAndSignatures\\ChangePassword.pdf", L"owner");
	// Decrypt PDF
	doc->ChangePasswords(L"owner", L"newuser", L"newuser");
	// Save the updated document
	doc->Save(L"..\\Data\\SecurityAndSignatures\\ChangePassword_out.pdf");
	// ExEnd:1
}