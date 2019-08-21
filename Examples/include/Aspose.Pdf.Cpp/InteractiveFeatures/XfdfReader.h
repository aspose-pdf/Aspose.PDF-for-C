#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

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
namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

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

    /// <summary>
    /// Import annotations from XFDF file and put them into document.
    /// </summary>
    /// <param name="stream">Source stream containing XFDF file.</param>
    /// <param name="document">Document where annotations will be added.</param>
    static void ReadAnnotations(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Document> document);
    /// <summary>
    /// Import field values from XFDF file.
    /// </summary>
    /// <param name="stream">Stream containing XFDF data.</param>
    /// <param name="document">Document where fields data will be imported.</param>
    static void ReadFields(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Document> document);
    /// <summary>
    /// Parses XFDF file and returns information as hashtable.
    /// </summary>
    /// <param name="reader">XmlReader for the source file.</param>
    /// <returns>Hashtable with information parsed from XFDF file.</returns>
    static System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> GetElements(System::SharedPtr<System::Xml::XmlReader> reader);
    
protected:

    static bool IsAnnotation(System::String annot);
    static void ReadFields(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Document> document, System::SharedPtr<System::Collections::Generic::List<System::String>> foundFields, System::SharedPtr<System::Collections::Generic::IList<System::String>> notFoundFields);
    
private:

    static System::SharedPtr<Aspose::Pdf::Forms::Field> FindField(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<WidgetAnnotation>>> fields, System::String fieldName);
    static void ImportFromXfdf(System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<WidgetAnnotation>>> dest, System::SharedPtr<System::Xml::XmlNamespaceManager> mngr, System::String xfaPath, System::SharedPtr<Document> document, System::SharedPtr<System::Collections::Generic::List<System::String>> foundFields, System::SharedPtr<System::Collections::Generic::IList<System::String>> notFoundFields);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


