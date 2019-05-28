#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/multicast_delegate.h>
#include <system/collections/dictionary.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureTypeCategory; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class Element; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents Standard Structure Types.
/// </summary>
class ASPOSE_PDF_SHARED_API StructureTypeStandard FINAL : public System::Object
{
    typedef StructureTypeStandard ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    using CreateElementDelegate = System::MulticastDelegate<System::SharedPtr<Element>(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext>, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>)>;
    
    
public:

    static System::SharedPtr<StructureTypeStandard> Document;
    static System::SharedPtr<StructureTypeStandard> Part;
    static System::SharedPtr<StructureTypeStandard> Art;
    static System::SharedPtr<StructureTypeStandard> Sect;
    static System::SharedPtr<StructureTypeStandard> Div;
    static System::SharedPtr<StructureTypeStandard> BlockQuote;
    static System::SharedPtr<StructureTypeStandard> Caption;
    static System::SharedPtr<StructureTypeStandard> TOC;
    static System::SharedPtr<StructureTypeStandard> TOCI;
    static System::SharedPtr<StructureTypeStandard> Index;
    static System::SharedPtr<StructureTypeStandard> NonStruct;
    static System::SharedPtr<StructureTypeStandard> Private;
    static System::SharedPtr<StructureTypeStandard> P;
    static System::SharedPtr<StructureTypeStandard> H;
    static System::SharedPtr<StructureTypeStandard> H1;
    static System::SharedPtr<StructureTypeStandard> H2;
    static System::SharedPtr<StructureTypeStandard> H3;
    static System::SharedPtr<StructureTypeStandard> H4;
    static System::SharedPtr<StructureTypeStandard> H5;
    static System::SharedPtr<StructureTypeStandard> H6;
    static System::SharedPtr<StructureTypeStandard> L;
    static System::SharedPtr<StructureTypeStandard> LI;
    static System::SharedPtr<StructureTypeStandard> Lbl;
    static System::SharedPtr<StructureTypeStandard> LBody;
    static System::SharedPtr<StructureTypeStandard> Table;
    static System::SharedPtr<StructureTypeStandard> THead;
    static System::SharedPtr<StructureTypeStandard> TBody;
    static System::SharedPtr<StructureTypeStandard> TFoot;
    static System::SharedPtr<StructureTypeStandard> TR;
    static System::SharedPtr<StructureTypeStandard> TH;
    static System::SharedPtr<StructureTypeStandard> TD;
    static System::SharedPtr<StructureTypeStandard> Span;
    static System::SharedPtr<StructureTypeStandard> Quote;
    static System::SharedPtr<StructureTypeStandard> Note;
    static System::SharedPtr<StructureTypeStandard> Reference;
    static System::SharedPtr<StructureTypeStandard> BibEntry;
    static System::SharedPtr<StructureTypeStandard> Code;
    static System::SharedPtr<StructureTypeStandard> Link;
    static System::SharedPtr<StructureTypeStandard> Annot;
    static System::SharedPtr<StructureTypeStandard> Ruby;
    static System::SharedPtr<StructureTypeStandard> RB;
    static System::SharedPtr<StructureTypeStandard> RT;
    static System::SharedPtr<StructureTypeStandard> RP;
    static System::SharedPtr<StructureTypeStandard> Warichu;
    static System::SharedPtr<StructureTypeStandard> WT;
    static System::SharedPtr<StructureTypeStandard> WP;
    static System::SharedPtr<StructureTypeStandard> Figure;
    static System::SharedPtr<StructureTypeStandard> Formula;
    static System::SharedPtr<StructureTypeStandard> Form;
    
    /// <summary>
    ///     Gets tag name of <see cref="Aspose::Pdf::LogicalStructure::StructureElement" />.
    /// </summary>
    /// <value>Tag name of <see cref="Aspose::Pdf::LogicalStructure::StructureElement" />.</value>
    System::String get_Tag();
    /// <summary>
    ///     Gets category of Standard Structure Type.
    /// </summary>
    /// <value>Category of Standard Structure Type.</value>
    System::SharedPtr<StructureTypeCategory> get_Category();
    
    static System::SharedPtr<StructureTypeStandard> to_StructureTypeStandard(System::String tag);
    
    /// <summary>
    /// Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    virtual System::String ToString();
    
protected:

    System::SharedPtr<Element> CreateElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    bool CanBeAppended(System::SharedPtr<StructureTypeStandard> structureType);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<StructureTypeCategory> _category;
    System::String _tag;
    StructureTypeStandard::CreateElementDelegate _createElement;
    static System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<StructureTypeStandard>>> _instance;
    
    StructureTypeStandard(System::SharedPtr<StructureTypeCategory> category, System::String tag, StructureTypeStandard::CreateElementDelegate createElementDelegate);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


