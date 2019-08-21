#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Tagged/LogicalStructure/StructureElement.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class DocumentElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class PartElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ArtElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class SectElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class DivElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class BlockQuoteElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class CaptionElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TOCElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TOCIElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class IndexElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class NonStructElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class PrivateElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureTypeStandard; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

// Structure Element Category
/// <summary>
///     Represents a base class for grouping structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API GroupingElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef GroupingElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::DocumentElement;
    friend class Aspose::Pdf::LogicalStructure::PartElement;
    friend class Aspose::Pdf::LogicalStructure::ArtElement;
    friend class Aspose::Pdf::LogicalStructure::SectElement;
    friend class Aspose::Pdf::LogicalStructure::DivElement;
    friend class Aspose::Pdf::LogicalStructure::BlockQuoteElement;
    friend class Aspose::Pdf::LogicalStructure::CaptionElement;
    friend class Aspose::Pdf::LogicalStructure::TOCElement;
    friend class Aspose::Pdf::LogicalStructure::TOCIElement;
    friend class Aspose::Pdf::LogicalStructure::IndexElement;
    friend class Aspose::Pdf::LogicalStructure::NonStructElement;
    friend class Aspose::Pdf::LogicalStructure::PrivateElement;
    
protected:

    GroupingElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

// Grouping Element's Children
/// <summary>
///     Represents Document structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API DocumentElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef DocumentElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    
protected:

    DocumentElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Part structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API PartElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef PartElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    PartElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Art structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API ArtElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef ArtElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ArtElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Sect structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API SectElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef SectElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    SectElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Div structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API DivElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef DivElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    DivElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents BlockQuote structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API BlockQuoteElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef BlockQuoteElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    BlockQuoteElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
/// Represents Caption structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API CaptionElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef CaptionElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    CaptionElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents TOC structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API TOCElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef TOCElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TOCElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents TOCI structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API TOCIElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef TOCIElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TOCIElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Index structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API IndexElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef IndexElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    IndexElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents NonStruct structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API NonStructElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef NonStructElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    NonStructElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Private structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API PrivateElement FINAL : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef PrivateElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    PrivateElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


