#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;

void DeleteAllImages()
{
	// ExStart:DeleteAllImages	
	auto contentEditor = MakeObject<Facades::PdfContentEditor>();
	contentEditor->BindPdf(u"..\\Data\\Images\\DeleteAllImages.pdf");

	// Delete images
	contentEditor->DeleteImage();
	contentEditor->Save(u"..\\Data\\Images\\DeleteAllImages_out.pdf");
	// ExEnd:DeleteAllImages
	Console::WriteLine(u"All images deleted successfully from file.");
}