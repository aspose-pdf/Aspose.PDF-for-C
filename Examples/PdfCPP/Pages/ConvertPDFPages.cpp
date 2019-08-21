#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void ConvertPDFPages()
{
	// ExStart:ConvertPDFPages	
	// Instantiate PdfConverter
	SharedPtr<Aspose::Pdf::Facades::PdfConverter> converter = MakeObject<Aspose::Pdf::Facades::PdfConverter>();
	// Load an existing PDF document
	converter->BindPdf(u"..\\Data\\Pages\\input.pdf");
	// Convert PDF Pages to images
	converter->DoConvert();
	System::String prefix = u"..\\Data\\Pages\\";
	System::String suffix = u"_out.jpg";
	int32_t imageCount = 1;
	while (converter->HasNextImage())
	{
		// Save images to local path
		converter->GetNextImage(prefix + imageCount + u".jpg", System::Drawing::Imaging::ImageFormat::get_Jpeg(), 800, 1000);
		imageCount++;
	}
	// ExEnd:ConvertPDFPages	
}