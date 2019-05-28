#pragma once

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class OutlineItemCollection; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class describes collection of outlines. 
/// </summary>
class ASPOSE_PDF_SHARED_API Outlines : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>>
{
    typedef Outlines ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::OutlineItemCollection;
    
public:

    virtual int32_t get_Count() const = 0;
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    virtual bool get_IsReadOnly() = 0;
    /// <summary>
    /// Gets the total number of outline items at all levels in the document outline hierarchy.
    /// </summary>
    virtual int32_t get_VisibleCount() = 0;
    
    /// <summary>
    /// Adds outline item to collection.
    /// </summary>
    /// <param name="outline">The outline item to be added.</param>
    virtual void Add(System::SharedPtr<OutlineItemCollection> const &item) = 0;
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    virtual void Clear() = 0;
    /// <summary>
    /// Always throws NotImplementedException
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    virtual bool Contains(System::SharedPtr<OutlineItemCollection> const &item) const = 0;
    /// <summary>
    /// Copies the outline entries to an System.Array, starting at a particular System.Array index.
    /// </summary>
    /// <param name="array">The one-dimensional System.Array that is the destination. Must have zero-based indexing.</param>
    /// <param name="index">The zero-based index in array at which copying begins.</param>
    virtual void CopyTo(System::ArrayPtr<System::SharedPtr<OutlineItemCollection>> array, int32_t arrayIndex) = 0;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An System.Collections.IEnumerator object that can be used to iterate through the collection.</returns>
    virtual System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumerator() = 0;
    /// <summary>
    /// Remove outline collection item.
    /// </summary>
    /// <param name="item">Item to delete.</param>
    virtual bool Remove(System::SharedPtr<OutlineItemCollection> const &item) = 0;
    
protected:

    virtual void UpdateVisibleCount() = 0;
    
};

} // namespace Pdf
} // namespace Aspose


