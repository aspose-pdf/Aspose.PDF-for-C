#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void SetDocumentPriveleges()
{
	// ExStart:Priveleges
	// Load an existing PDF document
	auto doc = MakeObject<Document>(L"..\\Data\\SecurityAndSignatures\\input.pdf");

	// Way1: Using predefined privilege directly.
	System::SharedPtr<Aspose::Pdf::Facades::DocumentPrivilege> privilege = Aspose::Pdf::Facades::DocumentPrivilege::get_Print();
	doc->Encrypt(L"user", L"owner", privilege, CryptoAlgorithm::AESx128, false);
	doc->Save(L"..\\Data\\SecurityAndSignatures\\SetPrivelegesWay1_out.pdf");

	// Way2: Based on a predefined privilege and change some specifical permissions.
	System::SharedPtr<Aspose::Pdf::Facades::DocumentPrivilege> privilege2 = Aspose::Pdf::Facades::DocumentPrivilege::get_AllowAll();
	privilege->set_AllowPrint(false);
	privilege->set_AllowModifyContents(false);
	doc->Encrypt(L"user", L"owner", privilege2, CryptoAlgorithm::AESx128, false);
	doc->Save(L"..\\Data\\SecurityAndSignatures\\SetPrivelegesWay2_out.pdf");

	// Way3: Based on a predefined privilege and change some specifical Adobe Professional permissions combination.
	System::SharedPtr<Aspose::Pdf::Facades::DocumentPrivilege> privilege3 = Aspose::Pdf::Facades::DocumentPrivilege::get_ForbidAll();
	privilege->set_ChangeAllowLevel(1);
	privilege->set_PrintAllowLevel(2);
	doc->Encrypt(L"user", L"owner", privilege3, CryptoAlgorithm::AESx128, false);
	doc->Save(L"..\\Data\\SecurityAndSignatures\\SetPrivelegesWay3_out.pdf");

	// Way4: Mixes the way2 and way3
	System::SharedPtr<Aspose::Pdf::Facades::DocumentPrivilege> privilege4 = Aspose::Pdf::Facades::DocumentPrivilege::get_ForbidAll();
	privilege->set_ChangeAllowLevel(1);
	privilege->set_AllowPrint(true);
	doc->Encrypt(L"user", L"owner", privilege4, CryptoAlgorithm::AESx128, false);
	doc->Save(L"..\\Data\\SecurityAndSignatures\\SetPrivelegesWay4_out.pdf");
	// ExEnd:Priveleges
}