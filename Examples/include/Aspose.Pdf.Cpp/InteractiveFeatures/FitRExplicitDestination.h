#ifndef _Aspose_Pdf_InteractiveFeatures_FitRExplicitDestination_h_
#define _Aspose_Pdf_InteractiveFeatures_FitRExplicitDestination_h_
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
/// Represents explicit destination that displays the page with its contents magnified just enough to fit the rectangle specified by the coordinates left, bottom, right, and topentirely within the window both horizontally and vertically. If the required horizontal and vertical magnification factors are different, use the smaller of the two, centering the rectangle within the window in the other dimension. A null value for any of the parameters may result in unpredictable behavior.
/// </summary>
class ASPOSE_PDF_SHARED_API FitRExplicitDestination FINAL : public Aspose::Pdf::InteractiveFeatures::ExplicitDestination
{
    typedef FitRExplicitDestination ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::ExplicitDestination;
    
public:

    double get_Left();
    double get_Bottom();
    double get_Right();
    double get_Top();
    
    FitRExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, double left, double bottom, double right, double top);
    FitRExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber, double left, double bottom, double right, double top);
    FitRExplicitDestination(int32_t pageNumber, double left, double bottom, double right, double top);
    
    virtual System::String ToString();
    
protected:

    FitRExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FitRExplicitDestination"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_FitRExplicitDestination_h_

