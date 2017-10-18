#ifndef _Aspose_Pdf_Facades_PdfFileInfo_h_
#define _Aspose_Pdf_Facades_PdfFileInfo_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/date_time.h>
#include <system/collections/dictionary.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { enum class PasswordType; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class DocumentPrivilege; } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class for accessing meta information of PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfFileInfo FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfFileInfo ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_Author();
    void set_Author(System::String value);
    bool get_IsEncrypted();
    bool get_IsPdfFile();
    System::String get_CreationDate();
    void set_CreationDate(System::String value);
    System::String get_Creator();
    void set_Creator(System::String value);
    bool get_HasCollection();
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> get_Header();
    void set_Header(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> value);
    System::String get_InputFile();
    void set_InputFile(System::String value);
    System::SharedPtr<System::IO::Stream> get_InputStream();
    void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    System::String get_Keywords();
    void set_Keywords(System::String value);
    System::String get_ModDate();
    void set_ModDate(System::String value);
    int32_t get_NumberOfPages();
    System::String get_Producer();
    System::String get_Subject();
    void set_Subject(System::String value);
    System::String get_Title();
    void set_Title(System::String value);
    Aspose::Pdf::PasswordType get_PasswordType();
    bool get_HasOpenPassword();
    bool get_HasEditPassword();
    
    virtual void BindPdf(System::SharedPtr<Aspose::Pdf::Document> srcDoc);
    
    PdfFileInfo();
    PdfFileInfo(System::SharedPtr<System::IO::Stream> inputStream);
    PdfFileInfo(System::SharedPtr<System::IO::Stream> inputStream, System::String password);
    PdfFileInfo(System::String inputFile);
    PdfFileInfo(System::String inputFile, System::String password);
    
    void ClearInfo();
    System::SharedPtr<DocumentPrivilege> GetDocumentPrivilege();
    System::String GetMetaInfo(System::String name);
    float GetPageHeight(int32_t pageNum);
    int32_t GetPageRotation(int32_t pageNum);
    float GetPageWidth(int32_t pageNum);
    float GetPageXOffset(int32_t pageNum);
    float GetPageYOffset(int32_t pageNum);
    System::String GetPdfVersion();
    bool SaveNewInfo(System::SharedPtr<System::IO::Stream> outputStream);
    bool SaveNewInfo(System::String outputFile);
    virtual void Save(System::SharedPtr<System::IO::Stream> destStream);
    virtual void Save(System::String destFile);
    void SetMetaInfo(System::String name, System::String value);
    bool SaveNewInfoWithXmp(System::String outputFileName);
    
    PdfFileInfo(System::SharedPtr<Aspose::Pdf::Document> document);
    
    virtual void Close();
    
protected:

    virtual void BindPdf(System::SharedPtr<System::IO::Stream> srcStream, System::String password);
    virtual void BindPdf(System::String srcFile, System::String password);
    virtual void AssertDocument();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfFileInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _inputFile;
    System::SharedPtr<System::IO::Stream> _inputStream;
    bool _isPdfFile;
    System::String _errorReason;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> _header;
    bool _isEncrypted;
    static const System::String DefaultXmpNamespacePrefix;
    static const System::String DefaultXmpNamespaceUri;
    
    void Initialize();
    void RenewInfo();
    static System::String TranslateDate(System::DateTime date);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfFileInfo_h_

