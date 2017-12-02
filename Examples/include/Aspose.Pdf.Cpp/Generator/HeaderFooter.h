#ifndef _Aspose_Pdf_Generator_HeaderFooter_h_
#define _Aspose_Pdf_Generator_HeaderFooter_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets or sets the paragraphs.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    /// <summary>
    /// Gets or sets the paragraphs.
    /// </summary>
    void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets or sets the margin info.
    /// </summary>
    System::SharedPtr<MarginInfo> get_Margin();
    /// <summary>
    /// Gets or sets the margin info.
    /// </summary>
    void set_Margin(System::SharedPtr<MarginInfo> value);
    
    /// <summary>
    /// Clones a new <see cref="MarginInfo"/> object.
    /// </summary>
    /// <returns>The new object.</returns>
    System::SharedPtr<HeaderFooter> Clone();
    
protected:

    /// <summary>
    /// Gets or sets page generator.
    /// </summary>
    System::SharedPtr<PageGenerator> get_Generator();
    /// <summary>
    /// Gets or sets page generator.
    /// </summary>
    void set_Generator(System::SharedPtr<PageGenerator> value);
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<MarginInfo> margin;
    System::SharedPtr<Aspose::Pdf::Paragraphs> paragraphs;
    System::SharedPtr<PageGenerator> generator;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_HeaderFooter_h_

