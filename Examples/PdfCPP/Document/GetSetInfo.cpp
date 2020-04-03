#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetSetInfo()
{
	// ExStart:GetSetInfo	
	auto doc = MakeObject<Document>();
	auto info = doc->get_Info();
	// Set document information
	info->set_Author(u"Naeem Akram");
	info->set_Subject(u"Working with Document Info");
	info->set_Title(u"Get/set document's info");
	
	// Save document
	doc->get_Pages()->Add();
	doc->Save(u"..\\Data\\Document\\DocumentInfo.pdf");

 	info.reset();

	doc = MakeObject<Document>(u"..\\Data\\Document\\DocumentInfo.pdf");
	info = doc->get_Info();
	// Get document information
	Console::WriteLine(u"Author: {0}", info->get_Author());
	Console::WriteLine(u"Subject: {0}", info->get_Subject());
	Console::WriteLine(u"Title: {0}", info->get_Title());
	Console::WriteLine(u"Get/Set document's info finished.");
	// ExEnd:GetSetInfo	
}
