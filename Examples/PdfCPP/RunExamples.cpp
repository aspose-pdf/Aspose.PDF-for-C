// PdfCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PDFExamples.h"

int main()
{
    std::cout << "Hello World!\n";
	
	//Console::WriteLine(u"Open main.cpp. \nIn main() method uncomment the example that you want to run.");
	//Console::WriteLine(u"=====================================================");


	//// Text
	//// =====================================================

	//CreatePdf();
	//AlignParagraph();
	//AddText();
	//ExtractText();
	//ReplaceText();
	//FindText();
	//AddUnderlineText();
	//AddTextSegment();	
	//ReplaceTextOnParticularPage();
	//ExtractTextFromRangeOfPages();

	//// Annotations
	//// =====================================================

	//AddAnnotation();	
	//ModifyAnnotationInPDF();
	//DeleteAnnotationsInPDF();
	//DeleteParticularAnnotationsInPDF();
	//ImportAnnotationsInPDF();
	//ExportAnnotationsInPDF();
	//ExtractAnnotationsInPDF();

	//// Document
	//// =====================================================

	//AddImage();
	//GetSetInfo();
	//GetSetMetadata();
	//GetSetDocWindowProperties();
	//CreateDoc();
	//SetZoomFactor();
	//EmbedFont();
	//GetZoomFactor();
	//ValidatePDFABStandard();
	//ValidatePDFAStandard();
	//OptimizeDoc();

	//// Attachments
	//// =====================================================

	//AddAttachments();
	//DeleteAttachments();
	//GetAttachmentInformation();

	//// Pages
	//// =====================================================
	//ConcatenatePdfFiles();
	//GetPageCount();
	//GetPageProperties();
	//InsertEmptyPage();
	//InsertEmptyPageAtEnd();
	//DeleteParticularPage();
	//UpdateDimensions();
	//SplitToPages();
	//ConvertPDFPages();

	//// Images
	//// =====================================================

	//DeleteImageFromPage();
	//DeleteAllImages();
	//ReplacePageImage();
	//ExtractImage();
	//ExtractImageFromParticularPage();

	//// Security and Signatures
	//// =====================================================

	//SetDocumentPriveleges();
	//DecryptDocument();
	//ChangePDFPassword();

	//// Bookmarks
	//// =====================================================

	//CreateBookmarkInPDF();
	//AddChildBookmark();
	//DeletePDFBookmarks();
	//DeleteParticularBookmark();

	//// Conversion 
	//// =====================================================
	//ConvertToDOC();
	//ConvertToDOCX();
	//ConvertToSVG();

	////Tables
	//AddTable();


	// Stop before exiting
	printf("\n\nProgram Finished. Press any key to exit....");
	getchar();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
