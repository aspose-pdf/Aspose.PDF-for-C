#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object_ext.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/constraints.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>

#include "Tagged/LogicalStructure/ElementList.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Tagged { namespace Helpers { class StructureElementUtil; } } } }
namespace Aspose { namespace Pdf { namespace Tagged { namespace Helpers { class StructureTextStateFactory; } } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ElementListImplementation; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class AnnotationElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class LinkElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class MCRElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class OBJRElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructTreeRootElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureAttributeCollection; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureAttributes; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace TaggedPdf { class TaggedPdfStructure; } } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ElementPdfEngine; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Tagged { class ITaggedContent; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfName; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     The <b>Aspose.Pdf.Tagged.LogicalStructure </b> is a namespace for PDF Logical Structure classes.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
///     Represents a base class for element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API Element : public virtual System::Object
{
    typedef Element ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::Helpers::StructureElementUtil;
    friend class Aspose::Pdf::Tagged::Helpers::StructureTextStateFactory;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::ElementListImplementation;
    friend class Aspose::Pdf::LogicalStructure::AnnotationElement;
    friend class Aspose::Pdf::LogicalStructure::LinkElement;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::LogicalStructure::OBJRElement;
    friend class Aspose::Pdf::LogicalStructure::StructTreeRootElement;
    friend class Aspose::Pdf::LogicalStructure::StructureAttributeCollection;
    friend class Aspose::Pdf::LogicalStructure::StructureAttributes;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_4;
    friend class Aspose::Pdf::Tests::TaggedPdf::TaggedPdfStructure;
    
public:

    /// <summary>
    ///     Get parent element.
    /// </summary>
    /// <value>Parent element.</value>
    System::SharedPtr<Element> get_ParentElement();
    /// <summary>
    ///     Gets children collection of <see cref="T:/Aspose::Pdf::LogicalStructure::Element" /> objects.
    /// </summary>
    /// <value>
    ///     Children collection of <see cref="T:/Aspose::Pdf::LogicalStructure::Element" /> objects.
    /// </value>
    System::SharedPtr<ElementList> get_ChildElements();
    
    /// <summary>
    ///     Find Elements of a given type
    /// </summary>
    /// <typeparam name="T">Type of Structure Element for search</typeparam>
    /// <param name="recursiveSearch">(Optional) Recursive Search (default false, search only from direct children)</param>
    /// <returns>List of found Elements</returns>
    template <typename T>
    System::SharedPtr<System::Collections::Generic::List<T>> FindElements(bool recursiveSearch = false)
    {
        typedef Element BaseT_Element;
        assert_is_base_of(BaseT_Element, T);
        
        System::SharedPtr<System::Collections::Generic::List<T>> elements = System::MakeObject<System::Collections::Generic::List<T>>();
        
        
        {
            auto element_enumerator = (get_ChildElements())->GetEnumerator();
            decltype(element_enumerator->get_Current()) element;
            while (element_enumerator->MoveNext() && (element = element_enumerator->get_Current(), true))
            {
                if (System::ObjectExt::Is<T>(element))
                {
                    elements->Add(System::StaticCast_noexcept<typename T::Pointee_>(element));
                }
                
                if (recursiveSearch)
                {
                    elements->AddRange(element->FindElements<T>(recursiveSearch));
                }
            }
        }
        
        return elements;
    }
    
    /// <summary>
    ///     Append <see cref="T:/Aspose::Pdf::LogicalStructure::Element" /> to collection of children.
    /// </summary>
    /// <param name="element"><see cref="T:/Aspose::Pdf::LogicalStructure::Element" /> object to add.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::Element" /> which has been added.</returns>
    System::SharedPtr<Element> AppendChild(System::SharedPtr<Element> element);
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    virtual System::String ToString();
    
protected:

    System::SharedPtr<ElementPdfEngine> get_ElementEngine();
    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> get_Trailer();
    System::SharedPtr<Aspose::Pdf::Tagged::ITaggedContent> get_TaggedContent();
    
    Element(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> pdfObjectType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual void PreSave();
    virtual void Save();
    virtual void SetParentElement(System::SharedPtr<Element> parentElement);
    virtual bool CanBeAppended(System::SharedPtr<Element> element) = 0;
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<ElementPdfEngine> _elementEngine;
    System::WeakPtr<Element> _parentElement;
    System::SharedPtr<ElementList> _childElements;
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


