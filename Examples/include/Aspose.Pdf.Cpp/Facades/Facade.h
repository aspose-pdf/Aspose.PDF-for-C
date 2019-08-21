#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "Facades/IFacade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class SaveableFacade; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfConverter; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfExtractor; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfAnnotationEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfBookmarkEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileInfo; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSecurity; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSignature; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileStamp; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfPageEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfXmpMetadata; } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// The <b>Aspose.Pdf.Facades</b> namespace provides classes originaly came from Aspose.Pdf.Kit. These classes are used for manipulating documents
/// perfoming operations like concatenating, stamping, signing, annotating etc. but on the high level without access to a document's inner structure.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Base facade class.
/// </summary>
class ASPOSE_PDF_SHARED_API Facade : public virtual Aspose::Pdf::Facades::IFacade
{
    typedef Facade ThisType;
    typedef Aspose::Pdf::Facades::IFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::SaveableFacade;
    friend class Aspose::Pdf::Facades::PdfConverter;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    
public:

    /// <summary>
    /// Gets the document facade is working on.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Document> get_Document() const;
    
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
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcDoc">The Aspose.Pdf.Document object.</param>
    virtual void BindPdf(System::SharedPtr<Aspose::Pdf::Document> srcDoc);
    /// <summary>
    /// Disposes Aspose.Pdf.Document bound with a facade.
    /// </summary>
    virtual void Close();
    /// <summary>
    /// Disposes the facade.
    /// </summary>
    void Dispose();
    
protected:

    /// <summary>
    /// The constructor.
    /// </summary>
    Facade();
    /// <summary>
    /// The constructor.
    /// </summary>
    /// <param name="srcDoc">The Aspose.Pdf.Document object.</param>
    Facade(System::SharedPtr<Aspose::Pdf::Document> srcDoc);
    
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcFile">The PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    virtual void BindPdf(System::String srcFile, System::String password);
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcStream">The stream of PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> srcStream, System::String password);
    /// <summary>
    /// Asserts if the facade is initialized.
    /// </summary>
    virtual void AssertDocument() const;
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Document> _document;
    
};

/// <summary>
/// Base class for all saveable facades.
/// </summary>
class ASPOSE_PDF_SHARED_API SaveableFacade : public Aspose::Pdf::Facades::Facade, public Aspose::Pdf::Facades::ISaveableFacade
{
    typedef SaveableFacade ThisType;
    typedef Aspose::Pdf::Facades::Facade BaseType;
    typedef Aspose::Pdf::Facades::ISaveableFacade BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfAnnotationEditor;
    friend class Aspose::Pdf::Facades::PdfBookmarkEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfFileInfo;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::Facades::PdfFileSecurity;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Facades::PdfFileStamp;
    friend class Aspose::Pdf::Facades::PdfPageEditor;
    friend class Aspose::Pdf::Facades::PdfXmpMetadata;
    
public:

    /// <summary>
    /// Saves the PDF document to the specified file.
    /// </summary>
    /// <param name="destFile">The destination file.</param>
    virtual void Save(System::String destFile);
    /// <summary>
    /// Saves the PDF document to the specified stream.
    /// </summary>
    /// <param name="destStream">The destination stream.</param>
    virtual void Save(System::SharedPtr<System::IO::Stream> destStream);
    
protected:

    /// <summary>
    /// The constructor.
    /// </summary>
    SaveableFacade();
    /// <summary>
    /// The constructor.
    /// </summary>
    /// <param name="srcDoc">The Aspose.Pdf.Document object.</param>
    SaveableFacade(System::SharedPtr<Aspose::Pdf::Document> srcDoc);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


