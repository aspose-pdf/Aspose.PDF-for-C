#ifndef _Aspose_Pdf_Generator_LocalHyperlink_h_
#define _Aspose_Pdf_Generator_LocalHyperlink_h_
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <cstdint>

#include "Generator/Hyperlink.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class BaseParagraph; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents local hyperlink object.
/// </summary>
class ASPOSE_PDF_SHARED_API LocalHyperlink FINAL : public Aspose::Pdf::Hyperlink
{
    typedef LocalHyperlink ThisType;
    typedef Aspose::Pdf::Hyperlink BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets the target paragraph.
    /// </summary>
    System::SharedPtr<BaseParagraph> get_Target();
    /// <summary>
    /// Gets or sets the target paragraph.
    /// </summary>
    void set_Target(System::SharedPtr<BaseParagraph> value);
    /// <summary>
    /// Gets or sets the target page number.
    /// </summary>
    int32_t get_TargetPageNumber();
    /// <summary>
    /// Gets or sets the target page number.
    /// </summary>
    void set_TargetPageNumber(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="LocalHyperlink"/> class.
    /// </summary>
    LocalHyperlink();
    /// <summary>
    /// Initializes a new instance of the <see cref="LocalHyperlink"/> class.
    /// </summary>
    /// <param name="target">Target paragraph.</param>
    LocalHyperlink(System::SharedPtr<BaseParagraph> target);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<BaseParagraph> target;
    int32_t targetPageNumber;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_LocalHyperlink_h_

