#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_XFA_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_XFA_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
    
        double get_Value();
        
        PositionValue(System::SharedPtr<Page> page, System::String s);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "PositionValue"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
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
    
        double get_Margin();
        System::String get_Text();
        
        FieldCaption(System::SharedPtr<Page> page, System::SharedPtr<System::Xml::XmlNode> fieldTemplate);
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "FieldCaption"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        double _reserved;
        System::String _text;
        
    };
    
    
public:

    System::SharedPtr<System::Xml::XmlNode> get_Template();
    System::SharedPtr<System::Xml::XmlNode> get_Datasets();
    System::SharedPtr<System::Xml::XmlNode> get_Config();
    System::SharedPtr<System::Xml::XmlDocument> get_XDP();
    System::ArrayPtr<System::String> get_FieldNames();
    System::SharedPtr<System::Xml::XmlNamespaceManager> get_NamespaceManager();
    
    System::String idx_get(System::String path);
    void idx_set(System::String path, System::String value);
    
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName);
    System::SharedPtr<System::Xml::XmlNodeList> GetFieldTemplates();
    void SetFieldImage(System::String fieldName, System::SharedPtr<System::IO::Stream> image);
    
protected:

    XFA(System::SharedPtr<Document> document);
    
    bool HasNode(System::String path);
    System::SharedPtr<System::Xml::XmlNode> GetNode(System::String path);
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName, System::String &dataReference);
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetNamespaceManager();
    static void FlattenXfaField(System::SharedPtr<System::Xml::XmlNode> field);
    System::SharedPtr<System::Xml::XmlNode> GetFieldNode(System::String path);
    System::String GetDataReference(System::String path);
    void BeginCachedUpdates();
    void EndCachedUpdates();
    System::SharedPtr<Point> GetPageContentArea(System::SharedPtr<Page> page);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XFA"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Interactive::XDP> _xdp;
    System::WeakPtr<Document> _document;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> _fieldPath;
    System::SharedPtr<System::Xml::XmlNamespaceManager> _nsmgr;
    
    System::String GetBind(System::String path);
    System::String GetGlobalValue(System::String path);
    void BuildFieldPath(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> fields, System::String root, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> fieldPathTable);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> GetFieldPath();
    System::String ExtractName(System::String name);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> GetFormFieldsByShortName(System::String root, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> fields, System::String shortName);
    System::SharedPtr<Field> FindClosestField(System::String path);
    System::SharedPtr<Field> FindClosestField(System::ArrayPtr<System::String> path, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> fields);
    int32_t Coincidence(System::ArrayPtr<System::String> path1, System::ArrayPtr<System::String> path2);
    System::SharedPtr<System::Collections::Generic::List<System::String>> CreateTail(System::SharedPtr<System::Collections::Generic::List<System::String>> path);
    System::String GetFieldReference(System::SharedPtr<System::Xml::XmlNode> node, System::String path);
    bool IsNullOrEmpty(System::String s);
    System::String Construct(System::String root, System::String tail);
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::SharedPtr<System::Xml::XmlNode> template_, System::SharedPtr<System::Collections::Generic::List<System::String>> path, System::String &dataReference);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_XFA_h_

