#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void CreateBookmarkInPDF()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfBookmarkEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfBookmarkEditor>();
	// Load an existing PDF document
	editor->BindPdf(L"..\\Data\\Bookmarks\\AddBookmark.pdf");
	// Create Bookmark
	editor->CreateBookmarkOfPage(L"bookmark for page 1", 1);
	// Save the document
	editor->Save(L"..\\Data\\Bookmarks\\AddBookmark_out.pdf");
	// ExEnd:1
}