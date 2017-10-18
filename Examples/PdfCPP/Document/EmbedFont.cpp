#include "Aspose.Pdf.h"

using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void EmbedFont()
{
	// ExStart:EmbedFont	
	auto doc = MakeObject<Document>();
	auto page = doc->get_Pages()->Add();
	auto fragment = MakeObject<TextFragment>(L"");
	auto segment = MakeObject<TextSegment>(L"This is a sample text using Custom font.");
	auto ts = MakeObject<TextState>();
	ts->set_Font(FontRepository::FindFont(L"Arial"));
	ts->get_Font()->set_IsEmbedded(true);
	segment->set_TextState(ts);
	fragment->get_Segments()->Add(segment);
	page->get_Paragraphs()->Add(fragment);
	doc->Save(L"..\\Data\\EmbedFont.pdf");
	// ExEnd:EmbedFont	
	Console::WriteLine(L"Embed font into document finished.");
}
