#pragma once

#include <xml/xml_text_writer.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/enum_helpers.h>
#include <system/collections/queue.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class TaggedPdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class VersionConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { enum class PdfFormat; } }
namespace Aspose { namespace Pdf { enum class ConvertErrorAction; } }
namespace Aspose { namespace Pdf { enum class ConvertTransparencyAction; } }
namespace Aspose { namespace Pdf { class PdfANonSpecificationFlags; } }
namespace Aspose { namespace Pdf { class PdfASymbolicFontEncodingStrategy; } }
namespace Aspose { namespace Pdf { namespace PdfAOptionClasses { class ToUnicodeProcessingRules; } } }
namespace Aspose { namespace Pdf { namespace PdfAOptionClasses { class FontEmbeddingOptions; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Some documens have large size after converison into PDF/A format. To reduce file size for these
/// documents it's necessary to define a strategy of fonts removing. 
/// This enumeration declares a strategies which can be used to optimize fonts usage.
/// Every strategy from this enumeration has sense only when flag <see cref="OptimizeFileSize"/> is set.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfFormatConversionOptions : public System::Object
{
    typedef PdfFormatConversionOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TaggedPdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::VersionConvertStrategy;
    friend class Aspose::Pdf::Document;
    
public:

    enum class SegmentAlignStrategy : uint8_t
    {
        None = 0,
        RestoreSegmentBounds = 1
    };
    
    enum class PuaProcessingStrategy
    {
        /// <summary>
        /// Disable PUA symbol processing. This strategy used by default for PDF/A documents with Level B conformance.
        /// </summary>
        None = 0,
        /// <summary>
        /// Inserts marked content block with ActualText entry which contains empty text.
        /// This strategy gives good results for documents without marked content blocks. Used by default for PDF/A documents with Level A conformance.
        /// </summary>
        SurroundPuaTextWithEmptyActualText,
        /// <summary>
        /// This strategy works slower than 'SurroundPuaTextWithEmptyActualText' but it can remove
        /// PUA compliant errors for documents which can't be handled properly by SurroundPuaTextWithEmptyActualText. PUA symbols
        /// are substituted on symbol 'space' or special unicode (some PUA symbols have unicode analogs). Substitution applied
        /// not to document's text but to font's internal data ToUnicode so it doesn't affects symbol's vision but it
        /// affects symbol's presentation in copy/paste operation system buffer.
        /// </summary>
        SubstitutePuaSymbols
    };
    
    enum class RemoveFontsStrategy : uint8_t
    {
        /// <summary>
        /// This strategy removes all the fonts which have duplicates in document. If document 
        /// contains group of duplicated fonts only one font from this group is embedded in document. 
        /// All other fonts from this group are removed from document, every removed font
        /// substituted with the already embedded analog.
        /// </summary>
        RemoveDuplicatedFonts = 4,
        /// <summary>
        /// This strategy looks like <see cref="RemoveDuplicatedFonts"/> but it removes not fully 
        /// duplicated fonts but fonts which are similar one to another and differs only by parameter "Widths".
        /// This parameter contains set of some widths for specified symbols of font. Every value of width 
        /// from this "Widths" set is not the real width of symbol(glyph), real width for this symbol already 
        /// defined in font's binary data. Value of width from "Widths" set means visual width for this 
        /// symbol - the width which PDF viewer software must set on displaying symbol instead of real width 
        /// defined in the font. More accurately specification tells:
        /// Acrobat 5.0 and later viewers use the glyph widths stored in the font dictionary to override the 
        /// widths of glyphs in the font program itself, which improves the consistency of the display and 
        /// printing of the document.
        /// This strategy is more effective than <see cref="RemoveDuplicatedFonts"/> but using of this 
        /// strategy in some cases theoretically could damage visual presentation of converted document. 
        /// This defect is possible due to that declared widths of fonts could be different for the same 
        /// symbol and in this case width of this symbol will be changed to new one after font 
        /// substitution - when removed font will be replaced in document with already embedded one.
        /// And if symbol's visual width will be changed - it will be shown incorrectly and this 
        /// distinction could cause visual defects such as text overlapping or another problems. 
        /// But visual defect described is a very rare case and this strategy reduces size of
        /// document more effectively.
        /// </summary>
        RemoveSimilarFontsWithDifferentWidths = 1,
        /// <summary>
        /// This is most effective strategy to reduce document's size. It takes fully embedded font sets 
        /// and trim them down to only the subsets used. It's recommended to use this strategy in combination
        /// with <see cref="RemoveDuplicatedFonts"/> or <see cref="RemoveSimilarFontsWithDifferentWidths"/> to
        /// get multiple compression effect for file size. Using of all three strategies simultaneously 
        /// has no sense and strategy <see cref="RemoveSimilarFontsWithDifferentWidths"/> will not 
        /// be used in this case.
        /// </summary>
        SubsetFonts = 2
    };
    
    
public:

    /// <summary>
    /// Is low memory conversion mode enabled
    /// </summary>
    bool get_IsLowMemoryMode();
    /// <summary>
    /// Is low memory conversion mode enabled
    /// </summary>
    void set_IsLowMemoryMode(bool value);
    /// <summary>
    /// PDF format.
    /// </summary>
    PdfFormat get_Format();
    /// <summary>
    /// PDF format.
    /// </summary>
    void set_Format(PdfFormat value);
    /// <summary>
    /// Path to file where comments will be stored.
    /// </summary>
    System::String get_LogFileName();
    /// <summary>
    /// Path to file where comments will be stored.
    /// </summary>
    void set_LogFileName(System::String value);
    /// <summary>
    /// Stream where comments will be stored.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_LogStream();
    /// <summary>
    /// Stream where comments will be stored.
    /// </summary>
    void set_LogStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Action for objects that can not be converted
    /// </summary>
    ConvertErrorAction get_ErrorAction();
    /// <summary>
    /// Action for objects that can not be converted
    /// </summary>
    void set_ErrorAction(ConvertErrorAction value);
    /// <summary>
    /// Action for image masked objects
    /// </summary>
    ConvertTransparencyAction get_TransparencyAction();
    /// <summary>
    /// Action for image masked objects
    /// </summary>
    void set_TransparencyAction(ConvertTransparencyAction value);
    /// <summary>
    /// Gets PdfFormatConversionOptions object with default parameters
    /// </summary>
    static System::SharedPtr<PdfFormatConversionOptions> get_Default();
    /// <summary>
    /// Holds flags to control PDF/A conversion process for cases when source document
    /// doesn't correspond to PDF/A specification.
    /// </summary>
    System::SharedPtr<PdfANonSpecificationFlags> get_NonSpecificationCases();
    /// <summary>
    /// Strategy to copy encoding data for symbolic fonts if symbolic TrueType font
    /// has more than one encoding subtable.
    /// </summary>
    System::SharedPtr<PdfASymbolicFontEncodingStrategy> get_SymbolicFontEncodingStrategy();
    /// <summary>
    /// Strategy to copy encoding data for symbolic fonts if symbolic TrueType font
    /// has more than one encoding subtable.
    /// </summary>
    void set_SymbolicFontEncodingStrategy(System::SharedPtr<PdfASymbolicFontEncodingStrategy> value);
    /// <summary>
    /// This flag controls text alignment in converted document. By default document conversion 
    /// doesn't affect text alignment and leave text as is. But in some cases font substitution
    /// causes text overlapping or extra spaces in converted document. When  this flag is set
    /// special alignment operations will be performed. This flag should be set only for documents
    /// which have problems with overlapped text or extra text spaces cause using of this flag decrease
    /// performance and in some cases could corrupt text content. 
    /// </summary>
    bool get_AlignText();
    /// <summary>
    /// This flag controls text alignment in converted document. By default document conversion 
    /// doesn't affect text alignment and leave text as is. But in some cases font substitution
    /// causes text overlapping or extra spaces in converted document. When  this flag is set
    /// special alignment operations will be performed. This flag should be set only for documents
    /// which have problems with overlapped text or extra text spaces cause using of this flag decrease
    /// performance and in some cases could corrupt text content. 
    /// </summary>
    void set_AlignText(bool value);
    
    PdfFormatConversionOptions::SegmentAlignStrategy AlignStrategy;
    
    /// <summary>
    /// Strategy to process symbols from unicode Private Use Area (PUA).
    /// </summary>
    PdfFormatConversionOptions::PuaProcessingStrategy get_PuaTextProcessingStrategy();
    /// <summary>
    /// Strategy to process symbols from unicode Private Use Area (PUA).
    /// </summary>
    void set_PuaTextProcessingStrategy(PdfFormatConversionOptions::PuaProcessingStrategy value);
    /// <summary>
    /// Gets or sets a flag which enables/disables special conversion mode to get PDF/A document with reduced file size.
    /// Now this flag impacts on optimization of fonts used in PDF document, possibly, in future, this flag 
    /// also will be used to switch on optimization for another data structures, such as graphic.  
    /// Set of this flag and mode could significantly reduce file size but at the same time it could
    /// significantly decrease performance of conversion.
    /// </summary>
    bool get_OptimizeFileSize();
    /// <summary>
    /// Gets or sets a flag which enables/disables special conversion mode to get PDF/A document with reduced file size.
    /// Now this flag impacts on optimization of fonts used in PDF document, possibly, in future, this flag 
    /// also will be used to switch on optimization for another data structures, such as graphic.  
    /// Set of this flag and mode could significantly reduce file size but at the same time it could
    /// significantly decrease performance of conversion.
    /// </summary>
    void set_OptimizeFileSize(bool value);
    /// <summary>
    /// Strategy(ies) to exclude superfluous fonts and reduce document file size. 
    /// This parameter has sense only when flag <see cref="OptimizeFileSize"/> is set to true.
    /// By default combination of strategies <see cref="SubsetFonts"/> and
    /// <see cref="RemoveDuplicatedFonts"/> is used.
    /// </summary>
    PdfFormatConversionOptions::RemoveFontsStrategy get_ExcludeFontsStrategy();
    /// <summary>
    /// Strategy(ies) to exclude superfluous fonts and reduce document file size. 
    /// This parameter has sense only when flag <see cref="OptimizeFileSize"/> is set to true.
    /// By default combination of strategies <see cref="SubsetFonts"/> and
    /// <see cref="RemoveDuplicatedFonts"/> is used.
    /// </summary>
    void set_ExcludeFontsStrategy(PdfFormatConversionOptions::RemoveFontsStrategy value);
    /// <summary>
    /// Options for cases when it's not possible to embed some fonts into PDF document.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::PdfAOptionClasses::FontEmbeddingOptions> get_FontEmbeddingOptions();
    /// <summary>
    /// Rules to solve problems with unicode mapping. Can be null.
    /// </summary>
    System::SharedPtr<PdfAOptionClasses::ToUnicodeProcessingRules> get_UnicodeProcessingRules();
    /// <summary>
    /// Rules to solve problems with unicode mapping. Can be null.
    /// </summary>
    void set_UnicodeProcessingRules(System::SharedPtr<PdfAOptionClasses::ToUnicodeProcessingRules> value);
    /// <summary>
    /// Gets or sets the filename of icc profile name. In case of null the default icc profile used.
    /// </summary>
    System::String get_IccProfileFileName();
    /// <summary>
    /// Gets or sets the filename of icc profile name. In case of null the default icc profile used.
    /// </summary>
    void set_IccProfileFileName(System::String value);
    /// <summary>
    /// This property is out-property. It holds all the fonts(font names) which were not found on computer 
    /// at last PDF/A conversion.
    /// </summary>
    System::ArrayPtr<System::String> get_NotAccessibleFonts();
    
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="outputLogFileName">Path to file where comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    PdfFormatConversionOptions(System::String outputLogFileName, PdfFormat format, ConvertErrorAction action);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="outputLogFileName">Path to file where comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    PdfFormatConversionOptions(System::String outputLogFileName, PdfFormat format);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="format">The pdf format.</param>
    PdfFormatConversionOptions(PdfFormat format);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    PdfFormatConversionOptions(PdfFormat format, ConvertErrorAction action);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="outputLogFileName">Path to file where comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <param name="transparencyAction">Action for image masked objects</param>
    PdfFormatConversionOptions(System::String outputLogFileName, PdfFormat format, ConvertErrorAction action, ConvertTransparencyAction transparencyAction);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="outputLogStream">Stream where comments will be stored</param>
    /// <param name="format">The pdf format</param>
    /// <param name="action">Action for objects that can not be converted</param>
    PdfFormatConversionOptions(System::SharedPtr<System::IO::Stream> outputLogStream, PdfFormat format, ConvertErrorAction action);
    
protected:

    bool PuaProcessingTextStrategyExplicitlyDefined;
    
    System::SharedPtr<System::Xml::XmlTextWriter> get_Xml();
    System::SharedPtr<Aspose::Pdf::Document> get_Document();
    bool get_OnlyValidation();
    System::String get_DefaultLogFileName();
    bool get_RemoveDuplicatedFonts();
    bool get_RemoveSimilarFontsWithDifferentWidths();
    bool get_SubsetFonts();
    
    void SetAdditionalParameters(System::SharedPtr<System::Xml::XmlTextWriter> xml, System::SharedPtr<Aspose::Pdf::Document> doc, bool onlyValidation);
    System::SharedPtr<System::Xml::XmlTextWriter> CreateTextWriter();
    void AddNotAccessibleFont(System::String fontName);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    PdfFormat _format;
    System::String _outLogFileName;
    System::SharedPtr<System::IO::Stream> _outLogStream;
    ConvertErrorAction _action;
    ConvertTransparencyAction _transparencyAction;
    static System::SharedPtr<PdfFormatConversionOptions> _defaultOptions;
    static const System::String DefaultLogName;
    System::SharedPtr<System::Xml::XmlTextWriter> _xml;
    System::SharedPtr<Aspose::Pdf::Document> _document;
    bool _onlyValidation;
    bool _alignText;
    bool isLowMemoryMode;
    PdfFormatConversionOptions::PuaProcessingStrategy _puaProcessingTextStrategy;
    bool _optimizeFileSize;
    System::SharedPtr<PdfANonSpecificationFlags> _nonSpecificationFlags;
    System::SharedPtr<PdfASymbolicFontEncodingStrategy> _symbolicEncodingStrategy;
    System::SharedPtr<PdfAOptionClasses::ToUnicodeProcessingRules> _toUnicodeRules;
    System::SharedPtr<Aspose::Pdf::PdfAOptionClasses::FontEmbeddingOptions> _fontEmbeddingOpts;
    System::String _iccProfileFileName;
    System::SharedPtr<System::Collections::Generic::List<System::String>> _notAccessibleFonts;
    PdfFormatConversionOptions::RemoveFontsStrategy pr_ExcludeFontsStrategy;
    
    static System::SharedPtr<PdfFormatConversionOptions> CreateDefaultOptions();
    void InitBase();
    
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::PdfFormatConversionOptions::RemoveFontsStrategy);
DECLARE_USING_GLOBAL_OPERATORS
/// <summary>
/// This class holds flags to control PDF/A conversion for cases when source PDF document doesn't 
/// correspond to PDF specification. If flags of this clas are used it decreases performance 
/// but it's necessary when source PDF document can't be convert into PDF/A format by usual way. 
/// By default all flags are set to false.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfANonSpecificationFlags : public System::Object
{
    typedef PdfANonSpecificationFlags ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Some PDF documents contain fonts which have different names in internal data. 
    /// Use of this flag enforces special processing logic for cases when fields 
    /// BaseFont and FontDescriptor.FontName are different.
    /// 
    /// </summary>
    bool get_CheckDifferentNamesInFontDictionaries();
    /// <summary>
    /// Some PDF documents contain fonts which have different names in internal data. 
    /// Use of this flag enforces special processing logic for cases when fields 
    /// BaseFont and FontDescriptor.FontName are different.
    /// 
    /// </summary>
    void set_CheckDifferentNamesInFontDictionaries(bool value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    PdfANonSpecificationFlags();
    
private:

    bool pr_CheckDifferentNamesInFontDictionaries;
    
};

/// <summary>
/// This class describes rules which can be used to tune process of copy encoding data for cases
/// when TrueType symbolic font has more than one encoding.
/// Some PDF documents after conversion into PDF/A format could have error 
/// "More than one encoding in symbolic TrueType font's cmap". 
/// What is a reason of this error? All TrueType symbolic fonts have special table "cmap"
/// in it's internal data. This table maps character codes to glyph indices. 
/// And this table could contain different encoding subtables which
/// describe encodings used. See advanced info about cmap tables at
/// https://developer.apple.com/fonts/TrueType-Reference-Manual/RM06/Chap6cmap.html.
/// Usually cmap table contains several encoding subtables, but PDF/A standard requires
/// that only one encoding subtable (3,0) must be leaved for this font in PDF/A document. 
/// And key question here - what data must be taken from another subtables to copy into
/// destination encoding table (3,0)? Majority of fonts have 'well-formed' cmap tables where
/// every encoding subtable is fully consistent with another subtable. But some fonts
/// have cmap tables with collisions - where for example one subtable has glyph index 
/// 100 for unicode 100, but another subtable has glyph index 200 for the same unicode 100.
/// To solve this problems special strategy needed. 
/// By default following strategy used: 
/// mac subtable(1,0) is looked for. If this table is found, only this data used to fill destination
/// table (3,0). If mac subtable is not found then all subtables except (3,0) are iterated 
/// and used to copy data into destination (3,0) subtable. Also mapping for every unicode(unicode, glyph index)
/// is copied into destination table only if destination table has no this unicode at current moment. 
/// So, for example if first subtabe has glyph index 100 for unicode 100, and next subtable has glyph
/// index 200 for the same unicode 100, only data from first subtable (unicode=100, glyph index = 100) will be copied. 
/// So each previous subtable takes precedence over the next. 
/// Properties of this class <see cref="PdfASymbolicFontEncodingStrategy"/> help tune default behaviour. 
/// If property <see cref="PreferredCmapEncodingTable"/> of type <see cref="QueueItem::CMapEncodingTableType"/>
/// is set, then relevant subtable will be used in precedence to mac subtable(1,0). Value 'MacTable' from
/// enumeration <see cref="QueueItem::CMapEncodingTableType"/> has no sense in this case, cause it 
/// points on the same mac subtable (1,0) which will be used by default. 
/// Property <see cref="CmapEncodingTablesPriorityQueue"/> discards all priorities for any subtable.
/// If this property is set, then only subtables from declared queue will be used in specified order.
/// If subtables specified are not found then default iteration of all subtables and copy strategy described above
/// will be used.
/// Object <see cref="QueueItem"/> specifies encoding subtable used. This subtable can be set
/// via combination of members(PlatformID, PlatformSpecificID) or via <see cref="QueueItem::CMapEncodingTableType"/>
/// enumeration.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfASymbolicFontEncodingStrategy : public System::Object
{
    typedef PdfASymbolicFontEncodingStrategy ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    class ASPOSE_PDF_SHARED_API QueueItem : public System::Object
    {
        typedef QueueItem ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        enum class CMapEncodingTableType : int16_t
        {
            /// <summary>
            /// Specifies windows unicode table(3,1) - Unicode BMP-only (UCS-2)
            /// </summary>
            WindowsUnicodeTable = 0,
            /// <summary>
            /// Specifies windows symbolic table - (3,0)
            /// </summary>
            WindowsSymbolicTable,
            /// <summary>
            /// Specifies mac table(1,0)
            /// </summary>
            MacTable,
            /// <summary>
            /// Specifies unicode table(0,3)
            /// </summary>
            UnicodeTable
        };
        
        
    public:
    
        /// <summary>
        /// Specifies encoding subtable via <see cref="CMapEncodingTableType"/>enumeration
        /// </summary>
        PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType get_CMapEncodingTable();
        /// <summary>
        /// Specifies encoding subtable via <see cref="CMapEncodingTableType"/>enumeration
        /// </summary>
        void set_CMapEncodingTable(PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType value);
        /// <summary>
        /// Platform identifier for encoding subtable
        /// </summary>
        uint16_t get_PlatformID();
        /// <summary>
        /// Platform identifier for encoding subtable
        /// </summary>
        void set_PlatformID(uint16_t value);
        /// <summary>
        /// Platform-specific encoding identifier for encoding subtable
        /// </summary>
        uint16_t get_PlatformSpecificID();
        /// <summary>
        /// Platform-specific encoding identifier for encoding subtable
        /// </summary>
        void set_PlatformSpecificID(uint16_t value);
        
        /// <summary>
        /// Constructor, specifies mac subtable(1,0) by default
        /// </summary>
        QueueItem();
        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="platformID">Platform identifier for encoding subtable</param>
        /// <param name="platformSpecificID">Platform-specific encoding identifier for encoding subtable</param>
        QueueItem(uint16_t platformID, uint16_t platformSpecificID);
        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="cmapTable">encoding subtable</param>
        QueueItem(PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType cmapTable);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType pr_CMapEncodingTable;
        uint16_t pr_PlatformID;
        uint16_t pr_PlatformSpecificID;
        
    };
    
    
public:

    /// <summary>
    /// Specifies subtable which will be used in precedence to mac subtable(1,0). Value 'MacTable' from
    /// enumeration <see cref="QueueItem::CMapEncodingTableType"/> has no sense in this case.
    /// </summary>
    PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType get_PreferredCmapEncodingTable();
    /// <summary>
    /// Specifies subtable which will be used in precedence to mac subtable(1,0). Value 'MacTable' from
    /// enumeration <see cref="QueueItem::CMapEncodingTableType"/> has no sense in this case.
    /// </summary>
    void set_PreferredCmapEncodingTable(PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType value);
    /// <summary>
    /// Specifies queue of encoding subtables to process.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::Queue<System::SharedPtr<PdfASymbolicFontEncodingStrategy::QueueItem>>> get_CmapEncodingTablesPriorityQueue();
    /// <summary>
    /// Specifies queue of encoding subtables to process.
    /// </summary>
    void set_CmapEncodingTablesPriorityQueue(System::SharedPtr<System::Collections::Generic::Queue<System::SharedPtr<PdfASymbolicFontEncodingStrategy::QueueItem>>> value);
    
    /// <summary>
    /// Constructor. Sets default subtable (mac 1,0)
    /// </summary>
    PdfASymbolicFontEncodingStrategy();
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="priorityQueue">queue of encoding subtables to iterate</param>
    PdfASymbolicFontEncodingStrategy(System::SharedPtr<System::Collections::Generic::Queue<System::SharedPtr<PdfASymbolicFontEncodingStrategy::QueueItem>>> priorityQueue);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="preferredEncodingTable">encoding subtable which will be used in precedence to mac subtable(1,0)</param>
    PdfASymbolicFontEncodingStrategy(PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType preferredEncodingTable);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType pr_PreferredCmapEncodingTable;
    System::SharedPtr<System::Collections::Generic::Queue<System::SharedPtr<PdfASymbolicFontEncodingStrategy::QueueItem>>> pr_CmapEncodingTablesPriorityQueue;
    
};

} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf);



