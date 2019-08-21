#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Sets the input stream.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_InputStream();
    /// <summary>
    /// Sets the input stream.
    /// </summary>
    void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Sets the output stream.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_OutputStream();
    /// <summary>
    /// Sets the output stream.
    /// </summary>
    void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Sets the input file.
    /// </summary>
    System::String get_InputFile();
    /// <summary>
    /// Sets the input file.
    /// </summary>
    void set_InputFile(System::String value);
    /// <summary>
    /// Sets the output file.
    /// </summary>
    System::String get_OutputFile();
    /// <summary>
    /// Sets the output file.
    /// </summary>
    void set_OutputFile(System::String value);
    /// <summary>
    /// Sets a bool value that indicates word wrap in AddText methods.
    /// If the value is true, the text in FormattedText will word wrap.
    /// By defalt, the value is false.
    /// </summary>
    void set_IsWordWrap(bool value);
    /// <summary>
    /// Sets or gets word wrapping algorithm. See WordWrapMode and IsWordWrap.
    /// </summary>
    WordWrapMode get_WrapMode();
    /// <summary>
    /// Sets or gets word wrapping algorithm. See WordWrapMode and IsWordWrap.
    /// </summary>
    void set_WrapMode(WordWrapMode value);
    /// <summary>
    /// Sets or gets text positioning strategy. <see cref="PositioningMode"/>
    /// Default mode is Legacy.
    /// </summary>
    PositioningMode get_TextPositioningMode();
    /// <summary>
    /// Sets or gets text positioning strategy. <see cref="PositioningMode"/>
    /// Default mode is Legacy.
    /// </summary>
    void set_TextPositioningMode(PositioningMode value);
    
    /// <summary>
    /// Adds image to the specified page of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageStream">Input image stream.</param>
    /// <param name="pageNum">The number of page that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfFileMend mendor = new PdfFileMend("example.pdf", "out_example.pdf");
    /// using (Stream stream = File.OpenRead("picture.jpg"))
    /// {
    ///     mendor.AddImage(stream, 1, 10, 10, 100, 100);
    /// }
    /// mendor.Close();
    /// </code>
    /// </example>
    bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Adds image to the specified page of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageStream">Input image stream.</param>
    /// <param name="pageNum">The number of page that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <param name="compositingParameters">The graphics compositing parameters for the image.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfFileMend mendor = new PdfFileMend("example.pdf", "out_example.pdf");
    /// using (Stream stream = File.OpenRead("picture.jpg"))
    /// {
    ///     mendor.AddImage(stream, 1, 10, 10, 100, 100, new CompositingParameters(BlendMode.Multiply);
    /// }
    /// mendor.Close();
    /// </code>
    /// </example>
    bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    /// <summary>
    /// Adds image to the specified pages of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageStream">Input image stream.</param>
    /// <param name="pageNums">The numbers of pages that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfFileMend mendor = new PdfFileMend("example.pdf", "out_example.pdf");
    /// using (Stream stream = File.OpenRead("picture.jpg"))
    /// {
    ///     mendor.AddImage(stream, new int[]{1, 2}, 10, 10, 100, 100);
    /// }
    /// mendor.Close();
    /// </code>
    /// </example>
    bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Adds image to the specified pages of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageStream">Input image stream.</param>
    /// <param name="pageNums">The numbers of pages that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <param name="compositingParameters">The graphics compositing parameters for the images.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfFileMend mendor = new PdfFileMend("example.pdf", "out_example.pdf");
    /// using (Stream stream = File.OpenRead("picture.jpg"))
    /// {
    ///     mendor.AddImage(stream, new int[]{1, 2}, 10, 10, 100, 100, new CompositingParameters(BlendMode.Multiply);
    /// }
    /// mendor.Close();
    /// </code>
    /// </example>
    bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    /// <summary>
    /// Adds image to the specified page of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageName">The path of input image file.</param>
    /// <param name="pageNum">The number of page that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfFileMend mendor = new PdfFileMend("example.pdf", "out_example.pdf");
    /// mendor.AddImage("picture.jpg", 1, 10, 10, 100, 100);
    /// mendor.Close();
    /// </code>
    /// </example>
    bool AddImage(System::String imageName, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Adds image to the specified page of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageName">The path of input image file.</param>
    /// <param name="pageNum">The number of page that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <param name="compositingParameters">The graphics compositing parameters for the images.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfFileMend mendor = new PdfFileMend("example.pdf", "out_example.pdf");
    /// mendor.AddImage("picture.jpg", 1, 10, 10, 100, 100, new CompositingParameters(BlendMode.Multiply));
    /// mendor.Close();
    /// </code>
    /// </example>
    bool AddImage(System::String imageName, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    /// <summary>
    /// Adds image to the specified pages of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageName">The path of input image file.</param>
    /// <param name="pageNums">The numbers of pages that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfFileMend mendor = new PdfFileMend("example.pdf", "out_example.pdf");
    /// mendor.AddImage("picture.jpg", 1, 10, 10, 100, 100);
    /// mendor.Close();
    /// </code>
    /// </example>
    bool AddImage(System::String imageName, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Adds image to the specified pages of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageName">The path of input image file.</param>
    /// <param name="pageNums">The numbers of pages that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <param name="compositingParameters">The graphics compositing parameters for the images.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfFileMend mendor = new PdfFileMend("example.pdf", "out_example.pdf");
    /// mendor.AddImage("picture.jpg", 1, 10, 10, 100, 100, new CompositingParameters(BlendMode.Multiply));
    /// mendor.Close();
    /// </code>
    /// </example>
    bool AddImage(System::String imageName, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    /// <summary>
    /// Not implemented.
    /// </summary>
    /// <param name="text">FormattedText object.</param>
    /// <param name="pageNum">Page number.</param>
    /// <param name="lowerLeftX">Lower left X coordinate.</param>
    /// <param name="lowerLeftY">Lower left Y coordinate.</param>
    /// <returns>True in case text was successfully added.</returns>
    bool AddText(System::SharedPtr<FormattedText> text, int32_t pageNum, float lowerLeftX, float lowerLeftY);
    /// <summary>
    /// Not implemented.
    /// </summary>
    /// <param name="text">FormattedText object.</param>
    /// <param name="pageNum">Page number.</param>
    /// <param name="lowerLeftX">Lower left X coordinate.</param>
    /// <param name="lowerLeftY">Lower left Y coordinate.</param>
    /// <param name="upperRightX">Upper right X coordinate.</param>
    /// <param name="upperRightY">Upper right Y coordinate.</param>
    /// <returns>True in case text was successfully added.</returns>
    bool AddText(System::SharedPtr<FormattedText> text, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Not implemented.
    /// </summary>
    /// <param name="text">FormattedText object.</param>
    /// <param name="pageNums">Page numbers array.</param>
    /// <param name="lowerLeftX">Lower left X coordinate.</param>
    /// <param name="lowerLeftY">Lower left Y coordinate.</param>
    /// <param name="upperRightX">Upper right X coordinate.</param>
    /// <param name="upperRightY">Upper right Y coordinate.</param>
    /// <returns>True in case text was successfully added.</returns>
    bool AddText(System::SharedPtr<FormattedText> text, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Closes PdfFileMend object.
    /// </summary>
    virtual void Close();
    
    /// <summary>
    /// Constructor.
    /// </summary>
    PdfFileMend();
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="inputFileName">Input PDF file name.</param>
    /// <param name="outputFileName">Output PDF file name.</param>
    PdfFileMend(System::String inputFileName, System::String outputFileName);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="inputStream">Input PDF stream.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    PdfFileMend(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Initializes new <see cref="PdfFileMend"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    PdfFileMend(System::SharedPtr<Aspose::Pdf::Document> document);
    /// <summary>
    /// Initializes new <see cref="PdfFileMend"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputFileName">
    /// Output PDF file name.
    /// </param>
    PdfFileMend(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFileName);
    /// <summary>
    /// Initializes new <see cref="PdfFileMend"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="destStream">
    /// Output PDF stream.
    /// </param>
    PdfFileMend(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> destStream);
    
    /// <summary>
    /// Saves the PDF document to the specified file.
    /// </summary>
    /// <param name="destFile">The destination file.</param>
    virtual void Save(System::String destFile);
    /// <summary>
    /// Saves the PDF document to the specified stream.
    /// </summary>
    /// <param name="destStream">The destination stream.</param>
    virtual void Save(System::SharedPtr<System::IO::Stream> destStream);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
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


