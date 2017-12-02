#ifndef _Aspose_Pdf_Structure_Element_h_
#define _Aspose_Pdf_Structure_Element_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets child elements collection.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Element>>> get_Children();
    /// <summary>
    /// (Optional; PDF 1.4) A language specifying the natural language for all text
    /// in the structure element except where overridden by language specifications for nested structure
    /// elements or marked content.
    /// </summary>
    virtual System::String get_Lang();
    /// <summary>
    /// (Optional; PDF 1.4) A language specifying the natural language for all text
    /// in the structure element except where overridden by language specifications for nested structure
    /// elements or marked content.
    /// </summary>
    virtual void set_Lang(System::String value);
    /// <summary>
    /// (Optional; PDF 1.4) Text that is an exact replacement for the structure element and its children.
    /// This replacement text (which should apply to as small a piece of content as possible)
    /// is useful when extracting the document’s contents in support of accessibility to users
    /// with disabilities or for other purposes.
    /// </summary>
    virtual System::String get_ActualText();
    /// <summary>
    /// (Optional; PDF 1.4) Text that is an exact replacement for the structure element and its children.
    /// This replacement text (which should apply to as small a piece of content as possible)
    /// is useful when extracting the document’s contents in support of accessibility to users
    /// with disabilities or for other purposes.
    /// </summary>
    virtual void set_ActualText(System::String value);
    /// <summary>
    /// (Optional) An alternate description of the structure element and its children in
    /// human-readableform, which is useful when extracting the document’s contents in support
    /// of accessibility to users with disabilities or for other purposes.
    /// </summary>
    virtual System::String get_Alt();
    /// <summary>
    /// (Optional) An alternate description of the structure element and its children in
    /// human-readableform, which is useful when extracting the document’s contents in support
    /// of accessibility to users with disabilities or for other purposes.
    /// </summary>
    virtual void set_Alt(System::String value);
    /// <summary>
    /// (Optional; PDF 1.5) The expanded form of an abbreviation.
    /// </summary>
    virtual System::String get_E();
    /// <summary>
    /// (Optional; PDF 1.5) The expanded form of an abbreviation.
    /// </summary>
    virtual void set_E(System::String value);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict;
    
    System::String get_StructureType();
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> get_Attributes();
    
    /// <summary>
    /// Ctor.
    /// </summary>
    /// <param name="engineDict">Engine dictionary.</param>
    Element(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
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
    
private:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> _roleMap;
    
};

} // namespace Structure
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Structure_Element_h_

