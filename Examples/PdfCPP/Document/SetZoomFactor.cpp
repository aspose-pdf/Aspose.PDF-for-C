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

	doc->set_OpenAction(MakeObject<InteractiveFeatures::GoToAction>(MakeObject<InteractiveFeatures::XYZExplicitDestination>(1, 0, 0, .5)));

	doc->Save(L"..\\Data\\Document.pdf");
	// ExEnd:SetZoomFactor	
	Console::WriteLine(L"Set zoom factor finished.");
}
