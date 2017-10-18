#ifndef _Aspose_Pdf_Generator_Drawing_Shape_h_
#define _Aspose_Pdf_Generator_Drawing_Shape_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Drawing { class Ellipse; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Path; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Circle; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Line; } } }
namespace Aspose { namespace Pdf { class GraphInfo; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPage; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Graphics { namespace ColorSpaces { class IColorSpace; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Graphics { namespace Colors { class IColor; } } } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents shape - the base graphics object.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT Shape : public System::Object
{
    typedef Shape ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Ellipse;
    friend class Aspose::Pdf::Drawing::Path;
    friend class Aspose::Pdf::Drawing::Circle;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Drawing::Line;
    
public:

    System::SharedPtr<Aspose::Pdf::GraphInfo> get_GraphInfo();
    void set_GraphInfo(System::SharedPtr<Aspose::Pdf::GraphInfo> value);
    
    Shape();
    
protected:

    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators) = 0;
    void GetOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Page> page);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Shape"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::GraphInfo> graphInfo;
    
    void AddRectangleToPage(System::SharedPtr<Aspose::Pdf::Engine::CommonData::IPage> pageTreeNode, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::ColorSpaces::IColorSpace> colorSpace, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> red, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> green);
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Drawing_Shape_h_

