#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>

#include "Stamp_.h"

namespace Aspose { namespace Pdf { namespace Facades { class FormattedText; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class FormattedTextTests; } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDataStream; } } } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Reresents textual stamp.
/// </summary>
class ASPOSE_PDF_SHARED_API TextStamp : public Aspose::Pdf::Stamp
{
    typedef TextStamp ThisType;
    typedef Aspose::Pdf::Stamp BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::FormattedText;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::Facades::FormattedTextTests;
    
private:

    class TextLine : public System::Object
    {
        typedef TextLine ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String get_Text();
        double get_Spacing();
        
        TextLine(System::String text, double spacing);
        TextLine(System::String text);
        
    private:
    
        System::String _text;
        double _spacing;
        
    };
    
    class WordInfo : public System::Object
    {
        typedef WordInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String text;
        System::String space;
        
        WordInfo(System::String text);
        
    };
    
    
public:

    /// <summary>
    /// This property determines how stamp is drawn on page. If Draw = true stamp is drawn as graphic operators and if draw = false then stamp is drawn as text.
    /// </summary>
    bool get_Draw();
    /// <summary>
    /// This property determines how stamp is drawn on page. If Draw = true stamp is drawn as graphic operators and if draw = false then stamp is drawn as text.
    /// </summary>
    void set_Draw(bool value);
    /// <summary>
    /// Defines coordinate origin for placing text.
    /// If TreatYIndentAsBaseLine = true (default when Draw = true) YIndent value will be treated as text base line.
    /// If TreatYIndentAsBaseLine = false (default when Draw = false) YIndent value will be treated as bottom (descent line) of text.
    /// </summary>
    bool get_TreatYIndentAsBaseLine();
    /// <summary>
    /// Defines coordinate origin for placing text.
    /// If TreatYIndentAsBaseLine = true (default when Draw = true) YIndent value will be treated as text base line.
    /// If TreatYIndentAsBaseLine = false (default when Draw = false) YIndent value will be treated as bottom (descent line) of text.
    /// </summary>
    void set_TreatYIndentAsBaseLine(bool value);
    /// <summary>
    /// Defines word wrap. If this property set to true and Width value specified, text will be broken in the several lines to fit into specified width. Default value: false.
    /// </summary>
    bool get_WordWrap();
    /// <summary>
    /// Defines word wrap. If this property set to true and Width value specified, text will be broken in the several lines to fit into specified width. Default value: false.
    /// </summary>
    void set_WordWrap(bool value);
    /// <summary>
    /// Defines text justification. If this property is set to true, both left and right edges of the text are aligned. Default value: false.
    /// </summary>
    bool get_Justify();
    /// <summary>
    /// Defines text justification. If this property is set to true, both left and right edges of the text are aligned. Default value: false.
    /// </summary>
    void set_Justify(bool value);
    /// <summary>
    /// Defines scaling of the text. If this property is set to true and Width value specified, text will be scaled in order to fit to specified width.
    /// </summary>
    bool get_Scale();
    /// <summary>
    /// Defines scaling of the text. If this property is set to true and Width value specified, text will be scaled in order to fit to specified width.
    /// </summary>
    void set_Scale(bool value);
    /// <summary>
    /// Gets or sets string value which is used as stamp on the page.
    /// </summary>
    System::String get_Value();
    /// <summary>
    /// Gets or sets string value which is used as stamp on the page.
    /// </summary>
    void set_Value(System::String value);
    /// <summary>
    /// Gets text properties of the stamp. See <see cref="TextState"/> for details.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState();
    /// <summary>
    /// Alignment of the text inside the stamp.
    /// </summary>
    Aspose::Pdf::HorizontalAlignment get_TextAlignment();
    /// <summary>
    /// Alignment of the text inside the stamp.
    /// </summary>
    void set_TextAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Desired width of the stamp on the page. 
    /// </summary>
    virtual double get_Width();
    /// <summary>
    /// Desired width of the stamp on the page. 
    /// </summary>
    virtual void set_Width(double value);
    /// <summary>
    /// Desired height of the stamp on the page. 
    /// </summary>
    virtual double get_Height();
    /// <summary>
    /// Desired height of the stamp on the page. 
    /// </summary>
    virtual void set_Height(double value);
    /// <summary>
    /// Max row height for WordWrap option. 
    /// </summary>
    double get_MaxRowWidth();
    /// <summary>
    /// Max row height for WordWrap option. 
    /// </summary>
    void set_MaxRowWidth(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextStamp"/> class.
    /// </summary>
    /// <param name="value">
    /// Stamp value.
    /// </param>
    TextStamp(System::String value);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextStamp"/> class.
    /// </summary>
    /// <param name="value">Stamp value.</param>
    /// <param name="textState">Stamp text state.</param>
    TextStamp(System::String value, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    
    /// <summary>
    /// Adds textual stamp on the page.
    /// </summary>
    /// <param name="page">
    /// Page for stamping.
    /// </param>
    virtual void Put(System::SharedPtr<Page> page);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextStamp"/> class with formattedText object
    /// </summary>
    /// <param name="formattedText">FormattedText object which contains text of the stamp.</param>
    TextStamp(System::SharedPtr<Facades::FormattedText> formattedText);
    
protected:

    Aspose::Pdf::HorizontalAlignment _textAlignemnt;
    
    static System::SharedPtr<Aspose::Pdf::Text::Font> get_DefaultFont();
    
    static float DefaultFontSize;
    
    virtual void ClearCache();
    /// <summary>
    /// Returns position and size of text stamp.
    /// </summary>
    /// <returns>Rectangle of the stamp.</returns>
    virtual System::SharedPtr<Rectangle> getRect();
    /// <summary>
    /// Creates XForm which contains operators for text output. 
    /// </summary>
    /// <param name="page">Page where stamp should be placed.</param>
    /// <returns>Created XForm.</returns>
    virtual System::SharedPtr<XForm> createXForm(System::SharedPtr<Page> page);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextStamp::TextLine>>> _lines;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Text::TextFragment>>> _fragments;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _textState;
    System::SharedPtr<Rectangle> _rect;
    bool _wordwrap;
    bool _scale;
    bool _draw;
    bool _useBaseLineOrigin;
    bool _isOrigingSet;
    double _desiredWidth;
    double _desiredHeight;
    static double VERTICAL_INDENT;
    System::SharedPtr<Engine::Data::IPdfObject> _cache;
    double _maxRowWidth;
    
    bool IsBlankSpace(char16_t c);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextStamp::WordInfo>>> SplitIntoWords(System::String text);
    void DrawText(System::SharedPtr<XForm> form, System::SharedPtr<Text::TextFragment> textFragment);
    void UpdateStream(System::SharedPtr<Engine::Data::IPdfDataStream> stream, System::ArrayPtr<uint8_t> data);
    System::SharedPtr<System::Collections::Generic::List<System::String>> BreakToLines(System::String text);
    
};

} // namespace Pdf
} // namespace Aspose


