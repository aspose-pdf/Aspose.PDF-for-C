#include "..\Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void DeleteParticularBookmark()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfBookmarkEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfBookmarkEditor>();
	// Load an existing PDF document
	editor->BindPdf(u"..\\Data\\Bookmarks\\DeleteParticularBookmark.pdf");
	// Delete Particular Bookmarks
	editor->DeleteBookmarks(u"Parent Outline");
	// Save the document
	editor->Save(u"..\\Data\\Bookmarks\\DeleteParticularBookmark_out.pdf");
	// ExEnd:1
}