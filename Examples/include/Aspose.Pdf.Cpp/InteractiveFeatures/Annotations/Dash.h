#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Border; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class representing line dash pattern.
/// </summary>
class ASPOSE_PDF_SHARED_API Dash FINAL : public System::Object
{
    typedef Dash ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Border;
    
public:

    /// <summary>
    /// Gets length of dash.
    /// </summary>
    int32_t get_On();
    /// <summary>
    /// Sets length of dash.
    /// </summary>
    void set_On(int32_t value);
    /// <summary>
    /// Gets length of gap between dashes.
    /// </summary>
    int32_t get_Off();
    /// <summary>
    /// Sets length of gap between dashes.
    /// </summary>
    void set_Off(int32_t value);
    
    /// <summary>
    /// Constructor for Dash.
    /// </summary>
    /// <param name="on">Length of the dash.</param>
    /// <param name="off">Length of the gap.</param>
    Dash(int32_t on, int32_t off);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> ToArray(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    /// <summary>
    /// Creates PDF array which describes this dash object.
    /// </summary>
    /// <param name="page">Page where this object will be placed.</param>
    /// <returns>PDF array representing dash style.</returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> createDash(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> page);
    
private:

    int32_t _dash;
    int32_t _gap;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


