#ifndef _Aspose_Pdf_Facades_PdfExtractor_h_
#define _Aspose_Pdf_Facades_PdfExtractor_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets or sets start page in the page range where extracting operation will be performed.
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> ext = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// ext->BindPdf(L"sample.pdf");
    /// ext->set_StartPage(2);
    /// ext->set_EndPage(5);
    /// ext->ExtractText();
    /// </code>
    /// </example>
    /// </summary>
    int32_t get_StartPage();
    /// <summary>
    /// Gets or sets start page in the page range where extracting operation will be performed.
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> ext = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// ext->BindPdf(L"sample.pdf");
    /// ext->set_StartPage(2);
    /// ext->set_EndPage(5);
    /// ext->ExtractText();
    /// </code>
    /// </example>
    /// </summary>
    void set_StartPage(int32_t value);
    /// <summary>
    /// Gets or sets end page in the page range where extracting operation will be performed.
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> ext = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// ext->BindPdf(L"sample.pdf");
    /// ext->set_StartPage(2);
    /// ext->set_EndPage(3);
    /// ext->ExtractText();
    /// </code>
    /// </example>
    /// </summary>
    int32_t get_EndPage();
    /// <summary>
    /// Gets or sets end page in the page range where extracting operation will be performed.
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> ext = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// ext->BindPdf(L"sample.pdf");
    /// ext->set_StartPage(2);
    /// ext->set_EndPage(3);
    /// ext->ExtractText();
    /// </code>
    /// </example>
    /// </summary>
    void set_EndPage(int32_t value);
    /// <summary>
    /// Sets the mode for extract text's result.
    /// </summary>
    /// <value>0 is pure text mode and 1 is raw ordering mode. Default is 0.</value>
    /// <example>
    /// The example demonstratres the <see cref="ExtractTextMode"/> property usage in text extraction scenario.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> extractor = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// extractor->BindPdf(L"D:\\Text\\text.pdf");
    /// extractor->set_ExtractTextMode(1);
    /// extractor->ExtractText();
    /// extractor->GetText(L"D:\\Text\\text.txt");
    /// </code>
    /// </example>
    int32_t get_ExtractTextMode();
    /// <summary>
    /// Sets the mode for extract text's result.
    /// </summary>
    /// <value>0 is pure text mode and 1 is raw ordering mode. Default is 0.</value>
    /// <example>
    /// The example demonstratres the <see cref="ExtractTextMode"/> property usage in text extraction scenario.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> extractor = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// extractor->BindPdf(L"D:\\Text\\text.pdf");
    /// extractor->set_ExtractTextMode(1);
    /// extractor->ExtractText();
    /// extractor->GetText(L"D:\\Text\\text.txt");
    /// </code>
    /// </example>
    void set_ExtractTextMode(int32_t value);
    /// <summary>
    /// Gets or sets text search options.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> get_TextSearchOptions();
    /// <summary>
    /// Gets or sets text search options.
    /// </summary>
    void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> value);
    /// <summary>
    /// Sets the mode for extract images process.
    /// </summary>
    /// <remarks>
    /// Default value is ExtractImageMode.DefinedInResources that extracts all images defined in resources.
    /// To extract actually shown images ExtractImageMode.ActuallyUsed mode should be used.
    /// </remarks>
    Aspose::Pdf::ExtractImageMode get_ExtractImageMode();
    /// <summary>
    /// Sets the mode for extract images process.
    /// </summary>
    /// <remarks>
    /// Default value is ExtractImageMode.DefinedInResources that extracts all images defined in resources.
    /// To extract actually shown images ExtractImageMode.ActuallyUsed mode should be used.
    /// </remarks>
    void set_ExtractImageMode(Aspose::Pdf::ExtractImageMode value);
    /// <summary>
    /// Is true when text has hebriew or arabic symbols. This case must be specially considered because
    /// string functions change their behaviour and start process text from right to left (except numbers 
    /// and other non text chars).
    /// </summary>
    bool get_IsBidi();
    /// <summary>
    /// Set or gets resolution for extracted images.
    /// Default value is 150.
    /// Images which have greater resolution value are more clear.
    /// However increasing resolution value results in increasing time and memory needed to extract images.
    /// Usually to get clear image it's enough to set resolution to 150 or 300.
    /// </summary>
    int32_t get_Resolution();
    /// <summary>
    /// Set or gets resolution for extracted images.
    /// Default value is 150.
    /// Images which have greater resolution value are more clear.
    /// However increasing resolution value results in increasing time and memory needed to extract images.
    /// Usually to get clear image it's enough to set resolution to 150 or 300.
    /// </summary>
    void set_Resolution(int32_t value);
    /// <summary>
    /// Gets or sets input file's password.
    /// </summary>
    System::String get_Password();
    /// <summary>
    /// Gets or sets input file's password.
    /// </summary>
    void set_Password(System::String value);
    
    /// <summary>
    /// Extracts text from a Pdf document using Unicode encoding.
    /// </summary>
    /// <example>
    /// First example demonstratres how to extract all the text from PDF file.
    /// <code></code>
    /// </example>
    void ExtractText();
    /// <summary>
    /// Extracts text from a Pdf document using specified encoding.
    /// </summary>
    /// <example>
    /// First example demonstratres how to extract all the text from PDF file.
    /// <code></code>
    /// </example>
    /// <param name="encoding">The encoding of the extracted text.</param>
    void ExtractText(System::SharedPtr<System::Text::Encoding> encoding);
    /// <summary>
    /// Saves text to file. see also:<see cref="ExtractText"/> 
    /// </summary>
    /// <param name="outputFile">The file path and name to save the text.</param>
    void GetText(System::String outputFile);
    /// <summary>
    /// Saves text to stream. see also:<see cref="ExtractText"/> 
    /// </summary>
    /// <param name="outputStream">The stream to save the text.</param>
    void GetText(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Bind input PDF file.
    /// </summary>
    /// <param name="inputFile">PDF fiel to bind</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> ext = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// ext->BindPdf(L"sample.pdf");
    /// </code>
    /// </example>
    virtual void BindPdf(System::String inputFile);
    /// <summary>
    /// Binds PDF document from stream.
    /// </summary>
    /// <param name="inputStream">Stream containing PDF document data</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> ext = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// System::SharedPtr<System::IO::Stream> stream = System::MakeObject<System::IO::FileStream>(L"sample.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// ext->BindPdf(stream);
    /// </code>
    /// </example>
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> inputStream);
    /// <summary>
    /// Extract images from PDF file.
    /// </summary>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> extractor = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// extractor->BindPdf(L"sample.pdf");
    /// extractor->ExtractImage();
    /// int32_t i = 1;
    /// while (extractor->HasNextImage())
    /// {
    ///     extractor->GetNextImage(System::String(L"image-") + i + L".pdf");
    /// }
    /// </code>
    /// </example>
    void ExtractImage();
    /// <summary>
    /// Checks if more images are accessible in PDF document. Note: ExtractImage must be called before using of this method.
    /// </summary>
    /// <returns>Trues if more images are accessible</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> extractor = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// extractor->BindPdf(L"sample.pdf");
    /// extractor->ExtractImage();
    /// int32_t i = 1;
    /// while (extractor->HasNextImage())
    /// {
    ///     extractor->GetNextImage(System::String(L"image-") + i + L".pdf");
    /// }
    /// </code>
    /// </example>
    bool HasNextImage();
    /// <summary>
    /// Retreives next image from PDF document. Note: ExtractImage must be called before using of this method.
    /// </summary>
    /// <param name="outputFile">File where image will be stored</param>
    /// <returns>True is image is successfully extracted</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> extractor = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// extractor->BindPdf(L"sample.pdf");
    /// extractor->ExtractImage();
    /// int32_t i = 1;
    /// while (extractor->HasNextImage())
    /// {
    ///     extractor->GetNextImage(System::String(L"image-") + i + L".pdf");
    /// }
    /// </code>
    /// </example>
    bool GetNextImage(System::String outputFile);
    /// <summary>
    /// Retreives next image from PDF document with given image format. Note: ExtractImage must be called before using of this method.
    /// </summary>
    /// <param name="outputFile">File where image will be stored</param>
    /// <param name="format">The format of the image.</param>
    /// <returns>True is image is successfully extracted</returns>
    bool GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Retreive next image from PDF file and stores it into stream with given image format.
    /// </summary>
    /// <param name="outputStream">Stream where image data will be saved</param>
    /// <param name="format">The format of the image.</param>
    /// <returns>True in case the image is successfully extracted.</returns>
    bool GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Retreive next image from PDF file and stores it into stream.
    /// </summary>
    /// <param name="outputStream">Stream where image data will be saved</param>
    /// <returns>True in case the image is successfully extracted.</returns>
    bool GetNextImage(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Returns list of attachments in PDF file. Note: ExtractAttachments must be called befor using this method.
    /// </summary>
    /// <returns>List of attachments</returns>
    /// <example>
    /// Example demonstrates how to extract attachment names form PDF file.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> extractor = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// extractor->BindPdf(TestSettings::GetInputFile(L"sample.pdf"));
    /// extractor->ExtractAttachment();
    /// System::SharedPtr<System::Collections::Generic::IList<System::String>> attachments = extractor->GetAttachNames();
    /// auto name_enumerator = (attachments)->GetEnumerator();
    /// decltype(name_enumerator->get_Current()) name;
    /// while (name_enumerator->MoveNext() && (name = name_enumerator->get_Current(), true))
    /// {
    ///     System::Console::WriteLine(name);
    /// }
    /// </code>
    /// </example>
    System::SharedPtr<System::Collections::Generic::IList<System::String>> GetAttachNames();
    /// <summary>
    /// Extracts attachments from a Pdf document.
    /// </summary>
    void ExtractAttachment();
    /// <summary>
    /// Extracts attachment to PDF file by attachment name.
    /// </summary>
    /// <param name="attachmentFileName">Name of attachment to extract</param>
    void ExtractAttachment(System::String attachmentFileName);
    /// <summary>
    /// Stores attachment into file.
    /// </summary>
    /// <param name="outputPath">
    /// Directory path where attachment(s) will be stored.
    /// Null or empty string means attachment(s) will be placed in the application directory.
    /// </param>
    void GetAttachment(System::String outputPath);
    /// <summary>
    /// Indicates that whether can get more texts or not.
    /// </summary>
    /// <example>
    /// The example demonstratres the <see cref="HasNextPageText"/> property usage in text extraction scenario.
    /// <code></code>
    /// </example>
    /// <returns>Can get more texts or not, true is can, or false.</returns>
    bool HasNextPageText();
    /// <summary>
    /// Saves one page's text to file.
    /// </summary>
    /// <example>
    /// The example demonstratres the GetNextPageText method usage in text extraction scenario.
    /// <code></code>
    /// </example>
    /// <param name="outputFile">The file path and name to save the text.</param>
    void GetNextPageText(System::String outputFile);
    /// <summary>
    /// Saves one page's text to stream.
    /// </summary>
    /// <example>
    /// The example demonstratres the <see cref="GetNextPageText"/> method usage in text extraction scenario.
    /// 
    ///	<code>
    ///	System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> extractor = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    ///	extractor->BindPdf(TestPath + L"Aspose.Pdf.Kit.Pdf");
    ///	extractor->ExtractText(System::Text::Encoding::get_Unicode());
    ///	System::String prefix = TestPath + L"Aspose.Pdf.Kit";
    ///	System::String suffix = L".txt";
    ///	int32_t pageCount = 1;
    ///	while (extractor->HasNextPageText())
    ///	{
    ///	    System::SharedPtr<System::IO::FileStream> fs = System::MakeObject<System::IO::FileStream>(prefix + pageCount + suffix, System::IO::FileMode::Create);
    ///	    extractor->GetNextPageText(prefix + pageCount + suffix);
    ///	    fs->Close();
    ///	    pageCount++;
    ///	}
    ///	</code>
    /// </example>
    /// <param name="outputStream">The stream to save the text.</param>
    void GetNextPageText(System::SharedPtr<System::IO::Stream> outputStream);
    
    /// <summary>
    /// Initializes new <see cref="PdfExtractor"/> object.
    /// </summary>
    PdfExtractor();
    /// <summary>
    /// Initializes new <see cref="PdfExtractor"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    PdfExtractor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Saves text to stream. see also:<see cref="ExtractText"/> 
    /// </summary>
    /// <param name="outputStream">The stream to save the text.</param>
    /// <param name="filterNotAscii">If this parameter is true all Not ASCII simbols will be removed</param>
    void GetText(System::SharedPtr<System::IO::Stream> outputStream, bool filterNotAscii);
    /// <summary>
    /// Saves all the attachment file to streams.
    /// </summary>
    /// <returns>The stream array of the attachment file in the pdf document.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfExtractor> extractor = System::MakeObject<Aspose::Pdf::Facades::PdfExtractor>();
    /// extractor->BindPdf(path + L"Attach.pdf");
    /// extractor->ExtractAttachment();
    /// System::SharedPtr<System::Collections::Generic::IList<System::String>> names = extractor->GetAttachNames();
    /// System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> tempStreams = extractor->GetAttachment();
    /// for (int32_t i = 0; i<tempStreams->get_Length(); i++)
    /// {
    ///     System::String name = System::StaticCast<System::String>(names->idx_get(i));
    ///     System::SharedPtr<System::IO::FileStream> fs = System::MakeObject<System::IO::FileStream>(path + name, System::IO::FileMode::Create);
    ///     System::ArrayPtr<uint8_t> tempBytes = System::MakeArray<uint8_t>(4096, 0);
    ///     tempStreams[i]->set_Position(0);
    ///     for (; ; )
    ///     {
    ///         int32_t numOfBytes = tempStreams[i]->Read(tempBytes, 0, 4096);
    ///         if (numOfBytes < 1)
    ///         {
    ///             break;
    ///         }
    ///         fs->Write(tempBytes, 0, numOfBytes);
    ///     }
    ///     fs->Close();
    /// }
    /// </code>
    /// </example>
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> GetAttachment();
    /// <summary>
    /// Gets the list of attachments.
    /// </summary>
    /// <returns>Returns a List&lt;FileSpecificatio&gt;>.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FileSpecification>>> GetAttachmentInfo();
    
protected:

    static void InitXFormImages(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<XForm> xform);
    void InitPageImages(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<Aspose::Pdf::Document> document, int32_t page, int32_t endPage);
    static void InitPageXFormImages_ActuallyUsed(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<Aspose::Pdf::Document> document, int32_t page, int32_t endPage);
    void InitPageXFormImages_DefinedInResources(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<Aspose::Pdf::Document> document, int32_t page, int32_t endPage);
    System::Object::shared_members_type GetSharedMembers() override;
    
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

