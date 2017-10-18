#ifndef _Aspose_Pdf_PageLabelCollection_h_
#define _Aspose_Pdf_PageLabelCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class NumberTree; } }
namespace Aspose { namespace Pdf { class PageLabel; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represeingting page label collection. 
/// </summary>
class ASPOSE_PDF_SHARED_API PageLabelCollection : public System::Object
{
    typedef PageLabelCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    
public:

    System::SharedPtr<PageLabel> GetLabel(int32_t pageIndex);
    void UpdateLabel(int32_t pageIndex, System::SharedPtr<PageLabel> pageLabel);
    bool RemoveLabel(int32_t pageIndex);
    System::ArrayPtr<int32_t> GetPages();
    
protected:

    PageLabelCollection(System::SharedPtr<Engine::Data::IPdfDictionary> engineDict);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PageLabelCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::SharedPtr<Aspose::Pdf::NumberTree> _numberTree;
    
    System::SharedPtr<Aspose::Pdf::NumberTree> get_NumberTree();
    System::SharedPtr<Engine::Data::IPdfDictionary> get_Root();
    
    void InitializeRoot();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PageLabelCollection_h_

