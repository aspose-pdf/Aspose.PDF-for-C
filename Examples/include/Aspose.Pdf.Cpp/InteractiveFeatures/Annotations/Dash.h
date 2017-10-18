#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_Dash_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_Dash_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Border; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

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
    
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Border;
    friend bool operator ==(System::SharedPtr<Dash> l, System::SharedPtr<Dash> r);
    friend bool operator !=(System::SharedPtr<Dash> l, System::SharedPtr<Dash> r);
    
public:

    int32_t get_On();
    void set_On(int32_t value);
    int32_t get_Off();
    void set_Off(int32_t value);
    
    Dash(int32_t on, int32_t off);
    
    bool Equals(System::SharedPtr<Dash> other);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> ToArray(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> createDash(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> page);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Dash"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t _dash;
    int32_t _gap;
    
};

bool operator ==(System::SharedPtr<Dash> l, System::SharedPtr<Dash> r);
bool operator !=(System::SharedPtr<Dash> l, System::SharedPtr<Dash> r);

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_Dash_h_

