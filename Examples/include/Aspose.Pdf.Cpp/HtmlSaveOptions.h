#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !NET11


#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/multicast_delegate.h>
#include <system/io/stream.h>
#include <system/array.h>
#include <cstdint>

#include "UnifiedSaveOptions.h"
#include "SaveOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_7; } } }
namespace Aspose { namespace Pdf { enum class HtmlDocumentType; } }
namespace Aspose { namespace Pdf { enum class Direction; } }
namespace Aspose { namespace Pdf { namespace Text { class FontSourceCollection; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// This enumeration defines rules which tune encoding logic
/// </summary>
class ASPOSE_PDF_SHARED_API HtmlSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef HtmlSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::RegressionTests_v11_7;
    
public:

    enum class FontSavingModes
    {
        /// <summary>
        /// All referenced fonts will be saved and referenced as WOFF-fonts
        /// </summary> 
        AlwaysSaveAsWOFF = 0,
        /// <summary>
        /// All referenced fonts will be saved and referenced as TTF-fonts
        /// </summary> 
        AlwaysSaveAsTTF = 1,
        /// <summary>
        /// All referenced fonts will be saved and referenced as EOT-fonts
        /// </summary> 
        AlwaysSaveAsEOT = 2,
        /// <summary>
        /// All referenced fonts will be saved (and referenced in CSS) as 3 independent files : EOT, TTH,WOFF.
        ///  It increases size of output data but makes output sutable for overhelming majority of web brawsers 
        /// </summary> 
        SaveInAllFormats = 3,
        /// <summary>
        /// All referenced fonts will not be saved.
        /// </summary>
        DontSave = 4
    };
    
    enum class AntialiasingProcessingType
    {
        /// <summary>
        /// no special antialiasing processing in use. This is an optimal option 
        /// for overhelming majority of documents and it does not require additional time
        /// during conversion
        /// </summary>
        NoAdditionalProcessing,
        /// <summary>
        ///  In such case converter tries to detect places with ajacent background graphical 
        ///   elements and correct result HTML in relevant way.
        /// This option allows enhance result of export for documents that contain backgrounds
        /// built from several ajacent graphical elements (for such kind of documents PDF renderers , f.e. Acrobat Reader,
        //  usually try smooth boundaries of elements during rendering.
        ///   With this option converter imitates that behaviour of PDF-renderers.
        /// This option allows enhance layout of result of export for some specific documents (that use such compound backgrounds), 
        /// but it requires additional time for processng (usually about 10-15% of additional time).
        ///   So usage of this mode in general case is not recommended.  
        /// </summary>
        TryCorrectResultHtml
    };
    
    enum class LettersPositioningMethods
    {
        /// <summary>
        ///   It's default method. It uses EM-units and special alhorithm of compensation of rounding errors
        ///   It's preferable for usage in IE10.0 and more fresh versions and gives better scaling of captions when scaling is necessary
        /// </summary>
        UseEmUnitsAndCompensationOfRoundingErrorsInCss,
        /// <summary>
        ///   It allows to get sometimes more precise results in old IE browser versions
        /// </summary>
        UsePixelUnitsInCssLetterSpacingForIE
    };
    
    enum class HtmlImageType
    {
        /// <summary>
        /// Jpeg format
        /// </summary>
        Jpeg = 0,
        /// <summary>
        /// Png format
        /// </summary>
        Png = 1,
        /// <summary>
        /// Bmp format 
        /// </summary>
        Bmp = 2,
        /// <summary>
        /// Gif format 
        /// </summary>
        Gif = 3,
        /// <summary>
        ///  Tiff format
        /// </summary>
        Tiff = 4,
        /// <summary>
        /// Svg format 
        /// </summary>
        Svg = 5,
        /// <summary>
        /// Zipped Svg format
        /// </summary>
        ZippedSvg = 6,
        /// <summary>
        /// Unknown - means that converter cannot detect type of content itself
        /// </summary>
        Unknown = 7
    };
    
    enum class ImageParentTypes
    {
        /// <summary>
        /// Image pertains to HTML page itself
        /// </summary>
        HtmlPage = 0,
        /// <summary>
        /// Image was embedded in SVG image
        /// </summary>
        SvgImage = 1
    };
    
    enum class RasterImagesSavingModes
    {
        /// <summary>
        /// for each distinct raster file will be generated wrapper SVG image,
        ///  and raster image will be embedded as Base64 encoded strings
        ///  into that SVG image
        /// </summary>
        AsPngImagesEmbeddedIntoSvg,
        /// <summary>
        /// distinct raster images will be put apart as PNG files but will be referenced through wrapping SVG images,
        /// i.e. will be generated one PNG file and one SVG for each raster image,
        /// and each of such SVGs will contain links to relevant PNG file
        /// </summary>
        AsExternalPngFilesReferencedViaSvg,
        /// <summary>
        ///  Will be generated one big PNG background file for each result page.
        /// Raster images will be embedded into that file and rendered as regions of that image.
        ///   No external PNG files for each image will be generated,
        ///  only one PNG file per page will be present in conversion result set of files.
        /// </summary>
        AsEmbeddedPartsOfPngPageBackground
    };
    
    enum class HtmlMarkupGenerationModes
    {
        /// <summary>
        ///   Default mode any specific requirments are absent.
        ///   Will be generated output that will contain all parts of HTML
        ///   without any special additional processing.
        /// </summary>
        WriteAllHtml,
        /// <summary>
        ///  will be stripped away all HTML content that is outside HTML's body,
        ///  i.e. will be left only content that is inside <body></body> tags
        /// </summary>
        WriteOnlyBodyContent
    };
    
    enum class PartsEmbeddingModes
    {
        /// <summary>
        ///   Enforces embed all referenced files(Css,Images,Fonts) into generated HTML markup (i.e. into HTML itself)
        ///   This approach generates one HTML file, but total size of output 
        ///   becames bigger(because Base64 encoding of binaries is in use) and not all browsers (especially legacy) 
        ///   successfully process binaries embedded into HTML. But it allows get HTML that contains whole result, without any additional files.
        /// </summary>
        EmbedAllIntoHtml,
        /// <summary>
        ///   Enforces put apart all referenced files except CSS (Images and Fonts)
        ///   I.e. CSS will be embedded into result HTML , and all other referenced files(Images and Fonts)
        ///    will be processed as external parts
        ///   It generates HTML that is sutable for wide set of browsers
        /// </summary>
        EmbedCssOnly,
        /// <summary>
        ///   Enforces put apart referenced files(Css,Images,Fonts) 
        ///   This approach generates set of files, but total size of output 
        ///   becames smaller(because no Base64 encoding of binaries is in use)
        ///   Also such approach generates HTML that is sutable for wide set of browsers
        /// </summary>
        NoEmbedding
    };
    
    enum class FontEncodingRules : uint8_t
    {
        /// <summary>
        /// Leave encoding logic "as is" - in accordance with PDF specification 
        /// </summary>
        Default,
        /// <summary>
        /// ToUnicode is a special mechanism which helps to decode input codes to unicode symbols.
        /// According to specification it must be used first of all mechanisms to get unicode symbols 
        /// for specific input code. But some documents has non-standard fonts and to convert these
        /// documents correctly it may be necessary to decrease ToUnicode priority and use another
        /// mechanisms to decode input codes.
        /// </summary>
        DecreaseToUnicodePriorityLevel
    };
    
    
public:

    using ResourceSavingStrategy = System::MulticastDelegate<System::String(System::SharedPtr<SaveOptions::ResourceSavingInfo>)>;
    
    class HtmlPageMarkupSavingInfo;
    using HtmlPageMarkupSavingStrategy = System::MulticastDelegate<void(System::SharedPtr<HtmlSaveOptions::HtmlPageMarkupSavingInfo>)>;
    
    class CssSavingInfo;
    using CssSavingStrategy = System::MulticastDelegate<void(System::SharedPtr<HtmlSaveOptions::CssSavingInfo>)>;
    
    class CssUrlRequestInfo;
    using CssUrlMakingStrategy = System::MulticastDelegate<System::String(System::SharedPtr<HtmlSaveOptions::CssUrlRequestInfo>)>;
    
    
public:

    class ASPOSE_PDF_SHARED_API CssSavingInfo : public System::Object
    {
        typedef CssSavingInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        
    public:
    
        int32_t CssNumber;
        System::String SupposedURL;
        System::SharedPtr<System::IO::Stream> ContentStream;
        
    protected:
    
        CssSavingInfo();
        
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    class ASPOSE_PDF_SHARED_API HtmlPageMarkupSavingInfo : public System::Object
    {
        typedef HtmlPageMarkupSavingInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        
    public:
    
        System::String SupposedFileName;
        System::SharedPtr<System::IO::Stream> ContentStream;
        int32_t PdfHostPageNumber;
        int32_t HtmlHostPageNumber;
        bool CustomProcessingCancelled;
        
    protected:
    
        HtmlPageMarkupSavingInfo();
        
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    class ASPOSE_PDF_SHARED_API CssUrlRequestInfo : public System::Object
    {
        typedef CssUrlRequestInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        bool CustomProcessingCancelled;
        
        /// <summary>
        ///   Creates instance of CssUrlRequestInfo
        /// </summary>
        CssUrlRequestInfo();
        
    };
    
    class ASPOSE_PDF_SHARED_API HtmlImageSavingInfo : public Aspose::Pdf::SaveOptions::ResourceSavingInfo
    {
        typedef HtmlImageSavingInfo ThisType;
        typedef Aspose::Pdf::SaveOptions::ResourceSavingInfo BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        HtmlSaveOptions::HtmlImageType ImageType;
        HtmlSaveOptions::ImageParentTypes ParentType;
        int32_t PdfHostPageNumber;
        int32_t HtmlHostPageNumber;
        
        /// <summary>
        ///  creates new instance of SaveOptions.ResourceSavingInfo
        /// </summary>
        HtmlImageSavingInfo();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    
public:

    UnifiedSaveOptions::ConversionProgressEventHandler CustomProgressHandler;
    HtmlSaveOptions::AntialiasingProcessingType AntialiasingProcessing;
    bool SaveTransparentTexts;
    bool SaveShadowedTextsAsTransparentTexts;
    HtmlSaveOptions::FontSavingModes FontSavingMode;
    System::SharedPtr<SaveOptions::BorderInfo> PageBorderIfAny;
    HtmlSaveOptions::LettersPositioningMethods LettersPositioningMethod;
    System::ArrayPtr<int32_t> ExplicitListOfSavedPages;
    System::ArrayPtr<System::String> ExcludeFontNameList;
    HtmlSaveOptions::ResourceSavingStrategy CustomResourceSavingStrategy;
    HtmlSaveOptions::CssSavingStrategy CustomCssSavingStrategy;
    HtmlSaveOptions::HtmlPageMarkupSavingStrategy CustomHtmlSavingStrategy;
    HtmlSaveOptions::CssUrlMakingStrategy CustomStrategyOfCssUrlCreation;
    
    /// <summary>
    /// Gets the <see cref="HtmlDocumentType"/>.
    /// </summary>
    /// <value>
    /// The <see cref="HtmlDocumentType"/>.
    /// </value>
    HtmlDocumentType get_DocumentType();
    /// <summary>
    /// Sets the <see cref="HtmlDocumentType"/>.
    /// </summary>
    /// <value>
    /// The <see cref="HtmlDocumentType"/>.
    /// </value>
    void set_DocumentType(HtmlDocumentType value);
    /// <summary>
    /// Gets the flag that indicates whether
    /// found SVG graphics(if any) will be compressed(zipped) 
    /// into SVGZ format during saving
    /// </summary>
    /// <value>
    /// The <see cref="HtmlDocumentType"/>.
    /// </value>
    bool get_CompressSvgGraphicsIfAny();
    /// <summary>
    /// Sets the flag that indicates whether
    /// found SVG graphics(if any) will be compressed(zipped) 
    /// into SVGZ format during saving
    /// </summary>
    /// <value>
    /// The <see cref="HtmlDocumentType"/>.
    /// </value>
    void set_CompressSvgGraphicsIfAny(bool value);
    
    System::String SpecialFolderForSvgImages;
    System::String SpecialFolderForAllImages;
    
    /// <summary>
    ///   When multipage-mode selected(i.e 'SplitIntoPages' is 'true'), 
    /// then this attribute defines whether should be created separate CSS-file
    /// for each result HTML page.
    ///   By default this attribute is false, so, will be created
    /// one  big common CSS for all created pages. Summary size of all
    /// CSSes generated in this mode(one CSS per page) usually
    /// much more than size of one big CSS file, because in former case 
    /// CSS classes are duplicates in such case in several CSS files for each page.
    /// So, this setting is worse to be used only when You are interested
    /// in future processing of each HTML page independently, and therefore size
    /// of CSS of each one page taken apart is the most critical issue.
    /// </summary>
    bool get_SplitCssIntoPages();
    /// <summary>
    ///   When multipage-mode selected(i.e 'SplitIntoPages' is 'true'), 
    /// then this attribute defines whether should be created separate CSS-file
    /// for each result HTML page.
    ///   By default this attribute is false, so, will be created
    /// one  big common CSS for all created pages. Summary size of all
    /// CSSes generated in this mode(one CSS per page) usually
    /// much more than size of one big CSS file, because in former case 
    /// CSS classes are duplicates in such case in several CSS files for each page.
    /// So, this setting is worse to be used only when You are interested
    /// in future processing of each HTML page independently, and therefore size
    /// of CSS of each one page taken apart is the most critical issue.
    /// </summary>
    void set_SplitCssIntoPages(bool value);
    
    System::String CssClassNamesPrefix;
    
    /// <summary>
    /// Gets the flag that indicates whether each page of source 
    /// document will be converted into it's own target HTML document, 
    /// i.e whether result HTML will be splitted into several HTML-pages.
    /// </summary>
    bool get_SplitIntoPages();
    /// <summary>
    /// Sets the flag that indicates whether each page of source 
    /// document will be converted into it's own target HTML document, 
    /// i.e whether result HTML will be splitted into several HTML-pages.
    /// </summary>
    void set_SplitIntoPages(bool value);
    
    HtmlSaveOptions::PartsEmbeddingModes PartsEmbeddingMode;
    HtmlSaveOptions::HtmlMarkupGenerationModes HtmlMarkupGenerationMode;
    HtmlSaveOptions::RasterImagesSavingModes RasterImagesSavingMode;
    bool RemoveEmptyAreasOnTopAndBottom;
    
    /// <summary>
    /// Gets a value indicating whether that HTML is created as fixed layout.
    /// </summary>
    /// <value>
    ///   <c>true</c> if [fixed layout]; otherwise, <c>false</c>.
    /// </value>
    bool get_FixedLayout();
    /// <summary>
    /// Sets a value indicating whether that HTML is created as fixed layout.
    /// </summary>
    /// <value>
    ///   <c>true</c> if [fixed layout]; otherwise, <c>false</c>.
    /// </value>
    void set_FixedLayout(bool value);
    /// <summary>
    /// Gets resolution for image rendering.
    /// </summary>
    /// <value>
    ///   Resolution
    /// </value>
    int32_t get_ImageResolution();
    /// <summary>
    /// Sets resolution for image rendering.
    /// </summary>
    /// <value>
    ///   Resolution
    /// </value>
    void set_ImageResolution(int32_t value);
    /// <summary>
    /// Specifies the name of an installed font which is used to substitute
    /// any document font that is not embedded and not installed in the system. 
    /// If null then default substitution font is used.
    /// </summary>
    /// <value>
    ///   Font name
    /// </value>
    System::String get_DefaultFontName();
    /// <summary>
    /// Specifies the name of an installed font which is used to substitute
    /// any document font that is not embedded and not installed in the system. 
    /// If null then default substitution font is used.
    /// </summary>
    /// <value>
    ///   Font name
    /// </value>
    void set_DefaultFontName(System::String value);
    /// <summary>
    /// Font sources of pre-saved fonts. 
    /// </summary>
    /// <remarks>
    /// Fonts may be saved preliminarily for cache purpose and then passed into Html conversion process.
    /// For example it may be useful in document splitting scenario and processing document pages in multiple threads with single set of fonts.
    /// </remarks>
    System::SharedPtr<Text::FontSourceCollection> get_FontSources();
    
    HtmlSaveOptions::FontEncodingRules FontEncodingStrategy;
    bool PagesFlowTypeDependsOnViewersScreenSize;
    bool TrySaveTextUnderliningAndStrikeoutingInCss;
    
    /// <summary>
    /// If attribute 'SplitOnPages=false', than whole HTML representing all input PDF pages wont
    ///     be not split into different HTML pages, but will be put into one big result HTML file.
    ///     But each source PDF page will be represented with it's own 
    ///     rectangle  area in HTML (if necessary that areas can be bordered to show page paper edges
    ///     with special attribute 'PageBorderIfAny'.
    ///  This parameter defines width of margin that will be forcibly left around that output HTML-areas
    ///    that represent pages of source PDF document.In essence it defines guaranteed interval between
    ///    HTML-representations of PDF "paper" pages such mode of conversion.
    /// </summary>
    int32_t get_AdditionalMarginWidthInPoints();
    /// <summary>
    /// If attribute 'SplitOnPages=false', than whole HTML representing all input PDF pages wont
    ///     be not split into different HTML pages, but will be put into one big result HTML file.
    ///     But each source PDF page will be represented with it's own 
    ///     rectangle  area in HTML (if necessary that areas can be bordered to show page paper edges
    ///     with special attribute 'PageBorderIfAny'.
    ///  This parameter defines width of margin that will be forcibly left around that output HTML-areas
    ///    that represent pages of source PDF document.In essence it defines guaranteed interval between
    ///    HTML-representations of PDF "paper" pages such mode of conversion.
    /// </summary>
    void set_AdditionalMarginWidthInPoints(int32_t value);
    /// <summary>
    /// If attribute UseZORder set to true, graphics and text are added to resultant HTML document accordingly Z-order in original PDF document. 
    /// If this attribute is false all graphics is put as single layer which may cause some unnecessary effects for overlapped objects.
    /// </summary>
    bool get_UseZOrder();
    /// <summary>
    /// If attribute UseZORder set to true, graphics and text are added to resultant HTML document accordingly Z-order in original PDF document. 
    /// If this attribute is false all graphics is put as single layer which may cause some unnecessary effects for overlapped objects.
    /// </summary>
    void set_UseZOrder(bool value);
    /// <summary>
    /// If attribute ConvertMarkedContentToLayers set to true then an all elements inside a PDF marked content (layer) will be put into an HTML <div> with "data-pdflayer" attribute specifying a layer name. This layer name will be extracted from optional properties of PDF marked content.
    /// If this attribute is false (by default) then no any layers will be created from PDF marked content.
    /// </summary>
    bool get_ConvertMarkedContentToLayers();
    /// <summary>
    /// If attribute ConvertMarkedContentToLayers set to true then an all elements inside a PDF marked content (layer) will be put into an HTML <div> with "data-pdflayer" attribute specifying a layer name. This layer name will be extracted from optional properties of PDF marked content.
    /// If this attribute is false (by default) then no any layers will be created from PDF marked content.
    /// </summary>
    void set_ConvertMarkedContentToLayers(bool value);
    /// <summary>
    /// This attribute sets minimal width of graphic path line.
    /// If thickness of line is less than 1px Adobe Acrobat rounds it to this value. So this attribute can be used to emulate this behavior for HTML browsers.
    /// </summary>
    float get_MinimalLineWidth();
    /// <summary>
    /// This attribute sets minimal width of graphic path line.
    /// If thickness of line is less than 1px Adobe Acrobat rounds it to this value. So this attribute can be used to emulate this behavior for HTML browsers.
    /// </summary>
    void set_MinimalLineWidth(float value);
    /// <summary>
    /// This attribute switch on the mode when text glyphs will not be grouped into words and strings
    /// This mode allows to keep maximum precision during positioning of glyphs on the page and it can be
    /// used for conversion documents with music notes or glyphs that should be placed separately each other.
    /// This parameter will be applied to document only when the value of FixedLayout attribute is true.
    /// </summary>
    bool get_PreventGlyphsGrouping();
    /// <summary>
    /// This attribute switch on the mode when text glyphs will not be grouped into words and strings
    /// This mode allows to keep maximum precision during positioning of glyphs on the page and it can be
    /// used for conversion documents with music notes or glyphs that should be placed separately each other.
    /// This parameter will be applied to document only when the value of FixedLayout attribute is true.
    /// </summary>
    void set_PreventGlyphsGrouping(bool value);
    /// <summary>
    /// For a PDF document with many pages the conversion may take a long time or hang.
    /// This attribute specifies the number of pages for the batch conversion mode.
    /// Example: 'ProcessingBatchSize = 20 pages, Pdf.Size = 100 pages'. Aspose.PDF converts 5 times by 20 pages to one HTLM file.
    /// </summary>
    int32_t get_ProcessingBatchSize();
    /// <summary>
    /// For a PDF document with many pages the conversion may take a long time or hang.
    /// This attribute specifies the number of pages for the batch conversion mode.
    /// Example: 'ProcessingBatchSize = 20 pages, Pdf.Size = 100 pages'. Aspose.PDF converts 5 times by 20 pages to one HTLM file.
    /// </summary>
    void set_ProcessingBatchSize(int32_t value);
    /// <summary>
    /// This attribute specifies a sequential grouping of glyphs and words into strings
    /// For example tags and words has different order in converted HTML and you want them to match.
    /// This parameter will be applied to document only when the value of FixedLayout attribute is true.
    /// </summary>
    bool get_SimpleTextboxModeGrouping();
    /// <summary>
    /// This attribute specifies a sequential grouping of glyphs and words into strings
    /// For example tags and words has different order in converted HTML and you want them to match.
    /// This parameter will be applied to document only when the value of FixedLayout attribute is true.
    /// </summary>
    void set_SimpleTextboxModeGrouping(bool value);
    /// <summary>
    /// This attribute specifies full width paragraph text for Flow mode, FixedLayout = false
    /// </summary>
    bool get_FlowLayoutParagraphFullWidth();
    /// <summary>
    /// This attribute specifies full width paragraph text for Flow mode, FixedLayout = false
    /// </summary>
    void set_FlowLayoutParagraphFullWidth(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="HtmlSaveOptions"/> class.
    /// </summary>
    HtmlSaveOptions();
    /// <summary>
    /// Initializes a new instance of the <see cref="HtmlSaveOptions"/> class.
    /// </summary>
    /// <param name="documentType">The <see cref="HtmlDocumentType"/>.</param>
    HtmlSaveOptions(HtmlDocumentType documentType);
    /// <summary>
    /// Initializes a new instance of the <see cref="HtmlSaveOptions"/> class.
    /// </summary>
    /// <param name="fixedLayout">if set to <c>true</c> HTML is created as fixed layout.</param>
    HtmlSaveOptions(bool fixedLayout);
    /// <summary>
    /// Initializes a new instance of the <see cref="HtmlSaveOptions"/> class.
    /// </summary>
    /// <param name="documentType">The <see cref="HtmlDocumentType"/>.</param>
    /// <param name="fixedLayout">if set to <c>true</c> HTML is created as fixed layout.</param>
    HtmlSaveOptions(HtmlDocumentType documentType, bool fixedLayout);
    
protected:

    /// <summary>
    /// This attribute determines text direction in converted document.
    /// </summary>
    Aspose::Pdf::Direction get_Direction();
    /// <summary>
    /// This attribute determines text direction in converted document.
    /// </summary>
    void set_Direction(Aspose::Pdf::Direction value);
    
    void CheckParametersConsistensyAndThrowExceptionOtherwise(bool targetIsStream);
    void ResetInternals();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    HtmlDocumentType _documentType;
    bool _fixedLayout;
    int32_t _imageResolution;
    System::String _defaultFontName;
    bool _compressSVGIfAny;
    bool _splitCssIntoPages;
    bool _splitIntoPages;
    System::SharedPtr<Text::FontSourceCollection> _fontSources;
    int32_t _additionalPageMarginWidth;
    bool _useZOrder;
    bool pr_ConvertMarkedContentToLayers;
    float pr_MinimalLineWidth;
    bool pr_PreventGlyphsGrouping;
    int32_t pr_ProcessingBatchSize;
    bool _simpleTextboxModeGrouping;
    bool pr_FlowLayoutParagraphFullWidth;
    Aspose::Pdf::Direction pr_Direction;
    
    void CheckStreamSavingParamsConsistency();
    void CheckFileSavingParamsConsystency();
    
};

} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif



