#ifndef _Aspose_Pdf_InteractiveFeatures_XfdfReader_h_
#define _Aspose_Pdf_InteractiveFeatures_XfdfReader_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_reader.h>
#include <xml/xml_node_list.h>
#include <xml/xml_namespace_manager.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <system/collections/icollection.h>
#include <system/collections/dictionary.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Class which peroformes reading of XFDF format. 
/// </summary>
/// <example>
/// <code lang="C#">
/// Document doc = new Document("example.pdf");
/// Stream xfdfStream = File.OpenRead("file.xfdf");
/// XfdfReader.ReadAnnotations(xfdfStream, doc);
/// xfdfStream.Close();
/// doc.Save("example_out.pdf");
/// </code>
/// </example>
class ASPOSE_PDF_SHARED_API XfdfReader FINAL : public System::Object
{
    typedef XfdfReader ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Form;
    
public:

    static void ReadAnnotations(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Document> document);
    static void ReadFields(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Document> document);
    static System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> GetElements(System::SharedPtr<System::Xml::XmlReader> reader);
    
protected:

    static bool IsAnnotation(System::String annot);
    static void ReadFields(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Document> document, System::SharedPtr<System::Collections::Generic::List<System::String>> foundFields, System::SharedPtr<System::Collections::Generic::IList<System::String>> notFoundFields);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XfdfReader"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    static System::SharedPtr<Forms::Field> FindField(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Annotations::WidgetAnnotation>>> fields, System::String fieldName);
    static void ImportFromXfdf(System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Annotations::WidgetAnnotation>>> dest, System::SharedPtr<System::Xml::XmlNamespaceManager> mngr, System::String xfaPath, System::SharedPtr<Document> document, System::SharedPtr<System::Collections::Generic::List<System::String>> foundFields, System::SharedPtr<System::Collections::Generic::IList<System::String>> notFoundFields);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_XfdfReader_h_

