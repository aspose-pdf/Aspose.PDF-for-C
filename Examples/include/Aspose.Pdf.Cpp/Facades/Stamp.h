#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfFileStamp; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class BlendingColorSpace; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormattedText; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class Stamp; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { enum class Rotation; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class represeting stamp. 
/// </summary>
class ASPOSE_PDF_SHARED_API Stamp FINAL : public System::Object
{
    typedef Stamp ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileStamp;
    
public:

    /// <summary>
    /// Gets identifier of stamp.
    /// </summary>
    int32_t get_StampId();
    /// <summary>
    /// Sets identifier of stamp.
    /// </summary>
    void set_StampId(int32_t value);
    /// <summary>
    /// Gets quality of image stamp in percent. Valiued values 0..100%. 
    /// </summary>
    int32_t get_Quality();
    /// <summary>
    /// Sets quality of image stamp in percent. Valiued values 0..100%. 
    /// </summary>
    void set_Quality(int32_t value);
    /// <summary>
    /// Gets opacity of the stamp.
    /// </summary>
    float get_Opacity();
    /// <summary>
    /// Sets opacity of the stamp.
    /// </summary>
    void set_Opacity(float value);
    /// <summary>
    /// Gets page number. 
    /// </summary>
    int32_t get_PageNumber();
    /// <summary>
    /// Sets page number. 
    /// </summary>
    void set_PageNumber(int32_t value);
    /// <summary>
    /// Gets array with numbers of pages which will be affected by stamp. 
    /// If Pages = null all pages of the document are affected.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// Stamp stamp = new Aspose.Pdf.Facades.Stamp();
    /// stamp.BindLogo(new FormattedText(text));
    /// //put stamp only on 1st, 4th and 6th page.
    /// stamp.Pages = new int[] { 1, 4, 6 };
    /// fileStamp.AddStamp(stamp);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    System::ArrayPtr<int32_t> get_Pages();
    /// <summary>
    /// Sets array with numbers of pages which will be affected by stamp. 
    /// If Pages = null all pages of the document are affected.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// Stamp stamp = new Aspose.Pdf.Facades.Stamp();
    /// stamp.BindLogo(new FormattedText(text));
    /// //put stamp only on 1st, 4th and 6th page.
    /// stamp.Pages = new int[] { 1, 4, 6 };
    /// fileStamp.AddStamp(stamp);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void set_Pages(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets rotation of the stamp in degrees.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// Stamp stamp = new Stamp();
    /// stamp.BindLogo(new FormattedText("STAMP"));
    /// stamp.Rotation = 90;
    /// fileStamp.AddStamp(stamp);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    float get_Rotation();
    /// <summary>
    /// Sets rotation of the stamp in degrees.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// Stamp stamp = new Stamp();
    /// stamp.BindLogo(new FormattedText("STAMP"));
    /// stamp.Rotation = 90;
    /// fileStamp.AddStamp(stamp);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void set_Rotation(float value);
    /// <summary>
    /// Gets background status. If true stamp will be placed as background of the spamped page.
    /// By default is set to false.
    /// </summary>
    /// /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// Stamp stamp = new Stamp();
    /// stamp.BindLogo(new FormattedText("STAMP"));
    /// stamp.IsBackground = true;
    /// fileStamp.AddStamp(stamp);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    bool get_IsBackground();
    /// <summary>
    /// Sets background status. If true stamp will be placed as background of the spamped page.
    /// By default is set to false.
    /// </summary>
    /// /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// Stamp stamp = new Stamp();
    /// stamp.BindLogo(new FormattedText("STAMP"));
    /// stamp.IsBackground = true;
    /// fileStamp.AddStamp(stamp);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void set_IsBackground(bool value);
    /// <summary>
    /// Gets a BlendingColorSpace value that defines a color space 
    /// that is used to perform transparency and blending operations on the page.
    /// </summary>
    BlendingColorSpace get_BlendingSpace();
    /// <summary>
    /// Sets a BlendingColorSpace value that defines a color space 
    /// that is used to perform transparency and blending operations on the page.
    /// </summary>
    void set_BlendingSpace(BlendingColorSpace value);
    
    /// <summary>
    /// Constructor for Stamp object.
    /// </summary>
    Stamp();
    
    /// <summary>
    /// Sets PDF file and number of page which will be used as stamp.
    /// </summary>
    /// <param name="pdfFile">Path to PDF file.</param>
    /// <param name="pageNumber">Number of page in PDF file</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// Stamp stamp = new Stamp();
    /// //First page will be used as stamp.
    /// stamp.BindPdf("stamp.pdf", 1);
    /// stamp.IsBackground = true;
    /// fileStamp.AddStamp(stamp);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void BindPdf(System::String pdfFile, int32_t pageNumber);
    /// <summary>
    ///  Sets PDF file and number of page which will be used as stamp.
    /// </summary>
    /// <param name="pdfStream">Stream which contains PDF document.</param>
    /// <param name="pageNumber">Page index of the document whihc will be used as stamp.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// Stamp stamp = new Stamp();
    /// //First page will be used as stamp.
    /// Stream stream = new FileStream("stamp.pdf", FileMode.Open, FileAccess.Read);
    /// stamp.BindPdf(stream, 1);
    /// fileStamp.AddStamp(stamp);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void BindPdf(System::SharedPtr<System::IO::Stream> pdfStream, int32_t pageNumber);
    /// <summary>
    /// Sets image as a stamp.
    /// </summary>
    /// <param name="imageFile">Image file name and path.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfFileStamp fileStamp = new PdfFileStamp("input.pdf", "output.pdf");
    /// Stamp stamp = new Stamp();
    /// stamp.BindImage("image.jpg");
    /// fileStamp.AddStamp(stamp);
    /// fileStamp.Close();
    /// </code>
    /// </example>
    void BindImage(System::String imageFile);
    /// <summary>
    /// Sets text as stamp.
    /// </summary>
    /// <param name="formattedText">FormattedText object which specifies text and text properties.</param>
    void BindLogo(System::SharedPtr<FormattedText> formattedText);
    /// <summary>
    /// Sets text state of stamp text.
    /// </summary>
    /// <param name="textState">TextState object which specifies text properties.</param>
    void BindTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    /// <summary>
    /// Sets position on page where stamp will be placed.
    /// </summary>
    /// <param name="originX">X coordinate of the stamp.</param>
    /// <param name="originY">Y coordinate of the stamp.</param>
    void SetOrigin(float originX, float originY);
    /// <summary>
    /// Sets size of image stamp. Image will be scaled according to the specified values.
    /// </summary>
    /// <param name="width">Image width.</param>
    /// <param name="height">Image height.</param>
    void SetImageSize(float width, float height);
    /// <summary>
    /// Sets image which will be used as stamp.
    /// </summary>
    /// <param name="image">Stream which contains image data.</param>
    void BindImage(System::SharedPtr<System::IO::Stream> image);
    
protected:

    /// <summary>
    /// Translates Stamp into corresponding Aspose.Pdf.Stamp descendant (TextStamp / ImageStamp / PdfPageStamp )
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Stamp> translate();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<int32_t> pages;
    int32_t pageNumber;
    int32_t _pageNumber;
    System::SharedPtr<FormattedText> text;
    System::SharedPtr<System::IO::Stream> image;
    System::String imageName;
    System::String pdfFile;
    System::SharedPtr<System::IO::Stream> pdfStream;
    System::SharedPtr<Page> page;
    double originX;
    double originY;
    double imageWidth;
    double imageHeight;
    double opacity;
    bool background;
    float rotation;
    int32_t stampId;
    int32_t quality;
    BlendingColorSpace blendingColorSpace;
    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    
    void reset();
    void setPage(System::SharedPtr<Document> doc, int32_t pageNumber);
    bool isValidAngle(float angle);
    Aspose::Pdf::Rotation translateRotation();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


