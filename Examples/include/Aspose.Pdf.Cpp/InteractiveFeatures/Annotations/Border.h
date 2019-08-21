#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class CommonFigureAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FreeTextAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class InkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class LineAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PolyAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class BorderStyle; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Dash; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class BorderEffect; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

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
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::CommonFigureAnnotation;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::InkAnnotation;
    friend class Aspose::Pdf::Annotations::LineAnnotation;
    friend class Aspose::Pdf::Annotations::PolyAnnotation;
    
public:

    /// <summary>
    /// Gets or sets horizontal corner radius.
    /// </summary>
    int32_t get_HCornerRadius();
    /// <summary>
    /// Gets or sets horizontal corner radius.
    /// </summary>
    void set_HCornerRadius(int32_t value);
    /// <summary>
    /// Obsolete property. Please use VCornerRadius instead. 
    /// </summary>
    int32_t get_VCornerRaduis();
    /// <summary>
    /// Obsolete property. Please use VCornerRadius instead. 
    /// </summary>
    void set_VCornerRaduis(int32_t value);
    /// <summary>
    /// Gets or sets vertical corner radius.
    /// </summary>
    int32_t get_VCornerRadius();
    /// <summary>
    /// Gets or sets vertical corner radius.
    /// </summary>
    void set_VCornerRadius(int32_t value);
    /// <summary>
    /// Gets or sets border width.
    /// </summary>
    int32_t get_Width();
    /// <summary>
    /// Gets or sets border width.
    /// </summary>
    void set_Width(int32_t value);
    /// <summary>
    /// Gets or sets effect intencity. Valid range of value is [0..2].
    /// </summary>
    int32_t get_EffectIntensity();
    /// <summary>
    /// Gets or sets effect intencity. Valid range of value is [0..2].
    /// </summary>
    void set_EffectIntensity(int32_t value);
    /// <summary>
    /// Gets or sets border style.
    /// </summary>
    /// <see cref="BorderStyle"/>
    BorderStyle get_Style();
    /// <summary>
    /// Gets or sets border style.
    /// </summary>
    /// <see cref="BorderStyle"/>
    void set_Style(BorderStyle value);
    /// <summary>
    /// Gets or sets border effect.
    /// </summary>
    /// <see cref="BorderEffect"/>
    BorderEffect get_Effect();
    /// <summary>
    /// Gets or sets border effect.
    /// </summary>
    /// <see cref="BorderEffect"/>
    void set_Effect(BorderEffect value);
    /// <summary>
    /// Gets or sets dash pattern.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Annotations::Dash> get_Dash();
    /// <summary>
    /// Gets or sets dash pattern.
    /// </summary>
    void set_Dash(System::SharedPtr<Aspose::Pdf::Annotations::Dash> value);
    
    /// <summary>
    /// Constructor for border object.
    /// </summary>
    /// <param name="parent">Parent annotation.</param>
    Border(System::SharedPtr<Annotation> parent);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDictBE();
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> _enginePrim;
    
    void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    /// <summary>
    /// Writes attributes of effect property. Intensity value is being written only for cloudy type of effect.
    /// </summary>
    /// <param name="writer">Xml writer.</param>
    void WriteXfdfEffectAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    
    /// <summary>
    /// constructor of Border class.
    /// </summary>
    /// <param name="annotation">PDf object which describes annotation.</param>
    Border(System::SharedPtr<Annotation> owner, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation);
    
    /// <summary>
    /// Creates PDF object which describes the Border.
    /// </summary>
    /// <param name="page">Page where annotation which used this border is placed.</param>
    /// <returns>PDF dictionary which contains border property.</returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> createBorder(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> page);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetEngineDict();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetEngineDictBE();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int32_t hCornerRadius;
    int32_t vCornerRadius;
    int32_t width;
    BorderStyle style;
    System::SharedPtr<Aspose::Pdf::Annotations::Dash> dash;
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
} // namespace Pdf
} // namespace Aspose


