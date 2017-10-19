#include "Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetSetDocWindowProperties()
{
	// ExStart:GetSetDocWindowProperties	
	auto doc = MakeObject<Document>();

	Console::WriteLine(L"Default values:");
	Console::WriteLine(L"CenterWindow : {0}", Convert::ToString(doc->get_CenterWindow()));
	Console::WriteLine(L"Direction : {0}", DirectionConverter::ToString(doc->get_Direction()));
	Console::WriteLine(L"DisplayDocTitle : {0}", Convert::ToString(doc->get_DisplayDocTitle()));
	Console::WriteLine(L"FitWindow : {0}", Convert::ToString(doc->get_FitWindow()));
	Console::WriteLine(L"HideMenuBar : {0}", Convert::ToString(doc->get_HideMenubar()));
	Console::WriteLine(L"HideToolBar : {0}", Convert::ToString(doc->get_HideToolBar()));
	Console::WriteLine(L"HideWindowUI : {0}", Convert::ToString(doc->get_HideWindowUI()));
	Console::WriteLine(L"NonFullScreenPageMode : {0}", DOM::PageModeConverter::ToString(doc->get_NonFullScreenPageMode()));
	Console::WriteLine(L"PageLayout : {0}", PageLayoutConverter::ToString(doc->get_PageLayout()));
	Console::WriteLine(L"pageMode : {0}", DOM::PageModeConverter::ToString(doc->get_PageMode()));

	doc->set_CenterWindow(true);
	doc->set_Direction(Direction::R2L);
	doc->set_DisplayDocTitle(true);
	doc->set_FitWindow(true);
	doc->set_HideMenubar(true);
	doc->set_HideToolBar(true);
	doc->set_HideWindowUI(true);
	doc->set_PageLayout(PageLayout::TwoColumnLeft);
	doc->set_NonFullScreenPageMode(DOM::PageMode::UseOC);
	doc->set_PageMode(DOM::PageMode::UseThumbs);

	doc->get_Pages()->Add();
	doc->get_Pages()->Add();
	doc->get_Pages()->Add();
	doc->Save(L"..\\Data\\Document\\DocWindowProperties.pdf");

	doc = MakeObject<Document>(L"..\\Data\\Document\\DocWindowProperties.pdf");

	Console::WriteLine(L"Updated values:");
	Console::WriteLine(L"CenterWindow : {0}", Convert::ToString(doc->get_CenterWindow()));
	Console::WriteLine(L"Direction : {0}", DirectionConverter::ToString(doc->get_Direction()));
	Console::WriteLine(L"DisplayDocTitle : {0}", Convert::ToString(doc->get_DisplayDocTitle()));
	Console::WriteLine(L"FitWindow : {0}", Convert::ToString(doc->get_FitWindow()));
	Console::WriteLine(L"HideMenuBar : {0}", Convert::ToString(doc->get_HideMenubar()));
	Console::WriteLine(L"HideToolBar : {0}", Convert::ToString(doc->get_HideToolBar()));
	Console::WriteLine(L"HideWindowUI : {0}", Convert::ToString(doc->get_HideWindowUI()));
	Console::WriteLine(L"NonFullScreenPageMode : {0}", DOM::PageModeConverter::ToString(doc->get_NonFullScreenPageMode()));
	Console::WriteLine(L"PageLayout : {0}", PageLayoutConverter::ToString(doc->get_PageLayout()));
	Console::WriteLine(L"pageMode : {0}", DOM::PageModeConverter::ToString(doc->get_PageMode()));
	Console::WriteLine(L"Get/Set document window properties finished.");
	// ExEnd:GetSetDocWindowProperties	
}
