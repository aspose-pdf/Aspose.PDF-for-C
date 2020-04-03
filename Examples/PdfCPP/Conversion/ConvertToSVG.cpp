#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;

void ConvertToSVG()
{
	// ExStart:ConvertToSVG	
	auto doc = MakeObject<Document>(u"..\\Data\\Document\\input.pdf");
	SharedPtr<SaveOptions> options = StaticCast<SaveOptions>(MakeObject<SvgSaveOptions>());
	doc->Save(u"..\\Data\\Document\\input_out.svg", options);
	// ExEnd:ConvertToSVG	
}