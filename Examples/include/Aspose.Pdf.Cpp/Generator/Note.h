#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }

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
    /// Gets a collection that indicates all paragraphs in the FootNote.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    /// <summary>
    /// Sets a collection that indicates all paragraphs in the FootNote.
    /// </summary>
    void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets a note text.
    /// </summary>
    System::String get_Text();
    /// <summary>
    /// Sets a note text.
    /// </summary>
    void set_Text(System::String value);
    /// <summary>
    /// Gets a note text state.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState();
    /// <summary>
    /// Sets a note text state.
    /// </summary>
    void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Note"/> class.
    /// </summary>
    Note();
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

    System::SharedPtr<Aspose::Pdf::Paragraphs> paragraphs;
    System::String text;
    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    
};

} // namespace Pdf
} // namespace Aspose


