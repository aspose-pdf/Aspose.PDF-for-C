#ifndef _Aspose_Pdf_ImagePlacementCollection_h_
#define _Aspose_Pdf_ImagePlacementCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>

#include "ImagePlacement.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents an image placements collection
/// </summary>
//<<--REFACTORING: Old code: public sealed class ImagePlacementCollection : ICollection
class ASPOSE_PDF_SHARED_API ImagePlacementCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::ImagePlacement>>
{
    typedef ImagePlacementCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::ImagePlacement>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    
private:

    class ASPOSE_PDF_SHARED_API ImagePlacementsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::ImagePlacement>>
    {
        typedef ImagePlacementsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::ImagePlacement>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<ImagePlacement> get_Current() const;
        
        ImagePlacementsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ImagePlacement>>> placements);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~ImagePlacementsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ImagePlacement>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    ///<summary>
    /// Gets the number of <see cref="ImagePlacement"/> object elements actually contained in the collection. 
    /// </summary>
    int32_t get_Count() const;
    ///<summary>
    /// Gets an object that can be used to synchronize access to the collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    ///<summary>
    /// Gets a value indicating whether access to the collection is synchronized (thread safe). 
    ///</summary>
    bool get_IsSynchronized();
    
    /// <summary>
    /// Adds the text fragment element at the specified index.
    /// </summary>
    //<<--REFACTORING: Old code: internal void Add(ImagePlacement fragment)
    void Add(System::SharedPtr<ImagePlacement> const &fragment);
    ///<summary>
    /// Returns an enumerator for the entire collection.
    ///</summary>
    ///<returns>Enumerator object.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ImagePlacement>>> GetEnumerator();
    ///<summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    ///</summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<ImagePlacement>> array, int32_t index);
    
    /// <summary>
    /// Gets the text fragment element at the specified index.
    /// </summary>
    /// <param name="index">Index of image placement.</param>
    /// <returns>ImagePlacement object.</returns>
    System::SharedPtr<ImagePlacement> idx_get(int32_t index);
    
protected:

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
    
    bool get_IsReadOnly();
    
    /// <summary>
    /// </summary>
    bool Remove(System::SharedPtr<ImagePlacement> const &item);
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<ImagePlacement> const &item) const;
    /// <summary>
    /// </summary>
    void Clear();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ImagePlacementCollection_h_

