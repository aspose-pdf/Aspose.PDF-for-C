#ifndef _Aspose_Pdf_Structure_Element_h_
#define _Aspose_Pdf_Structure_Element_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Structure { class StructElement; } } }
namespace Aspose { namespace Pdf { namespace Structure { class RootElement; } } }
namespace Aspose { namespace Pdf { namespace Structure { class FigureElement; } } }
namespace Aspose { namespace Pdf { namespace Structure { class TextElement; } } }
namespace Aspose { namespace Pdf { class XmlConverter; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Structure { class ElementFactory; } } }

namespace Aspose {

namespace Pdf {

namespace Structure {

/// <summary>
/// The <b>Aspose.Pdf.Structure</b> namespace provides classes which help to work with a logical structure of a document which presents 
/// the organization of the document into chapters and sections or the identification of special elements such as figures, tables, and footnotes.
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
/// Class representing base element of logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT Element : public System::Object
{
    typedef Element ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Structure::StructElement;
    friend class Aspose::Pdf::Structure::RootElement;
    friend class Aspose::Pdf::Structure::FigureElement;
    friend class Aspose::Pdf::Structure::TextElement;
    friend class Aspose::Pdf::XmlConverter;
    
public:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Element>>> get_Children();
    virtual System::String get_Lang();
    virtual void set_Lang(System::String value);
    virtual System::String get_ActualText();
    virtual void set_ActualText(System::String value);
    virtual System::String get_Alt();
    virtual void set_Alt(System::String value);
    virtual System::String get_E();
    virtual void set_E(System::String value);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict;
    
    System::String get_StructureType();
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> get_Attributes();
    
    Element(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Element"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Element>>> _elements;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> _attrib;
    
    System::String GetAttributeValueString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> primitive);
    
};

//TODO: remove next classes to separate files.
/// <summary>
/// General structure element.
/// </summary>
class ASPOSE_PDF_SHARED_API StructElement : public Aspose::Pdf::Structure::Element
{
    typedef StructElement ThisType;
    typedef Aspose::Pdf::Structure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Structure::ElementFactory;
    
protected:

    StructElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "StructElement"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// Root structure element.
/// </summary>
class ASPOSE_PDF_SHARED_API RootElement : public Aspose::Pdf::Structure::Element
{
    typedef RootElement ThisType;
    typedef Aspose::Pdf::Structure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Structure::ElementFactory;
    friend class Aspose::Pdf::XmlConverter;
    
protected:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> get_RoleMap();
    
    RootElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "RootElement"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> _roleMap;
    
};

} // namespace Structure
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Structure_Element_h_

