#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_MarkupAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_MarkupAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <system/string.h>
#include <system/date_time.h>
#include <system/collections/dictionary.h>

#include "InteractiveFeatures/Annotations/Annotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class CaretAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class CommonFigureAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FileAttachmentAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FreeTextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class TextMarkupAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class InkAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LineAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class PolyAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class SoundAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class StampAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class TextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class PopupAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class ReplyType; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Abstract class representing markup annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT MarkupAnnotation : public Aspose::Pdf::InteractiveFeatures::Annotations::Annotation, public Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::ITitledAnnotation
{
    typedef MarkupAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::Annotation BaseType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::ITitledAnnotation BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::CaretAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::CommonFigureAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FileAttachmentAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::TextMarkupAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::InkAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::LineAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::PolyAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::SoundAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::StampAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::TextAnnotation;
    
public:

    System::String get_Title();
    void set_Title(System::String value);
    System::String get_RichText();
    void set_RichText(System::String value);
    System::DateTime get_CreationDate();
    System::String get_Subject();
    void set_Subject(System::String value);
    System::SharedPtr<PopupAnnotation> get_Popup();
    void set_Popup(System::SharedPtr<PopupAnnotation> value);
    double get_Opacity();
    void set_Opacity(double value);
    System::SharedPtr<Annotation> get_InReplyTo();
    void set_InReplyTo(System::SharedPtr<Annotation> value);
    Aspose::Pdf::InteractiveFeatures::Annotations::ReplyType get_ReplyType();
    void set_ReplyType(Aspose::Pdf::InteractiveFeatures::Annotations::ReplyType value);
    
protected:

    MarkupAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    MarkupAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    virtual void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void WriteXfdfElements(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    virtual void AfterImport();
    virtual void ReadXfdfElements(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> table);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "MarkupAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<PopupAnnotation> _popup;
    System::String _inReplyToName;
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_MarkupAnnotation_h_

