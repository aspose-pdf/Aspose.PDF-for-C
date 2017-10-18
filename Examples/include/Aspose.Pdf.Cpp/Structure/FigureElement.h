#ifndef _Aspose_Pdf_Structure_FigureElement_h_
#define _Aspose_Pdf_Structure_FigureElement_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/image.h>

#include "Structure/Element.h"

namespace Aspose { namespace Pdf { namespace Structure { class ElementFactory; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Structure {

/// <summary>
/// Class representing logical structure figure.
/// </summary>
class ASPOSE_PDF_SHARED_API FigureElement : public Aspose::Pdf::Structure::Element
{
    typedef FigureElement ThisType;
    typedef Aspose::Pdf::Structure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Structure::ElementFactory;
    
public:

    System::SharedPtr<System::Drawing::Image> get_Image();
    
protected:

    FigureElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FigureElement"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    static System::SharedPtr<System::Drawing::Image> FindImageOnPage(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> enginePage, System::String value);
    
};

} // namespace Structure
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Structure_FigureElement_h_

