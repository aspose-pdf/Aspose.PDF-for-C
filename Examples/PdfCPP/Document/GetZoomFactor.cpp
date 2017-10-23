#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetZoomFactor()
{
	// ExStart:GetZoomFactor	
	auto doc = MakeObject<Document>(L"..\\Data\\Document\\Zoomed_pdf.pdf");
	// Create GoToAction object	
	//auto *action   = static_cast<InteractiveFeatures::GoToAction*>(doc->get_OpenAction());
	//auto destination = static_cast<InteractiveFeatures::XYZExplicitDestination>(action->get_Destination());
	// Get the Zoom factor of PDF file
	//Console::WriteLine(destination->get_Zoom()); 	
	// ExEnd:GetZoomFactor		
}
