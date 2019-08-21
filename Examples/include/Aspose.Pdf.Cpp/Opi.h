#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents The Open Prepress Interface (OPI) is a mechanism for creating low-resolution placeholders, or proxies,
/// for such high-resolution images.
/// </summary>
class ASPOSE_PDF_SHARED_API Opi FINAL : public System::Object
{
    typedef Opi ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the version of OPI to which this dictionary refers.
    /// </summary>
    System::String get_Version();
    /// <summary>
    /// Gets the external file containing the low- resolution proxy image.
    /// </summary>
    System::String get_FileSpecification();
    /// <summary>
    /// Gets an array of eight numbers of the form specifying the location on the page of the cropped image.
    /// </summary>
    System::ArrayPtr<double> get_Position();
    
    /// <summary>
    /// The constructor.
    /// </summary>
    /// <param name="xform">Xform object.</param>
    Opi(System::SharedPtr<XForm> xform);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineOpi;
    System::String _version;
    System::String _fileSpecification;
    System::ArrayPtr<double> _position;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> GetOpiDictionary();
    
};

} // namespace Pdf
} // namespace Aspose


