#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_XFA_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_XFA_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_node_list.h>
#include <xml/xml_node.h>
#include <xml/xml_namespace_manager.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/collections/list.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Form; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class XfdfWriter; } } }
namespace Aspose { namespace Pdf { class XfaMerge; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Interactive { class XDP; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Point; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Represents XML form regarding XML Forms Architecture (XFA).
/// </summary>
class ASPOSE_PDF_SHARED_API XFA FINAL : public System::Object
{
    typedef XFA ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
    friend class Aspose::Pdf::InteractiveFeatures::XfdfWriter;
    friend class Aspose::Pdf::XfaMerge;
    
protected:

    class ASPOSE_PDF_SHARED_API PositionValue : public System::Object
    {
        typedef PositionValue ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets value recalculated to pixels. 
        /// </summary>
        double get_Value();
        
        PositionValue(System::SharedPtr<Page> page, System::String s);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        double value;
        System::String meausreUnit;
        System::SharedPtr<Page> _page;
        
    };
    
    class ASPOSE_PDF_SHARED_API FieldCaption : public System::Object
    {
        typedef FieldCaption ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets reserved space for  the caption.
        /// </summary>
        double get_Margin();
        System::String get_Text();
        
        FieldCaption(System::SharedPtr<Page> page, System::SharedPtr<System::Xml::XmlNode> fieldTemplate);
        
    private:
    
        double _reserved;
        System::String _text;
        
    };
    
    
public:

    /// <summary>
    /// XFA Template component of an XFA form.
    /// </summary>
    System::SharedPtr<System::Xml::XmlNode> get_Template();
    /// <summary>
    /// XFA Datasets component of an XFA form.
    /// </summary>
    System::SharedPtr<System::Xml::XmlNode> get_Datasets();
    /// <summary>
    /// XFA Config component of an XFA form.
    /// </summary>
    System::SharedPtr<System::Xml::XmlNode> get_Config();
    /// <summary>
    /// XML Data Package (all XFA form components within a surrounding XML container).
    /// </summary>
    System::SharedPtr<System::Xml::XmlDocument> get_XDP();
    /// <summary>
    /// List of field names in the form template.
    /// </summary>
    System::ArrayPtr<System::String> get_FieldNames();
    /// <summary>
    /// Gets the namespace for the XFA form. The following namepsaces are defined: "data" for form data and "tpl" for form template. 
    /// </summary>
    System::SharedPtr<System::Xml::XmlNamespaceManager> get_NamespaceManager();
    
    /// <summary>
    /// Gets of sets data node value according <paramref name="path"/>.
    /// </summary>
    /// <param name="path">
    /// Data node path, e.g. form1[0].Subform1[0].Subform2[0].Subform3[0].TextField[0]. 
    /// Be sure to include indices even if data contains only single occurences of each nodes, 
    /// i.e. write node1[0].node2[0]... instead of node1.node2...
    /// </param>
    /// <returns>Data node value.</returns>
    System::String idx_get(System::String path);
    /// <summary>
    /// Gets of sets data node value according <paramref name="path"/>.
    /// </summary>
    /// <param name="path">
    /// Data node path, e.g. form1[0].Subform1[0].Subform2[0].Subform3[0].TextField[0]. 
    /// Be sure to include indices even if data contains only single occurences of each nodes, 
    /// i.e. write node1[0].node2[0]... instead of node1.node2...
    /// </param>
    /// <returns>Data node value.</returns>
    void idx_set(System::String path, System::String value);
    
    /// <summary>
    /// Returns XML node of XFA field tempalte. 
    /// </summary>
    /// <param name="fieldName">Path of the field which template must be found.</param>
    /// <returns>XL node with field template.</returns>
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName);
    /// <summary>
    /// Returns list of all field templates on XFA form.
    /// </summary>
    /// <returns>List of field templates.</returns>
    System::SharedPtr<System::Xml::XmlNodeList> GetFieldTemplates();
    /// <summary>
    /// Sets image for XFA field. 
    /// </summary>
    /// <param name="fieldName">Name of the field.</param>
    /// <param name="image">Stream which contains image.</param>
    void SetFieldImage(System::String fieldName, System::SharedPtr<System::IO::Stream> image);
    
protected:

    /// <summary>
    /// Initializes new instance of the <see cref="XFA"/> class.
    /// </summary>
    XFA(System::SharedPtr<Document> document);
    
    bool HasNode(System::String path);
    System::SharedPtr<System::Xml::XmlNode> GetNode(System::String path);
    /// <summary>
    /// Returns field template node. 
    /// </summary>
    /// <param name="fieldName">Field full path</param>
    /// <returns>Field template node.</returns>
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName, System::String& dataReference);
    /// <summary>
    /// Returns namespace manager with namespaces used for template and data.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetNamespaceManager();
    /// <summary>
    /// Flatten field of XFA form.
    /// </summary>
    /// <param name="field">XFA form field node.</param>
    static void FlattenXfaField(System::SharedPtr<System::Xml::XmlNode> field);
    /// <summary>
    /// Returns data node for XFA field.
    /// </summary>
    /// <param name="path">Field path</param>
    /// <returns>Field node.</returns>
    System::SharedPtr<System::Xml::XmlNode> GetFieldNode(System::String path);
    /// <summary>
    /// Returns path to data in data packet according to bind entries in field templates (if present).
    /// </summary>
    /// <param name="path">Path to field template.</param>
    /// <returns>Path to data.</returns>
    System::String GetDataReference(System::String path);
    /// <summary>
    /// Start cached updates mode. All changes made to XFA will be cached and saved into document structure at EndCachedUpdates call. 
    /// This allows to improve preformacne by avoiding redudant operations on saving XML packets into document when a lot of changes to 
    /// XFA are made.
    /// </summary>
    void BeginCachedUpdates();
    /// <summary>
    /// Ends cahced updates and saves all data into document structure.
    /// </summary>
    void EndCachedUpdates();
    /// <summary>
    /// Returns page area position 
    /// </summary>
    /// <param name="page">PDF page (to get UserUnits value)</param>
    /// <returns></returns>
    System::SharedPtr<Point> GetPageContentArea(System::SharedPtr<Page> page);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Interactive::XDP> _xdp;
    System::WeakPtr<Document> _document;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> _fieldPath;
    System::SharedPtr<System::Xml::XmlNamespaceManager> _nsmgr;
    
    System::String GetBind(System::String path);
    System::String GetGlobalValue(System::String path);
    /// <summary>
    /// Fill _fieldPath hashtable which reflects relation between reference path and field.
    /// This relation is obtained from XFA template, bind tags.
    /// </summary>
    /// <param name="fields">Collection of fields.</param>
    /// <param name="root">Name of root field.</param>
    /// <param name="fieldPathTable">Hash of field paths.</param>
    void BuildFieldPath(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> fields, System::String root, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> fieldPathTable);
    /// <summary>
    /// Gets table of fields by field path.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> GetFieldPath();
    System::String ExtractName(System::String name);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> GetFormFieldsByShortName(System::String root, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> fields, System::String shortName);
    System::SharedPtr<Field> FindClosestField(System::String path);
    System::SharedPtr<Field> FindClosestField(System::ArrayPtr<System::String> path, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> fields);
    int32_t Coincidence(System::ArrayPtr<System::String> path1, System::ArrayPtr<System::String> path2);
    System::SharedPtr<System::Collections::Generic::List<System::String>> CreateTail(System::SharedPtr<System::Collections::Generic::List<System::String>> path);
    /// <summary>
    /// Returns reference to field data (according to bind option in field template). If no bind specified field path is used. 
    /// </summary>
    /// <param name="node">Field template node</param>
    /// <param name="path">Path to field template.</param>
    /// <returns></returns>
    System::String GetFieldReference(System::SharedPtr<System::Xml::XmlNode> node, System::String path);
    bool IsNullOrEmpty(System::String s);
    /// <summary>
    /// Construct path from two parts.
    /// </summary>
    /// <param name="root"></param>
    /// <param name="tail"></param>
    /// <returns></returns>
    System::String Construct(System::String root, System::String tail);
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::SharedPtr<System::Xml::XmlNode> template_, System::SharedPtr<System::Collections::Generic::List<System::String>> path, System::String& dataReference);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_XFA_h_

