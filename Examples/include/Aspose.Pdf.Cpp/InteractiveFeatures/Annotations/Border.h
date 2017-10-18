#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_Border_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_Border_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class CommonFigureAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FreeTextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class InkAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LineAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class PolyAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class BorderStyle; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Dash; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class BorderEffect; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Class representing characteristics of annotation border.
/// </summary>
class ASPOSE_PDF_SHARED_API Border FINAL : public System::Object
{
    typedef Border ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::CommonFigureAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::InkAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::LineAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::PolyAnnotation;
    
public:

    int32_t get_HCornerRadius();
    void set_HCornerRadius(int32_t value);
    int32_t get_VCornerRaduis();
    void set_VCornerRaduis(int32_t value);
    int32_t get_VCornerRadius();
    void set_VCornerRadius(int32_t value);
    int32_t get_Width();
    void set_Width(int32_t value);
    int32_t get_EffectIntensity();
    void set_EffectIntensity(int32_t value);
    BorderStyle get_Style();
    void set_Style(BorderStyle value);
    BorderEffect get_Effect();
    void set_Effect(BorderEffect value);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Dash> get_Dash();
    void set_Dash(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Dash> value);
    
    Border(System::SharedPtr<Annotation> parent);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDictBE();
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> _enginePrim;
    
    void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    void WriteXfdfEffectAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    
    Border(System::SharedPtr<Annotation> owner, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation);
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> createBorder(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> page);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetEngineDict();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetEngineDictBE();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Border"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t hCornerRadius;
    int32_t vCornerRadius;
    int32_t width;
    BorderStyle style;
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Dash> dash;
    BorderEffect borderEffect;
    int32_t effectIntensity;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _parent;
    System::WeakPtr<Annotation> _owner;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDictBE;
    
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetBorderDict(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> annot);
    static void SetValue(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> annot, System::String key, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> value);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> GetValue(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> annot, System::String key);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_Border_h_

