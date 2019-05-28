#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icomparable.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileInfo; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSecurity; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class PdfFileSecurityTests; } } } }

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
/// 
/// //Way2: Based on a predefined privilege and change some specifical permissions.
/// DocumentPrivilege privilege = DocumentPrivilege.AllowAll;
/// privilege.AllowPrint = false;
/// privilege.AllowModifyContents = false;
/// 
/// //Way3: Based on a predefined privilege and change some specifical Adobe Professional permissions combination.
/// DocumentPrivilege privilege = DocumentPrivilege.ForbidAll;
/// privilege.ChangeAllowLevel = 1;
/// privilege.PrintAllowLevel = 2;
/// 
/// //Way4: Mixes the way2 and way3
/// DocumentPrivilege privilege = DocumentPrivilege.ForbidAll;
/// privilege.ChangeAllowLevel = 1;
/// privilege.AllowPrint = true;
/// 
/// [Visual Basic]
/// 'Way1: Using predefined privilege directly.
/// Dim privilege As DocumentPrivilege =  DocumentPrivilege.Print 
/// 
/// 'Way2: Based on a predefined privilege and change some specifical permissions.
/// Dim privilege As DocumentPrivilege =  DocumentPrivilege.AllowAll 
/// privilege.AllowPrint = False
/// privilege.AllowModifyContents = False
/// 
/// 'Way3: Based on a predefined privilege and change some specifical Adobe Professional permissions combination.
/// Dim privilege As DocumentPrivilege =  DocumentPrivilege.ForbidAll 
/// privilege.ChangeAllowLevel = 1
/// privilege.PrintAllowLevel = 2
/// 
/// 'Way4: Mixes the way2 and way3
/// Dim privilege As DocumentPrivilege =  DocumentPrivilege.ForbidAll 
/// privilege.ChangeAllowLevel = 1
/// privilege.AllowPrint = True
/// </code>
/// </example>
class ASPOSE_PDF_SHARED_API DocumentPrivilege FINAL : public System::IComparable<System::SharedPtr<System::Object>>
{
    typedef DocumentPrivilege ThisType;
    typedef System::IComparable<System::SharedPtr<System::Object>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfFileInfo;
    friend class Aspose::Pdf::Facades::PdfFileSecurity;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::Facades::PdfFileSecurityTests;
    
public:

    /// <summary>
    /// Sets the permission which allow print or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    bool get_AllowPrint();
    /// <summary>
    /// Sets the permission which allow print or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    void set_AllowPrint(bool value);
    /// <summary>
    /// Sets the permission which allow degraded printing or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    bool get_AllowDegradedPrinting();
    /// <summary>
    /// Sets the permission which allow degraded printing or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    void set_AllowDegradedPrinting(bool value);
    /// <summary>
    /// Sets the permission which allow modify contents or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    bool get_AllowModifyContents();
    /// <summary>
    /// Sets the permission which allow modify contents or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    void set_AllowModifyContents(bool value);
    /// <summary>
    /// Sets the permission which allow copy or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    bool get_AllowCopy();
    /// <summary>
    /// Sets the permission which allow copy or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    void set_AllowCopy(bool value);
    /// <summary>
    /// Sets the permission which allow modify annotations or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    bool get_AllowModifyAnnotations();
    /// <summary>
    /// Sets the permission which allow modify annotations or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    void set_AllowModifyAnnotations(bool value);
    /// <summary>
    /// Sets the permission which allow fill in forms or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    bool get_AllowFillIn();
    /// <summary>
    /// Sets the permission which allow fill in forms or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    void set_AllowFillIn(bool value);
    /// <summary>
    /// Sets the permission which allow screen readers or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    bool get_AllowScreenReaders();
    /// <summary>
    /// Sets the permission which allow screen readers or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    void set_AllowScreenReaders(bool value);
    /// <summary>
    /// Sets the permission which allow assembly or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    bool get_AllowAssembly();
    /// <summary>
    /// Sets the permission which allow assembly or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    void set_AllowAssembly(bool value);
    /// <summary>
    /// Sets the print level of  document's privilege. Just as the Adobe Professional's Printing Allowed settings.
    /// 0: None.
    /// 1: Low Resolution (150 dpi).
    /// 2: High Resolution.
    /// </summary>
    void set_PrintAllowLevel(int32_t value);
    /// <summary>
    /// Sets the change level of  document's privilege. Just as the Adobe Professional's Changes Allowed settings.
    /// 0: None.
    /// 1: Inserting, Deleting and Rotating pages.
    /// 2: Filling in form fields and signing existing signature fields.
    /// 3: Commenting, filling in form fields, and signing existing signature fields.
    /// 4: Any except extracting pages.
    /// </summary>
    void set_ChangeAllowLevel(int32_t value);
    /// <summary>
    /// Sets the copy level of  document's privilege. Just as the Adobe Professional's permission settings.
    /// 0: None.
    /// 1: Enable text access for screen reader devices for the visually impaired.
    /// 2: Enable copying of text, images and other content.
    /// </summary>
    void set_CopyAllowLevel(int32_t value);
    /// <summary>
    /// Allows degraded printing.
    /// </summary>
    static System::SharedPtr<DocumentPrivilege> get_DegradedPrinting();
    /// <summary>
    /// Allows printing file.
    /// </summary>
    static System::SharedPtr<DocumentPrivilege> get_Print();
    /// <summary>
    /// Allows modifying file.
    /// </summary>
    static System::SharedPtr<DocumentPrivilege> get_ModifyContents();
    /// <summary>
    /// Allows copying file.
    /// </summary>
    static System::SharedPtr<DocumentPrivilege> get_Copy();
    /// <summary>
    /// Allows modifying annotations of file.
    /// </summary>
    static System::SharedPtr<DocumentPrivilege> get_ModifyAnnotations();
    /// <summary>
    /// Allows filling forms in file. 
    /// </summary>
    static System::SharedPtr<DocumentPrivilege> get_FillIn();
    /// <summary>
    /// Allows to reader on screen only.
    /// </summary>
    static System::SharedPtr<DocumentPrivilege> get_ScreenReaders();
    /// <summary>
    /// Allows assemblying file.
    /// </summary>
    static System::SharedPtr<DocumentPrivilege> get_Assembly();
    /// <summary>
    /// All allowed.
    /// </summary>
    static System::SharedPtr<DocumentPrivilege> get_AllowAll();
    /// <summary>
    /// All Forbidded.
    /// </summary>
    static System::SharedPtr<DocumentPrivilege> get_ForbidAll();
    
    /// <summary>
    /// Compares two <see cref="DocumentPrivilege"/> objects.
    /// <param name="obj">
    /// The object to compare with.
    /// </param>
    /// <returns>A signed integer that indicates the relative values of this instance and value. Less than zero this instance is less than value. 
    /// Zero this instance is equal to value. Greater than zero this instance is greater than value.</returns>
    /// </summary>
    int32_t CompareTo(System::SharedPtr<System::Object> obj);
    
protected:

    int32_t get_Value();
    
    DocumentPrivilege(int32_t value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<int32_t> permissionBit;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


