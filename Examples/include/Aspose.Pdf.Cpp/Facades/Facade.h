#ifndef _Aspose_Pdf_Facades_Facade_h_
#define _Aspose_Pdf_Facades_Facade_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
class ASPOSE_PDF_SHARED_API NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "NamespaceDoc"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// Base facade class.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT Facade : public virtual Aspose::Pdf::Facades::IFacade
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

    System::SharedPtr<Aspose::Pdf::Document> get_Document() const;
    
    virtual void BindPdf(System::String srcFile);
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> srcStream);
    virtual void BindPdf(System::SharedPtr<Aspose::Pdf::Document> srcDoc);
    virtual void Close();
    void Dispose();
    
    virtual ~Facade();
    
protected:

    Facade();
    Facade(System::SharedPtr<Aspose::Pdf::Document> srcDoc);
    
    virtual void BindPdf(System::String srcFile, System::String password);
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> srcStream, System::String password);
    virtual void AssertDocument() const;
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Facade"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Document> _document;
    bool mIsDisposed;
    
};

/// <summary>
/// Base class for all saveable facades.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT SaveableFacade : public Aspose::Pdf::Facades::Facade, public Aspose::Pdf::Facades::ISaveableFacade
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

    virtual void Save(System::String destFile);
    virtual void Save(System::SharedPtr<System::IO::Stream> destStream);
    
protected:

    SaveableFacade();
    SaveableFacade(System::SharedPtr<Aspose::Pdf::Document> srcDoc);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SaveableFacade"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_Facade_h_

