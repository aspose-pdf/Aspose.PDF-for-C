#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/array.h>

#include "LoadOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing of .mht-file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API PsLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef PsLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::ArrayPtr<System::String> get_FontsFolders();
    void set_FontsFolders(System::ArrayPtr<System::String> value);
    
    /// <summary>
    /// Creates load options for converting PostScript into pdf document with empty base path.
    /// </summary>
    PsLoadOptions();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<System::String> _fontsFolders;
    
};

} // namespace Pdf
} // namespace Aspose


