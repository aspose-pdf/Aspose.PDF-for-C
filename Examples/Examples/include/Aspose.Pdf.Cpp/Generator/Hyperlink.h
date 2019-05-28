#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class LinkElement; } } }
namespace Aspose { namespace Pdf { class BaseParagraph; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents abstract hyperlink.
/// </summary>
class ASPOSE_PDF_SHARED_API Hyperlink : public System::Object
{
    typedef Hyperlink ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::LinkElement;
    friend class Aspose::Pdf::BaseParagraph;
    friend class Aspose::Pdf::PageGenerator;
    
protected:

    System::SharedPtr<Aspose::Pdf::LogicalStructure::LinkElement> get_LinkElement();
    void set_LinkElement(System::SharedPtr<Aspose::Pdf::LogicalStructure::LinkElement> value);
    
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::LogicalStructure::LinkElement> _linkElement;
    
};

} // namespace Pdf
} // namespace Aspose


