#ifndef _Aspose_Pdf_Generator_Paragraphs_h_
#define _Aspose_Pdf_Generator_Paragraphs_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include "Generator/BaseParagraph.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class NewParagraphPlacementInfo; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents paragraph collection.
/// </summary>
//<<--REFACTORING: Old code: public class Paragraphs : IEnumerable
class ASPOSE_PDF_SHARED_API Paragraphs : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::BaseParagraph>>
{
    typedef Paragraphs ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::BaseParagraph>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    int32_t get_Count();
    
    void Add(System::SharedPtr<BaseParagraph> paragraph);
    void Add(System::SharedPtr<BaseParagraph> paragraph, System::SharedPtr<NewParagraphPlacementInfo> placementInfo);
    System::SharedPtr<Paragraphs> GetRange(int32_t index, int32_t count);
    void RemoveRange(int32_t index, int32_t count);
    void Remove(System::SharedPtr<BaseParagraph> paragraph);
    void Insert(int32_t index, System::SharedPtr<BaseParagraph> paragraph);
    void Clear();
    
    System::SharedPtr<BaseParagraph> idx_get(int32_t index);
    void idx_set(int32_t index, System::SharedPtr<BaseParagraph> value);
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<BaseParagraph>>> GetEnumerator();
    
    Paragraphs();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Paragraphs"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<BaseParagraph>>> paragraphs;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Paragraphs_h_

