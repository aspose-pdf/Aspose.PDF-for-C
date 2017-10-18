#ifndef _Aspose_Pdf_Facades_PdfFileSecurity_h_
#define _Aspose_Pdf_Facades_PdfFileSecurity_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/random.h>
#include <system/io/stream.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { enum class CryptoAlgorithm; } }
namespace Aspose { namespace Pdf { namespace Facades { enum class KeySize; } } }
namespace Aspose { namespace Pdf { enum class Permissions; } }
namespace Aspose { namespace Pdf { namespace Facades { class DocumentPrivilege; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class Algorithm; } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents encrypting or decrypting a Pdf file with owner or user password, changing the security setting and password.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfFileSecurity FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfFileSecurity ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    void set_InputFile(System::String value);
    void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    void set_OutputFile(System::String value);
    void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    
    PdfFileSecurity(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    PdfFileSecurity(System::String inputFile, System::String outputFile);
    PdfFileSecurity();
    
    bool MfEncryptFile(System::String userPassword, System::String ownerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize);
    bool MfEncryptFile(System::String userPassword, System::String ownerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize, Algorithm cipher);
    bool MfDecryptFile(System::String ownerPassword);
    bool SetPrivilege(System::SharedPtr<DocumentPrivilege> privilege);
    bool SetPrivilege(System::String userPassword, System::String ownerPassword, System::SharedPtr<DocumentPrivilege> privilege);
    bool ChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword);
    bool ChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize);
    bool ChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize, Algorithm cipher);
    
    PdfFileSecurity(System::SharedPtr<Aspose::Pdf::Document> document);
    PdfFileSecurity(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFile);
    PdfFileSecurity(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> outputStream);
    
    virtual void BindPdf(System::String srcFile);
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> srcStream);
    virtual void Close();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfFileSecurity"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool _isOpenFile;
    bool _isSaveFile;
    bool _changed;
    System::SharedPtr<System::IO::Stream> _inputStream;
    System::SharedPtr<System::IO::Stream> _outputStream;
    System::Random _rng;
    static const System::String _chars;
    
    void AssertInputOutput(System::String password);
    static CryptoAlgorithm GetCryptoAlgorithm(KeySize keySize);
    void CloseStreams();
    bool Encrypt(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, Permissions permissions, CryptoAlgorithm cryptoAlgorithm);
    System::String RandomString(int32_t size);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfFileSecurity_h_

