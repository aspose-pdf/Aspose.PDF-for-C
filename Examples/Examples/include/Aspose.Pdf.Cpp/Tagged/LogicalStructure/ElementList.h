#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class Element; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents an ordered collection of elements.
/// </summary>
class ASPOSE_PDF_SHARED_API ElementList : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::LogicalStructure::Element>>
{
    typedef ElementList ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::LogicalStructure::Element>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::Element;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    
public:

    /// <summary>
    ///     Gets the number of elements in the ElementList.
    /// </summary>
    virtual int32_t get_Count() = 0;
    
    /// <summary>
    ///     Retrieves a element at the given index.
    /// </summary>
    /// <param name="index">The index into the list of elements.</param>
    /// <returns>The <see cref="T:/Aspose::Pdf::LogicalStructure::Element" /> with the specified index in the collection. If <paramref name="index" /> is greater than or equal to the number of elements in the list, this returns null.</returns>
    virtual System::SharedPtr<Element> Item(int32_t index) = 0;
    
    /// <summary>
    ///     Gets an element at the given index.
    /// </summary>
    /// <param name="index">The index into the list of elements.</param>
    /// <returns>The <see cref="T:/Aspose::Pdf::LogicalStructure::Element" /> with the specified index in the collection. If index is greater than or equal to the number of elements in the list, this returns null.</returns>
    virtual System::SharedPtr<Element> idx_get(int32_t index);
    
    /// <summary>
    ///     Gets an enumerator that iterates through the collection of elements.
    /// </summary>
    /// <returns>An enumerator used to iterate through the collection of elements.</returns>
    virtual System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Element>>> GetEnumerator() = 0;
    
protected:

    virtual void AddElement(System::SharedPtr<Element> element, bool updatePdfDictionary = true) = 0;
    virtual void RemoveElement(System::SharedPtr<Element> element, bool updatePdfDictionary = true) = 0;
    
    ElementList();
    
};

class ElementListImplementation : public Aspose::Pdf::LogicalStructure::ElementList
{
    typedef ElementListImplementation ThisType;
    typedef Aspose::Pdf::LogicalStructure::ElementList BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual int32_t get_Count();
    
    ElementListImplementation(System::SharedPtr<Element> owner);
    
    virtual System::SharedPtr<Element> Item(int32_t index);
    virtual System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Element>>> GetEnumerator();
    virtual void AddElement(System::SharedPtr<Element> element, bool updatePdfDictionary = true);
    virtual void RemoveElement(System::SharedPtr<Element> element, bool updatePdfDictionary = true);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::WeakPtr<Element> _owner;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Element>>> _elements;
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


