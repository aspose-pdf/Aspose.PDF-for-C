#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/Annotation.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace LicenseManagement { class RestrictionChecker; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPage; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class representing annotation collection.
/// </summary>
class ASPOSE_PDF_SHARED_API AnnotationCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>
{
    typedef AnnotationCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Page;
    
private:

    class AnnotationHandler : public System::Object
    {
        typedef AnnotationHandler ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Aspose::Pdf::Annotations::Annotation> get_Annotation();
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_EngineObject();
        
        AnnotationHandler(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> EngineObj, System::SharedPtr<Page> Page);
        AnnotationHandler(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation, System::SharedPtr<Page> page);
        
        int32_t CompareTo(System::SharedPtr<AnnotationCollection::AnnotationHandler> value);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> _engineObj;
        System::SharedPtr<Aspose::Pdf::Annotations::Annotation> _annotation;
        System::WeakPtr<Page> _page;
        
    };
    
    class AnnotationList : public System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Annotations::AnnotationCollection::AnnotationHandler>>
    {
        typedef AnnotationList ThisType;
        typedef System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Annotations::AnnotationCollection::AnnotationHandler>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t IndexOf(System::SharedPtr<Annotation> annotation);
        bool Remove(System::SharedPtr<Annotation> const &annotation);
        void SetTemplateWeakPtr(unsigned int argument) override;
        
    };
    
    class AnnotationsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>
    {
        typedef AnnotationsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Annotation> get_Current() const;
        
        AnnotationsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AnnotationCollection::AnnotationHandler>>> annotations, System::SharedPtr<Page> page);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Annotation>>> _annots;
        int32_t _cursor;
        System::SharedPtr<Page> _page;
        System::SharedPtr<Aspose::Pdf::LicenseManagement::RestrictionChecker> rc;
        
    };
    
    
public:

    /// <summary>
    /// Gets a value indicating whether access to the Aspose.Pdf.Annotations.AnnotationCollection is synchronized (thread safe).
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets an object that can be used to synchronize access to Aspose.Pdf.Annotations.AnnotationCollection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets count of annotations in collection.
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Gets a value indicating if collection is readonly.
    /// </summary>
    bool get_IsReadOnly();
    
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
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
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
    /// Deletes all annotations from the collection.
    /// </summary>
    void Clear();
    /// <summary>
    /// Checks if specified annotation belong to collection.
    /// </summary>
    /// <param name="annotation">Annotation to be searched.</param>
    bool Contains(System::SharedPtr<Annotation> const &annotation) const;
    /// <summary>
    /// Deletes specified annotation from the collection.
    /// </summary>
    /// <param name="annotation">Annotation which shall be deleted.</param>
    bool Remove(System::SharedPtr<Annotation> const &annotation);
    
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

    System::SharedPtr<Aspose::Pdf::LicenseManagement::RestrictionChecker> rc;
    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Page> _page;
    System::SharedPtr<AnnotationCollection::AnnotationList> cache;
    
    /// <summary>
    /// Returns annotation by its index.
    /// </summary>
    /// <param name="index">Index of annotation. Annotation indexes start from 1.</param>
    /// <returns>Retreived annotation</returns>
    System::SharedPtr<Annotation> get(int32_t index);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


