#ifndef _Aspose_Pdf_BaseOperatorCollection_h_
#define _Aspose_Pdf_BaseOperatorCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Operator.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents base class for operator collection.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT BaseOperatorCollection : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Operator>>
{
    typedef BaseOperatorCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Operator>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    
public:

    virtual int32_t get_Count() const = 0;
    virtual bool get_IsReadOnly() = 0;
    
    virtual System::SharedPtr<Operator> idx_get(int32_t index) = 0;
    virtual void idx_set(int32_t index, System::SharedPtr<Operator> value) = 0;
    
    virtual void Add(System::SharedPtr<Operator> const &item) = 0;
    virtual void Insert(int32_t index, System::SharedPtr<Operator> op) = 0;
    virtual void Clear() = 0;
    virtual bool Contains(System::SharedPtr<Operator> const &item) const = 0;
    virtual void CopyTo(System::ArrayPtr<System::SharedPtr<Operator>> array, int32_t arrayIndex) = 0;
    virtual bool Remove(System::SharedPtr<Operator> const &item) = 0;
    virtual System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Operator>>> GetEnumerator() = 0;
    virtual void CancelUpdate() = 0;
    virtual void SuppressUpdate() = 0;
    virtual void ResumeUpdate() = 0;
    
protected:

    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> ToList() = 0;
    virtual System::SharedPtr<Operator> GetUnrestricted(int32_t index) = 0;
    virtual void UpdateData() = 0;
    virtual void DeleteUnrestricted(int32_t index) = 0;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BaseOperatorCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_BaseOperatorCollection_h_

