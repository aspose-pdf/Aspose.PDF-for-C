#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Tagged/LogicalStructure/Element.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class AnnotationElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace TaggedPdf { class TaggedPdfStructure; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class NamesTreeNode; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class NumsTreeNode; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfNumber; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents StructTreeRoot object in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API StructTreeRootElement FINAL : public Aspose::Pdf::LogicalStructure::Element
{
    typedef StructTreeRootElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::AnnotationElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::Tests::TaggedPdf::TaggedPdfStructure;
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::NamesTreeNode> get_IDTree();
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::NumsTreeNode> get_ParentTree();
    int32_t get_ParentTreeNextKey();
    void set_ParentTreeNextKey(int32_t value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_RoleMap();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Element>>> get_AllElements();
    
    StructTreeRootElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual bool CanBeAppended(System::SharedPtr<Element> element);
    void DoPreSave();
    void DoSave();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> CreateStructParents();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> GetStructParentsArray(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> structParents);
    int32_t RegistrationObjectInParentTree(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> pdfObject);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::NamesTreeNode> _idTree;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::NumsTreeNode> _parentTree;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> _parentTreeNextKey;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _roleMap;
    
    int32_t CalcParentTreeNextKey();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Element>>> GetAllElements(System::SharedPtr<Element> element);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


