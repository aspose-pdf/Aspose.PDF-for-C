#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void SetZoomFactor()
{
	// ExStart:SetZoomFactor	
	auto doc = MakeObject<Document>();
	auto pages = doc->get_Pages();
	pages->Add();

	doc->set_OpenAction(MakeObject<Annotations::GoToAction>(MakeObject<Annotations::XYZExplicitDestination>(1, 0, 0, .5)));

	doc->Save(u"..\\Data\\Document\\Document.pdf");
	// ExEnd:SetZoomFactor	
	Console::WriteLine(u"Set zoom factor finished.");
}
