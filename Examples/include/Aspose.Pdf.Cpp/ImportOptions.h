#ifndef _Aspose_Pdf_ImportOptions_h_
#define _Aspose_Pdf_ImportOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class CgmImportOptions; } }
namespace Aspose { namespace Pdf { enum class ImportFormat; } }

namespace Aspose {

namespace Pdf {

///<summary>
/// ImportOptions type hold level of abstraction on individual import options.
///</summary>
class ASPOSE_PDF_SHARED_API ABSTRACT ImportOptions : public System::Object
{
    typedef ImportOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::CgmImportOptions;
    
public:

    Aspose::Pdf::ImportFormat get_ImportFormat();
    
protected:

    ImportOptions(Aspose::Pdf::ImportFormat importFormat);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ImportOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    Aspose::Pdf::ImportFormat importFormat;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ImportOptions_h_

