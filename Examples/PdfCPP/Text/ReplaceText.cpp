#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void ReplaceText()
{
	// ExStart:ReplaceText	
	auto ce = MakeObject<Facades::PdfContentEditor>();
	ce->BindPdf(L"..\\Data\\Text\\input.pdf");

	auto options = MakeObject<TextOptions::TextReplaceOptions>(TextOptions::TextReplaceOptions::Scope::REPLACE_FIRST);
	ce->set_TextReplaceOptions(options);
	ce->ReplaceText(L"example", L"file");

	ce->Save(L"..\\Data\\Text\\input_out.pdf");
	// ExEnd:ReplaceText
	Console::WriteLine(L"Text replaced successfully in a pdf file.");
}
