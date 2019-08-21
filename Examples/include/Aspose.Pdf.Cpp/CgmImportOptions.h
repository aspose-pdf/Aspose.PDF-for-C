#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/size_f.h>

#include "ImportOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Import option for import from Computer Graphics Metafile(CGM) format.
/// </summary>
class ASPOSE_PDF_SHARED_API CgmImportOptions : public Aspose::Pdf::ImportOptions
{
    typedef CgmImportOptions ThisType;
    typedef Aspose::Pdf::ImportOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets output page size for import.
    /// Default page size - A4 300dpi 2480 X 3508.
    /// </summary>
    System::Drawing::SizeF get_PageSize();
    /// <summary>
    /// Sets output page size for import.
    /// Default page size - A4 300dpi 2480 X 3508.
    /// </summary>
    void set_PageSize(System::Drawing::SizeF value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    CgmImportOptions();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::Drawing::SizeF pageSize;
    
};

} // namespace Pdf
} // namespace Aspose


