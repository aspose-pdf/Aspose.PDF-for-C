#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Sets the input file.
    /// </summary>
    void set_InputFile(System::String value);
    /// <summary>
    /// Sets the input stream.
    /// </summary>
    void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Sets the output file.
    /// </summary>
    void set_OutputFile(System::String value);
    /// <summary>
    /// Sets the output stream.
    /// </summary>
    void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    
    /// <summary>
    /// Initialize the object of PdfFileSecurity with input and output stream.
    /// </summary>
    /// <param name="inputStream"> Input Pdf Stream.</param>
    /// <param name="outputStream">Output Pdf Stream.</param>
    PdfFileSecurity(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    ///  Initializes the object of PdfFileSecurity with input and output file.
    /// </summary>
    /// <param name="inputFile">Source input Pdf file.</param>
    /// <param name="outputFile">Output Pdf file.</param>
    PdfFileSecurity(System::String inputFile, System::String outputFile);
    /// <summary>
    /// Initialize the object of PdfFileSecurity.
    /// </summary>
    PdfFileSecurity();
    
    /// <summary>
    /// Encrypts Pdf file with userpassword and ownerpassword and sets the document's privileges to access.
    /// The user password and the owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the input owner password is null or empty.
    /// </summary>
    /// <param name="userPassword">User password.</param>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="privilege">Set privilege.</param>
    /// <param name="keySize">KeySize.x40 for 40 bits encryption, KeySize.x128 for 128 bits encryption and KeySize.x256 for 256 bits encryption.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// <code>
    /// [C#]
    /// string inFile = "..\\AsposePdfKitExample\\example1.pdf"; //The TestPath may be re-assigned.
    /// string outFile = "..\\AsposePdfKitExample\\Kit0401.pdf"; //The TestPath may be re-assigned.	
    /// PdfFileSecurity fileSecurity = new PdfFileSecurity(inFile,outFile);		
    /// fileSecurity.EncryptFile("userpass", "ownerpass", DocumentPrivilege.Print, KeySize.x256);	
    /// 
    /// [Visual Basic]
    /// Dim inFile As String =  "..\\AsposePdfKitExample\\example1.pdf"  'The TestPath may be re-assigned.'
    /// Dim outFile As String =  "..\\AsposePdfKitExample\\Kit0401.pdf"   'The TestPath may be re-assigned.'
    /// Dim fileSecurity As PdfFileSecurity = New PdfFileSecurity(inFile,outFile) 
    /// fileSecurity.EncryptFile("userpass", "ownerpass", DocumentPrivilege.Print, KeySize.x256)
    /// </code>
    /// </example>
    bool MfEncryptFile(System::String userPassword, System::String ownerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize);
    /// <summary>
    /// Encrypts Pdf file with userpassword and ownerpassword and sets the document's privileges to access.
    /// The user password and the owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the input owner password is null or empty.
    /// There are 6 possible combinations of KeySize and Algorithm values. 
    /// However (KeySize.x40, Algorithm.AES) and (KeySize.x256, Algorithm.RC4) are invalid and corresponding 
    /// exception will be raised if kit encounters this combination.
    /// </summary>
    /// <param name="userPassword">User password.</param>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="privilege">Set privilege.</param>
    /// <param name="keySize">KeySize.x40 for 40 bits encryption, KeySize.x128 for 128 bits encryption and KeySize.x256 for 256 bits encryption.</param>
    /// <param name="cipher">Algorithm.AES to encrypt using AES algorithm or Algorithm.RC4 for RC4 encryption.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// <code>
    /// [C#]
    /// string inFile = "..\\AsposePdfKitExample\\example1.pdf"; //The TestPath may be re-assigned.
    /// string outFile = "..\\AsposePdfKitExample\\Kit0401.pdf"; //The TestPath may be re-assigned.	
    /// PdfFileSecurity fileSecurity = new PdfFileSecurity(inFile,outFile);		
    /// fileSecurity.EncryptFile("userpass","ownerpass",DocumentPrivilege.Print,KeySize.x256,Algorithm.AES);	
    /// 
    /// [Visual Basic]
    /// Dim inFile As String =  "..\\AsposePdfKitExample\\example1.pdf"  'The TestPath may be re-assigned.'
    /// Dim outFile As String =  "..\\AsposePdfKitExample\\Kit0401.pdf"   'The TestPath may be re-assigned.'
    /// Dim fileSecurity As PdfFileSecurity =  New PdfFileSecurity(inFile,outFile) 
    /// fileSecurity.EncryptFile("userpass","ownerpass",DocumentPrivilege.Print,KeySize.x256,Algorithm.AES)
    /// </code>
    /// </example>
    bool MfEncryptFile(System::String userPassword, System::String ownerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize, Algorithm cipher);
    /// <summary>
    /// Decrypts an encrypted Pdf document by owner password. 
    /// If the document hasn't owner password, it is allow to use user password.
    /// </summary>
    /// <param name="ownerPassword">Owner password.</param>
    /// <returns>True for success,or false.</returns>
    /// <example>
    /// <code>
    /// [C#]
    /// string inFile = "..\\AsposePdfKitExample\\Kit0401.pdf"; //The TestPath may be re-assigned.
    /// string outFile = "..\\AsposePdfKitExample\\Kit0404.pdf"; //The TestPath may be re-assigned.	
    /// PdfFileSecurity fileSecurity = new PdfFileSecurity(inFile,outFile);		
    /// fileSecurity.DecryptFile("ownerpass");
    /// 
    /// [Visual Basic]
    /// Dim inFile As String =  "..\\AsposePdfKitExample\\Kit0401.pdf"  'The TestPath may be re-assigned.'
    /// Dim outFile As String =  "..\\AsposePdfKitExample\\Kit0404.pdf"  'The TestPath may be re-assigned.'
    /// Dim fileSecurity As PdfFileSecurity =  New PdfFileSecurity(inFile,outFile) 
    /// fileSecurity.DecryptFile("ownerpass")
    /// </code>
    /// </example>
    bool MfDecryptFile(System::String ownerPassword);
    /// <summary>
    /// Sets Pdf file security with empty user/owner passwords.
    /// The owner password will be added by a random string.
    /// </summary>
    /// <param name="privilege">Set privilege.</param>
    /// <returns>True for success, or false.</returns>
    /// <example><code>
    /// [C#]
    /// string inFile = "..\\AsposePdfKitExample\\example1.pdf"; //The TestPath may be re-assigned.
    /// string outFile = "..\\AsposePdfKitExample\\Kit0405.pdf"; //The TestPath may be re-assigned.
    /// PdfFileSecurity fileSecurity = new PdfFileSecurity(inFile,outFile);		
    /// fileSecurity.SetPrivilege(DocumentPrivilege.Print);
    /// 
    /// [Visual Basic]
    /// Dim inFile As String =  "..\\AsposePdfKitExample\\example1.pdf"  'The TestPath may be re-assigned.'
    /// Dim outFile As String =  "..1\\AsposePdfKitExample\\Kit0405.pdf"  'The TestPath may be re-assigned.'
    /// Dim fileSecurity As PdfFileSecurity =  New PdfFileSecurity(inFile,outFile) 
    /// fileSecurity.SetPrivilege(DocumentPrivilege.Print)
    /// </code></example>
    bool SetPrivilege(System::SharedPtr<DocumentPrivilege> privilege);
    /// <summary>
    /// Sets Pdf file security with original password.
    /// </summary>
    /// <param name="userPassword">Original user password.</param>
    /// <param name="ownerPassword">Original owner password.</param>
    /// <param name="privilege">Set privilege.</param>
    /// <returns>True for success, or false.</returns>
    /// <example><code>
    /// [C#]
    /// string inFile = "..\\AsposePdfKitExample\\example1.pdf"; //The TestPath may be re-assigned.
    /// string outFile = "..\\AsposePdfKitExample\\Kit0405.pdf"; //The TestPath may be re-assigned.
    /// PdfFileSecurity fileSecurity = new PdfFileSecurity(inFile,outFile);		
    /// fileSecurity.SetPrivilege(userPassword, ownerPassword, DocumentPrivilege.Print);
    /// 
    /// [Visual Basic]
    /// Dim inFile As String =  "..\\AsposePdfKitExample\\example1.pdf"  'The TestPath may be re-assigned.'
    /// Dim outFile As String =  "..1\\AsposePdfKitExample\\Kit0405.pdf"  'The TestPath may be re-assigned.'
    /// Dim fileSecurity As PdfFileSecurity =  New PdfFileSecurity(inFile,outFile) 
    /// fileSecurity.SetPrivilege(userPassword, ownerPassword, DocumentPrivilege.Print)
    /// </code></example>
    bool SetPrivilege(System::String userPassword, System::String ownerPassword, System::SharedPtr<DocumentPrivilege> privilege);
    /// <summary>
    /// Changes the user password and owner password by owner password, keeps the original security settings.
    /// The new user password and the new owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the new owner password is null or empty.
    /// </summary>
    /// <param name="ownerPassword">Original Owner password.</param>
    /// <param name="newUserPassword">New User password.</param>
    /// <param name="newOwnerPassword">New Owner password.</param>
    /// <returns>True for success,or false.</returns>
    /// <example>
    /// <code>
    /// [C#]
    /// string inFile = "..\\AsposePdfKitExample\\Kit0406.pdf"; //The TestPath may be re-assigned.
    /// string outFile = "..\\AsposePdfKitExample\\Kit0407.pdf";	//The TestPath may be re-assigned.
    /// PdfFileSecurity fileSecurity = new PdfFileSecurity(inFile,outFile);		
    /// fileSecurity.ChangePassword("owner","newuser","newowner");
    /// 
    /// [Visual Basic]
    /// Dim inFile As String =  "..\\AsposePdfKitExample\\Kit0401.pdf"  'The TestPath may be re-assigned.'
    /// Dim outFile As String =  "..\\AsposePdfKitExample\\Kit0406.pdf"  'The TestPath may be re-assigned.'
    /// Dim fileSecurity As PdfFileSecurity =  New PdfFileSecurity(inFile,outFile) 
    /// fileSecurity.ChangePassword("owner","newuser","newowner")	
    /// </code>
    /// </example>
    bool ChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword);
    /// <summary>
    /// Changes the user password and password by owner password, allows to reset Pdf documnent security.
    /// The new user password and the new owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the new owner password is null or empty.
    /// </summary>
    /// <param name="ownerPassword">Original owner password.</param>
    /// <param name="newUserPassword">New User password.</param>
    /// <param name="newOwnerPassword">New Owner password.</param>
    /// <param name="privilege">Reset security.</param>
    /// <param name="keySize">KeySize.x40 for 40 bits encryption, KeySize.x128 for 128 bits encryption and KeySize.x256 for 256 bits encryption.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// <code>
    /// [C#]
    /// string inFile = "..\\AsposePdfKitExample\\Kit0401.pdf"; //The TestPath may be re-assigned.
    /// string outFile = "..\\AsposePdfKitExample\\Kit0407.pdf";	//The TestPath may be re-assigned.
    /// PdfFileSecurity fileSecurity = new PdfFileSecurity(inFile,outFile);	
    /// fileSecurity.ChangePassword("owner","newuser","newowner", DocumentPrivilege.Print,KeySize.x256);
    /// 
    /// [Visual Basic] 
    /// Dim inFile As String =  "..\\AsposePdfKitExample\\Kit0401.pdf"  'The TestPath may be re-assigned.'
    /// Dim outFile As String =  "..\\AsposePdfKitExample\\Kit0407.pdf"  'The TestPath may be re-assigned.'
    /// Dim fileSecurity As PdfFileSecurity =  New PdfFileSecurity(inFile,outFile) 
    /// fileSecurity.ChangePassword("owner","newuser","newowner", DocumentPrivilege.Print,KeySize.x256)
    /// </code>
    /// </example>
    bool ChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize);
    /// <summary>
    /// Changes the user password and password by owner password, allows to reset Pdf documnent security.
    /// The new user password and the new owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the new owner password is null or empty.
    /// There are 6 possible combinations of KeySize and Algorithm values. 
    /// However (KeySize.x40, Algorithm.AES) and (KeySize.x256, Algorithm.RC4) are invalid and corresponding 
    /// exception will be raised if kit encounters this combination.
    /// </summary>
    /// <param name="ownerPassword">Original owner password.</param>
    /// <param name="newUserPassword">New User password.</param>
    /// <param name="newOwnerPassword">New Owner password.</param>
    /// <param name="privilege">Reset security.</param>
    /// <param name="keySize">KeySize.x40 for 40 bits encryption, KeySize.x128 for 128 bits encryption and KeySize.x256 for 256 bits encryption.</param>
    /// <param name="cipher">Algorithm.AES to encrypt using AES algorithm or Algorithm.RC4 for RC4 encryption.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// <code>
    /// [C#]
    /// string inFile = "..\\AsposePdfKitExample\\Kit0401.pdf"; //The TestPath may be re-assigned.
    /// string outFile = "..\\AsposePdfKitExample\\Kit0407.pdf";	//The TestPath may be re-assigned.
    /// PdfFileSecurity fileSecurity = new PdfFileSecurity(inFile,outFile);	
    /// fileSecurity.ChangePassword("owner","newuser","newowner", DocumentPrivilege.Print,KeySize.x256,Algorithm.AES);
    /// 
    /// [Visual Basic] 
    /// Dim inFile As String =  "..\\AsposePdfKitExample\\Kit0401.pdf"  'The TestPath may be re-assigned.'
    /// Dim outFile As String =  "..\\AsposePdfKitExample\\Kit0407.pdf"  'The TestPath may be re-assigned.'
    /// Dim fileSecurity As PdfFileSecurity =  New PdfFileSecurity(inFile,outFile) 
    /// fileSecurity.ChangePassword("owner","newuser","newowner", DocumentPrivilege.Print,KeySize.x256,Algorithm.AES)
    /// </code>
    /// </example>
    bool ChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize, Algorithm cipher);
    
    /// <summary>
    /// Initializes new <see cref="PdfFileSecurity"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    PdfFileSecurity(System::SharedPtr<Aspose::Pdf::Document> document);
    /// <summary>
    /// Initializes new <see cref="PdfFileSecurity"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputFile">
    /// Output Pdf file.
    /// </param>
    PdfFileSecurity(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFile);
    /// <summary>
    /// Initializes new <see cref="PdfFileSecurity"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputStream">
    /// Output Pdf Stream.
    /// </param>
    PdfFileSecurity(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> outputStream);
    
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcFile">The PDF file.</param>
    virtual void BindPdf(System::String srcFile);
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcStream">The stream of PDF file.</param>
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> srcStream);
    /// <summary>
    /// Closes the facade.
    /// </summary>
    virtual void Close();
    void Dispose();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
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


