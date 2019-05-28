#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void ReplaceText()
{
	// ExStart:ReplaceText	
	auto ce = MakeObject<Facades::PdfContentEditor>();
	ce->BindPdf(u"..\\Data\\Text\\input.pdf");

	auto options = MakeObject<TextReplaceOptions>(TextReplaceOptions::Scope::REPLACE_FIRST);
	ce->set_TextReplaceOptions(options);
	ce->ReplaceText(u"example", u"file");

	ce->Save(u"..\\Data\\Text\\input_out.pdf");
	// ExEnd:ReplaceText
	Console::WriteLine(u"Text replaced successfully in a pdf file.");
}
