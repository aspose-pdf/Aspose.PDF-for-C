#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.
//using System.Linq.Expressions;

#include <system/string.h>
#include <system/object.h>
#include <system/collections/ienumerator.h>

#include "Outlines/Outlines.h"
#include "Outlines/OutlineItemCollection.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents document outline hierarchy.
/// </summary>
class ASPOSE_PDF_SHARED_API OutlineCollection FINAL : public Aspose::Pdf::Outlines
{
    typedef OutlineCollection ThisType;
    typedef Aspose::Pdf::Outlines BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::OutlineItemCollection;
    
protected:

    class OutlinesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>>
    {
        typedef OutlinesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<OutlineItemCollection> get_Current() const;
        
        OutlinesEnumerator(System::SharedPtr<Engine::Data::IPdfDictionary> outlines, System::SharedPtr<Engine::IPdfDocument> document);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        bool initialized;
        System::WeakPtr<Engine::IPdfDocument> document;
        System::SharedPtr<Engine::Data::IPdfDictionary> outlines;
        System::SharedPtr<Engine::Data::IPdfObject> cursor;
        int32_t viewed;
        
    };
    
    
public:

    /// <summary>
    /// Count is the sum of the number of visible descendent outline items at all levels. Note: please don't confuse with Count which is number if items in collection.
    /// </summary>
    virtual int32_t get_VisibleCount();
    /// <summary>
    /// Count of collection items. Please dont confuse with VisibleCount: VisibleCount gets number of visible outline item on all levels.
    /// </summary>
    virtual int32_t get_Count() const;
    /// <summary>
    /// Gets an outline item representing the first top-level item in the outline.
    /// </summary>
    System::SharedPtr<OutlineItemCollection> get_First() const;
    /// <summary>
    /// Gets an outline item representing the last top-level item in the outline.
    /// </summary>
    System::SharedPtr<OutlineItemCollection> get_Last();
    /// <summary>
    /// Gets a value indicating whether access to this collection is synchronized (thread safe).
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets an object that can be used to synchronize access to this collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    virtual bool get_IsReadOnly();
    
    /// <summary>
    /// Adds outline item to collection.
    /// </summary>
    /// <param name="outline">The outline item to be added.</param>
    virtual void Add(System::SharedPtr<OutlineItemCollection> const &outline);
    /// <summary>
    /// Deletes all outline items from the document outline.
    /// </summary>
    void Delete();
    /// <summary>
    /// Deletes the outline item with specified title from the document outline.
    /// </summary>
    /// <param name="name">The title of outline item to be deleted</param>
    void Delete(System::String name);
    /// <summary>
    /// Copies the outline items to an System.Array, starting at a particular System.Array index.
    /// </summary>
    /// <param name="array">The one-dimensional System.Array that is the destination. Must have zero-based indexing.</param>
    /// <param name="index">The zero-based index in array at which copying begins.</param>
    virtual void CopyTo(System::ArrayPtr<System::SharedPtr<OutlineItemCollection>> array, int32_t index);
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An System.Collections.IEnumerator object that can be used to iterate through the collection.</returns>
    //override System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    //{
    //    return new OutlinesEnumerator(document.Catalog.Outlines, document);
    //}
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An System.Collections.IEnumerator object that can be used to iterate through the collection.</returns>
    virtual System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumerator();
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    virtual void Clear();
    /// <summary>
    /// Checks does collection contains given item.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    virtual bool Contains(System::SharedPtr<OutlineItemCollection> const &item) const;
    /// <summary>
    /// Always throws NotImplementedException
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    virtual bool Remove(System::SharedPtr<OutlineItemCollection> const &item);
    /// <summary>
    /// Remove item by index.
    /// </summary>
    /// <param name="index">Index of the item to be removed.</param>
    void Remove(int32_t index);
    
    /// <summary>
    /// Gets outline item from collection by index.
    /// </summary>
    /// <param name="index">Index of requested item.</param>
    /// <returns></returns>
    //        [Obfuscation(Feature = "virtualization", Exclude = false)]
    System::SharedPtr<OutlineItemCollection> idx_get(int32_t index);
    
protected:

    System::WeakPtr<Engine::IPdfDocument> document;
    
    /// <summary>
    /// Initializes a new instance of OutlineCollection class using document object.
    /// </summary>
    /// <param name="document">Document instance.</param>
    OutlineCollection(System::SharedPtr<Document> document);
    
    System::SharedPtr<Engine::Data::IPdfObject> createOutlines(System::SharedPtr<Engine::Data::ITrailerable> trailer) const;
    /// <summary>
    /// Deletes the outline item with specified title from the specified OutlineCollection instance.
    /// </summary>
    /// <param name="outlines">OutlineCollection instance</param>
    /// <param name="name">The title of outline item to be deleted.</param>
    static void Delete(System::SharedPtr<Engine::Data::IPdfDictionary> outlines, System::String name);
    virtual void UpdateVisibleCount();
    static void Remove(System::SharedPtr<Engine::Data::IPdfObject> parent, System::SharedPtr<Engine::Data::IPdfObject> prev, System::SharedPtr<Engine::Data::IPdfObject> item, System::SharedPtr<Engine::Data::IPdfObject> next);
    
    OutlineCollection(System::SharedPtr<Engine::IPdfDocument> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Document> _domDocument;
    
    int32_t CalculateVisibleCount();
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumeratorInternal() const;
    int32_t FindItem(System::SharedPtr<OutlineItemCollection> item) const;
    int32_t FindItem(System::String name);
    
};

} // namespace Pdf
} // namespace Aspose


