#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetSetInfo()
{
	// ExStart:GetSetInfo	
	auto doc = MakeObject<Document>();
	auto info = doc->get_Info();
	// Set document information
	info->set_Author(L"Naeem Akram");
	info->set_Subject(L"Working with Document Info");
	info->set_Title(L"Get/set document's info");
	
	// Save document
	doc->get_Pages()->Add();
	doc->Save(L"..\\Data\\Document\\DocumentInfo.pdf");

 	info.reset();

	doc = MakeObject<Document>(L"..\\Data\\Document\\DocumentInfo.pdf");
	info = doc->get_Info();
	// Get document information
	Console::WriteLine(L"Author: {0}", info->get_Author());
	Console::WriteLine(L"Subject: {0}", info->get_Subject());
	Console::WriteLine(L"Title: {0}", info->get_Title());
	Console::WriteLine(L"Get/Set document's info finished.");
	// ExEnd:GetSetInfo	
}
