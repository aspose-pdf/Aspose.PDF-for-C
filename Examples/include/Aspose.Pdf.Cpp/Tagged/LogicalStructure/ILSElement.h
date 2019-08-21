#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Tagged/LogicalStructure/StructureElement.h"
#include "Tagged/LogicalStructure/ITextElement.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class ILSTextElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class AnnotationElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ReferenceElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class BibEntryElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class RubyElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class WarichuElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureTypeStandard; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class SpanElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class QuoteElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class NoteElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class CodeElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureTextState; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class LinkElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class AnnotElement; } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }
namespace Aspose { namespace Pdf { class Hyperlink; } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class MCRElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class RubyRBElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class RubyRTElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class RubyRPElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class WarichuWTElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class WarichuWPElement; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

// Structure Element Category
/// <summary>
///     Represents a base class for inline-level structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API ILSElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef ILSElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::ILSTextElement;
    friend class Aspose::Pdf::LogicalStructure::AnnotationElement;
    friend class Aspose::Pdf::LogicalStructure::ReferenceElement;
    friend class Aspose::Pdf::LogicalStructure::BibEntryElement;
    friend class Aspose::Pdf::LogicalStructure::RubyElement;
    friend class Aspose::Pdf::LogicalStructure::WarichuElement;
    
protected:

    ILSElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents a base class for inline-level text structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API ILSTextElement : public Aspose::Pdf::LogicalStructure::ILSElement, public Aspose::Pdf::LogicalStructure::ITextElement
{
    typedef ILSTextElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    typedef Aspose::Pdf::LogicalStructure::ITextElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::SpanElement;
    friend class Aspose::Pdf::LogicalStructure::QuoteElement;
    friend class Aspose::Pdf::LogicalStructure::NoteElement;
    friend class Aspose::Pdf::LogicalStructure::CodeElement;
    
public:

    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState" /> object for current element.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState" /> object for current element.</value>
    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> get_StructureTextState();
    
    /// <summary>
    ///     Appends text content to current text element.
    /// </summary>
    /// <param name="text">Text content.</param>
    void SetText(System::String text);
    
protected:

    ILSTextElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> _structureTextState;
    
};

/// <summary>
///     Represents a base class for annotation structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API AnnotationElement : public Aspose::Pdf::LogicalStructure::ILSElement
{
    typedef AnnotationElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::LinkElement;
    friend class Aspose::Pdf::LogicalStructure::AnnotElement;
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    ///     Gets or Sets the Alternate Descriptions for annotation.
    ///     Text that shall be displayed for the annotation or, if this type of annotation does not display text, an alternate description of the annotation's contents in human-readable form.
    /// </summary>
    System::String get_AlternateDescriptions();
    /// <summary>
    ///     Gets or Sets the Alternate Descriptions for annotation.
    ///     Text that shall be displayed for the annotation or, if this type of annotation does not display text, an alternate description of the annotation's contents in human-readable form.
    /// </summary>
    void set_AlternateDescriptions(System::String value);
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>> get_Annotations();
    
    AnnotationElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual void Save();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>> _annotations;
    System::String _alternateDescriptions;
    
};

// ILSE's Children
/// <summary>
///     Represents Span structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API SpanElement FINAL : public Aspose::Pdf::LogicalStructure::ILSTextElement
{
    typedef SpanElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    SpanElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Quote structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API QuoteElement FINAL : public Aspose::Pdf::LogicalStructure::ILSTextElement
{
    typedef QuoteElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    QuoteElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Note structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API NoteElement FINAL : public Aspose::Pdf::LogicalStructure::ILSTextElement
{
    typedef NoteElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    NoteElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Reference structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API ReferenceElement FINAL : public Aspose::Pdf::LogicalStructure::ILSElement
{
    typedef ReferenceElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ReferenceElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents BibEntry structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API BibEntryElement FINAL : public Aspose::Pdf::LogicalStructure::ILSElement
{
    typedef BibEntryElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    BibEntryElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Code structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API CodeElement FINAL : public Aspose::Pdf::LogicalStructure::ILSTextElement
{
    typedef CodeElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    CodeElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Link structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API LinkElement FINAL : public Aspose::Pdf::LogicalStructure::AnnotationElement, public Aspose::Pdf::LogicalStructure::ITextElement
{
    typedef LinkElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::AnnotationElement BaseType;
    typedef Aspose::Pdf::LogicalStructure::ITextElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
public:

    /// <summary>
    ///     Gets or Sets Hyperlink for Link Element.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Hyperlink> get_Hyperlink();
    /// <summary>
    ///     Gets or Sets Hyperlink for Link Element.
    /// </summary>
    void set_Hyperlink(System::SharedPtr<Aspose::Pdf::Hyperlink> value);
    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState" /> object for current element.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState" /> object for current element.</value>
    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> get_StructureTextState();
    
    /// <summary>
    ///     Appends text content to current text element.
    /// </summary>
    /// <param name="text">Text content.</param>
    void SetText(System::String text);
    
protected:

    LinkElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual void PreSave();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> _structureTextState;
    System::SharedPtr<Aspose::Pdf::Hyperlink> _hyperlink;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MCRElement>>> _mcrElementList;
    
    void collectMcrElementList(System::SharedPtr<Element> parentElement = nullptr);
    
};

/// <summary>
///     Represents Annot structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API AnnotElement FINAL : public Aspose::Pdf::LogicalStructure::AnnotationElement
{
    typedef AnnotElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::AnnotationElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    AnnotElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Ruby structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API RubyElement FINAL : public Aspose::Pdf::LogicalStructure::ILSElement
{
    typedef RubyElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    RubyElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Warichu structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API WarichuElement FINAL : public Aspose::Pdf::LogicalStructure::ILSElement
{
    typedef WarichuElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    WarichuElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

// Ruby and Warichu child Elements DRAFT
/// <summary>
///     Represents a base class for children elements of the Ruby in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API RubyChildElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef RubyChildElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::RubyRBElement;
    friend class Aspose::Pdf::LogicalStructure::RubyRTElement;
    friend class Aspose::Pdf::LogicalStructure::RubyRPElement;
    
protected:

    RubyChildElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents a base class for children elements of the Warichu in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API WarichuChildElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef WarichuChildElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::WarichuWTElement;
    friend class Aspose::Pdf::LogicalStructure::WarichuWPElement;
    
protected:

    WarichuChildElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents RB structure element in logical structure of the Ruby.
/// </summary>
class ASPOSE_PDF_SHARED_API RubyRBElement FINAL : public Aspose::Pdf::LogicalStructure::RubyChildElement
{
    typedef RubyRBElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::RubyChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    RubyRBElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents RT structure element in logical structure of the Ruby.
/// </summary>
class ASPOSE_PDF_SHARED_API RubyRTElement FINAL : public Aspose::Pdf::LogicalStructure::RubyChildElement
{
    typedef RubyRTElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::RubyChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    RubyRTElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents RP structure element in logical structure of the Ruby.
/// </summary>
class ASPOSE_PDF_SHARED_API RubyRPElement FINAL : public Aspose::Pdf::LogicalStructure::RubyChildElement
{
    typedef RubyRPElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::RubyChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    RubyRPElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents WT structure element in logical structure of the Warichu.
/// </summary>
class ASPOSE_PDF_SHARED_API WarichuWTElement FINAL : public Aspose::Pdf::LogicalStructure::WarichuChildElement
{
    typedef WarichuWTElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::WarichuChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    WarichuWTElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents WP structure element in logical structure of the Warichu.
/// </summary>
class ASPOSE_PDF_SHARED_API WarichuWPElement FINAL : public Aspose::Pdf::LogicalStructure::WarichuChildElement
{
    typedef WarichuWPElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::WarichuChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    WarichuWPElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


