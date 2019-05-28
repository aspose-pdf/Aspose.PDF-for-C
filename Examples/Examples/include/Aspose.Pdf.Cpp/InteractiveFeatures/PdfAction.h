#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "InteractiveFeatures/IAppointment.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class BaseActionCollection; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PdfActionCollection; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class ActionCollection; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class LinkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class DocumentActionCollection; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class SubmitFormAction; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class DestinationFactory; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class NamedAction; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class ScreenAnnotation; } } }
namespace Aspose { namespace Pdf { class OutlineItemCollection; } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextFragmentTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_12; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// The <b>Aspose.Pdf.InteractiveFeatures</b> namespace provides classes for working with various types of actions, destinations and other features of document 
/// which traditionally called as interactive providing means user can intercommunicate with it.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Represents Action in PDF document
/// </summary>
class ASPOSE_PDF_SHARED_API PdfAction : public Aspose::Pdf::Annotations::IAppointment
{
    typedef PdfAction ThisType;
    typedef Aspose::Pdf::Annotations::IAppointment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::BaseActionCollection;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Annotations::PdfActionCollection;
    friend class Aspose::Pdf::Annotations::ActionCollection;
    friend class Aspose::Pdf::Annotations::ActionCollection;
    friend class Aspose::Pdf::Annotations::LinkAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Annotations::DocumentActionCollection;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Annotations::SubmitFormAction;
    friend class Aspose::Pdf::Annotations::DestinationFactory;
    friend class Aspose::Pdf::Annotations::NamedAction;
    friend class Aspose::Pdf::Annotations::ScreenAnnotation;
    friend class Aspose::Pdf::OutlineItemCollection;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_8;
    friend class Aspose::Pdf::Tests::Text::TextFragmentTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    
public:

    /// <summary>
    /// Next actions in sequence. 
    /// </summary>
    System::SharedPtr<ActionCollection> get_Next();
    
    /// <summary>
    /// Returns string representation of ExplicitDestination object.
    /// </summary>
    /// <returns></returns>
    virtual System::String ToString();
    
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

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


