#ifndef _Aspose_Pdf_Generator_HeaderFooter_h_
#define _Aspose_Pdf_Generator_HeaderFooter_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents header or footer pdf page.
/// </summary>
class ASPOSE_PDF_SHARED_API HeaderFooter FINAL : public System::Object
{
    typedef HeaderFooter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Page;
    
public:

    System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    System::SharedPtr<MarginInfo> get_Margin();
    void set_Margin(System::SharedPtr<MarginInfo> value);
    
    System::SharedPtr<HeaderFooter> Clone();
    
protected:

    System::SharedPtr<PageGenerator> get_Generator();
    void set_Generator(System::SharedPtr<PageGenerator> value);
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "HeaderFooter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<MarginInfo> margin;
    System::SharedPtr<Aspose::Pdf::Paragraphs> paragraphs;
    System::SharedPtr<PageGenerator> generator;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_HeaderFooter_h_

