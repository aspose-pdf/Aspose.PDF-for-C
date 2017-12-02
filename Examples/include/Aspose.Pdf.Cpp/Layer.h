#ifndef _Aspose_Pdf_Layer_h_
#define _Aspose_Pdf_Layer_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents page layer.
/// </summary>
class ASPOSE_PDF_SHARED_API Layer : public System::Object
{
    typedef Layer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the layer name.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Gets the layer id.
    /// </summary>
    System::String get_Id();
    /// <summary>
    /// Gets the layer content.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> get_Contents();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Layer"/> class.
    /// </summary>
    /// <param name="id">The layer id</param>
    /// <param name="name">The layer name</param>
    Layer(System::String id, System::String name);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String name;
    System::String id;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> contents;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Layer_h_

