#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void CreateDoc()
{
	// ExStart:CreateDoc	
	auto doc = MakeObject<Document>();
	auto pages = doc->get_Pages();
	pages->Add();
	pages->Add();

	auto p2 = pages->idx_get(2);
	auto dest = MakeObject<Annotations::FitExplicitDestination>(p2);
	auto action = MakeObject<Annotations::GoToAction>(dest);
	doc->set_OpenAction(action);
	doc->Save(u"..\\Data\\Document\\Document.pdf");	
	// ExEnd:CreateDoc	
	Console::WriteLine(u"Create document which displays full second page when opened finished.");
}
