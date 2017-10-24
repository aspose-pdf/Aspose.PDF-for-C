#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void ExtractTextFromRangeOfPages()
{
	// ExStart:ExtractTextFromRangeOfPages	
	auto extractor = MakeObject<Facades::PdfExtractor>();
	extractor->BindPdf(L"..\\Data\\Text\\ExtractText-PageRange.pdf");
	// Specify start and end pages
	extractor->set_StartPage(1);
	extractor->set_EndPage(1);
	// Use parameterless ExtractText method
	extractor->ExtractText();

	auto memStream = MakeObject<IO::MemoryStream>();
	extractor->GetText(memStream);

	auto unicode = System::Text::Encoding::get_Unicode();

	String allText = unicode->GetString(memStream->ToArray());
	Console::WriteLine(allText);
	// ExEnd:ExtractTextFromRangeOfPages	
}
