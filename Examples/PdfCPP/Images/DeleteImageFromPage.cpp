#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;

void DeleteImageFromPage()
{
	// ExStart:DeleteImageFromPage	
	auto contentEditor = MakeObject<Facades::PdfContentEditor>();
	contentEditor->BindPdf(u"..\\Data\\Images\\DeleteImages-Page.pdf");
	auto imageIndex = MakeObject<System::ArrayPtr<int>>(1);
	imageIndex[0] = 2;
	// Delete the images from the particular page
	contentEditor->DeleteImage(2, imageIndex);
	// ExEnd:DeleteImageFromPage
	Console::WriteLine(u"Image deleted successfully from particular page.");
}