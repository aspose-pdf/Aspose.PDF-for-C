#ifndef _Aspose_Pdf_Facades_PdfExtractor_h_
#define _Aspose_Pdf_Facades_PdfExtractor_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/io/memory_stream.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <drawing/imaging/image_format.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { class XImage; } }
namespace Aspose { namespace Pdf { enum class ExtractImageMode; } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextSearchOptions; } } } }
namespace Aspose { namespace Pdf { class FileSpecification; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class for extracting images and text from PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfExtractor FINAL : public Aspose::Pdf::Facades::Facade
{
    typedef PdfExtractor ThisType;
    typedef Aspose::Pdf::Facades::Facade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    
public:

    int32_t get_StartPage();
    void set_StartPage(int32_t value);
    int32_t get_EndPage();
    void set_EndPage(int32_t value);
    int32_t get_ExtractTextMode();
    void set_ExtractTextMode(int32_t value);
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> get_TextSearchOptions();
    void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> value);
    Aspose::Pdf::ExtractImageMode get_ExtractImageMode();
    void set_ExtractImageMode(Aspose::Pdf::ExtractImageMode value);
    bool get_IsBidi();
    int32_t get_Resolution();
    void set_Resolution(int32_t value);
    System::String get_Password();
    void set_Password(System::String value);
    
    void ExtractText();
    void ExtractText(System::SharedPtr<System::Text::Encoding> encoding);
    void GetText(System::String outputFile);
    void GetText(System::SharedPtr<System::IO::Stream> outputStream);
    virtual void BindPdf(System::String inputFile);
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> inputStream);
    void ExtractImage();
    bool HasNextImage();
    bool GetNextImage(System::String outputFile);
    bool GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    bool GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    bool GetNextImage(System::SharedPtr<System::IO::Stream> outputStream);
    System::SharedPtr<System::Collections::Generic::IList<System::String>> GetAttachNames();
    void ExtractAttachment();
    void ExtractAttachment(System::String attachmentFileName);
    void GetAttachment(System::String outputPath);
    bool HasNextPageText();
    void GetNextPageText(System::String outputFile);
    void GetNextPageText(System::SharedPtr<System::IO::Stream> outputStream);
    
    PdfExtractor();
    PdfExtractor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    void GetText(System::SharedPtr<System::IO::Stream> outputStream, bool filterNotAscii);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> GetAttachment();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FileSpecification>>> GetAttachmentInfo();
    
protected:

    static void InitXFormImages(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<XForm> xform);
    void InitPageImages(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<Aspose::Pdf::Document> document, int32_t page, int32_t endPage);
    static void InitPageXFormImages_ActuallyUsed(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<Aspose::Pdf::Document> document, int32_t page, int32_t endPage);
    void InitPageXFormImages_DefinedInResources(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<Aspose::Pdf::Document> document, int32_t page, int32_t endPage);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfExtractor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t _startPage;
    int32_t _endPage;
    int32_t _currentPage;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> _images;
    int32_t _currentImage;
    int32_t _currentNoNameAttachment;
    System::String _attachmentFileName;
    System::SharedPtr<System::Collections::Generic::List<System::String>> _pageTexts;
    int32_t _extractTextMode;
    Aspose::Pdf::ExtractImageMode _extractImageMode;
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> _textSearchOptions;
    int32_t _resolution;
    System::String _password;
    System::SharedPtr<System::Text::Encoding> _encoding;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> uniqueObjectIDs;
    
    void WriteAttachment(System::SharedPtr<FileSpecification> file, System::String outputPath);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> GetAttachment(System::String outputPath, bool fileOut);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FileSpecification>>> GetAllAttachments();
    void InitPageBounds();
    bool IsArabic(wchar_t chr);
    bool IsHebriew(wchar_t chr);
    void Reset();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfExtractor_h_

