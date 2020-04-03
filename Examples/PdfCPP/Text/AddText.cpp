#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;


void AddText()
{
	// ExStart:AddText	
	auto doc = MakeObject<Document>();
	auto pages = doc->get_Pages();
	pages->Add();
	
	auto tb = MakeObject<TextBuilder>(pages->idx_get(1));

	auto text = MakeObject<TextFragment>(u"Hello world!");
	text->set_Position(MakeObject<Position>(100, 800));
	tb->AppendText(text);

	text = MakeObject<TextFragment>(u"This example is created by Aspose.Pdf for C++.");
	text->set_Position(MakeObject<Position>(100, 700));
	
	tb->AppendText(text);

	text = MakeObject<TextFragment>(u"Demonstrates how to use TextBuilder to append text into pdf file.");
	text->set_Position(MakeObject<Position>(200, 600));
	tb->AppendText(text);

	auto par = MakeObject<TextParagraph>();
	par->set_Position(MakeObject<Position>(150, 400));
	par->AppendLine(u"New paragraph");
	par->AppendLine(u"Line 2");
	par->AppendLine(u"Line 3");
	
	tb->AppendParagraph(par);
	doc->Save(u"..\\Data\\Text\\AddText.pdf");
	// ExEnd:AddText
	Console::WriteLine(u"Text added successfully to document.");
}