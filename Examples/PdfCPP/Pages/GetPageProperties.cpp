#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetPageProperties()
{
	// ExStart:GetPageProperties	
	// Open document
	auto doc = MakeObject<Document>(L"..\\Data\\Pages\\GetProperties.pdf");
	// Get particular page from pages collection
	auto pdfPage = doc->get_Pages()->idx_get(1);
	// Get page properties
	Console::WriteLine(L"MediaBox : Height={0},Width={1},LLX={2},LLY={3},URX={4},URY={5}", pdfPage->get_MediaBox()->get_Height(), pdfPage->get_MediaBox()->get_Width(), pdfPage->get_MediaBox()->get_LLY(), pdfPage->get_MediaBox()->get_URX(), pdfPage->get_MediaBox()->get_URY());
	Console::WriteLine(L"TrimBox : Height={0},Width={1},LLX={2},LLY={3},URX={4},URY={5}", pdfPage->get_TrimBox()->get_Height(), pdfPage->get_TrimBox()->get_Width(), pdfPage->get_TrimBox()->get_LLX(), pdfPage->get_TrimBox()->get_LLY(), pdfPage->get_TrimBox()->get_URX(), pdfPage->get_TrimBox()->get_URY());
	Console::WriteLine(L"Rect : Height={0},Width={1},LLX={2},LLY={3},URX={4},URY={5}", pdfPage->get_Rect()->get_Height(), pdfPage->get_Rect()->get_Width(), pdfPage->get_Rect()->get_LLX(), pdfPage->get_Rect()->get_LLY(), pdfPage->get_Rect()->get_URX(), pdfPage->get_Rect()->get_URY());
	Console::WriteLine(L"Page Number : {0}", pdfPage->get_Number());
	Console::WriteLine(L"Rotate : {0}", pdfPage->get_Rotate());
	// ExEnd:GetPageProperties	
}
