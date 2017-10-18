#ifndef _Aspose_Pdf_Text_FontAbsorber_h_
#define _Aspose_Pdf_Text_FontAbsorber_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class FontCollection; } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of fonts.
/// Performs search for fonts and provides access to search results via <see cref="FontAbsorber.Fonts"/> collection.
/// </summary>
class ASPOSE_PDF_SHARED_API FontAbsorber : public System::Object
{
    typedef FontAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<FontCollection> get_Fonts();
    
    FontAbsorber();
    
    virtual void Visit(System::SharedPtr<Document> pdf);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FontAbsorber"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<FontCollection> fontCollection;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_FontAbsorber_h_

