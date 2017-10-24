#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void AddTextSegment()
{
	// ExStart:AddTextSegment	
	auto doc = MakeObject<Document>();
	auto pages = doc->get_Pages();
	// Add page to pages collection of PDF file
	pages->Add();

	auto tb = MakeObject<TextBuilder>(pages->idx_get(1));
	// Create TextFragment instance
	auto tf = MakeObject<TextFragment>(L"Hello world!");
	tf->set_HorizontalAlignment(HorizontalAlignment::Right);
	// Create a textsegment with sample text
	auto segment = MakeObject<TextSegment>(L" ... Text Segment 1...");
	// Add segment to segments collection of TextFragment
	tf->get_Segments()->Add(segment);
	// Create a new TextSegment 
	segment = MakeObject<TextSegment>(L"Link to Google");
	// Add segment to segments collection of TextFragment
	tf->get_Segments()->Add(segment);	
	// Set forground color for text segment
	segment->get_TextState()->set_ForegroundColor(Aspose::Pdf::Color::get_Blue());
	// Set text formatting as italic
	segment->get_TextState()->set_FontStyle(Aspose::Pdf::Text::FontStyles::Italic);
	// Create another TextSegment object
	segment = MakeObject<TextSegment>(L"TextSegment without hyperlink");
	// Add segment to segments collection of TextFragment
	tf->get_Segments()->Add(segment);
	tb->AppendText(tf);
	auto par = MakeObject<TextParagraph>();
	par->set_Position(MakeObject<Position>(150, 400));
	par->AppendLine(L"New paragraph");
	par->AppendLine(L"Line 2");
	par->AppendLine(L"Line 3");	
	tb->AppendParagraph(par);
	doc->Save(L"..\\Data\\Text\\AddTextSegment_out.pdf");
	// ExEnd:AddTextSegment	
}