#ifndef _Aspose_Pdf_Facades_PdfFileInfo_h_
#define _Aspose_Pdf_Facades_PdfFileInfo_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets or sets the Author information of PDF document.
    /// </summary>
    System::String get_Author();
    /// <summary>
    /// Gets or sets the Author information of PDF document.
    /// </summary>
    void set_Author(System::String value);
    /// <summary>
    /// Checkes whether the PDF document is encrypted.
    /// </summary>
    bool get_IsEncrypted();
    /// <summary>
    /// Checkes whether the source input is a valid PDF file.
    /// </summary>
    bool get_IsPdfFile();
    /// <summary>
    /// Gets or sets the CreationDate information of PDF document.
    /// </summary>
    System::String get_CreationDate();
    /// <summary>
    /// Gets or sets the CreationDate information of PDF document.
    /// </summary>
    void set_CreationDate(System::String value);
    /// <summary>
    /// Gets or sets the Creator information of PDF document.
    /// </summary>
    System::String get_Creator();
    /// <summary>
    /// Gets or sets the Creator information of PDF document.
    /// </summary>
    void set_Creator(System::String value);
    /// <summary>
    /// Returns true if the current input file is a 'Portfolio' file containing collection of PDF files in it.
    /// </summary>
    bool get_HasCollection();
    /// <summary>
    /// Gets or sets the customized information of PDF document.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> get_Header();
    /// <summary>
    /// Gets or sets the customized information of PDF document.
    /// </summary>
    void set_Header(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> value);
    /// <summary>
    /// Gets or sets the input file.
    /// </summary>
    System::String get_InputFile();
    /// <summary>
    /// Gets or sets the input file.
    /// </summary>
    void set_InputFile(System::String value);
    /// <summary>
    /// Gets or sets the input stream.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_InputStream();
    /// <summary>
    /// Gets or sets the input stream.
    /// </summary>
    void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets or sets the Keywords information of PDF document.
    /// </summary>
    System::String get_Keywords();
    /// <summary>
    /// Gets or sets the Keywords information of PDF document.
    /// </summary>
    void set_Keywords(System::String value);
    /// <summary>
    /// Gets or sets the ModDate date information of PDF document.
    /// </summary>
    System::String get_ModDate();
    /// <summary>
    /// Gets or sets the ModDate date information of PDF document.
    /// </summary>
    void set_ModDate(System::String value);
    /// <summary>
    /// Gets the number of document pages.
    /// </summary>
    int32_t get_NumberOfPages();
    /// <summary>
    /// Gets the Producer information of PDF document.
    /// </summary>
    System::String get_Producer();
    /// <summary>
    /// Gets or sets the Subject information of PDF document.
    /// </summary>
    System::String get_Subject();
    /// <summary>
    /// Gets or sets the Subject information of PDF document.
    /// </summary>
    void set_Subject(System::String value);
    /// <summary>
    /// Gets or sets the Title information of PDF document.
    /// </summary>
    System::String get_Title();
    /// <summary>
    /// Gets or sets the Title information of PDF document.
    /// </summary>
    void set_Title(System::String value);
    /// <summary>
    /// Returns the type of password which was passed for creating PdfFileInfo instance. See possible values in <see cref="PasswordType"/>.
    /// Pay attention that pdf document can be opened using both user (or open) password and owner (or permissions, edit) password.
    /// </summary>
    Aspose::Pdf::PasswordType get_PasswordType();
    /// <summary>
    /// Returns true if password is needed to open password protected pdf document.
    /// </summary>
    bool get_HasOpenPassword();
    /// <summary>
    /// Returns true if password is needed to modify permissions or document security property.
    /// Pay attention that this property can be read only if valid password was provided in <see cref="PdfFileInfo"/> constructor.
    /// In case PasswordType is Inaccessible (means that invalid password was provided) reading this property will fail with <see cref="InvalidPasswordException"/>.
    /// </summary>
    bool get_HasEditPassword();
    
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcDoc">The Aspose.Pdf.Document object.</param>
    virtual void BindPdf(System::SharedPtr<Aspose::Pdf::Document> srcDoc);
    
    /// <summary>
    /// Initializes a new instance of the Aspose.Pdf.Facades.PdfFileInfo class with default values.
    /// </summary>
    PdfFileInfo();
    /// <summary>
    /// Initializes a new instance of the Aspose.Pdf.Facades.PdfFileInfo class.
    /// </summary>
    /// <param name="inputStream">Stream where input file is placed.</param>
    PdfFileInfo(System::SharedPtr<System::IO::Stream> inputStream);
    /// <summary>
    /// Initializes a new instance of the Aspose.Pdf.Facades.PdfFileInfo class.
    /// </summary>
    /// <param name="inputStream">Stream where input file is placed.</param>
    /// <param name="password">Password for access to file.</param>
    PdfFileInfo(System::SharedPtr<System::IO::Stream> inputStream, System::String password);
    /// <summary>
    /// Initializes a new instance of the Aspose.Pdf.Facades.PdfFileInfo class.
    /// </summary>
    /// <param name="inputFile">Name of file containing input file.</param>
    PdfFileInfo(System::String inputFile);
    /// <summary>
    /// Initializes a new instance of the Aspose.Pdf.Facades.PdfFileInfo class.
    /// </summary>
    /// <param name="inputFile">Name of file containing input file.</param>
    /// <param name="password">Password for access to file.</param>
    PdfFileInfo(System::String inputFile, System::String password);
    
    /// <summary>
    /// Clears all meta information of PDF document.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    void ClearInfo();
    /// <summary>
    /// Gets the PDF document privilege settings.
    /// </summary>
    /// <returns>The PDF document privilege settings.</returns>
    System::SharedPtr<DocumentPrivilege> GetDocumentPrivilege();
    /// <summary>
    /// Gets customized information of PDF document with property name. If there is no property match the name it will return a blank string.
    /// </summary>
    /// <param name="name">Custom meta property key.</param>
    /// <returns>Custom meta property value.</returns>
    System::String GetMetaInfo(System::String name);
    /// <summary>
    /// Gets the height of the specified page.
    /// </summary>
    /// <param name="pageNum">Page number.</param>
    /// <returns>The height of the page.</returns>
    float GetPageHeight(int32_t pageNum);
    /// <summary>
    /// Gets the rotation of the specified page.
    /// </summary>
    /// <param name="pageNum">Page number.</param>
    /// <returns>The rotation of the page. The value may be 0,90,180,270.</returns>
    int32_t GetPageRotation(int32_t pageNum);
    /// <summary>
    /// Gets the width of the specified page.
    /// </summary>
    /// <param name="pageNum">Page number.</param>
    /// <returns>The width of the page.</returns>
    float GetPageWidth(int32_t pageNum);
    /// <summary>
    /// Gets the horizontal offset of the specified page display area.
    /// </summary>
    /// <param name="pageNum">Page number.</param>
    /// <returns>The horizontal offset from the left side of the page.</returns>
    float GetPageXOffset(int32_t pageNum);
    /// <summary>
    /// Gets the vertical offset of the specified page display area.
    /// </summary>
    /// <param name="pageNum">Page number.</param>
    /// <returns>The vertical offset of the page display area.</returns>
    float GetPageYOffset(int32_t pageNum);
    /// <summary>
    /// Gets the version info of PDF document.
    /// </summary>
    /// <returns>The version string.</returns>
    System::String GetPdfVersion();
    /// <summary>
    /// Save updated PDF document into specified stream.
    /// </summary>	
    /// <param name="outputStream">Output stream.</param>
    /// <returns>True if success otherwise is false.</returns>		
    bool SaveNewInfo(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Save updated PDF document into specified file.
    /// </summary>	
    /// <param name="outputFile">Output file.</param>
    /// <returns>True if success otherwise is false.</returns>
    bool SaveNewInfo(System::String outputFile);
    /// <summary>
    /// Saves the PDF document to the specified file.
    /// </summary>
    /// <param name="destStream">The destination stream.</param>
    virtual void Save(System::SharedPtr<System::IO::Stream> destStream);
    /// <summary>
    /// Saves the PDF document to the specified file.
    /// </summary>
    /// <param name="destFile">The destination file.</param>
    virtual void Save(System::String destFile);
    /// <summary>
    /// Sets customized information of PDF document.
    /// </summary>
    /// <param name="name">Custom meta property key.</param>
    /// <param name="value">Custom meta property value.</param>
    void SetMetaInfo(System::String name, System::String value);
    /// <summary>
    /// Changes the properties specified explicitly by setting file information, other properties remain.
    /// </summary>
    /// <param name="outputFileName">Output file.</param>
    /// <returns>True for success, or false.</returns>
    bool SaveNewInfoWithXmp(System::String outputFileName);
    
    /// <summary>
    /// Initializes new <see cref="PdfFileInfo"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">Pdf document.</param>
    PdfFileInfo(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Deinitializes the instance.
    /// </summary>
    virtual void Close();
    
protected:

    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcStream">The stream of PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> srcStream, System::String password);
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcFile">The PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    virtual void BindPdf(System::String srcFile, System::String password);
    /// <summary>
    /// Asserts if the facade is initialized.
    /// </summary>
    virtual void AssertDocument();
    System::Object::shared_members_type GetSharedMembers() override;
    
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

