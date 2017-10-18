#ifndef _Aspose_Pdf_Facades_Bookmarks_h_
#define _Aspose_Pdf_Facades_Bookmarks_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>

#include "Facades/Bookmark.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class OutlineItemCollection; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a collection of <see cref="Bookmark"/> objects.
/// </summary>
class ASPOSE_PDF_SHARED_API Bookmarks FINAL : public System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Facades::Bookmark>>
{
    typedef Bookmarks ThisType;
    typedef System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Facades::Bookmark>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Bookmark;
    
public:

    Bookmarks();
    
protected:

    static System::SharedPtr<Bookmarks> Create(System::SharedPtr<OutlineItemCollection> itemCollection);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Bookmarks"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_Bookmarks_h_

