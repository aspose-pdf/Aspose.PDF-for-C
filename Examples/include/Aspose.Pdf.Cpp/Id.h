#ifndef _Aspose_Pdf_Id_h_
#define _Aspose_Pdf_Id_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents file identifier structure.
/// </summary>
/// <example>
/// <code lang="C#">
/// Document doc = new Document("example.pdf");
/// string original = doc.Id.Original;
/// string modified = doc.Id.Modified;
/// </code>
/// </example>
class ASPOSE_PDF_SHARED_API Id : public System::Object
{
    typedef Id ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    
public:

    System::String get_Original();
    System::String get_Modified();
    
protected:

    Id(System::SharedPtr<Engine::Data::IPdfArray> pdfArray);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Id"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _original;
    System::String _modified;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Id_h_

