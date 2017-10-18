#ifndef _Aspose_Pdf_InteractiveFeatures_XYZExplicitDestination_h_
#define _Aspose_Pdf_InteractiveFeatures_XYZExplicitDestination_h_
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
/// Represents explicit destination that displays the page with the coordinates (left, top) positioned at the upper-left corner of the window and the contents of the page magnified by the factor zoom. A null value for any of the parameters left, top, or zoom specifies that the current value of that parameter is to be retained unchanged. A zoom value of 0 has the same meaning as a null value.
/// </summary>
/// <example>
/// <code lang="C#">
/// Document doc = new Document("example.pdf");
/// XYZExplicitDestination dest = (XYZExplicitDestination)doc.Outlines[1].Destination;
/// string left = dest.Left;
/// string top = dest.Top;
/// string zoom = dest.Zoom;
/// </code>
/// </example>
class ASPOSE_PDF_SHARED_API XYZExplicitDestination FINAL : public Aspose::Pdf::InteractiveFeatures::ExplicitDestination
{
    typedef XYZExplicitDestination ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::ExplicitDestination;
    
public:

    double get_Left();
    double get_Top();
    double get_Zoom();
    
    XYZExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, double left, double top, double zoom);
    XYZExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber, double left, double top, double zoom);
    XYZExplicitDestination(int32_t pageNumber, double left, double top, double zoom);
    
    virtual System::String ToString();
    
protected:

    XYZExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XYZExplicitDestination"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_XYZExplicitDestination_h_

