#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;

void ReplacePageImage()
{
	// ExStart:ReplacePageImage	
	auto contentEditor = MakeObject<Facades::PdfContentEditor>();
	contentEditor->BindPdf(u"..\\Data\\Images\\ReplaceImage.pdf");
	// Replace image on a particular page
	contentEditor->ReplaceImage(1, 1, u"..\\Data\\Images\\aspose-logo.jpg");
	// Save output PDF
	contentEditor->Save(u"..\\Data\\Images\\ReplaceImage_out.pdf");
	// ExEnd:ReplacePageImage	
}