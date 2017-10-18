#ifndef _Aspose_Pdf_Text_TextOptions_TextSearchOptions_h_
#define _Aspose_Pdf_Text_TextOptions_TextSearchOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Text/TextOptions/TextOptions.h"

namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Text {

namespace TextOptions {

/// <summary>
/// Represents text search options
/// </summary>
class ASPOSE_PDF_SHARED_API TextSearchOptions FINAL : public Aspose::Pdf::Text::TextOptions::TextOptions
{
    typedef TextSearchOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    bool get_IsRegularExpressionUsed();
    void set_IsRegularExpressionUsed(bool value);
    bool get_LimitToPageBounds();
    void set_LimitToPageBounds(bool value);
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    void set_Rectangle(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    bool get_UseFontEngineEncoding();
    void set_UseFontEngineEncoding(bool value);
    
    TextSearchOptions(bool isRegularExpressionUsed);
    TextSearchOptions(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    TextSearchOptions(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, bool isRegularExpressionUsed);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextSearchOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool isRegularExpressionUsed;
    bool limitToPageBounds;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    bool useFontEngineEncoding;
    
};

} // namespace TextOptions
} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextOptions_TextSearchOptions_h_

