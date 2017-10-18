#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationCollection_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "AnnotationHandler"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "AnnotationsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AnnotationCollection::AnnotationHandler>>> _annots;
        int32_t _cursor;
        int32_t _version;
        System::SharedPtr<Page> _page;
        bool mIsDisposed;
        
    };
    
    
public:

    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    int32_t get_Count() const;
    
    void Add(System::SharedPtr<Annotation> annotation, bool considerRotation);
    void Add(System::SharedPtr<Annotation> const &annotation);
    void Delete(int32_t index);
    void Delete();
    void CopyTo(System::ArrayPtr<System::SharedPtr<Annotation>> array, int32_t index);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Annotation>>> GetEnumerator();
    void Accept(System::SharedPtr<AnnotationSelector> visitor);
    void Delete(System::SharedPtr<Annotation> annotation);
    
    System::SharedPtr<Annotation> idx_get(int32_t index);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::IPage> page;
    
    void assert_();
    
    AnnotationCollection(System::SharedPtr<Page> page);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "AnnotationCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Page> _page;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AnnotationCollection::AnnotationHandler>>> cache;
    
    bool get_IsReadOnly();
    
    void Clear();
    bool Contains(System::SharedPtr<Annotation> const &item) const;
    System::SharedPtr<Annotation> get(int32_t index);
    int32_t FindAnnotation(System::SharedPtr<Annotation> annotation) const;
    bool Remove(System::SharedPtr<Annotation> const &annotation);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationCollection_h_

