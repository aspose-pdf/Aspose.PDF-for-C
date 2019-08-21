#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_node_list.h>
#include <xml/xml_node.h>
#include <xml/xml_namespace_manager.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Forms { class XfaField; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Form; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class XfdfWriter; } } }
namespace Aspose { namespace Pdf { class XfaMerge; } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_4; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Interactive { class XDP; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Point; } }

namespace Aspose {

namespace Pdf {

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
    friend class Aspose::Pdf::Forms::XfaField;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Annotations::XfdfWriter;
    friend class Aspose::Pdf::XfaMerge;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    
protected:

    class PositionValue : public System::Object
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
    
    class FieldCaption : public System::Object
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
    /// XFA Form Component of an XFA form. 
    /// </summary>
    System::SharedPtr<System::Xml::XmlNode> get_Form();
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
    /// <param name="value">Data node value.</param>
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
    
    bool IsEmpty();
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
    static void HideXfaField(System::SharedPtr<System::Xml::XmlNode> field);
    /// <summary>
    /// Returns data node for XFA field.
    /// </summary>
    /// <param name="path">Field path</param>
    /// <returns>Field node.</returns>
    System::SharedPtr<System::Xml::XmlNode> GetFieldNode(System::String path);
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
    System::String GetFieldPath(System::SharedPtr<System::Xml::XmlNode> node);
    System::SharedPtr<System::Xml::XmlNode> GetForm(System::String path, bool allowCreate);
    /// <summary>
    /// Returns node by its path.
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    System::SharedPtr<System::Xml::XmlNode> GetNodeByPath(System::String path);
    /// <summary>
    /// Returns string value by data reference string.
    /// </summary>
    /// <param name="dataRef">Data reference string.</param>
    /// <returns>Value</returns>
    System::String GetValueByDataRef(System::String dataRef);
    /// <summary>
    /// Sets value by reference string. 
    /// </summary>
    /// <param name="dataRef">Data reference string</param>
    /// <param name="value">Value</param>
    void SetValueByDataRef(System::String dataRef, System::String value);
    bool HasNode(System::String path);
    System::SharedPtr<XfaField> GetXfaField(System::String path);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Interactive::XDP> _xdp;
    System::WeakPtr<Document> _document;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> _fieldPath;
    System::SharedPtr<System::Xml::XmlNamespaceManager> _nsmgr;
    
    /// <summary>
    /// Fill _fieldPath hashtable which reflects relation between reference path and field.
    /// This relation is obtained from XFA template, bind tags.
    /// </summary>
    /// <param name="fields">Collection of fields.</param>
    /// <param name="root">Name of root field.</param>
    /// <param name="fieldPathTable">Hash of field paths.</param>
    void BuildFieldPath(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields, System::String root, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> fieldPathTable);
    /// <summary>
    /// Gets table of fields by field path.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> GetFieldPath();
    System::String ExtractName(System::String name);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> GetFormFieldsByShortName(System::String root, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields, System::String shortName);
    System::SharedPtr<Field> FindClosestField(System::String path);
    System::SharedPtr<Field> FindClosestField(System::ArrayPtr<System::String> path, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> fields);
    int32_t Coincidence(System::ArrayPtr<System::String> path1, System::ArrayPtr<System::String> path2);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


