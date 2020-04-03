#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void EmbedFont()
{
	// ExStart:EmbedFont	
	auto doc = MakeObject<Document>();
	auto page = doc->get_Pages()->Add();
	auto fragment = MakeObject<TextFragment>(u"");
	auto segment = MakeObject<TextSegment>(u"This is a sample text using Custom font.");
	auto ts = MakeObject<TextState>();
	ts->set_Font(FontRepository::FindFont(u"Arial"));
	ts->get_Font()->set_IsEmbedded(true);
	segment->set_TextState(ts);
	fragment->get_Segments()->Add(segment);
	page->get_Paragraphs()->Add(fragment);
	doc->Save(u"..\\Data\\Document\\EmbedFont.pdf");
	// ExEnd:EmbedFont	
	Console::WriteLine(u"Embed font into document finished.");
}
