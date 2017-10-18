#ifndef _Aspose_Pdf_Text_TextOptions_TextExtractionOptions_h_
#define _Aspose_Pdf_Text_TextOptions_TextExtractionOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "Text/TextOptions/TextOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

namespace TextOptions {

/// <summary>
/// Defines different modes which can be used while converting pdf document into text. See <see cref="TextDevice"/> class.
/// </summary>
class ASPOSE_PDF_SHARED_API TextExtractionOptions FINAL : public Aspose::Pdf::Text::TextOptions::TextOptions
{
    typedef TextExtractionOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    enum class TextFormattingMode
    {
        Pure,
        Raw
    };
    
    
public:

    TextExtractionOptions::TextFormattingMode get_FormattingMode();
    void set_FormattingMode(TextExtractionOptions::TextFormattingMode value);
    double get_ScaleFactor();
    void set_ScaleFactor(double value);
    
    TextExtractionOptions(TextExtractionOptions::TextFormattingMode formattingMode);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextExtractionOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    TextExtractionOptions::TextFormattingMode _formattingMode;
    double _scaleFactor;
    
};

} // namespace TextOptions
} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextOptions_TextExtractionOptions_h_

