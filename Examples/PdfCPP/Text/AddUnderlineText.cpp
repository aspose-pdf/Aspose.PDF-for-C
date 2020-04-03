#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void AddUnderlineText()
{
	// ExStart:AddUnderlineText	
	auto doc = MakeObject<Document>();
	auto pages = doc->get_Pages();
	pages->Add();

	auto tb = MakeObject<TextBuilder>(pages->idx_get(1));

	auto text = MakeObject<TextFragment>(u"Hello world!");
	text->set_Position(MakeObject<Position>(100, 800));
	// Set the formatting of text as Underline
	text->get_TextState()->set_Underline(true);
	tb->AppendText(text);	

	auto par = MakeObject<TextParagraph>();
	par->set_Position(MakeObject<Position>(150, 400));
	par->AppendLine(u"New paragraph");
	par->AppendLine(u"Line 2");
	par->AppendLine(u"Line 3");

	tb->AppendParagraph(par);
	doc->Save(u"..\\Data\\Text\\AddUnderlineText_out.pdf");
	// ExEnd:AddUnderlineText		
}