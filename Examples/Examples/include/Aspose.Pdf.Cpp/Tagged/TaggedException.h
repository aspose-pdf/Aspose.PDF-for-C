#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>

#include "Exceptions/PdfException.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureAttribute; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class Element; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureAttributeCollection; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureAttributes; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedPdfExceptionCode; } } }

namespace Aspose {

namespace Pdf {

namespace Tagged {

/// <summary>
///     Represents exception for TaggedPDF content of document.
/// </summary>
class ASPOSE_PDF_SHARED_API TaggedException : public Aspose::Pdf::PdfException
{
    typedef TaggedException ThisType;
    typedef Aspose::Pdf::PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::StructureAttribute;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::Element;
    friend class Aspose::Pdf::LogicalStructure::StructureAttributeCollection;
    friend class Aspose::Pdf::LogicalStructure::StructureAttributes;
    
public:

    virtual ~TaggedException();
    
    /// <summary>
    ///     Initializes a new instance of the <see cref="TaggedException"/> class.
    /// </summary>
    TaggedException();
    TaggedException(std::nullptr_t);
    
protected:

    /// <summary>
    ///     Initializes a new instance of the <see cref="TaggedException"/> class.
    /// </summary>
    /// <param name="taggedExeptionCode">The TaggedException Code</param>
    /// <param name="list">The params list</param>
    TaggedException(System::SharedPtr<TaggedPdfExceptionCode> taggedExeptionCode, const System::ArrayPtr<System::String>& list);
    TaggedException(System::String message);
    
};

class TaggedPdfExceptionCode FINAL : public System::Object
{
    typedef TaggedPdfExceptionCode ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    static System::SharedPtr<TaggedPdfExceptionCode> Element_AppendingImpossible;
    static System::SharedPtr<TaggedPdfExceptionCode> Element_ElementAlreadyAppended;
    static System::SharedPtr<TaggedPdfExceptionCode> RoleMap_StandardStructureTypeCanNotBeRemapped;
    static System::SharedPtr<TaggedPdfExceptionCode> RoleMap_NonStandardStructureTypeAlreadyMapped;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureAttribute_AttributeCollectionIsAbsent;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureAttribute_AttributeOwnerMustBe;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureAttribute_DoesntAllowValue;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureAttribute_ArrayMustContainXElements;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureAttribute_ValueWasNotInitialized;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureElement_StructureElementIdCanNotBeNullOrEmpty;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureElement_StructureElementWithIdAlreadyExists;
    
    virtual System::String ToString();
    System::String GetMessage(const System::ArrayPtr<System::String>& list);
    
private:

    System::String _message;
    
    TaggedPdfExceptionCode(System::String message);
    
};

} // namespace Tagged
} // namespace Pdf
} // namespace Aspose


