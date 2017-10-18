#ifndef _Aspose_Pdf_Facades_PdfFileStamp_h_
#define _Aspose_Pdf_Facades_PdfFileStamp_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !(NET4CP || NET35CP) 


// C# preprocessor directive: #endif 


#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/array.h>
#include <cstdint>

#include "system/dummy_classes.h"

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { enum class PdfFormat; } }
namespace Aspose { namespace Pdf { enum class ContentDisposition; } }
namespace Aspose { namespace Pdf { class SaveOptions; } }
namespace Aspose { namespace Pdf { namespace Facades { class Stamp; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormattedText; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Stamp; } }
namespace Aspose { namespace Pdf { namespace Facades { enum class BlendingColorSpace; } } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class for adding stamps (watermark or background) to PDF files.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfFileStamp FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfFileStamp ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static const int32_t PosBottomMiddle;
    static const int32_t PosBottomRight;
    static const int32_t PosUpperRight;
    static const int32_t PosSidesRight;
    static const int32_t PosUpperMiddle;
    static const int32_t PosBottomLeft;
    static const int32_t PosSidesLeft;
    static const int32_t PosUpperLeft;
    
    bool get_OptimizeSize();
    void set_OptimizeSize(bool value);
    bool get_KeepSecurity();
    void set_KeepSecurity(bool value);
    System::String get_InputFile();
    void set_InputFile(System::String value);
    System::SharedPtr<System::IO::Stream> get_InputStream();
    void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    System::String get_OutputFile();
    void set_OutputFile(System::String value);
    System::SharedPtr<System::IO::Stream> get_OutputStream();
    void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    float get_PageNumberRotation();
    void set_PageNumberRotation(float value);
    void set_ConvertTo(PdfFormat value);
    float get_PageHeight();
    float get_PageWidth();
    int32_t get_StartingNumber();
    void set_StartingNumber(int32_t value);
    int32_t get_StampId();
    void set_StampId(int32_t value);
    Aspose::Pdf::ContentDisposition get_ContentDisposition();
    void set_ContentDisposition(Aspose::Pdf::ContentDisposition value);
    System::SharedPtr<System::Web::HttpResponse> get_Response();
    void set_Response(System::SharedPtr<System::Web::HttpResponse> value);
    System::SharedPtr<Aspose::Pdf::SaveOptions> get_SaveOptions();
    void set_SaveOptions(System::SharedPtr<Aspose::Pdf::SaveOptions> value);
    System::String get_AttachmentName();
    void set_AttachmentName(System::String value);
    
    PdfFileStamp(System::String inputFile, System::String outputFile);
    PdfFileStamp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    PdfFileStamp(System::String inputFile, System::String outputFile, bool keepSecurity);
    PdfFileStamp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, bool keepSecurity);
    
    virtual void Close();
    virtual void Save(System::String destFile);
    virtual void Save(System::SharedPtr<System::IO::Stream> destStream);
    void AddStamp(System::SharedPtr<Stamp> stamp);
    void AddPageNumber(System::String formatString);
    void AddPageNumber(System::SharedPtr<FormattedText> formattedText);
    void AddPageNumber(System::String formatString, int32_t position, float leftMargin, float rightMargin, float topMargin, float bottomMargin);
    void AddPageNumber(System::String formatString, float x, float y);
    void AddPageNumber(System::SharedPtr<FormattedText> formattedText, int32_t position, float leftMargin, float rightMargin, float topMargin, float bottomMargin);
    void AddPageNumber(System::SharedPtr<FormattedText> formattedText, float x, float y);
    void AddHeader(System::SharedPtr<FormattedText> formattedText, float topMargin);
    void AddHeader(System::SharedPtr<FormattedText> formattedText, float topMargin, float leftMargin, float rightMargin);
    void AddHeader(System::String imageFile, float topMargin);
    void AddHeader(System::String imageFile, float topMargin, float leftMargin, float rightMargin);
    void AddHeader(System::SharedPtr<System::IO::Stream> imageStream, float topMargin);
    void AddHeader(System::SharedPtr<System::IO::Stream> inputStream, float topMargin, float leftMargin, float rightMargin);
    void AddFooter(System::SharedPtr<FormattedText> formattedText, float bottomMargin);
    void AddFooter(System::SharedPtr<FormattedText> formattedText, float bottomMargin, float leftMargin, float rightMargin);
    void AddFooter(System::String imageFile, float bottomMargin);
    void AddFooter(System::String imageFile, float bottomMargin, float leftMargin, float rightMargin);
    void AddFooter(System::SharedPtr<System::IO::Stream> imageStream, float bottomMargin);
    void AddFooter(System::SharedPtr<System::IO::Stream> imageStream, float bottomMargin, float leftMargin, float rightMargin);
    void AddPageNumber(System::String formatString, int32_t position);
    void AddPageNumber(System::SharedPtr<FormattedText> formattedText, int32_t position);
    
    PdfFileStamp();
    PdfFileStamp(System::SharedPtr<Aspose::Pdf::Document> document);
    PdfFileStamp(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFile);
    PdfFileStamp(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> outputStream);
    PdfFileStamp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    PdfFileStamp(System::String inputFile, System::SharedPtr<System::Web::HttpResponse> response);
    
protected:

    void ApplyStamp(System::SharedPtr<Stamp> stamp);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfFileStamp"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::IO::Stream> _inputStream;
    System::SharedPtr<System::IO::Stream> _outputStream;
    System::String _inputFileName;
    System::String _outputFileName;
    double _pageNumberRotation;
    int32_t _startingNumber;
    bool _keepSecurity;
    PdfFormat _convertTo;
    bool _executeConvert;
    Aspose::Pdf::ContentDisposition _contentDisposition;
    System::SharedPtr<Aspose::Pdf::SaveOptions> _saveOptions;
    System::String _attachmentName;
    bool _optimizeSize;
    int32_t _stampId;
    System::SharedPtr<System::Web::HttpResponse> _outputResponse;
    
    void PrevClose();
    void PreSave();
    void ApplyStamp(System::SharedPtr<Aspose::Pdf::Stamp> stamp);
    void ApplyStamp(System::SharedPtr<Aspose::Pdf::Stamp> stamp, int32_t pageNumber);
    void updateGroupColorSpace(BlendingColorSpace colorSpace, System::ArrayPtr<int32_t> pages);
    static void UpdateGroupColorSpace(BlendingColorSpace colorSpace, System::SharedPtr<Page> page);
    void TranslatePosition(int32_t position, System::SharedPtr<Aspose::Pdf::Stamp> stamp);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfFileStamp_h_

