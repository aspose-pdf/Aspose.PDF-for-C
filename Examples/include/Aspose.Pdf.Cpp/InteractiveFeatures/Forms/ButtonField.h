#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_ButtonField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_ButtonField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/stream.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <drawing/image.h>

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class IconFit; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class IconCaptionPosition; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class represnets push button field.
/// </summary>
class ASPOSE_PDF_SHARED_API ButtonField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::Field
{
    typedef ButtonField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    
public:

    System::String get_NormalCaption();
    void set_NormalCaption(System::String value);
    System::String get_RolloverCaption();
    void set_RolloverCaption(System::String value);
    System::String get_AlternateCaption();
    void set_AlternateCaption(System::String value);
    System::SharedPtr<XForm> get_NormalIcon();
    void set_NormalIcon(System::SharedPtr<XForm> value);
    System::SharedPtr<XForm> get_RolloverIcon();
    void set_RolloverIcon(System::SharedPtr<XForm> value);
    System::SharedPtr<XForm> get_AlternateIcon();
    void set_AlternateIcon(System::SharedPtr<XForm> value);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::IconFit> get_IconFit();
    IconCaptionPosition get_ICPosition();
    void set_ICPosition(IconCaptionPosition value);
    
    ButtonField();
    
    void AddImage(System::SharedPtr<System::Drawing::Image> image);
    
    ButtonField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    ButtonField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    ButtonField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    void AddImage(System::SharedPtr<System::Drawing::Image> image, bool fillArea);
    virtual void UpdateAppearance(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ButtonField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String getString(System::String entry);
    void setString(System::String entry, System::String value);
    System::SharedPtr<XForm> getIcon(System::String entry);
    void setIcon(System::SharedPtr<XForm> oldValue, System::String entry, System::SharedPtr<XForm> newValue);
    void updateXForm(System::String xform, System::String value);
    System::ArrayPtr<double> CalculateImagePosition(double width, double height);
    IconCaptionPosition IntToIconCaptionPosition(int32_t ICPosition);
    System::Drawing::Color shadeColor(System::Drawing::Color src, double k);
    int32_t IconCaptionPositionToInt(IconCaptionPosition ICPosition);
    System::String getCaption();
    void AddImageToAppearance(System::SharedPtr<XForm> appearance, System::SharedPtr<System::IO::Stream> image, System::ArrayPtr<double> position);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_ButtonField_h_

