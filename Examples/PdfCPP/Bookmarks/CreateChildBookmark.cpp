#include "..\Aspose.Pdf.h"
using namespace Aspose::Pdf;
using namespace System;

void AddChildBookmark()
{
	// ExStart:1
	System::SharedPtr<Aspose::Pdf::Facades::PdfBookmarkEditor> editor = System::MakeObject<Aspose::Pdf::Facades::PdfBookmarkEditor>();
	// Load an existing PDF document
	editor->BindPdf(u"..\\Data\\Bookmarks\\AddChildBookmark.pdf");
	System::SharedPtr<Aspose::Pdf::Facades::Bookmark> bm1 = System::MakeObject<Aspose::Pdf::Facades::Bookmark>();
	bm1->set_PageNumber(1);
	bm1->set_Title(u"First child");
	System::SharedPtr<Aspose::Pdf::Facades::Bookmark> bm2 = System::MakeObject<Aspose::Pdf::Facades::Bookmark>();
	bm2->set_PageNumber(2);
	bm2->set_Title(u"Second child");
	System::SharedPtr<Aspose::Pdf::Facades::Bookmark> bm = System::MakeObject<Aspose::Pdf::Facades::Bookmark>();
	bm->set_Action(u"GoTo");
	bm->set_PageNumber(1);
	bm->set_Title(u"Parent");
	System::SharedPtr<Aspose::Pdf::Facades::Bookmarks> bms = System::MakeObject<Aspose::Pdf::Facades::Bookmarks>();
	bms->Add(bm1);
	bms->Add(bm2);
	bm->set_ChildItem(bms);
	editor->CreateBookmarks(bm);
	// Save the document
	editor->Save(u"..\\Data\\Bookmarks\\AddChildBookmark_out.pdf");
	// ExEnd:1
}