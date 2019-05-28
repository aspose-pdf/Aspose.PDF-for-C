#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>

#include "ImagePlacement.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents an image placements collection
/// </summary>
class ASPOSE_PDF_SHARED_API ImagePlacementCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::ImagePlacement>>
{
    typedef ImagePlacementCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::ImagePlacement>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    
private:

    class ImagePlacementsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::ImagePlacement>>
    {
        typedef ImagePlacementsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::ImagePlacement>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<ImagePlacement> get_Current() const;
        
        ImagePlacementsEnumerator(System::SharedPtr<ImagePlacementCollection> collection);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<ImagePlacementCollection> _collection;
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ImagePlacement>>> cursor;
        int32_t viewed;
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of <see cref="ImagePlacement"/> object elements actually contained in the collection. 
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Gets an object that can be used to synchronize access to the collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets a value indicating whether access to the collection is synchronized (thread safe). 
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Adds the text fragment element at the specified index.
    /// </summary>
    void Add(System::SharedPtr<ImagePlacement> const &fragment);
    /// <summary>
    /// Returns an enumerator for the entire collection.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ImagePlacement>>> GetEnumerator();
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    void CopyTo(System::ArrayPtr<System::SharedPtr<ImagePlacement>> array, int32_t index);
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    void Clear();
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    bool Contains(System::SharedPtr<ImagePlacement> const &item) const;
    /// <summary>
    /// Deletes specified item from collection
    /// </summary>
    /// <param name="item">Item to delete</param>
    /// <returns>true if item was deleted; otherwise, false.</returns>
    bool Remove(System::SharedPtr<ImagePlacement> const &item);
    
    /// <summary>
    /// Gets the text fragment element at the specified index.
    /// </summary>
    /// <param name="index">Index of image placement.</param>
    /// <returns>ImagePlacement object.</returns>
    System::SharedPtr<ImagePlacement> idx_get(int32_t index);
    
protected:

    System::SharedPtr<Aspose::Pdf::Document> get_Document() const;
    void set_Document(System::SharedPtr<Aspose::Pdf::Document> value);
    
    /// <summary>
    /// Initializes a new instance of <see cref="ImagePlacementCollection"/> collection class
    /// </summary>
    ImagePlacementCollection();
    
    /// <summary>
    /// Deletes the text fragment element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ImagePlacement>>> placements;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Aspose::Pdf::Document> _document;
    
};

} // namespace Pdf
} // namespace Aspose


