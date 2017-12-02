#ifndef _Aspose_Pdf_OutlineCollection_h_
#define _Aspose_Pdf_OutlineCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "OutlineItemCollection.h"
#include "aspose_pdf_api_defs.h"

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
//<<--REFACTORING: Old code: public sealed class OutlineCollection : ICollection
class ASPOSE_PDF_SHARED_API OutlineCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>>
{
    typedef OutlineCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::OutlineItemCollection;
    
protected:

    class ASPOSE_PDF_SHARED_API OutlinesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>>
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
        
        virtual ~OutlinesEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        bool initialized;
        System::WeakPtr<Engine::IPdfDocument> document;
        System::SharedPtr<Engine::Data::IPdfDictionary> outlines;
        System::SharedPtr<Engine::Data::IPdfObject> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    /// <summary>
    /// Gets the total number of outline items (bookmarks) at all levels of the document outline.
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Gets an outline item representing the first top-level item in the outline.
    /// </summary>
    System::SharedPtr<OutlineItemCollection> get_First();
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
    /// Adds outline item to collection.
    /// </summary>
    /// <param name="outline">The outline item to be added.</param>
    void Add(System::SharedPtr<OutlineItemCollection> const &outline);
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
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<OutlineItemCollection>> array, int32_t index);
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An System.Collections.IEnumerator object that can be used to iterate through the collection.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumerator();
    
    /// <summary>
    /// Gets outline item from collection by index.
    /// </summary>
    /// <param name="index">Index of requested item.</param>
    /// <returns></returns>
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
    
    OutlineCollection(System::SharedPtr<Engine::IPdfDocument> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Document> _domDocument;
    
    bool get_IsReadOnly();
    
    /// <summary>
    /// </summary>
    bool Remove(System::SharedPtr<OutlineItemCollection> const &item);
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<OutlineItemCollection> const &item) const;
    /// <summary>
    /// </summary>
    void Clear();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_OutlineCollection_h_

