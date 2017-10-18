#ifndef _Aspose_Pdf_FileParams_h_
#define _Aspose_Pdf_FileParams_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    int32_t get_Size();
    System::DateTime get_CreationDate();
    void set_CreationDate(System::DateTime value);
    System::DateTime get_ModDate();
    void set_ModDate(System::DateTime value);
    System::String get_CheckSum();
    
    FileParams(System::SharedPtr<FileSpecification> spec);
    
protected:

    System::SharedPtr<Engine::Data::IPdfDictionary> EngineDict;
    
    FileParams(System::SharedPtr<Engine::Data::IPdfDictionary> parms);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FileParams"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_FileParams_h_

