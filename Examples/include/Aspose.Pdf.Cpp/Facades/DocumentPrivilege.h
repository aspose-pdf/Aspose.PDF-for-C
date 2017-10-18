#ifndef _Aspose_Pdf_Facades_DocumentPrivilege_h_
#define _Aspose_Pdf_Facades_DocumentPrivilege_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icomparable.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileInfo; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSecurity; } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents the privileges for accessing Pdf file. Refer to<see cref="PdfFileSecurity"/>.
/// There are 4 ways using this class:
/// 1.Using predefined privilege directly.
/// 2.Based on a predefined privilege and change some specifical permissions.
/// 3.Based on a predefined privilege and change some specifical Adobe Professional permissions combination.
/// 4.Mixes the way2 and way3.
/// </summary>
/// <example>
/// <code>
/// [C#]	
/// //Way1: Using predefined privilege directly.
/// DocumentPrivilege privilege = DocumentPrivilege.Print;
/// //Way2: Based on a predefined privilege and change some specifical permissions.
/// DocumentPrivilege privilege = DocumentPrivilege.AllowAll;
/// privilege.AllowPrint = false;
/// privilege.AllowModifyContents = false;
/// //Way3: Based on a predefined privilege and change some specifical Adobe Professional permissions combination.
/// DocumentPrivilege privilege = DocumentPrivilege.ForbidAll;
/// privilege.ChangeAllowLevel = 1;
/// privilege.PrintAllowLevel = 2;
/// //Way4: Mixes the way2 and way3
/// DocumentPrivilege privilege = DocumentPrivilege.ForbidAll;
/// privilege.ChangeAllowLevel = 1;
/// privilege.AllowPrint = true;
/// [Visual Basic]
/// 'Way1: Using predefined privilege directly.
/// Dim privilege As DocumentPrivilege =  DocumentPrivilege.Print 
/// 'Way2: Based on a predefined privilege and change some specifical permissions.
/// Dim privilege As DocumentPrivilege =  DocumentPrivilege.AllowAll 
/// privilege.AllowPrint = False
/// privilege.AllowModifyContents = False
/// 'Way3: Based on a predefined privilege and change some specifical Adobe Professional permissions combination.
/// Dim privilege As DocumentPrivilege =  DocumentPrivilege.ForbidAll 
/// privilege.ChangeAllowLevel = 1
/// privilege.PrintAllowLevel = 2
/// 'Way4: Mixes the way2 and way3
/// Dim privilege As DocumentPrivilege =  DocumentPrivilege.ForbidAll 
/// privilege.ChangeAllowLevel = 1
/// privilege.AllowPrint = True
/// </code>
/// </example>
class ASPOSE_PDF_SHARED_API DocumentPrivilege FINAL : public System::IComparable<System::SharedPtr<Aspose::Pdf::Facades::DocumentPrivilege>>
{
    typedef DocumentPrivilege ThisType;
    typedef System::IComparable<System::SharedPtr<Aspose::Pdf::Facades::DocumentPrivilege>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfFileInfo;
    friend class Aspose::Pdf::Facades::PdfFileSecurity;
    
public:

    bool get_AllowPrint();
    void set_AllowPrint(bool value);
    bool get_AllowDegradedPrinting();
    void set_AllowDegradedPrinting(bool value);
    bool get_AllowModifyContents();
    void set_AllowModifyContents(bool value);
    bool get_AllowCopy();
    void set_AllowCopy(bool value);
    bool get_AllowModifyAnnotations();
    void set_AllowModifyAnnotations(bool value);
    bool get_AllowFillIn();
    void set_AllowFillIn(bool value);
    bool get_AllowScreenReaders();
    void set_AllowScreenReaders(bool value);
    bool get_AllowAssembly();
    void set_AllowAssembly(bool value);
    void set_PrintAllowLevel(int32_t value);
    void set_ChangeAllowLevel(int32_t value);
    void set_CopyAllowLevel(int32_t value);
    static System::SharedPtr<DocumentPrivilege> get_DegradedPrinting();
    static System::SharedPtr<DocumentPrivilege> get_Print();
    static System::SharedPtr<DocumentPrivilege> get_ModifyContents();
    static System::SharedPtr<DocumentPrivilege> get_Copy();
    static System::SharedPtr<DocumentPrivilege> get_ModifyAnnotations();
    static System::SharedPtr<DocumentPrivilege> get_FillIn();
    static System::SharedPtr<DocumentPrivilege> get_ScreenReaders();
    static System::SharedPtr<DocumentPrivilege> get_Assembly();
    static System::SharedPtr<DocumentPrivilege> get_AllowAll();
    static System::SharedPtr<DocumentPrivilege> get_ForbidAll();
    
    int32_t CompareTo(System::SharedPtr<DocumentPrivilege> outer);
    
protected:

    int32_t get_Value();
    
    DocumentPrivilege(int32_t value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DocumentPrivilege"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::ArrayPtr<int32_t> permissionBit;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_DocumentPrivilege_h_

