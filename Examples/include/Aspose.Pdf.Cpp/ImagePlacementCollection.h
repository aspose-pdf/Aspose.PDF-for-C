#ifndef _Aspose_Pdf_ImagePlacementCollection_h_
#define _Aspose_Pdf_ImagePlacementCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ImagePlacementsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ImagePlacement>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    System::SharedPtr<System::Object> get_SyncRoot();
    bool get_IsSynchronized();
    
    void Add(System::SharedPtr<ImagePlacement> const &fragment);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ImagePlacement>>> GetEnumerator();
    void CopyTo(System::ArrayPtr<System::SharedPtr<ImagePlacement>> array, int32_t index);
    
    System::SharedPtr<ImagePlacement> idx_get(int32_t index);
    
protected:

    ImagePlacementCollection();
    
    void Delete(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ImagePlacementCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ImagePlacement>>> placements;
    System::SharedPtr<System::Object> syncRoot;
    
    bool get_IsReadOnly();
    
    bool Remove(System::SharedPtr<ImagePlacement> const &item);
    bool Contains(System::SharedPtr<ImagePlacement> const &item) const;
    void Clear();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ImagePlacementCollection_h_

