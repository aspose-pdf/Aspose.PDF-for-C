#ifndef _Aspose_Pdf_Facades_ReplaceTextStrategy_h_
#define _Aspose_Pdf_Facades_ReplaceTextStrategy_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/eventhandler.h>
#include <system/eventargs.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Action to perform if font does not contain required character 
/// </summary>
class ASPOSE_PDF_SHARED_API ReplaceTextStrategy FINAL : public System::Object
{
    typedef ReplaceTextStrategy ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    
public:

    enum class Scope
    {
        REPLACE_FIRST,
        REPLACE_ALL
    };
    
    enum class NoCharacterAction
    {
        ThrowException,
        UseStandardFont,
        ReplaceAnyway
    };
    
    
public:

    bool get_IsRegularExpressionUsed();
    void set_IsRegularExpressionUsed(bool value);
    ReplaceTextStrategy::NoCharacterAction get_NoCharacterBehavior();
    void set_NoCharacterBehavior(ReplaceTextStrategy::NoCharacterAction value);
    ReplaceTextStrategy::Scope get_ReplaceScope();
    void set_ReplaceScope(ReplaceTextStrategy::Scope value);
    
    ReplaceTextStrategy();
    
protected:

    System::EventHandler<System::SharedPtr<System::EventArgs>> OnPropertiesChanged;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ReplaceTextStrategy"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool _isRegularExpression;
    ReplaceTextStrategy::NoCharacterAction _noCharacterAction;
    ReplaceTextStrategy::Scope _scope;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_ReplaceTextStrategy_h_

