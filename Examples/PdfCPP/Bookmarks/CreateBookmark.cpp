#include "..\Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void CreateBookmarkInPDF()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfBookmarkEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfBookmarkEditor>();
	// Load an existing PDF document
	editor->BindPdf(u"..\\Data\\Bookmarks\\AddBookmark.pdf");
	// Create Bookmark
	editor->CreateBookmarkOfPage(u"bookmark for page 1", 1);
	// Save the document
	editor->Save(u"..\\Data\\Bookmarks\\AddBookmark_out.pdf");
	// ExEnd:1
}