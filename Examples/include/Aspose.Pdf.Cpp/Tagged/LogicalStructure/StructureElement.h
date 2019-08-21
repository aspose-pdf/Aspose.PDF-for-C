#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Tagged/LogicalStructure/Element.h"
#include "Tagged/LogicalStructure/AttributeOwnerStandard.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class BLSElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ListChildElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class GroupingElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class IllustrationElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ILSElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class RubyChildElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class WarichuChildElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class MCRElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableChildElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureTypeStandard; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureAttributeCollection; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfName; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents a base class for structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API StructureElement : public Aspose::Pdf::LogicalStructure::Element
{
    typedef StructureElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::BLSElement;
    friend class Aspose::Pdf::LogicalStructure::ListChildElement;
    friend class Aspose::Pdf::LogicalStructure::GroupingElement;
    friend class Aspose::Pdf::LogicalStructure::IllustrationElement;
    friend class Aspose::Pdf::LogicalStructure::ILSElement;
    friend class Aspose::Pdf::LogicalStructure::RubyChildElement;
    friend class Aspose::Pdf::LogicalStructure::WarichuChildElement;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::LogicalStructure::TableElement;
    friend class Aspose::Pdf::LogicalStructure::TableChildElement;
    
public:

    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::AttributeOwnerStandard" /> object.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::AttributeOwnerStandard" /> object.</value>
    System::SharedPtr<AttributeOwnerStandard> get_DefaultAttributeOwner();
    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::StructureAttributeCollection" /> object.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureAttributeCollection" /> object.</value>
    System::SharedPtr<StructureAttributeCollection> get_Attributes();
    /// <summary>
    ///     Gets type of structure element.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureTypeStandard" /> object of structure element.</value>
    System::SharedPtr<StructureTypeStandard> get_StructureType();
    /// <summary>
    ///     Gets the ID for structure element.
    /// </summary>
    /// <value>ID of the structure element.</value>
    System::String get_ID();
    /// <summary>
    ///     Gets the title for structure element.
    /// </summary>
    /// <value>Title of the structure element.</value>
    System::String get_Title();
    /// <summary>
    ///     Sets the title for structure element.
    /// </summary>
    /// <value>Title of the structure element.</value>
    void set_Title(System::String value);
    /// <summary>
    ///     Gets the language for structure element.
    /// </summary>
    /// <value>Language of the structure element.</value>
    System::String get_Language();
    /// <summary>
    ///     Sets the language for structure element.
    /// </summary>
    /// <value>Language of the structure element.</value>
    void set_Language(System::String value);
    /// <summary>
    ///     Gets the alternative text for structure element.
    /// </summary>
    /// <value>Alternative text of the structure element.</value>
    System::String get_AlternativeText();
    /// <summary>
    ///     Sets the alternative text for structure element.
    /// </summary>
    /// <value>Alternative text of the structure element.</value>
    void set_AlternativeText(System::String value);
    /// <summary>
    ///     Gets the expansion text for structure element.
    /// </summary>
    /// <value>Expansion text of the structure element.</value>
    System::String get_ExpansionText();
    /// <summary>
    ///     Sets the expansion text for structure element.
    /// </summary>
    /// <value>Expansion text of the structure element.</value>
    void set_ExpansionText(System::String value);
    /// <summary>
    ///     Gets the actual text for structure element.
    /// </summary>
    /// <value>Actual text of the structure element.</value>
    System::String get_ActualText();
    /// <summary>
    ///     Sets the actual text for structure element.
    /// </summary>
    /// <value>Actual text of the structure element.</value>
    void set_ActualText(System::String value);
    
    /// <summary>
    ///     Change parent element for current structure element
    /// </summary>
    /// <param name="newParentElement">New parent structure element</param>
    void ChangeParentElement(System::SharedPtr<StructureElement> newParentElement);
    /// <summary>
    ///     Generate ID for structure element.
    /// </summary>
    void GenerateId();
    /// <summary>
    ///     Sets ID for structure element.
    /// </summary>
    /// <param name="id">ID value for structure element</param>
    void SetId(System::String id);
    /// <summary>
    ///     Clear ID for structure element.
    /// </summary>
    void ClearId();
    /// <summary>
    ///     Sets custom tag for structure element.
    /// </summary>
    /// <param name="newTag">Tag name</param>
    void SetTag(System::String newTag);
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    virtual System::String ToString();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> get_S();
    void set_S(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_Pg();
    void set_Pg(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> value);
    
    StructureElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity, System::SharedPtr<AttributeOwnerStandard> attributeOwner = nullptr);
    
    virtual void SetParentElement(System::SharedPtr<Element> parentElement);
    virtual bool CanBeAppended(System::SharedPtr<Element> element);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<StructureTypeStandard> _structureType;
    System::SharedPtr<StructureAttributeCollection> _attributes;
    System::SharedPtr<AttributeOwnerStandard> _defaultAttributeOwner;
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


