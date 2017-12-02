#include "Aspose.Pdf.h"
using namespace System;
using namespace System::Drawing;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void AddImage()
{
	// ExStart:AddImage	
	auto doc = MakeObject<Document>();
	auto pages = doc->get_Pages();
	pages->Add();
	auto page = pages->idx_get(1);

	auto stream = MakeObject<IO::MemoryStream>();
	SharedPtr<Bitmap> bitmap = MakeObject<Bitmap>(200, 200);
	SharedPtr<Graphics> graphics = Graphics::FromImage(bitmap);
	graphics->Clear(System::Drawing::Color::get_Yellow());
	graphics->FillRectangle(Brushes::get_Blue(), System::Drawing::Rectangle(0, 0, 200, 100));
	bitmap->Save(stream, Imaging::ImageFormat::get_Bmp());

	double x = 100.0, y = 600.0, width = 200.0, height = 200.0;
	auto rect = MakeObject<Aspose::Pdf::Rectangle>(x, y, x + width, y + height);

	stream->Seek(0, System::IO::SeekOrigin::Begin);
	page->AddImage(stream, rect);
	doc->Save(L"..\\Data\\Document\\Document_out.pdf");
	// ExEnd:AddImage	
}