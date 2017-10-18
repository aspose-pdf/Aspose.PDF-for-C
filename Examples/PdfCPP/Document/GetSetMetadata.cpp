#include "Aspose.Pdf.h"

using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetSetMetadata()
{
	// ExStart:GetSetMetadata	
	auto doc = MakeObject<Document>();
	auto md = doc->get_Metadata();

	md->idx_set(L"xmp:CreateDate", MakeObject<Engine::Data::XMP::XmpValue>(DateTime::get_Now()));
	md->idx_set(L"xmp:CustomProperty", MakeObject<Engine::Data::XMP::XmpValue>(L"Custom Value"));

	doc->get_Pages()->Add();
	doc->Save(L"..\\Data\\Metadata.pdf");

	doc = MakeObject<Document>(L"..\\Data\\Metadata.pdf");
	md = doc->get_Metadata();

	Console::WriteLine(L"CreateDate: {0}", md->idx_get(L"xmp:CreateDate"));
	Console::WriteLine(L"CustomProperty: {0}", md->idx_get(L"xmp:CustomProperty"));
	Console::WriteLine(L"Get/Set document metadata finished.");
	// ExEnd:GetSetMetadata	
}
