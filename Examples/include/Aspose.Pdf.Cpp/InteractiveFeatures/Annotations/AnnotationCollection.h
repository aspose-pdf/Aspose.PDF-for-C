#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationCollection_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "InteractiveFeatures/Annotations/Annotation.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPage; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Class representing annotation collection.
/// </summary>
//<<--REFACTORING: Old code: public sealed class AnnotationCollection : ICollection
class ASPOSE_PDF_SHARED_API AnnotationCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation>>
{
    typedef AnnotationCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Page;
    
private:

    class ASPOSE_PDF_SHARED_API AnnotationHandler : public System::Object
    {
        typedef AnnotationHandler ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_EngineObject();
        System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> get_Annotation();
        
        AnnotationHandler(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineObject, System::WeakPtr<Page> page);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> _engineObject;
        System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> _annotation;
        System::WeakPtr<Page> _page;
        
    };
    
    class ASPOSE_PDF_SHARED_API AnnotationsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation>>
    {
        typedef AnnotationsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Annotation> get_Current() const;
        
        AnnotationsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AnnotationCollection::AnnotationHandler>>> annotations, System::SharedPtr<Page> page);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~AnnotationsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AnnotationCollection::AnnotationHandler>>> _annots;
        int32_t _cursor;
        int32_t _version;
        System::SharedPtr<Page> _page;
        bool mIsDisposed;
        
    };
    
    
public:

    /// <summary>
    /// Gets a value indicating whether access to the Aspose.Pdf.InteractiveFeatures.Annotations.AnnotationCollection is synchronized (thread safe).
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets an object that can be used to synchronize access to Aspose.Pdf.InteractiveFeatures.Annotations.AnnotationCollection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets count of annotations in collection.
    /// </summary>
    int32_t get_Count() const;
    
    /// <summary>
    /// Adds annotation to the collection. If page is rotated then annotation rectangle will be recalculated accordingly.
    /// </summary>
    /// <param name="annotation">Annotation which shall be added.</param>
    /// <param name="considerRotation">If true and if page is rotated then annotation position will be recaculated accroding to page rotation.</param>
    void Add(System::SharedPtr<Annotation> annotation, bool considerRotation);
    /// <summary>
    /// Adds annotation to the collection.
    /// </summary>
    /// <param name="annotation">Annotation which shall be added.</param>
    void Add(System::SharedPtr<Annotation> const &annotation);
    /// <summary>
    /// Deletes annotation from the collection by index.
    /// </summary>
    /// <param name="index">Index of annotation which shall be deleted.</param>
    void Delete(int32_t index);
    /// <summary>
    /// Deletes all annotations from the collection.
    /// </summary>
    void Delete();
    /// <summary>
    /// Copies array of annotations into collection.
    /// </summary>
    /// <param name="array">Array to copy into collection.</param>
    /// <param name="index">Starting index where colleciton wil lbe copied.</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<Annotation>> array, int32_t index);
    /// <summary>
    /// Returns collection enumerator.
    /// </summary>
    /// <returns>Enumerator object</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Annotation>>> GetEnumerator();
    /// <summary>
    /// Accepts visitor to process annotation.
    /// </summary>
    /// <param name="visitor">Annotation selector object.</param>
    void Accept(System::SharedPtr<AnnotationSelector> visitor);
    /// <summary>
    /// Deletes specified annotation from the collection. 
    /// </summary>
    /// <param name="annotation">Annotation which shall be deleted.</param>
    void Delete(System::SharedPtr<Annotation> annotation);
    
    /// <summary>
    /// The index of the element to get.
    /// </summary>
    /// <param name="index">The index value started from one.</param>
    /// <returns>Annotation object</returns>
    System::SharedPtr<Annotation> idx_get(int32_t index);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::IPage> page;
    
    void assert_();
    
    /// <summary>
    /// Constructor of AnnotationCollection. Creates annotation collection for annotations on the given page.
    /// </summary>
    /// <param name="page">Parent page of annotations.</param>
    AnnotationCollection(System::SharedPtr<Page> page);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Page> _page;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AnnotationCollection::AnnotationHandler>>> cache;
    
    /// <summary>
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// </summary>
    void Clear();
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<Annotation> const &item) const;
    /// <summary>
    /// Returns annotation by its index.
    /// </summary>
    /// <param name="index">Index of annotation. Annotation indexes start from 1.</param>
    /// <returns>Retreived annotation</returns>
    System::SharedPtr<Annotation> get(int32_t index);
    int32_t FindAnnotation(System::SharedPtr<Annotation> annotation) const;
    /// <summary>
    /// </summary>
    bool Remove(System::SharedPtr<Annotation> const &annotation);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationCollection_h_

