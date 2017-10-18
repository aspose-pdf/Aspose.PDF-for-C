#ifndef _Aspose_Pdf_Generator_PageInfo_h_
#define _Aspose_Pdf_Generator_PageInfo_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the page information.
/// </summary>
class ASPOSE_PDF_SHARED_API PageInfo FINAL : public System::Object
{
    typedef PageInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    
public:

    System::SharedPtr<Text::TextState> get_DefaultTextState();
    void set_DefaultTextState(System::SharedPtr<Text::TextState> value);
    double get_Height();
    void set_Height(double value);
    bool get_IsLandscape();
    void set_IsLandscape(bool value);
    System::SharedPtr<MarginInfo> get_Margin();
    void set_Margin(System::SharedPtr<MarginInfo> value);
    double get_Width();
    void set_Width(double value);
    
    PageInfo();
    
    System::SharedPtr<PageInfo> Clone();
    
protected:

    bool get_IsDefault();
    bool get_IsWidthSet();
    bool get_IsHeightSet();
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PageInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<MarginInfo> marginInfo;
    double height;
    double width;
    bool isWidthSet;
    bool isHeightSet;
    bool isLandscape;
    System::SharedPtr<Text::TextState> defaultTextState;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_PageInfo_h_

