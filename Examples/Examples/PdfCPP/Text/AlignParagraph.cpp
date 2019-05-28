#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void AlignParagraph()
{
	// ExStart:AlignParagraph	
	auto doc = MakeObject<Document>();
	auto pages = doc->get_Pages();
	pages->Add();
	auto page = pages->idx_get(1);
	auto paragraps = page->get_Paragraphs();
	paragraps->Add(MakeObject<TextFragment>(u"Center alligned text"));
	paragraps->Add(MakeObject<TextFragment>(u"Left alligned text."));
	paragraps->Add(MakeObject<TextFragment>(u"Right alligned text."));
	paragraps->Add(MakeObject<TextFragment>(u"This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified. This paragraph is justified."));
	paragraps->idx_get(0)->set_HorizontalAlignment(HorizontalAlignment::Center);
	paragraps->idx_get(1)->set_HorizontalAlignment(HorizontalAlignment::Left);
	paragraps->idx_get(2)->set_HorizontalAlignment(HorizontalAlignment::Right);
	paragraps->idx_get(3)->set_HorizontalAlignment(HorizontalAlignment::Justify);

	doc->Save(u"..\\Data\\Text\\Paragraph_out.pdf");
	// ExEnd:AlignParagraph
	Console::WriteLine(u"Paragraphs aligned successfully.");
}
