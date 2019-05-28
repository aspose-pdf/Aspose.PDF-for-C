#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureElement; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureAttributes; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class AttributeOwnerStandard; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents collection of attributes of structure elements.
/// </summary>
class ASPOSE_PDF_SHARED_API StructureAttributeCollection : public System::Object
{
    typedef StructureAttributeCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    
public:

    /// <summary>
    ///     Return <see cref="Aspose::Pdf::LogicalStructure::StructureAttributes" /> of structure element by standard attribute owner.
    /// </summary>
    /// <param name="ownerStandard">Standard attribute owner.</param>
    /// <returns><see cref="Aspose::Pdf::LogicalStructure::StructureAttributes" /> of structure element. Return null if not found.</returns>
    System::SharedPtr<StructureAttributes> GetAttributes(System::SharedPtr<AttributeOwnerStandard> ownerStandard);
    /// <summary>
    ///     Create and return <see cref="Aspose::Pdf::LogicalStructure::StructureAttributes" /> of structure element by standard attribute owner.
    /// </summary>
    /// <param name="ownerStandard">Standard attribute owner.</param>
    /// <returns><see cref="Aspose::Pdf::LogicalStructure::StructureAttributes" /> of structure element. Structure Attributes will be created if it needed.</returns>
    System::SharedPtr<StructureAttributes> CreateAttributes(System::SharedPtr<AttributeOwnerStandard> ownerStandard);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> get_EngineAttributeCollection();
    void set_EngineAttributeCollection(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> value);
    
    StructureAttributeCollection(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> entityA, System::SharedPtr<StructureElement> structureElement);
    StructureAttributeCollection(System::SharedPtr<StructureElement> structureElement);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::WeakPtr<StructureElement> _structureElement;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> _engineAttributeCollection;
    
    System::SharedPtr<StructureAttributes> TakeAttributes(System::SharedPtr<AttributeOwnerStandard> ownerStandard, bool createIfNeed = false);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


