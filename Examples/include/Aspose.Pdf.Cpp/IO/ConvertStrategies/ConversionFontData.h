#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/sorted_dictionary.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace GlyphWidths { enum class FontProgramSource : uint8_t; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class IPdfFont; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class FontSymbol; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfString; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class CharSet; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class CIDSet; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class CIDToGIDMap; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class Type0Font; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class IConversionFontDataUpdater; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDataStream; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class IPostUpdateFontInfo; } } } } } }
namespace Aspose { namespace Fonts { class IFont; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace GlyphWidths { class IFontDataUpdater; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class Type1Font; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class IConversionInfo; } } } } }
namespace Aspose { namespace Pdf { enum class PdfFormat; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Addressing { class IRegistrar; } } } }
namespace Aspose { namespace Pdf { class PdfFormatConversionOptions; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class FontSharedObjectsUpdateManager; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class NonStaticFactory; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class ErrorCache; } } } } }
namespace Aspose { namespace Fonts { class GlyphID; } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace IO {

namespace ConvertStrategies {

enum class FontSubstitutionReason : int16_t
{
    None = 0,
    FontIsStandard = 1,
    ProblemFont,
    FontNotEmbedded,
    IncompartibleFontType
};

/// <summary>
/// Used by PDF_A conversion functionality to hold and process all necessary data for specified font
/// </summary>
class ConversionFontData : public System::Object
{
    typedef ConversionFontData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    class CharCodeProcessor : public System::Object
    {
        typedef CharCodeProcessor ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        CharCodeProcessor(System::SharedPtr<ConversionFontData> parent, bool processCharSet, bool processCIDSet, bool processCID2GIDMap);
        
        virtual void ProcessCharCodeDelegate(uint32_t charCode, uint32_t charIndex);
        void SetSegmentInfo(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segment, System::SharedPtr<Page> page);
        
    protected:
    
        System::WeakPtr<ConversionFontData> _parent;
        System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::Type0Font> _type0Font;
        bool _processCharSet;
        bool _processCIDSet;
        bool _processCID2GIDMap;
        System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> _segment;
        System::SharedPtr<Page> _page;
        
        void ProcessCharCode(System::SharedPtr<FontSymbol> data, uint32_t index);
        virtual System::SharedPtr<FontSymbol> GetFontSymbol(uint32_t charCode);
        System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::Type0Font> GetType0Font();
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    
public:

    /// <summary>
    /// PDF font for which all that data is collected
    /// </summary>
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> get_Font();
    /// <summary>
    /// Original font for this font data object
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> get_OriginalFont();
    /// <summary>
    /// New font which has substituted original font on processing step
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> get_NewFontForProcessing();
    /// <summary>
    /// Contains all the pages(numbers) which references the specified font
    /// </summary>
    System::ArrayPtr<int32_t> get_FontPageNumbers();
    /// <summary>
    /// All the symbols which font has in document
    /// </summary>
    System::ArrayPtr<System::SharedPtr<FontSymbol>> get_FontSymbols();
    /// <summary>
    /// Holds new CharSet for Type1 fonts
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::CharSet> get_CharSet();
    /// <summary>
    /// Holds new CIDSet for Type0 fonts
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::CIDSet> get_CIDSet();
    /// <summary>
    /// If original PDF font must be substituted on next steps - this field must reference on new font. Used for
    /// glyph width processing functionality
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::Type0Font> get_NewFont();
    /// <summary>
    /// Detects if Type1 font is needed in CharSet checks
    /// </summary>
    bool get_FontRequiresCharSetCheck();
    /// <summary>
    /// Detects if Type0 font is needed in CIDSet checks
    /// </summary>
    bool get_FontRequiresCIDSetCheck();
    /// <summary>
    /// Detects if Type0 font is needed in CIDToGIDMap checks
    /// </summary>
    bool get_FontRequiresCIDToGIDMapCheck();
    /// <summary>
    /// this flag tells are PUA symbols was detected
    /// </summary>
    bool get_HasPUASymbols();
    /// <summary>
    /// Contains all PUA symbols which font has
    /// </summary>
    System::SharedPtr<System::Collections::Generic::SortedDictionary<char16_t, System::SharedPtr<FontSymbol>>> get_PUASymbols();
    /// <summary>
    /// this flag tells that unicode substitutions for PUA symbols were observed during segments processing
    /// </summary>
    bool get_PossibleHasPUASymbols();
    /// <summary>
    /// Why this font must be substituted on processing step
    /// </summary>
    FontSubstitutionReason get_ProcessingSubstitutionReason();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> get_FontFileProgram();
    Aspose::Pdf::Engine::IO::ConvertStrategies::GlyphWidths::FontProgramSource get_FontProgramSource();
    /// <summary>
    /// returns IPostUpdateFontInfo member
    /// </summary>
    System::SharedPtr<ConvertHelpers::IPostUpdateFontInfo> get_PostUpdateFontInfo();
    /// <summary>
    /// returns IPdfFont.Font member
    /// </summary>
    System::SharedPtr<Aspose::Fonts::IFont> get_BinaryFont();
    
    ConversionFontData(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, System::SharedPtr<IConversionFontDataUpdater> updater, int32_t initialPageNumber);
    
    /// <summary>
    /// Sets font which has substituted original font on processing step
    /// </summary>
    /// <param name="newFont"></param>
    void SetNewFontForProcessing(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> newFont);
    void SetNewFont(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::Type0Font> font);
    /// <summary>
    /// Gets new CIDToGIDMap for Type0 fonts
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::CIDToGIDMap> GetCIDToGIDMap();
    System::String GetFontUnicodes();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> GetAllFontText();
    void SetFontFileProgram(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> GetFontFileProgram();
    /// <summary>
    /// Designed to update _binaryFont member with IFont edited
    /// </summary>
    /// <param name="updatedFont">IFont modified by conversion functionality</param>
    void UpdateBinaryFont(System::SharedPtr<Aspose::Fonts::IFont> updatedFont);
    void AddSegmentInfo(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segment, System::SharedPtr<Page> page);
    virtual void FreeUnusedMemory();
    virtual void FreePostUpdateUsedMemory();
    void PostUpdateFontProgram(System::SharedPtr<GlyphWidths::IFontDataUpdater> dataUpdater);
    void PostUpdateCidSet();
    void PostUpdateCidMap();
    bool FontHasChar(char16_t symbol);
    void AddPageNumber(int32_t num);
    void PrepareToAccumulateStatistic();
    void StopAccumulateStatistic();
    System::SharedPtr<FontSymbol> GetFontSymbol(uint32_t charCode);
    void InitPuaSymbolsData();
    void AddPuaSymbol(char16_t puaUnicode, System::SharedPtr<FontSymbol> symbol);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> _font;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> _newFontForProcessing;
    System::SharedPtr<System::Collections::Generic::List<int32_t>> _pageNumbers;
    System::ArrayPtr<uint8_t> _allDocumentFontChars;
    int32_t _maxFontCharCode;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSymbol>>> _fontSymbols;
    System::String _allFontUnicodes;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> _allFontText;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::CharSet> _charSet;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::CIDSet> _cidSet;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::CIDToGIDMap> _cidToGidMap;
    System::SharedPtr<ConversionFontData::CharCodeProcessor> _charCodeProcessor;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::Type0Font> _newFont;
    System::SharedPtr<IConversionFontDataUpdater> _conversionUpdater;
    bool _hasPuaSymbols;
    bool _possibleHasPuaSymbols;
    System::SharedPtr<System::Collections::Generic::SortedDictionary<char16_t, System::SharedPtr<FontSymbol>>> _puaSymbols;
    FontSubstitutionReason _substitutionReason;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> _fontFileProgram;
    Aspose::Pdf::Engine::IO::ConvertStrategies::GlyphWidths::FontProgramSource _fontProgramSource;
    System::SharedPtr<ConvertHelpers::IPostUpdateFontInfo> _postUpdateFontInfo;
    System::SharedPtr<Aspose::Fonts::IFont> _binaryFont;
    
    void ProcessSegmentText(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segment, System::SharedPtr<Page> page);
    virtual void ProcessPdfSegmentText(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> pdfText, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segment, System::SharedPtr<Page> page);
    void ProcessPdfString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> pdfText, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segment, System::SharedPtr<Page> page);
    virtual void ProcessUnicodeChar(System::SharedPtr<FontSymbol> fontSymbol, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segment, System::SharedPtr<Page> page, int32_t index);
    void ProcessCharSet(System::SharedPtr<FontSymbol> symbol, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::Type1Font> type1Font);
    void ProcessCIDSet(System::SharedPtr<FontSymbol> symbol, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::Type0Font> Type0Font);
    void ProcessCidToGIDMap(System::SharedPtr<FontSymbol> symbol, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::Type0Font> type0Font);
    void ProcessPuaSymbol(System::SharedPtr<FontSymbol> fontSymbol, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segment, int32_t index, System::SharedPtr<Page> page);
    System::Object::shared_members_type GetSharedMembers() override;
    
};

/// <summary>
/// This interface used for callback purposes
/// </summary>
class IConversionFontDataUpdater : public System::Object
{
    typedef IConversionFontDataUpdater ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual System::SharedPtr<IConversionInfo> get_ConversionInfo() = 0;
    
    virtual void ProcessPUASegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segment, char16_t PUA, int32_t index, System::SharedPtr<Page> page, System::SharedPtr<ConversionFontData> fontData) = 0;
    
};

/// <summary>
/// Used to provide all the necessary information about Conversion data to objects which are external to 
/// PdfConvertStrategy-related objects
/// </summary>
class IConversionInfo : public System::Object
{
    typedef IConversionInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual PdfFormat get_Format() = 0;
    virtual System::SharedPtr<Aspose::Pdf::Document> get_Document() = 0;
    virtual bool get_IsConversion() = 0;
    virtual bool get_IsOnlyValidation() = 0;
    virtual System::SharedPtr<Aspose::Pdf::Engine::Addressing::IRegistrar> get_Registrar() = 0;
    virtual System::SharedPtr<PdfFormatConversionOptions> get_Options() = 0;
    virtual System::SharedPtr<PdfConvertStrategy> get_Converter() = 0;
    virtual System::SharedPtr<GlyphWidths::IFontDataUpdater> get_FontDataUpdater() = 0;
    virtual System::SharedPtr<ConvertHelpers::IPostUpdateFontInfo> get_PostUpdateFontInfo() = 0;
    virtual System::SharedPtr<ConvertHelpers::FontSharedObjectsUpdateManager> get_FontSharedObjectsManager() = 0;
    virtual System::SharedPtr<ConvertHelpers::NonStaticFactory> get_ConverterRelatedFactory() = 0;
    
};

/// <summary>
/// Contains information needed to process some font-specific tasks. Mainly used by glyph width processing
/// functionality
/// </summary>
class FontErrorInfo : public System::Object
{
    typedef FontErrorInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<ConversionFontData> FontData;
    int32_t PageNum;
    System::SharedPtr<Aspose::Pdf::Engine::IO::ConvertStrategies::ErrorCache> ErrorCache;
    System::SharedPtr<IConversionInfo> ConversionInfo;
    
    FontErrorInfo(System::SharedPtr<ConversionFontData> fontData, int32_t pageNum, System::SharedPtr<Aspose::Pdf::Engine::IO::ConvertStrategies::ErrorCache> errorCache, System::SharedPtr<IConversionInfo> conversionInfo);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
};

/// <summary>
/// Represents every text symbol divided on all meaningful parts
/// </summary>
class FontSymbol : public System::Object
{
    typedef FontSymbol ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    uint32_t get_CharCode();
    uint32_t get_CID();
    char16_t get_Unicode();
    System::ArrayPtr<int32_t> get_Unicodes();
    System::SharedPtr<Aspose::Fonts::GlyphID> get_GlyphID();
    bool get_IsPUA();
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> get_Font();
    
    FontSymbol(uint32_t charCode, uint32_t cid, char16_t unicode, System::SharedPtr<System::Collections::Generic::List<int32_t>> unicodes, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font);
    
    void SetUnicode(char16_t value);
    void SetGid(System::SharedPtr<Aspose::Fonts::GlyphID> newGid);
    void SetPua(bool value);
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    virtual int32_t GetHashCode();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    uint32_t _charCode;
    uint32_t _cid;
    char16_t _unicode;
    System::SharedPtr<System::Collections::Generic::List<int32_t>> _unicodes;
    System::SharedPtr<Aspose::Fonts::GlyphID> _glyphID;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> _font;
    bool _isPUA;
    
};

} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


