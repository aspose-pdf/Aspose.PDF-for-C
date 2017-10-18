#ifndef _Aspose_Pdf_ComHelper_h_
#define _Aspose_Pdf_ComHelper_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class LoadOptions; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Provides methods for COM clients to load a document into Aspose.Pdf.
/// </summary>
/// <remarks>
/// Use the ComHelper class to load a document from a file or stream into a Document object in a COM application.
/// The Document class provides a default constructor to create a new document
/// and also provides overloaded constructors to load a document from a file or stream.
/// If you are using Aspose.Words from a .NET application, you can use all of the Document constructors directly, but if you are using Aspose.Pdf from a COM application,
/// only the default Document constructor is available.
/// </remarks>
class ASPOSE_PDF_SHARED_API ComHelper : public System::Object
{
    typedef ComHelper ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<Document> OpenStream(System::SharedPtr<System::IO::Stream> input);
    System::SharedPtr<Document> OpenStream(System::SharedPtr<System::IO::Stream> input, System::String password);
    System::SharedPtr<Document> OpenStream(System::SharedPtr<System::IO::Stream> input, bool isManagedStream);
    System::SharedPtr<Document> OpenStream(System::SharedPtr<System::IO::Stream> input, System::String password, bool isManagedStream);
    System::SharedPtr<Document> OpenStream(System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    System::SharedPtr<Document> OpenFile(System::String filename);
    System::SharedPtr<Document> OpenFile(System::String filename, System::String password);
    System::SharedPtr<Document> OpenFile(System::String filename, System::String password, bool isManagedStream);
    System::SharedPtr<Document> OpenFile(System::String filename, System::SharedPtr<LoadOptions> options);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ComHelper"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ComHelper_h_

