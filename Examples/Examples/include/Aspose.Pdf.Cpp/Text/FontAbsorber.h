﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class FontCollection; } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of fonts.
/// Performs search for fonts and provides access to search results via <see cref="FontAbsorber::Fonts"/> collection.
/// </summary>
class ASPOSE_PDF_SHARED_API FontAbsorber : public System::Object
{
    typedef FontAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets collection of search occurrences that are presented with <see cref="Font"/> objects.
    /// </summary>
    System::SharedPtr<FontCollection> get_Fonts();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="FontAbsorber"/> that performs search for fonts of the document.
    /// </summary>
    FontAbsorber();
    
    /// <summary>
    /// Performs  search in the specified range of pages of the document.
    /// </summary>
    /// <param name="pdf">Pdf pocument object.</param>
    /// <param name="startPage">Pdf pocument start page.</param>
    /// <param name="pageCount">Pdf document page count</param>
    virtual void Visit(System::SharedPtr<Document> pdf, int32_t startPage, int32_t pageCount);
    /// <summary>
    /// Performs search on the specified document.
    /// </summary>
    /// <param name="pdf">Pdf pocument object.</param>
    virtual void Visit(System::SharedPtr<Document> pdf);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<FontCollection> fontCollection;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


