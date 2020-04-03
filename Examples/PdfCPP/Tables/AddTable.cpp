#include "..\Aspose.Pdf.h"

using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;


void AddTable()
{
	// ExStart:AddTable	
	auto doc = MakeObject<Document>();
	auto page = doc->get_Pages()->Add();
	auto table = MakeObject<Table>();
	auto border = MakeObject<BorderInfo>(Aspose::Pdf::BorderSide::All, 0.5, Color::FromRgb(System::Drawing::Color::get_LightBlue()));
	table->set_Border(border);
	table->set_DefaultCellBorder(border);
	table->set_BackgroundColor(Color::FromRgb(System::Drawing::Color::get_LightGray()));
	table->set_ColumnWidths(u"240 120 80");
	for (int rowIndex = 0; rowIndex < 5; rowIndex++)
	{
		auto row = table->get_Rows()->Add();
		auto cells = row->get_Cells();

		auto fragment = MakeObject<Aspose::Pdf::Text::TextFragment>(String::Format(u"Very long text in column [{0}]", rowIndex));
		fragment->set_WrapLinesCount(1);

		auto cell = MakeObject<Cell>();
		cell->get_Paragraphs()->Add(fragment);

		cells->Add(cell);

		cells->Add(String::Format(u"Column [{0}, 1]", rowIndex));
		cells->Add(String::Format(u"Column [{0}, 2]", rowIndex));
	}
	page->get_Paragraphs()->Add(table);
	doc->Save(u"..\\Data\\Text\\PdfWithTable_out.pdf");

	// ExEnd:AddTable
	Console::WriteLine(u"Text added successfully to document.");
}