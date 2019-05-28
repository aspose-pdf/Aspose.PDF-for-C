#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

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

namespace Aspose { namespace Pdf { namespace LicenseManagement { class VentureLicenseDecoder; } } }
namespace Aspose { namespace Pdf { namespace LicenseManagement { class VentureLicenser; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { class XImage; } }
namespace Aspose { namespace Pdf { enum class ExtractImageMode; } }
namespace Aspose { namespace Pdf { namespace Text { class TextSearchOptions; } } }
namespace Aspose { namespace Pdf { namespace LicenseManagement { class VentureLicense; } } }
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
    
    friend class Aspose::Pdf::LicenseManagement::VentureLicenseDecoder;
    friend class Aspose::Pdf::LicenseManagement::VentureLicenser;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    
public:

    /// <summary>
    /// Gets or sets start page in the page range where extracting operation will be performed.
    /// <example>
    /// <code lang="C#">
    /// PdfExtractor ext = new PdfExtractor();
    /// ext.BindBdf("sample.pdf");
    /// ext.StartPage = 2;
    /// ext.EndPage = 5;
    /// ext.ExtractText();
    /// </code>
    /// </example>
    /// </summary>
    int32_t get_StartPage();
    /// <summary>
    /// Gets or sets start page in the page range where extracting operation will be performed.
    /// <example>
    /// <code lang="C#">
    /// PdfExtractor ext = new PdfExtractor();
    /// ext.BindBdf("sample.pdf");
    /// ext.StartPage = 2;
    /// ext.EndPage = 5;
    /// ext.ExtractText();
    /// </code>
    /// </example>
    /// </summary>
    void set_StartPage(int32_t value);
    /// <summary>
    /// Gets or sets end page in the page range where extracting operation will be performed.
    /// <example>
    /// <code lang="C#">
    /// PdfExtractor ext = new PdfExtractor();
    /// ext.BindBdf("sample.pdf");
    /// ext.StartPage = 2;
    /// ext.EndPage = 3;
    /// ext.ExtractText();
    /// </code>
    /// </example>
    /// </summary>
    int32_t get_EndPage();
    /// <summary>
    /// Gets or sets end page in the page range where extracting operation will be performed.
    /// <example>
    /// <code lang="C#">
    /// PdfExtractor ext = new PdfExtractor();
    /// ext.BindBdf("sample.pdf");
    /// ext.StartPage = 2;
    /// ext.EndPage = 3;
    /// ext.ExtractText();
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
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    ///	extractor.BindPdf(@"D:\Text\text.pdf");
    /// extractor.ExtractTextMode = 1;
    ///	extractor.ExtractText();
    ///	extractor.GetText(@"D:\Text\text.txt");
    /// </code>
    /// </example>
    int32_t get_ExtractTextMode();
    /// <summary>
    /// Sets the mode for extract text's result.
    /// </summary>
    /// <value>0 is pure text mode and 1 is raw ordering mode. Default is 0.</value>
    /// <example>
    /// The example demonstratres the <see cref="ExtractTextMode"/> property usage in text extraction scenario.
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    ///	extractor.BindPdf(@"D:\Text\text.pdf");
    /// extractor.ExtractTextMode = 1;
    ///	extractor.ExtractText();
    ///	extractor.GetText(@"D:\Text\text.txt");
    /// </code>
    /// </example>
    void set_ExtractTextMode(int32_t value);
    /// <summary>
    /// Gets or sets text search options.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> get_TextSearchOptions();
    /// <summary>
    /// Gets or sets text search options.
    /// </summary>
    void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> value);
    /// <summary>
    /// Sets the mode for extract images process.
    /// </summary>
    /// <remarks>
    /// Default value is ExtractImageMode.DefinedInResources that extracts all images defined in resources.
    /// 
    /// To extract actually shown images ExtractImageMode.ActuallyUsed mode should be used.
    /// </remarks>
    Aspose::Pdf::ExtractImageMode get_ExtractImageMode();
    /// <summary>
    /// Sets the mode for extract images process.
    /// </summary>
    /// <remarks>
    /// Default value is ExtractImageMode.DefinedInResources that extracts all images defined in resources.
    /// 
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
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    ///	extractor.BindPdf(@"D:\Text\text.pdf");
    ///	extractor.ExtractText();
    ///	extractor.GetText(@"D:\Text\text.txt");
    /// </code>
    /// <code lang="VB.NET">
    ///	Dim extractor As PdfExtractor =  New PdfExtractor() 
    ///	extractor.BindPdf("D:\Text\text.pdf")
    ///	extractor.ExtractText()
    ///	extractor.GetText("D:\Text\text.txt")
    ///	</code>
    /// Second example demonstratres how to extract each page's text into one txt file.
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    /// extractor.BindPdf(TestPath + @"Aspose.Pdf.Kit.Pdf");
    /// extractor.ExtractText();
    /// String prefix = TestPath + @"Aspose.Pdf.Kit";
    /// String suffix = ".txt";
    /// int pageCount = 1;
    /// while (extractor.HasNextPageText())
    /// {
    ///     extractor.GetNextPageText(prefix + pageCount + suffix);
    ///     pageCount++;
    /// }
    ///	</code>
    /// <code lang="VB.NET">		
    /// Dim extractor As PdfExtractor =  New PdfExtractor() 
    /// extractor.BindPdf(TestPath + "Aspose.Pdf.Kit.Pdf")
    /// extractor.ExtractText()
    /// Dim prefix As String =  TestPath + "Aspose.Pdf.Kit" 
    /// Dim suffix As String =  ".txt" 
    /// Dim pageCount As Integer =  1 
    /// While extractor.HasNextPageText()
    ///     extractor.GetNextPageText(prefix + pageCount + suffix)
    ///     pageCount = pageCount + 1
    /// End While
    /// </code>
    /// </example>
    void ExtractText();
    /// <summary>
    /// Extracts text from a Pdf document using specified encoding.
    /// </summary>
    /// <example>
    /// First example demonstratres how to extract all the text from PDF file.
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    ///	extractor.BindPdf(@"D:\Text\text.pdf");
    ///	extractor.ExtractText(Encoding.Unicode);
    ///	extractor.GetText(@"D:\Text\text.txt");
    /// </code>
    /// <code lang="VB.NET">
    ///	Dim extractor As PdfExtractor =  New PdfExtractor() 
    ///	extractor.BindPdf("D:\Text\text.pdf")
    ///	extractor.ExtractText(Encoding.Unicode)
    ///	extractor.GetText("D:\Text\text.txt")
    ///	</code>
    /// Second example demonstratres how to extract each page's text into one txt file.
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    /// extractor.BindPdf(TestPath + @"Aspose.Pdf.Kit.Pdf");
    /// extractor.ExtractText(Encoding.Unicode);
    /// String prefix = TestPath + @"Aspose.Pdf.Kit";
    /// String suffix = ".txt";
    /// int pageCount = 1;
    /// while (extractor.HasNextPageText())
    /// {
    ///     extractor.GetNextPageText(prefix + pageCount + suffix);
    ///     pageCount++;
    /// }
    ///	</code>
    /// <code lang="VB.NET">		
    /// Dim extractor As PdfExtractor =  New PdfExtractor() 
    /// extractor.BindPdf(TestPath + "Aspose.Pdf.Kit.Pdf")
    /// extractor.ExtractText(Encoding.Unicode)
    /// Dim prefix As String =  TestPath + "Aspose.Pdf.Kit" 
    /// Dim suffix As String =  ".txt" 
    /// Dim pageCount As Integer =  1 
    /// While extractor.HasNextPageText()
    ///     extractor.GetNextPageText(prefix + pageCount + suffix)
    ///     pageCount = pageCount + 1
    /// End While
    /// </code>
    /// </example>
    /// <param name="encoding">The encoding of the extracted text.</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
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
    /// <code lang="C#">
    /// PdfExtractor ext = new PdfExtractor();
    /// ext.BindPdf("sample.pdf");
    /// </code>
    /// </example>
    virtual void BindPdf(System::String inputFile);
    /// <summary>
    /// Binds PDF document from stream.
    /// </summary>
    /// <param name="inputStream">Stream containing PDF document data</param>
    /// <example>
    /// <code lang="C#">
    /// PdfExtractor ext = new PdfExtractor();
    /// Stream stream = new FileStream("sample.pdf", FileMode.Open, FileAccess.Read);
    /// ext.BindPdf(stream);
    /// </code>
    /// </example>
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> inputStream);
    /// <summary>
    /// Extract images from PDF file.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    ///	extractor.BindPdf("sample.pdf");
    ///	extractor.ExtractImage();
    ///	int i = 1;
    ///	while (extractor.HasNextImage())
    ///	{
    ///	    extractor.GetNextImage("image-" + i +".pdf");
    ///	}
    /// </code>
    /// </example>
    void ExtractImage();
    /// <summary>
    /// Checks if more images are accessible in PDF document. Note: ExtractImage must be called before using of this method.
    /// </summary>
    /// <returns>Trues if more images are accessible</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    ///	extractor.BindPdf("sample.pdf");
    ///	extractor.ExtractImage();
    ///	int i = 1;
    ///	while (extractor.HasNextImage())
    ///	{
    ///	    extractor.GetNextImage("image-" + i +".pdf");
    ///	}
    /// </code>
    /// </example>
    bool HasNextImage();
    /// <summary>
    /// Retreives next image from PDF document. Note: ExtractImage must be called before using of this method.
    /// </summary>
    /// <param name="outputFile">File where image will be stored</param>
    /// <returns>True is image is successfully extracted</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    ///	extractor.BindPdf("sample.pdf");
    ///	extractor.ExtractImage();
    ///	int i = 1;
    ///	while (extractor.HasNextImage())
    ///	{
    ///	    extractor.GetNextImage("image-" + i +".pdf");
    ///	}
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
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    ///	extractor.BindPdf(TestSettings.GetInputFile("sample.pdf"));
    ///	extractor.ExtractAttachment();
    ///	IList attachments = extractor.GetAttachNames();
    ///	foreach (string name in attachments)
    ///		Console.WriteLine(name);
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
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    /// extractor.BindPdf(TestPath + @"Aspose.Pdf.Kit.Pdf");
    /// extractor.ExtractText(Encoding.Unicode);
    /// String prefix = TestPath + @"Aspose.Pdf.Kit";
    /// String suffix = ".txt";
    /// int pageCount = 1;
    /// while (extractor.HasNextPageText())
    /// {
    ///     extractor.GetNextPageText(prefix + pageCount + suffix);
    ///     pageCount++;
    /// }
    ///	</code>
    /// <code lang="VB.NET">		
    /// Dim extractor As PdfExtractor =  New PdfExtractor() 
    /// extractor.BindPdf(TestPath + "Aspose.Pdf.Kit.Pdf")
    /// extractor.ExtractText(Encoding.Unicode)
    /// Dim prefix As String =  TestPath + "Aspose.Pdf.Kit" 
    /// Dim suffix As String =  ".txt" 
    /// Dim pageCount As Integer =  1 
    /// While extractor.HasNextPageText()
    ///     extractor.GetNextPageText(prefix + pageCount + suffix)
    ///     pageCount = pageCount + 1
    /// End While
    /// </code>
    /// </example>
    /// <returns>Can get more texts or not, true is can, or false.</returns>
    bool HasNextPageText();
    /// <summary>
    /// Saves one page's text to file.
    /// </summary>
    /// <example>
    /// The example demonstratres the GetNextPageText method usage in text extraction scenario.
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    /// extractor.BindPdf(TestPath + @"Aspose.Pdf.Kit.Pdf");
    /// extractor.ExtractText(Encoding.Unicode);
    /// String prefix = TestPath + @"Aspose.Pdf.Kit";
    /// String suffix = ".txt";
    /// int pageCount = 1;
    /// while (extractor.HasNextPageText())
    /// {
    ///     extractor.GetNextPageText(prefix + pageCount + suffix);
    ///     pageCount++;
    /// }
    ///	</code>
    /// <code lang="VB.NET">		
    /// Dim extractor As PdfExtractor =  New PdfExtractor() 
    /// extractor.BindPdf(TestPath + "Aspose.Pdf.Kit.Pdf")
    /// extractor.ExtractText(Encoding.Unicode)
    /// Dim prefix As String =  TestPath + "Aspose.Pdf.Kit" 
    /// Dim suffix As String =  ".txt" 
    /// Dim pageCount As Integer =  1 
    /// While extractor.HasNextPageText()
    ///     extractor.GetNextPageText(prefix + pageCount + suffix)
    ///     pageCount = pageCount + 1
    /// End While
    /// </code>
    /// </example>
    /// <param name="outputFile">The file path and name to save the text.</param>
    void GetNextPageText(System::String outputFile);
    /// <summary>
    /// Saves one page's text to stream.
    /// </summary>
    /// <example>
    /// The example demonstratres the <see cref="GetNextPageText"/> method usage in text extraction scenario.
    /// <code lang="C#">
    /// PdfExtractor extractor = new PdfExtractor();
    /// extractor.BindPdf(TestPath + @"Aspose.Pdf.Kit.Pdf");
    /// extractor.ExtractText(Encoding.Unicode);
    /// String prefix = TestPath + @"Aspose.Pdf.Kit";
    /// String suffix = ".txt";
    /// int pageCount = 1;
    /// while (extractor.HasNextPageText())
    /// {
    ///     FileStream fs = new FileStream(prefix + pageCount + suffix, FileMode.Create);
    ///     extractor.GetNextPageText(prefix + pageCount + suffix);
    ///     fs.Close();
    ///     pageCount++;
    /// }
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
    /// <code>
    /// [C#]
    /// PdfExtractor extractor = new PdfExtractor();     
    ///	extractor.BindPdf(path + "Attach.pdf");
    ///	extractor.ExtractAttachment();
    ///	IList names = extractor.GetAttachNames();
    ///	MemoryStream[] tempStreams =  extractor.GetAttachment();
    ///	for (int i=0; i&lt;tempStreams.Length; i++)
    ///	{
    ///		string name = (string)names[i];
    ///		FileStream fs = new FileStream(path + name,System.IO.FileMode.Create);
    ///		byte[] tempBytes = new byte[4096];
    ///		tempStreams[i].Position = 0;
    /// 
    ///		for (; ; )
    ///		{
    ///			int numOfBytes = tempStreams[i].Read(tempBytes, 0, 4096);
    ///			if (numOfBytes &lt; 1)
    ///			break;
    ///			fs.Write(tempBytes, 0, numOfBytes);
    ///		}
    ///		fs.Close();
    ///	}
    ///	
    /// [Visual Basic]
    /// Dim extractor As PdfExtractor =  New PdfExtractor() 
    ///	extractor.BindPdf(path + "Attach.pdf")
    ///	extractor.ExtractAttachment()
    ///	extractor.GetAttachment(path)
    /// Dim names As IList =  extractor.GetAttachNames() 
    /// Dim tempStreams() As MemoryStream =  extractor.GetAttachment() 
    /// for(Integer i = 0 i&lt;tempStreams.Length i++)
    /// {
    /// 	Dim name As String = CType(names(i), String)
    /// 	Dim fs As FileStream =  New FileStream(path + name,System.IO.FileMode.Create) 
    /// 	Dim tempBytes() As Byte =  New Byte(4096) {} 
    /// 	tempStreams(i).Position = 0
    /// 
    /// 	for()
    /// 	{
    /// 		Dim numOfBytes As Integer =  tempStreams(i).Read(tempBytes,0,4096) 
    /// 		If numOfBytes &lt; 1 Then
    /// 			break
    /// 		End If
    /// 		fs.Write(tempBytes, 0, numOfBytes)
    /// 	}
    /// 	fs.Close()
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

    /// <summary>
    /// Gets licensed state of the system. Returns true is system works in licensed mode and false otherwise. 
    /// </summary>
    bool get__IsObjectLicensed();
    
    void SetVentureLicense(System::SharedPtr<Aspose::Pdf::LicenseManagement::VentureLicense> license);
    System::SharedPtr<Aspose::Pdf::LicenseManagement::VentureLicense> GetVentureLicense();
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
    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> _textSearchOptions;
    int32_t _resolution;
    System::String _password;
    System::SharedPtr<System::Text::Encoding> _encoding;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> uniqueObjectIDs;
    System::SharedPtr<Aspose::Pdf::LicenseManagement::VentureLicense> _ventureLicense;
    
    void WriteAttachment(System::SharedPtr<FileSpecification> file, System::String outputPath);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> GetAttachment(System::String outputPath, bool fileOut);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FileSpecification>>> GetAllAttachments();
    void InitPageBounds();
    bool IsArabic(char16_t chr);
    bool IsHebriew(char16_t chr);
    void Reset();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


