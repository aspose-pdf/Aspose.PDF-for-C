#ifndef _Aspose_Pdf_Generator_Note_h_
#define _Aspose_Pdf_Generator_Note_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents generator paragraph note.
/// </summary>
class ASPOSE_PDF_SHARED_API Note FINAL : public System::Object
{
    typedef Note ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TextFragment;
    
public:

    System::SharedPtr<Text::TextFragment> get_Fragment();
    void set_Fragment(System::SharedPtr<Text::TextFragment> value);
    System::String get_Text();
    void set_Text(System::String value);
    
    Note(System::String content);
    
protected:

    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Note"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Text::TextFragment> fragment;
    System::String text;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Note_h_

