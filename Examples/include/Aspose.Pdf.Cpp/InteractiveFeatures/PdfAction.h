#ifndef _Aspose_Pdf_InteractiveFeatures_PdfAction_h_
#define _Aspose_Pdf_InteractiveFeatures_PdfAction_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "InteractiveFeatures/IAppointment.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class BaseActionCollection; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class ActionCollection; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LinkAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class DocumentActionCollection; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class SubmitFormAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class DestinationFactory; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class NamedAction; } } }
namespace Aspose { namespace Pdf { class OutlineItemCollection; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class ScreenAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// The <b>Aspose.Pdf.InteractiveFeatures</b> namespace provides classes for working with various types of actions, destinations and other features of document 
/// which traditionally called as interactive providing means user can intercommunicate with it.
/// </summary>
class ASPOSE_PDF_SHARED_API NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Represents Action in PDF document
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT PdfAction : public Aspose::Pdf::InteractiveFeatures::IAppointment
{
    typedef PdfAction ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::IAppointment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::BaseActionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::ActionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::ActionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::LinkAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::DocumentActionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::SubmitFormAction;
    friend class Aspose::Pdf::InteractiveFeatures::DestinationFactory;
    friend class Aspose::Pdf::InteractiveFeatures::NamedAction;
    friend class Aspose::Pdf::OutlineItemCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::ScreenAnnotation;
    
public:

    /// <summary>
    /// Next actions in sequence. 
    /// </summary>
    System::SharedPtr<ActionCollection> get_Next();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
    void set_EngineDict(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_EngineObj();
    void set_EngineObj(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> value);
    
    virtual void Execute(System::SharedPtr<Document> document);
    static System::SharedPtr<PdfAction> CreateAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<ActionCollection> next;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> _engineObj;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_PdfAction_h_

