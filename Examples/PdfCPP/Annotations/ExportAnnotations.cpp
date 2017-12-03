#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void ExportAnnotationsInPDF()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfAnnotationEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfAnnotationEditor>();
	// Load Document where you want to import document
	editor->BindPdf(L"..\\Data\\Annotations\\ExportAnnotations.pdf");
	System::ArrayPtr<System::String> annotTypes = System::MakeArray<System::String>({ L"Text", L"Highlight" });
	{
		System::SharedPtr<System::IO::Stream> stream = System::IO::File::Create(L"..\\Data\\Annotations\\Exported_out.xfdf");
		editor->ExportAnnotationsXfdf(stream, 1, 2, annotTypes);
	}
	//ExEnd:1
}