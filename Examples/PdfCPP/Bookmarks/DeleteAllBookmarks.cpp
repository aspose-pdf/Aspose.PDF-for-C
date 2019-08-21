#include "Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void DeletePDFBookmarks()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfBookmarkEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfBookmarkEditor>();
	// Load an existing PDF document
	editor->BindPdf(u"..\\Data\\Bookmarks\\DeleteAllBookmarks.pdf");
	// Delete All Bookmarks
	editor->DeleteBookmarks();
	// Save the document
	editor->Save(u"..\\Data\\Bookmarks\\DeleteAllBookmarks_out.pdf");
	// ExEnd:1
}