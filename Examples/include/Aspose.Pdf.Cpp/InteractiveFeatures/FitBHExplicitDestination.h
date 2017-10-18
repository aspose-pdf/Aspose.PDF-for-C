#ifndef _Aspose_Pdf_InteractiveFeatures_FitBHExplicitDestination_h_
#define _Aspose_Pdf_InteractiveFeatures_FitBHExplicitDestination_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "InteractiveFeatures/ExplicitDestination.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Represents explicit destination that displays the page with the vertical coordinate top positioned at the top edge of the window and the contents of the page magnified just enough to fit the entire width of its bounding box within the window. A null value for top specifies that the current value of that parameter is to be retained unchanged.
/// </summary>
class ASPOSE_PDF_SHARED_API FitBHExplicitDestination FINAL : public Aspose::Pdf::InteractiveFeatures::ExplicitDestination
{
    typedef FitBHExplicitDestination ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::ExplicitDestination;
    
public:

    double get_Top();
    
    FitBHExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, double top);
    FitBHExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber, double top);
    FitBHExplicitDestination(int32_t pageNumber, double top);
    
    virtual System::String ToString();
    
protected:

    FitBHExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FitBHExplicitDestination"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_FitBHExplicitDestination_h_

