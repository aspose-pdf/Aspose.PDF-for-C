#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/details/pointer_collection_helpers.h>
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

    void SetTemplateWeakPtr(unsigned int argument) override;
    
protected:

    static System::SharedPtr<Bookmarks> Create(System::SharedPtr<OutlineItemCollection> itemCollection);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


