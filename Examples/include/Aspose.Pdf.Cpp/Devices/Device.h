#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// The <b>Aspose.Pdf.Devices</b> namespace provides classes which are used for representing document as image(s) or a plain text.
/// So document can be sent on to textual or various graphic devices which means we want to get it textual or graphic representation.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Abstract class for all types of devices. Device is used to represent pdf document in some format.
/// For example, document page can be represented as image or text. 
/// </summary>
class ASPOSE_PDF_SHARED_API Device : public System::Object
{
    typedef Device ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    /// <summary>
    /// Document which is processed by this device instance.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Document> get_Document();
    /// <summary>
    /// Document which is processed by this device instance.
    /// </summary>
    void set_Document(System::SharedPtr<Aspose::Pdf::Document> value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Document> document;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


