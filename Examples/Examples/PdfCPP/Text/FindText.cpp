#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void FindText()
{
	// ExStart:FindText	
	auto doc = MakeObject<Document>(u"..\\Data\\Text\\input.pdf");
	auto absorber = MakeObject<TextFragmentAbsorber>(u"Aspose.Pdf");
	doc->get_Pages()->idx_get(1)->Accept(absorber);

	// Numeration of TextFragments starts from 1
	auto ts = absorber->get_TextFragments()->idx_get(1)->get_TextState();
	ts->set_Font(FontRepository::FindFont(u"TimesNewRoman"));
	ts->set_BackgroundColor(Aspose::Pdf::Color::get_Yellow());	
	doc->Save(u"..\\Data\\Text\\input_out.pdf");
	// ExEnd:FindText	
}
