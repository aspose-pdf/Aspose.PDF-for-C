#ifndef _Aspose_Pdf_Facades_PdfBookmarkEditor_h_
#define _Aspose_Pdf_Facades_PdfBookmarkEditor_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_text_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class OutlineItemCollection; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class IAppointment; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class Bookmarks; } } }
namespace Aspose { namespace Pdf { namespace Facades { class Bookmark; } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to work with PDF file's bookmarks including create, modify, export, import and delete.    
/// </summary>
class ASPOSE_PDF_SHARED_API PdfBookmarkEditor FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfBookmarkEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    void CreateBookmarks();
    void CreateBookmarkOfPage(System::String bookmarkName, int32_t pageNumber);
    void CreateBookmarks(System::SharedPtr<Bookmark> bookmark);
    void CreateBookmarks(System::Drawing::Color color, bool boldFlag, bool italicFlag);
    void CreateBookmarkOfPage(System::ArrayPtr<System::String> bookmarkName, System::ArrayPtr<int32_t> pageNumber);
    void DeleteBookmarks();
    void DeleteBookmarks(System::String title);
    void ModifyBookmarks(System::String sTitle, System::String dTitle);
    System::SharedPtr<Bookmarks> ExtractBookmarks();
    System::SharedPtr<Bookmarks> ExtractBookmarks(bool upperLevel);
    System::SharedPtr<Bookmarks> ExtractBookmarks(System::String title);
    System::SharedPtr<Bookmarks> ExtractBookmarks(System::SharedPtr<Bookmark> bookmark);
    void ExtractBookmarksToHTML(System::String pdfFile, System::String cssFile);
    void ExportBookmarksToXML(System::String xmlFile);
    void ExportBookmarksToXML(System::SharedPtr<System::IO::Stream> stream);
    void ImportBookmarksWithXML(System::String xmlFile);
    void ImportBookmarksWithXML(System::SharedPtr<System::IO::Stream> stream);
    
    PdfBookmarkEditor();
    PdfBookmarkEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    static void ExportBookmarksToHtml(System::String inPdfFile, System::String outHtmlFile);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfBookmarkEditor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    static void ModifyBookmarks(System::SharedPtr<OutlineItemCollection> outline, System::String srcTitle, System::String destTitle);
    static void WriteHtmlOutlineHierarchy(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::SharedPtr<OutlineItemCollection> outline, System::String destPdf);
    static void WriteDestinationHtml(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::IAppointment> dest, System::String destPdf);
    static void WriteXmlOutlineHierarchy(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::SharedPtr<OutlineItemCollection> outline);
    static void WriteText(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::String title);
    static void WriteDestinationXml(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::IAppointment> dest);
    static void ReadXmlOutlineHierarcy(System::SharedPtr<System::Xml::XmlTextReader> reader, System::SharedPtr<Aspose::Pdf::Document> doc, System::SharedPtr<OutlineItemCollection> outline);
    static System::SharedPtr<Aspose::Pdf::InteractiveFeatures::IAppointment> ReadDestination(System::SharedPtr<System::Xml::XmlTextReader> reader, System::SharedPtr<Aspose::Pdf::Document> doc);
    static void AddChildItems(System::SharedPtr<Bookmarks> bms1, System::SharedPtr<Bookmarks> bms2);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfBookmarkEditor_h_

