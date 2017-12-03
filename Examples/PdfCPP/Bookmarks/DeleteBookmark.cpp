#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void DeleteParticularBookmark()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfBookmarkEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfBookmarkEditor>();
	// Load an existing PDF document
	editor->BindPdf(L"..\\Data\\Bookmarks\\DeleteParticularBookmark.pdf");
	// Delete Particular Bookmarks
	editor->DeleteBookmarks(L"Parent Outline");
	// Save the document
	editor->Save(L"..\\Data\\Bookmarks\\DeleteParticularBookmark_out.pdf");
	// ExEnd:1
}