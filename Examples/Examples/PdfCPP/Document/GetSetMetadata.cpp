#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetSetMetadata()
{
	// ExStart:GetSetMetadata	
	auto doc = MakeObject<Document>();
	auto md = doc->get_Metadata();

	md->idx_set(u"xmp:CreateDate", MakeObject<XmpValue>(DateTime::get_Now()));
	md->idx_set(u"xmp:CustomProperty", MakeObject<XmpValue>(u"Custom Value"));

	doc->get_Pages()->Add();
	doc->Save(u"..\\Data\\Document\\Metadata.pdf");

	doc = MakeObject<Document>(u"..\\Data\\Document\\Metadata.pdf");
	md = doc->get_Metadata();

	Console::WriteLine(u"CreateDate: {0}", md->idx_get(u"xmp:CreateDate"));
	Console::WriteLine(u"CustomProperty: {0}", md->idx_get(u"xmp:CustomProperty"));
	Console::WriteLine(u"Get/Set document metadata finished.");
	// ExEnd:GetSetMetadata	
}
