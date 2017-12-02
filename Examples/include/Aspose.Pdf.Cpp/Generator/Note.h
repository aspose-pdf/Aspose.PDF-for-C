#ifndef _Aspose_Pdf_Generator_Note_h_
#define _Aspose_Pdf_Generator_Note_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets or sets a note fragment.
    /// </summary>
    System::SharedPtr<Text::TextFragment> get_Fragment();
    /// <summary>
    /// Gets or sets a note fragment.
    /// </summary>
    void set_Fragment(System::SharedPtr<Text::TextFragment> value);
    /// <summary>
    /// Gets or sets a note text.
    /// </summary>
    System::String get_Text();
    /// <summary>
    /// Gets or sets a note text.
    /// </summary>
    void set_Text(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Note"/> class.
    /// </summary>
    /// <param name="content">The note content.</param>
    Note(System::String content);
    
protected:

    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Text::TextFragment> fragment;
    System::String text;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Note_h_

