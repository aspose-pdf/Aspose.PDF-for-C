#ifndef _Aspose_Pdf_Facades_PdfFileMend_h_
#define _Aspose_Pdf_Facades_PdfFileMend_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/array.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { enum class WordWrapMode; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class PositioningMode; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { class CompositingParameters; } }
namespace Aspose { namespace Pdf { namespace Facades { class FormattedText; } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class for adding texts and images on the pages of existing PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfFileMend FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfFileMend ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<System::IO::Stream> get_InputStream();
    void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    System::SharedPtr<System::IO::Stream> get_OutputStream();
    void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    System::String get_InputFile();
    void set_InputFile(System::String value);
    System::String get_OutputFile();
    void set_OutputFile(System::String value);
    void set_IsWordWrap(bool value);
    WordWrapMode get_WrapMode();
    void set_WrapMode(WordWrapMode value);
    PositioningMode get_TextPositioningMode();
    void set_TextPositioningMode(PositioningMode value);
    
    bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    bool AddImage(System::String imageName, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    bool AddImage(System::String imageName, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    bool AddImage(System::String imageName, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    bool AddImage(System::String imageName, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    bool AddText(System::SharedPtr<FormattedText> text, int32_t pageNum, float lowerLeftX, float lowerLeftY);
    bool AddText(System::SharedPtr<FormattedText> text, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    bool AddText(System::SharedPtr<FormattedText> text, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    virtual void Close();
    
    PdfFileMend();
    PdfFileMend(System::String inputFileName, System::String outputFileName);
    PdfFileMend(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    PdfFileMend(System::SharedPtr<Aspose::Pdf::Document> document);
    PdfFileMend(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFileName);
    PdfFileMend(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> destStream);
    
    virtual void Save(System::String destFile);
    virtual void Save(System::SharedPtr<System::IO::Stream> destStream);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfFileMend"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _inFileName;
    System::String _outFileName;
    System::SharedPtr<System::IO::Stream> _inStream;
    System::SharedPtr<System::IO::Stream> _outStream;
    bool _bWordWrap;
    WordWrapMode _wrapMode;
    PositioningMode _mode;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::SharedPtr<Aspose::Pdf::Text::TextBuilder>>> _textBuilders;
    static const int32_t MAGIC_DELTA_HEIGHT;
    static const int32_t FONT_LINEDELTA_HEIGHT;
    
    void PrevClose();
    void DoMend();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfFileMend_h_

