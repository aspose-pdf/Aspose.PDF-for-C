#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetZoomFactor()
{
	// ExStart:GetZoomFactor	
	auto doc = MakeObject<Document>(u"..\\Data\\Document\\Zoomed_pdf.pdf");
	// Create GoToAction object	
	//auto *action   = static_cast<Annotations::GoToAction*>(doc->get_OpenAction());
	//auto destination = static_cast<Annotations::XYZExplicitDestination>(action->get_Destination());
	// Get the Zoom factor of PDF file
	//Console::WriteLine(destination->get_Zoom()); 	
	// ExEnd:GetZoomFactor		
}
