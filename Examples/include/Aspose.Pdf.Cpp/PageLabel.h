#ifndef _Aspose_Pdf_PageLabel_h_
#define _Aspose_Pdf_PageLabel_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageLabelCollection; } }
namespace Aspose { namespace Pdf { enum class NumberingStyle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing Page Label range.
/// </summary>
class ASPOSE_PDF_SHARED_API PageLabel : public System::Object
{
    typedef PageLabel ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageLabelCollection;
    
public:

    int32_t get_StartingValue();
    void set_StartingValue(int32_t value);
    Aspose::Pdf::NumberingStyle get_NumberingStyle();
    void set_NumberingStyle(Aspose::Pdf::NumberingStyle value);
    System::String get_Prefix();
    void set_Prefix(System::String value);
    
    PageLabel();
    
protected:

    System::SharedPtr<Engine::Data::IPdfDictionary> CreateDictionary(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    
    PageLabel(System::SharedPtr<Engine::Data::IPdfDictionary> engineDict);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PageLabel"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t _startingValue;
    Aspose::Pdf::NumberingStyle _numberingStyle;
    System::String _prefix;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    
    System::String translateStyle(Aspose::Pdf::NumberingStyle numberingStyle);
    Aspose::Pdf::NumberingStyle translateStyle(System::String numberingStyle);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PageLabel_h_

