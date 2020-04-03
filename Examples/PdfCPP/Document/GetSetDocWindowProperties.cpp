#include "..\Aspose.Pdf.h"
using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

void GetSetDocWindowProperties()
{
	// ExStart:GetSetDocWindowProperties	
	auto doc = MakeObject<Document>();

	Console::WriteLine(u"Default values:");
	Console::WriteLine(u"CenterWindow : {0}", Convert::ToString(doc->get_CenterWindow()));
	Console::WriteLine(u"Direction : {0}", DirectionConverter::ToString(doc->get_Direction()));
	Console::WriteLine(u"DisplayDocTitle : {0}", Convert::ToString(doc->get_DisplayDocTitle()));
	Console::WriteLine(u"FitWindow : {0}", Convert::ToString(doc->get_FitWindow()));
	Console::WriteLine(u"HideMenuBar : {0}", Convert::ToString(doc->get_HideMenubar()));
	Console::WriteLine(u"HideToolBar : {0}", Convert::ToString(doc->get_HideToolBar()));
	Console::WriteLine(u"HideWindowUI : {0}", Convert::ToString(doc->get_HideWindowUI()));
	Console::WriteLine(u"NonFullScreenPageMode : {0}", PageModeConverter::ToString(doc->get_NonFullScreenPageMode()));
	Console::WriteLine(u"PageLayout : {0}", PageLayoutConverter::ToString(doc->get_PageLayout()));
	Console::WriteLine(u"pageMode : {0}", PageModeConverter::ToString(doc->get_PageMode()));

	doc->set_CenterWindow(true);
	doc->set_Direction(Direction::R2L);
	doc->set_DisplayDocTitle(true);
	doc->set_FitWindow(true);
	doc->set_HideMenubar(true);
	doc->set_HideToolBar(true);
	doc->set_HideWindowUI(true);
	doc->set_PageLayout(PageLayout::TwoColumnLeft);
	doc->set_NonFullScreenPageMode(PageMode::UseOC);
	doc->set_PageMode(PageMode::UseThumbs);

	doc->get_Pages()->Add();
	doc->get_Pages()->Add();
	doc->get_Pages()->Add();
	doc->Save(u"..\\Data\\Document\\DocWindowProperties.pdf");

	doc = MakeObject<Document>(u"..\\Data\\Document\\DocWindowProperties.pdf");

	Console::WriteLine(u"Updated values:");
	Console::WriteLine(u"CenterWindow : {0}", Convert::ToString(doc->get_CenterWindow()));
	Console::WriteLine(u"Direction : {0}", DirectionConverter::ToString(doc->get_Direction()));
	Console::WriteLine(u"DisplayDocTitle : {0}", Convert::ToString(doc->get_DisplayDocTitle()));
	Console::WriteLine(u"FitWindow : {0}", Convert::ToString(doc->get_FitWindow()));
	Console::WriteLine(u"HideMenuBar : {0}", Convert::ToString(doc->get_HideMenubar()));
	Console::WriteLine(u"HideToolBar : {0}", Convert::ToString(doc->get_HideToolBar()));
	Console::WriteLine(u"HideWindowUI : {0}", Convert::ToString(doc->get_HideWindowUI()));
	Console::WriteLine(u"NonFullScreenPageMode : {0}", PageModeConverter::ToString(doc->get_NonFullScreenPageMode()));
	Console::WriteLine(u"PageLayout : {0}", PageLayoutConverter::ToString(doc->get_PageLayout()));
	Console::WriteLine(u"pageMode : {0}", PageModeConverter::ToString(doc->get_PageMode()));
	Console::WriteLine(u"Get/Set document window properties finished.");
	// ExEnd:GetSetDocWindowProperties	
}
