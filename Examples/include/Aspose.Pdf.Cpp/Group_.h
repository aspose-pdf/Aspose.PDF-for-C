#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { enum class ColorSpace; } }
namespace Aspose { namespace Pdf { enum class ExtendedBoolean; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// A group attributes class specifying the attributes of the page’s page group for use in the transparent imaging model.
/// </summary>
class ASPOSE_PDF_SHARED_API Group FINAL : public System::Object
{
    typedef Group ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileMend;
    
public:

    /// <summary>
    /// The group color space.
    /// </summary>
    Aspose::Pdf::ColorSpace get_ColorSpace();
    /// <summary>
    /// The group color space.
    /// </summary>
    void set_ColorSpace(Aspose::Pdf::ColorSpace value);
    
    /// <summary>
    /// The constructor.
    /// </summary>
    /// <param name="page">Pdf page object.</param>
    Group(System::SharedPtr<Page> page);
    
protected:

    /// <summary>
    /// If this flag is false, later objects within the group are composited with earlier ones with which
    /// they overlap; if true, they are composited with the group’s initial backdrop and overwrite (“knock out”)
    /// any earlier overlapping objects.
    /// </summary>
    ExtendedBoolean get_IsKnockout();
    /// <summary>
    /// If this flag is false, later objects within the group are composited with earlier ones with which
    /// they overlap; if true, they are composited with the group’s initial backdrop and overwrite (“knock out”)
    /// any earlier overlapping objects.
    /// </summary>
    void set_IsKnockout(ExtendedBoolean value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineGroup;
    
};

} // namespace Pdf
} // namespace Aspose


