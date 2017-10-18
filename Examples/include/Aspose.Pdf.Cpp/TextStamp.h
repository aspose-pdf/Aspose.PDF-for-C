#ifndef _Aspose_Pdf_TextStamp_h_
#define _Aspose_Pdf_TextStamp_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    class ASPOSE_PDF_SHARED_API TextLine : public System::Object
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
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "TextLine"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::String _text;
        double _spacing;
        
    };
    
    class ASPOSE_PDF_SHARED_API WordInfo : public System::Object
    {
        typedef WordInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String text;
        System::String space;
        
        WordInfo(System::String text);
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "WordInfo"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    
public:

    bool get_Draw();
    void set_Draw(bool value);
    bool get_TreatYIndentAsBaseLine();
    void set_TreatYIndentAsBaseLine(bool value);
    bool get_WordWrap();
    void set_WordWrap(bool value);
    bool get_Justify();
    void set_Justify(bool value);
    bool get_Scale();
    void set_Scale(bool value);
    System::String get_Value();
    void set_Value(System::String value);
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState();
    Aspose::Pdf::HorizontalAlignment get_TextAlignment();
    void set_TextAlignment(Aspose::Pdf::HorizontalAlignment value);
    virtual double get_Width();
    virtual void set_Width(double value);
    virtual double get_Height();
    virtual void set_Height(double value);
    
    TextStamp(System::String value);
    
    virtual void Put(System::SharedPtr<Page> page);
    
    TextStamp(System::SharedPtr<Facades::FormattedText> formattedText);
    
protected:

    Aspose::Pdf::HorizontalAlignment _textAlignemnt;
    
    static System::SharedPtr<Aspose::Pdf::Text::Font> get_DefaultFont();
    
    static float DefaultFontSize;
    
    virtual void ClearCache();
    virtual System::SharedPtr<Rectangle> getRect();
    virtual System::SharedPtr<XForm> createXForm(System::SharedPtr<Page> page);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextStamp"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    
    bool IsBlankSpace(wchar_t c);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextStamp::WordInfo>>> SplitIntoWords(System::String text);
    void Draw_Text(System::SharedPtr<XForm> form, System::SharedPtr<Text::TextFragment> textFragment);
    void UpdateStream(System::SharedPtr<Engine::Data::IPdfDataStream> stream, System::ArrayPtr<uint8_t> data);
    System::SharedPtr<System::Collections::Generic::List<System::String>> BreakToLines(System::String text);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_TextStamp_h_

