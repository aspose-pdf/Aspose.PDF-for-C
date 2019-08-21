#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Tagged/LogicalStructure/Element.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class AnnotationElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents object reference entity in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API OBJRElement FINAL : public Aspose::Pdf::LogicalStructure::Element
{
    typedef OBJRElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::AnnotationElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
public:

    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    virtual System::String ToString();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_Obj();
    
    OBJRElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual bool CanBeAppended(System::SharedPtr<Element> element);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


