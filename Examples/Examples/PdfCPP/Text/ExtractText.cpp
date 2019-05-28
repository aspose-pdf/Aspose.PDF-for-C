#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void ExtractText()
{
	// ExStart:ExtractText	
	auto extractor = MakeObject<Facades::PdfExtractor>();	
	extractor->BindPdf(u"..\\Data\\Text\\input.pdf");
	extractor->ExtractText();
	
	auto memStream = MakeObject<IO::MemoryStream>();
	extractor->GetText(memStream);

	auto unicode = System::Text::Encoding::get_Unicode();

	String allText = unicode->GetString(memStream->ToArray());	
	Console::WriteLine(allText);
	// ExEnd:ExtractText
	Console::WriteLine(u"Text extracted successfully from pdf document.");
}
