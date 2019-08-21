#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !(NET40CP || NET35CP || NETCORE) 


// C# preprocessor directive: #endif 


#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/dummy_classes.h>
#include <system/array.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { enum class PdfFormat; } }
namespace Aspose { namespace Pdf { enum class ContentDisposition; } }
namespace Aspose { namespace Pdf { class SaveOptions; } }
namespace Aspose { namespace Pdf { enum class NumberingStyle; } }
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
    
    /// <summary>
    /// Gets or sets optimization flag. Equal resource streams in resultant file are merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    bool get_OptimizeSize();
    /// <summary>
    /// Gets or sets optimization flag. Equal resource streams in resultant file are merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    void set_OptimizeSize(bool value);
    /// <summary>
    /// Keeps security if true. (This feature will be implemented in next versions).
    /// </summary>
    bool get_KeepSecurity();
    /// <summary>
    /// Keeps security if true. (This feature will be implemented in next versions).
    /// </summary>
    void set_KeepSecurity(bool value);
    /// <summary>
    /// Gets or sets name and path of input file.
    /// </summary>
    System::String get_InputFile();
    /// <summary>
    /// Gets or sets name and path of input file.
    /// </summary>
    void set_InputFile(System::String value);
    /// <summary>
    /// Gets or sets input stream.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_InputStream();
    /// <summary>
    /// Gets or sets input stream.
    /// </summary>
    void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets or sets name and path of output file.
    /// </summary>
    System::String get_OutputFile();
    /// <summary>
    /// Gets or sets name and path of output file.
    /// </summary>
    void set_OutputFile(System::String value);
    /// <summary>
    /// Gets or sets output stream.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_OutputStream();
    /// <summary>
    /// Gets or sets output stream.
    /// </summary>
    void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets or sets rotation of page number. Rotation  is in degrees. Default is 0.
    /// </summary>
    float get_PageNumberRotation();
    /// <summary>
    /// Gets or sets rotation of page number. Rotation  is in degrees. Default is 0.
    /// </summary>
    void set_PageNumberRotation(float value);
    /// <summary>
    /// Sets PDF file format. Result file will be saved in specified file format. 
    /// If this property is not specified then file will be save in default PDF format without conversion.
    /// </summary>
    void set_ConvertTo(PdfFormat value);
    /// <summary>
    /// Gets height of first page in souorce file.
    /// </summary>
    /// <example>
    /// <code code="C#">
    ///  PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    ///  Console.WriteLine("Height = " + fileStamp.PageHeight);
    ///  fileStamp.Close();
    ///  </code>
    /// </example>
    float get_PageHeight();
    /// <summary>
    /// Gets width of first page in input file.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    ///  PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    ///  Console.WriteLine("Width = " + fileStamp.PageWidth);
    ///  fileStamp.Close();
    ///  </code>
    /// </example>
    float get_PageWidth();
    /// <summary>
    /// Gets or sets starting number for first page in input file. Next pages will be numbered starting from this value. 
    /// For example if  StartingNumber is set to 100, document pages will have numbers 100, 101, 102... 
    /// </summary>
    /// <example>
    /// <code lang="C#">
    ///  PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    ///  fileStamp.StartingNumber = 100;
    ///  fileStamp.AddPageNumber("Page #");
    ///  fileStamp.Close();
    ///  </code>
    /// </example>
    int32_t get_StartingNumber();
    /// <summary>
    /// Gets or sets starting number for first page in input file. Next pages will be numbered starting from this value. 
    /// For example if  StartingNumber is set to 100, document pages will have numbers 100, 101, 102... 
    /// </summary>
    /// <example>
    /// <code lang="C#">
    ///  PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    ///  fileStamp.StartingNumber = 100;
    ///  fileStamp.AddPageNumber("Page #");
    ///  fileStamp.Close();
    ///  </code>
    /// </example>
    void set_StartingNumber(int32_t value);
    /// <summary>
    /// Gets or sets pabge numbering style. Possible values: NumeralsArabic, NumeralsRomanUppercase, NumeralsRomanLowercase, LettersAppercase, LettersLowercase
    /// </summary>
    Aspose::Pdf::NumberingStyle get_NumberingStyle();
    /// <summary>
    /// Gets or sets pabge numbering style. Possible values: NumeralsArabic, NumeralsRomanUppercase, NumeralsRomanLowercase, LettersAppercase, LettersLowercase
    /// </summary>
    void set_NumberingStyle(Aspose::Pdf::NumberingStyle value);
    /// <summary>
    /// Stamp ID of next added stamp (incluiding page headers/hooters/page numbers).
    /// </summary>
    int32_t get_StampId();
    /// <summary>
    /// Stamp ID of next added stamp (incluiding page headers/hooters/page numbers).
    /// </summary>
    void set_StampId(int32_t value);
    /// <summary>
    /// Gets or sets how content will be stored when result of operation is stored into HttpResponse object. Possible value: inline / attachment.
    /// Default: inline.
    /// </summary>
    Aspose::Pdf::ContentDisposition get_ContentDisposition();
    /// <summary>
    /// Gets or sets how content will be stored when result of operation is stored into HttpResponse object. Possible value: inline / attachment.
    /// Default: inline.
    /// </summary>
    void set_ContentDisposition(Aspose::Pdf::ContentDisposition value);
    /// <summary>
    /// Gets or sets Response object where result of operation will be stored.
    /// </summary>
    System::SharedPtr<System::Web::HttpResponse> get_Response();
    /// <summary>
    /// Gets or sets Response object where result of operation will be stored.
    /// </summary>
    void set_Response(System::SharedPtr<System::Web::HttpResponse> value);
    /// <summary>
    /// Gets or sets save options when result is stored as HttpResponse.
    /// Default value: PdfSaveOptions. 
    /// </summary>
    System::SharedPtr<Aspose::Pdf::SaveOptions> get_SaveOptions();
    /// <summary>
    /// Gets or sets save options when result is stored as HttpResponse.
    /// Default value: PdfSaveOptions. 
    /// </summary>
    void set_SaveOptions(System::SharedPtr<Aspose::Pdf::SaveOptions> value);
    /// <summary>
    /// Gets or sets name of attachment when result of operation is stored into HttpResponse objects as attachment.
    /// </summary>
    System::String get_AttachmentName();
    /// <summary>
    /// Gets or sets name of attachment when result of operation is stored into HttpResponse objects as attachment.
    /// </summary>
    void set_AttachmentName(System::String value);
    
    /// <summary>
    /// Constructor for PdfFileStamp.
    /// </summary>
    /// <param name="inputFile">Input file name and path.</param>
    /// <param name="outputFile">Output file name and path.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp stamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// </code>
    /// </example>
    PdfFileStamp(System::String inputFile, System::String outputFile);
    /// <summary>
    /// Constructor for PdfFileStamp.
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="outputStream">Output stream.</param>
    /// <example>
    /// <code lang="C#">
    /// Stream input = new FileStream("input.pdf", FileMode.Open, FileAccess.Read);
    /// Stream output = new FileStream("output.pdf", FileMode.Creat, FileAccess.Write);
    /// PdfFileStamp stamp = new PdfFileStamp(input, output);
    /// </code>
    /// </example>
    PdfFileStamp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Constructor for PdfFileStamp.
    /// </summary>
    /// <param name="inputFile">Input file name and path.</param>
    /// <param name="outputFile">Output file name and path.</param>
    /// <param name="keepSecurity">Keep security if true.</param>
    PdfFileStamp(System::String inputFile, System::String outputFile, bool keepSecurity);
    /// <summary>
    /// Constructor of PdfFileStamp.
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="outputStream">Output stream.</param>
    /// <param name="keepSecurity">Keep security if true.</param>
    PdfFileStamp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, bool keepSecurity);
    
    /// <summary>
    /// Closes opened files and saves changes. 
    /// Warning. If input or output streams are specified they are not closed by Close() method. 
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp stamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// //do some work... 
    /// stamp.Close();
    /// </code>
    /// </example>
    virtual void Close();
    /// <summary>
    /// Saves result into specified file.
    /// </summary>
    /// <param name="destFile">Path to file where document will be saved.</param>
    virtual void Save(System::String destFile);
    /// <summary>
    /// Saves document into specified stream.
    /// </summary>
    /// <param name="destStream">Stream where document will be saved.</param>
    virtual void Save(System::SharedPtr<System::IO::Stream> destStream);
    /// <summary>
    /// Adds stamp to the file.
    /// </summary>
    /// <example>
    /// <code code="C#">
    ///  PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    ///  Stamp stamp = new Aspose.Pdf.Facades.Stamp();
    ///  stamp.SetOrigin(140, 400);
    ///  stamp.SetImageSize(50, 50);
    ///  stamp.Opacity = 0.8f;
    ///  stamp.IsBackground = true;
    ///  stamp.BindImage("image.jpg");
    ///  fileStamp.AddStamp(stamp);
    ///  fileStamp.Close();
    ///  </code>
    /// </example>
    /// <param name="stamp">Stamp object which.</param>
    void AddStamp(System::SharedPtr<Stamp> stamp);
    /// <summary>
    /// Add page number to file. Page number text may contain # sign which will be replaced with number of the page. 
    /// Page number is placed in the bottom of the page centered horizontally.
    /// </summary>
    /// <param name="formatString">Text of page number</param>
    /// <example>
    /// <code lang="C#">
    ///  PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    ///  fileStamp.AddPageNumber("Page #");
    ///  fileStamp.Close();
    ///  </code>
    /// </example>
    void AddPageNumber(System::String formatString);
    /// <summary>
    /// Adds page number to the page. Page number may contain # sign which will be replaced with page number.
    /// Page number is placed in the bottom of the page centered horizontally.
    /// </summary> 
    /// <example>
    /// <code lang="C#">
    ///  PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    ///  fileStamp.AddPageNumber(new FormattedText("Page #"));
    ///  fileStamp.Close();
    ///  </code>
    /// </example>
    /// <param name="formattedText">Format string for page number representes as FormattedText.</param>
    void AddPageNumber(System::SharedPtr<FormattedText> formattedText);
    /// <summary>
    /// Adds page number to the pages of document.
    /// </summary>
    /// <param name="formatString">Format string for page number.</param>
    /// <param name="position">Position where page number will be placed on the page.  0-bottom middle, 1-bottom right, 2-upper right, 
    /// 3 - sides right, 4 - upper middle,5 - bottom left,6 - sides left,7 - upper left.
    /// You can use the following constants: 
    /// PosBottomMiddle = 0, PosBottomRight = 1, PosUpperRight = 2, PosSidesRight = 3, 
    /// PosUpperMiddle, PosBottomLeft = 5, PosSidesLeft, PosUpperLeft 
    /// </param>
    /// <param name="leftMargin">Margin on the left edge of the page. </param>
    /// <param name="rightMargin">Margin on the right edge of the page.</param>
    /// <param name="topMargin">Margin on the top edge of the page.</param>
    /// <param name="bottomMargin">Margin on the bottom edge of the page.</param>
    /// <example>
    /// <code code="C#">
    ///  PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    ///  fileStamp.AddPageNumber("Page #", PdfFileStamp.PosBottomLeft, 100, 100, 200, 200);
    ///  fileStamp.Close();
    ///  </code>
    /// </example>
    void AddPageNumber(System::String formatString, int32_t position, float leftMargin, float rightMargin, float topMargin, float bottomMargin);
    /// <summary>
    /// Adds page number at the specified position on the page. 
    /// </summary>
    /// <param name="formatString">Format string. Format string can contain # sign which will be replaced with page number.</param>
    /// <param name="x">X coordinate of page number.</param>
    /// <param name="y">Y coordinate of page number.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// fileStamp.AddPageNumber(new FormattedText("Page  #"), 123, 357);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void AddPageNumber(System::String formatString, float x, float y);
    /// <summary>
    /// Adds page number to the pages of document.
    /// </summary>
    /// <param name="formattedText">FormattedText object which represents page number format and properties iof the text.</param>
    /// <param name="position">Position where page number will be placed on the page.  0-bottom middle, 1-bottom right, 2-upper right, 
    /// 3 - sides right, 4 - upper middle,5 - bottom left,6 - sides left,7 - upper left.
    /// You can use the following constants: 
    /// PosBottomMiddle = 0, PosBottomRight = 1, PosUpperRight = 2, PosSidesRight = 3, 
    /// PosUpperMiddle, PosBottomLeft = 5, PosSidesLeft, PosUpperLeft 
    /// </param>
    /// <param name="leftMargin">Margin on the left edge of the page. </param>
    /// <param name="rightMargin">Margin on the right edge of the page.</param>
    /// <param name="topMargin">Margin on the top edge of the page.</param>
    /// <param name="bottomMargin">Margin on the bottom edge of the page.</param>
    /// <example>
    /// <code  lang="C#">
    ///  PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    ///  fileStamp.AddPageNumber(new FormattedText("Page #"), PdfFileStamp.PosBottomLeft, 100, 100, 200, 200);
    ///  fileStamp.Close();
    ///  </code>
    /// </example>
    void AddPageNumber(System::SharedPtr<FormattedText> formattedText, int32_t position, float leftMargin, float rightMargin, float topMargin, float bottomMargin);
    /// <summary>
    /// Adds page number at the specified position on the page. 
    /// </summary>
    /// <param name="formattedText">Formatted text which represents page number format and properties of the text.
    /// Format string can contain # sign which will be replaced with page number.</param>
    /// <param name="x">X coordinate of page number.</param>
    /// <param name="y">Y coordinate of page number.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// fileStamp.AddPageNumber(new FormattedText("Page  #"), 123, 357);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void AddPageNumber(System::SharedPtr<FormattedText> formattedText, float x, float y);
    /// <summary>
    /// Adds header to the page.
    /// </summary>
    /// <param name="formattedText">Text for header and properties of the text.</param>
    /// <param name="topMargin">Margin on the top of page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// fileStamp.AddHeader(new FormattedText("Head of the page"), 50);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void AddHeader(System::SharedPtr<FormattedText> formattedText, float topMargin);
    /// <summary>
    /// Adds header to the pages of file. 
    /// </summary>
    /// <param name="formattedText">Formatted text object which contains page text and its properties.</param>
    /// <param name="topMargin">Margin on the top of the page.</param>
    /// <param name="leftMargin">Margin on the left of the page.</param>
    /// <param name="rightMargin">Margin on the right of the page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp stamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// stamp.AddHeader(new FormattedText("Head of the page"), 10, 50, 50);
    /// </code>
    /// </example>
    void AddHeader(System::SharedPtr<FormattedText> formattedText, float topMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds image as header to the pages of the file. 
    /// </summary>
    /// <param name="imageFile">Path to the image file.</param>
    /// <param name="topMargin">Margin at top of the page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", output.pdf");
    /// Stream input = new FileStream(TestSettings.GetInputFile("test.jpg"), FileMode.Open, FileAccess.Read);
    /// fileStamp.AddHeader("image.jpg", 50);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void AddHeader(System::String imageFile, float topMargin);
    /// <summary>
    /// Adds image as header on the pages.
    /// </summary>
    /// <param name="imageFile">Path to the image file.</param>
    /// <param name="topMargin">Margin at top of the page.</param>
    /// <param name="leftMargin">Margin at left side of the page.</param>
    /// <param name="rightMargin">Margin at right side of the page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", output.pdf");
    /// Stream input = new FileStream(TestSettings.GetInputFile("test.jpg"), FileMode.Open, FileAccess.Read);
    /// fileStamp.AddHeader("image.jpg", 50, 100, 100);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void AddHeader(System::String imageFile, float topMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds image as header on the pages.
    /// </summary>
    /// <param name="imageStream">Stream of the image.</param>
    /// <param name="topMargin">Margin at top of the page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", output.pdf");
    /// Stream input = new FileStream(TestSettings.GetInputFile("test.jpg"), FileMode.Open, FileAccess.Read);
    /// fileStamp.AddHeader(new FileStream("image.jpg", FileMode.Open, FileAccess.Read), 50);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void AddHeader(System::SharedPtr<System::IO::Stream> imageStream, float topMargin);
    /// <summary>
    /// Adds image at the top of the page. 
    /// </summary>
    /// <param name="inputStream">Stream which contains image data.</param>
    /// <param name="topMargin">Margin at top of the page.</param>
    /// <param name="leftMargin">Margin at left side of the page.</param>
    /// <param name="rightMargin">Margin at right side of the page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", output.pdf");
    /// Stream input = new FileStream(TestSettings.GetInputFile("test.jpg"), FileMode.Open, FileAccess.Read);
    /// fileStamp.AddHeader(new FileStream("image.jpg", FileMode.Open, FileAccess.Read), 50, 100, 100);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void AddHeader(System::SharedPtr<System::IO::Stream> inputStream, float topMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds footer to the pages of the document.
    /// </summary>
    /// <param name="formattedText">FormattedText object which contains text of the footer and text properties.</param>
    /// <param name="bottomMargin">Margin at the top of page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp stamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// stamp.AddFooter(new FormattedText("Foot of the page"), 10);
    /// </code>
    /// </example>
    void AddFooter(System::SharedPtr<FormattedText> formattedText, float bottomMargin);
    /// <summary>
    /// Adds footer to the pages of the document.
    /// </summary>
    /// <param name="formattedText">FormattedText object which contains footer text and text properties.</param>
    /// <param name="bottomMargin">Margin at the bottom of the page.</param>
    /// <param name="leftMargin">Margin at the left side of the page.</param>
    /// <param name="rightMargin">Margin at the right side of the page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp stamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// stamp.AddFooter(new FormattedText("Foot of the page"), 10, 50, 50);
    /// </code>
    /// </example>
    void AddFooter(System::SharedPtr<FormattedText> formattedText, float bottomMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds image as footer to the pages of the document.
    /// </summary>
    /// <param name="imageFile">Image file name and path.</param>
    /// <param name="bottomMargin">Margin at the bottom of the page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", output.pdf");
    /// Stream input = new FileStream(TestSettings.GetInputFile("test.jpg"), FileMode.Open, FileAccess.Read);
    /// fileStamp.AddFooter("image.jpg", 50);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void AddFooter(System::String imageFile, float bottomMargin);
    /// <summary>
    /// Adds image as footer of the pages.
    /// </summary>
    /// <param name="imageFile">Iamge file name and path.</param>
    /// <param name="bottomMargin">Margin at the bottom of the page.</param>
    /// <param name="leftMargin">Margin at the left side of the page.</param>
    /// <param name="rightMargin">Margin at the right side of the page.</param>
    /// /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", output.pdf");
    /// Stream input = new FileStream(TestSettings.GetInputFile("test.jpg"), FileMode.Open, FileAccess.Read);
    /// fileStamp.AddFooter("image.jpg", 50, 100, 100);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void AddFooter(System::String imageFile, float bottomMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds image as footer of the page.
    /// </summary>
    /// <param name="imageStream">Stream contains image data.</param>
    /// <param name="bottomMargin">Margin at the bottom of the page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", output.pdf");
    /// Stream input = new FileStream(TestSettings.GetInputFile("test.jpg"), FileMode.Open, FileAccess.Read);
    /// fileStamp.AddFooter(new FileStream("image.jpg", FileMode.Open, FileAccess.Read), 50);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void AddFooter(System::SharedPtr<System::IO::Stream> imageStream, float bottomMargin);
    /// <summary>
    /// Adds image as footer of the page.
    /// </summary>
    /// <param name="imageStream">Stream contains image data.</param>
    /// <param name="bottomMargin">Margin at the bottom of the page.</param>
    /// <param name="leftMargin">Margin at the left side of the page.</param>
    /// <param name="rightMargin">Margin at the right side of the page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", output.pdf");
    /// Stream input = new FileStream(TestSettings.GetInputFile("test.jpg"), FileMode.Open, FileAccess.Read);
    /// fileStamp.AddFooter(new FileStream("image.jpg", FileMode.Open, FileAccess.Read), 50, 50, 50);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void AddFooter(System::SharedPtr<System::IO::Stream> imageStream, float bottomMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds page number to the pages.
    /// </summary>
    /// <param name="formatString">Format of the page number. This text may contain # which will be replaced with page number.</param>
    /// <param name="position">Position where page number will be placed on the page.  0-bottom middle, 1-bottom right, 2-upper right, 
    /// 3 - sides right, 4 - upper middle,5 - bottom left,6 - sides left,7 - upper left.
    /// You can use the following constants: 
    /// PosBottomMiddle = 0, PosBottomRight = 1, PosUpperRight = 2, PosSidesRight = 3, 
    /// PosUpperMiddle, PosBottomLeft = 5, PosSidesLeft, PosUpperLeft 
    /// </param>
    /// <example>
    /// <code lang="C#">
    ///  PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    ///  fileStamp.AddPageNumber("Page #", PdfFileStamp.PosUpperRight);
    ///  fileStamp.Close();
    /// </code>
    /// </example>
    void AddPageNumber(System::String formatString, int32_t position);
    /// <summary>
    /// Adds page number to the pages.
    /// </summary>
    /// <param name="formattedText">FormattedText object which contains format of the page number and text properties. 
    /// This text may contain # which will be replaced with page number.</param>
    /// <param name="position">Position where page number will be placed on the page.  0-bottom middle, 1-bottom right, 2-upper right, 
    /// 3 - sides right, 4 - upper middle,5 - bottom left,6 - sides left,7 - upper left.
    /// You can use the following constants: 
    /// PosBottomMiddle = 0, PosBottomRight = 1, PosUpperRight = 2, PosSidesRight = 3, 
    /// PosUpperMiddle, PosBottomLeft = 5, PosSidesLeft, PosUpperLeft 
    /// </param>
    /// <example>
    /// <code lang="C#">
    ///  PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    ///  fileStamp.AddPageNumber("Page #", PdfFileStamp.PosUpperRight);
    ///  fileStamp.Close();
    /// </code>
    /// </example>
    void AddPageNumber(System::SharedPtr<FormattedText> formattedText, int32_t position);
    
    /// <summary>
    /// Constructor of the PdfFileStamp.
    /// Input file and output file may be specified via corresponding properties.
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp();
    /// fileStamp.InputFile = "input.pdf";
    /// fileStamp.OutputFile = "output.pdf";
    /// </code>
    /// </example>
    /// </summary>
    PdfFileStamp();
    /// <summary>
    /// Initializes new <see cref="PdfFileStamp"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    PdfFileStamp(System::SharedPtr<Aspose::Pdf::Document> document);
    /// <summary>
    /// Initializes new <see cref="PdfFileStamp"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputFile">
    /// Output file name and path.
    /// </param>
    PdfFileStamp(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFile);
    /// <summary>
    /// Initializes new <see cref="PdfFileStamp"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputStream">
    /// Output stream.
    /// </param>
    PdfFileStamp(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Creates PdfFileStamp which will save result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream with input document.</param>
    /// <param name="response">HttpResponse object where result will be saved.</param>
    PdfFileStamp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Creates PdfFileStamp which will save result into HttpResponse object. 
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="response">HttpResponse object where result will be saved.</param>
    PdfFileStamp(System::String inputFile, System::SharedPtr<System::Web::HttpResponse> response);
    
protected:

    void ApplyStamp(System::SharedPtr<Stamp> stamp);
    System::Object::shared_members_type GetSharedMembers() override;
    
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
    Aspose::Pdf::NumberingStyle _numberingStyle;
    
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


