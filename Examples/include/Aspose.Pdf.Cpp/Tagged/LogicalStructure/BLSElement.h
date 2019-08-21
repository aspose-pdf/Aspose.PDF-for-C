#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Tagged/LogicalStructure/StructureElement.h"
#include "Tagged/LogicalStructure/ITextElement.h"
#include "Tagged/LogicalStructure/AttributeOwnerStandard.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class BLSTextElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ListElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureTypeStandard; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ParagraphElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class HeaderElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class MCRElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureTextState; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ListLIElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ListLblElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ListLBodyElement; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

// Structure Element Category
/// <summary>
///     Represents a base class for block-level structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API BLSElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef BLSElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::BLSTextElement;
    friend class Aspose::Pdf::LogicalStructure::ListElement;
    friend class Aspose::Pdf::LogicalStructure::TableElement;
    
protected:

    BLSElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity, System::SharedPtr<AttributeOwnerStandard> attributeOwner = nullptr);
    
};

/// <summary>
///     Represents a base class for block-level text structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API BLSTextElement : public Aspose::Pdf::LogicalStructure::BLSElement, public Aspose::Pdf::LogicalStructure::ITextElement
{
    typedef BLSTextElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::BLSElement BaseType;
    typedef Aspose::Pdf::LogicalStructure::ITextElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::ParagraphElement;
    friend class Aspose::Pdf::LogicalStructure::HeaderElement;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    
public:

    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState" /> object for current element.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState" /> object for current element.</value>
    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> get_StructureTextState();
    
    /// <summary>
    ///     Appends text content to current text element.
    /// </summary>
    /// <param name="text">Text content</param>
    void SetText(System::String text);
    
protected:

    System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_TextFragment();
    
    BLSTextElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> _structureTextState;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> _textFragment;
    
};

// BLSE's Children
/// <summary>
///     Represents Paragraph structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API ParagraphElement FINAL : public Aspose::Pdf::LogicalStructure::BLSTextElement
{
    typedef ParagraphElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::BLSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ParagraphElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Header structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API HeaderElement FINAL : public Aspose::Pdf::LogicalStructure::BLSTextElement
{
    typedef HeaderElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::BLSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    HeaderElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    HeaderElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, int32_t level, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents List structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API ListElement FINAL : public Aspose::Pdf::LogicalStructure::BLSElement
{
    typedef ListElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::BLSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ListElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

// List child Elements DRAFT
/// <summary>
///     Represents a base class for children elements of the List in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API ListChildElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef ListChildElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::ListLIElement;
    friend class Aspose::Pdf::LogicalStructure::ListLblElement;
    friend class Aspose::Pdf::LogicalStructure::ListLBodyElement;
    
protected:

    ListChildElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents LI structure element in logical structure of the list.
/// </summary>
class ASPOSE_PDF_SHARED_API ListLIElement FINAL : public Aspose::Pdf::LogicalStructure::ListChildElement
{
    typedef ListLIElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ListChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ListLIElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Lbl structure element in logical structure of the list.
/// </summary>
class ASPOSE_PDF_SHARED_API ListLblElement FINAL : public Aspose::Pdf::LogicalStructure::ListChildElement
{
    typedef ListLblElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ListChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ListLblElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents LBody structure element in logical structure of the list.
/// </summary>
class ASPOSE_PDF_SHARED_API ListLBodyElement FINAL : public Aspose::Pdf::LogicalStructure::ListChildElement
{
    typedef ListLBodyElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ListChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ListLBodyElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


