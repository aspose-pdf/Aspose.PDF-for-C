#ifndef _Aspose_Pdf_FileParams_h_
#define _Aspose_Pdf_FileParams_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/date_time.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class FileSpecification; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FileAttachmentAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Defines an embedded file parameter dictionary that shall contain additional file-specific information.
/// </summary>
class ASPOSE_PDF_SHARED_API FileParams FINAL : public System::Object
{
    typedef FileParams ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::FileSpecification;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FileAttachmentAnnotation;
    
public:

    /// <summary>
    /// The size of the uncompressed embedded file, in bytes.
    /// </summary>
    int32_t get_Size();
    /// <summary>
    /// The date and time when the embedded file was created.
    /// </summary>
    System::DateTime get_CreationDate();
    /// <summary>
    /// The date and time when the embedded file was created.
    /// </summary>
    void set_CreationDate(System::DateTime value);
    /// <summary>
    /// The date and time when the embedded file was last modified.
    /// </summary>
    System::DateTime get_ModDate();
    /// <summary>
    /// The date and time when the embedded file was last modified.
    /// </summary>
    void set_ModDate(System::DateTime value);
    /// <summary>
    /// A 16-byte string that is the checksum of the bytes of the uncompressed embedded file. 
    /// The checksum is calculated by applying the standard MD5 message-digest algorithm 
    /// to the bytes of the embedded file stream.
    /// </summary>
    System::String get_CheckSum();
    
    /// <summary>
    /// Constructor for FileParams class.
    /// </summary>
    /// <param name="spec">File specification.</param>
    FileParams(System::SharedPtr<FileSpecification> spec);
    
protected:

    System::SharedPtr<Engine::Data::IPdfDictionary> EngineDict;
    
    FileParams(System::SharedPtr<Engine::Data::IPdfDictionary> parms);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_FileParams_h_

