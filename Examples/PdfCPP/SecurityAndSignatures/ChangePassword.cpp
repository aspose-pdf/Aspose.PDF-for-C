#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void ChangePDFPassword()
{
	// ExStart:1
	// Load an existing PDF document
	auto doc = MakeObject<Document>(u"..\\Data\\SecurityAndSignatures\\ChangePassword.pdf", u"owner");
	// Decrypt PDF
	doc->ChangePasswords(u"owner", u"newuser", u"newuser");
	// Save the updated document
	doc->Save(u"..\\Data\\SecurityAndSignatures\\ChangePassword_out.pdf");
	// ExEnd:1
}