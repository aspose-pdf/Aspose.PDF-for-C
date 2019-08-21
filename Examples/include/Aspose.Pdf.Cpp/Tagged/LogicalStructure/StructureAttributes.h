#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureAttributeCollection; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableCellElement; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace TaggedPdf { class TaggedPdfStructure; } } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureElement; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class AttributeOwnerStandard; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureAttribute; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class AttributeKey; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents attributes of structure element for standard attribute owners.
/// </summary>
class ASPOSE_PDF_SHARED_API StructureAttributes : public System::Object
{
    typedef StructureAttributes ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::StructureAttributeCollection;
    friend class Aspose::Pdf::LogicalStructure::TableCellElement;
    friend class Aspose::Pdf::Tests::TaggedPdf::TaggedPdfStructure;
    
public:

    /// <summary>
    ///     Gets standard attribute owner.
    /// </summary>
    /// <value>Standard attribute owner.</value>
    System::SharedPtr<AttributeOwnerStandard> get_Owner();
    
    /// <summary>
    ///     Gets StructureAttribute by AttributeKey.
    /// </summary>
    /// <param name="key">AttributeKey.</param>
    /// <returns>StructureAttribute</returns>
    System::SharedPtr<StructureAttribute> GetAttribute(System::SharedPtr<AttributeKey> key);
    /// <summary>
    ///     Sets StructureAttribute into StructureAttributes.
    /// </summary>
    /// <param name="attribute">StructureAttribute.</param>
    void SetAttribute(System::SharedPtr<StructureAttribute> attribute);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineAttributes();
    void set_EngineAttributes(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> value);
    
    StructureAttributes(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictA, System::SharedPtr<StructureElement> structureElement);
    StructureAttributes(System::SharedPtr<StructureElement> structureElement);
    
    bool HasAttribute(System::SharedPtr<AttributeKey> key);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<StructureElement> _structureElement;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineAttributes;
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


