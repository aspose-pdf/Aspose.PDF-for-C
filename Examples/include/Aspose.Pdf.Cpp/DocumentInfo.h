#ifndef _Aspose_Pdf_DocumentInfo_h_
#define _Aspose_Pdf_DocumentInfo_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/timespan.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/date_time.h>
#include <system/collections/dictionary.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileInfo; } } }
namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocumentInfo; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents meta information of PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API DocumentInfo FINAL : public System::Collections::Generic::Dictionary<System::String, System::String>
{
    typedef DocumentInfo ThisType;
    typedef System::Collections::Generic::Dictionary<System::String, System::String> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfFileInfo;
    friend class Aspose::Pdf::ApsUsingConverter;
    
public:

    System::String get_Title();
    void set_Title(System::String value);
    System::String get_Creator();
    System::String get_Author();
    void set_Author(System::String value);
    System::String get_Subject();
    void set_Subject(System::String value);
    System::String get_Keywords();
    void set_Keywords(System::String value);
    System::String get_Producer();
    System::DateTime get_CreationDate();
    void set_CreationDate(System::DateTime value);
    System::TimeSpan get_CreationTimeZone();
    void set_CreationTimeZone(System::TimeSpan value);
    System::TimeSpan get_ModTimeZone();
    void set_ModTimeZone(System::TimeSpan value);
    System::DateTime get_ModDate();
    void set_ModDate(System::DateTime value);
    System::String get_Trapped();
    void set_Trapped(System::String value);
    
    DocumentInfo(System::SharedPtr<Document> document);
    
    void Clear();
    void Add(System::String const &key, System::String const &value);
    bool Remove(System::String const &key);
    
    System::String idx_get(System::String key);
    void idx_set(System::String key, System::String value);
    
    void ClearCustomData();
    static bool IsPredefinedKey(System::String key);
    
protected:

    void set_Creator(System::String value);
    void set_Producer(System::String value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DocumentInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Engine::IPdfDocumentInfo> engineDocInfo;
    System::SharedPtr<Engine::Data::IPdfDictionary> dict;
    
    void UpdateHashtable();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_DocumentInfo_h_

