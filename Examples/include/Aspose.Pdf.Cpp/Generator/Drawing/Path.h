#ifndef _Aspose_Pdf_Generator_Drawing_Path_h_
#define _Aspose_Pdf_Generator_Drawing_Path_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "Generator/Drawing/Shape.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents arc.
/// </summary>
class ASPOSE_PDF_SHARED_API Path FINAL : public Aspose::Pdf::Drawing::Shape
{
    typedef Path ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets shapes collection.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> get_Shapes();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Path"/> class.
    /// </summary>
    /// <param name="shapes">The shape array contains path segments set.</param>
    Path(System::ArrayPtr<System::SharedPtr<Shape>> shapes);
    /// <summary>
    /// Initializes a new instance of the <see cref="Path"/> class.
    /// </summary>
    Path();
    
protected:

    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> shapes;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Drawing_Path_h_

