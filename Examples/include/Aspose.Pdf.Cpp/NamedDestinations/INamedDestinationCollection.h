#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class IAppointment; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Collection of Named Destinations.
/// </summary>
class ASPOSE_PDF_SHARED_API INamedDestinationCollection : public System::Object
{
    typedef INamedDestinationCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns count of the destinations.
    /// </summary>
    virtual int32_t get_Count() = 0;
    /// <summary>
    /// Gets array of names of the destiantions.
    /// </summary>
    virtual System::ArrayPtr<System::String> get_Names() = 0;
    
    /// <summary>
    /// Gets destination by its name.
    /// </summary>
    /// <param name="name"></param>
    /// <returns></returns>
    virtual System::SharedPtr<Annotations::IAppointment> idx_get(System::String name) = 0;
    /// <summary>
    /// Sets destination by its name.
    /// </summary>
    /// <param name="name"></param>
    /// <param name="value"></param>
    virtual void idx_set(System::String name, System::SharedPtr<Annotations::IAppointment> value) = 0;
    
    /// <summary>
    /// Removes destination by its name.
    /// </summary>
    /// <param name="name"></param>
    virtual void Remove(System::String name) = 0;
    /// <summary>
    /// Adds new named destination.
    /// </summary>
    /// <param name="name"></param>
    /// <param name="appointment"></param>
    virtual void Add(System::String name, System::SharedPtr<Annotations::IAppointment> appointment) = 0;
    
};

} // namespace Pdf
} // namespace Aspose


