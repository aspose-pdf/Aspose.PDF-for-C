#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/stream.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <drawing/image.h>

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Forms { enum class IconCaptionPosition; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace Forms { class IconFit; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class represnets push button field.
/// </summary>
class ASPOSE_PDF_SHARED_API ButtonField FINAL : public Aspose::Pdf::Forms::Field
{
    typedef ButtonField ThisType;
    typedef Aspose::Pdf::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Forms::Field;
    
public:

    /// <summary>
    /// Gets normal caption.
    /// </summary>
    System::String get_NormalCaption();
    /// <summary>
    /// Sets normal caption.
    /// </summary>
    void set_NormalCaption(System::String value);
    /// <summary>
    /// Gets rollover caption of button which shall be displayed when the user rolls the cursor 
    /// into its active area without pressing the mouse button.
    /// </summary>
    System::String get_RolloverCaption();
    /// <summary>
    /// Sets rollover caption of button which shall be displayed when the user rolls the cursor 
    /// into its active area without pressing the mouse button.
    /// </summary>
    void set_RolloverCaption(System::String value);
    /// <summary>
    /// Gets alternate caption of the button which shall be displayed 
    /// when the mouse button is pressed within its active area.
    /// </summary>
    System::String get_AlternateCaption();
    /// <summary>
    /// Sets alternate caption of the button which shall be displayed 
    /// when the mouse button is pressed within its active area.
    /// </summary>
    void set_AlternateCaption(System::String value);
    /// <summary>
    /// Gets normal icon of the button which shall be displayed when it is not interacting with the user.
    /// </summary>
    System::SharedPtr<XForm> get_NormalIcon();
    /// <summary>
    /// Sets normal icon of the button which shall be displayed when it is not interacting with the user.
    /// </summary>
    void set_NormalIcon(System::SharedPtr<XForm> value);
    /// <summary>
    /// Gets rollover icon of the button which shall be displayed when the user 
    /// rolls the cursor into its active area without pressing the mouse button.
    /// </summary>
    System::SharedPtr<XForm> get_RolloverIcon();
    /// <summary>
    /// Sets rollover icon of the button which shall be displayed when the user 
    /// rolls the cursor into its active area without pressing the mouse button.
    /// </summary>
    void set_RolloverIcon(System::SharedPtr<XForm> value);
    /// <summary>
    /// Gets alternate icon which shall be displayed when the mouse button is pressed within its active area.
    /// </summary>
    System::SharedPtr<XForm> get_AlternateIcon();
    /// <summary>
    /// Sets alternate icon which shall be displayed when the mouse button is pressed within its active area.
    /// </summary>
    void set_AlternateIcon(System::SharedPtr<XForm> value);
    /// <summary>
    /// Gets icon fit object specifying how the widget annotation's icon shall be displayed within its annotation rectangle.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Forms::IconFit> get_IconFit();
    /// <summary>
    /// Gets icon caption position.
    /// </summary>
    /// 
    IconCaptionPosition get_ICPosition();
    /// <summary>
    /// Sets icon caption position.
    /// </summary>
    /// 
    void set_ICPosition(IconCaptionPosition value);
    
    /// <summary>
    /// Button field constructor for Generator. 
    /// </summary>
    ButtonField();
    
    /// <summary>
    /// Adds image into the field resources an draws it.
    /// </summary>
    /// <param name="image">
    /// Image ot add into text field.
    /// </param>
    void AddImage(System::SharedPtr<System::Drawing::Image> image);
    
    /// <summary>
    /// ButtonField constructor.
    /// </summary>
    /// <param name="page">Page where button will be placed.</param>
    /// <param name="rect">Rectangle where button is placed on the page.</param>
    ButtonField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// ButtonField constructore. 
    /// </summary>
    /// <param name="doc">Docuemtn where new field will be created.</param>
    /// <param name="rect">Rectangle hwere button is placed on the page. </param>
    ButtonField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    /// <summary>
    /// Constructor for ButtonField class
    /// </summary>
    /// <param name="annotation">Annotation object which describes button.</param>
    /// <param name="document">Document which owns button.</param>
    ButtonField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    void AddImage(System::SharedPtr<System::Drawing::Image> image, bool fillArea);
    virtual void UpdateAppearance(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">Aspose.Pdf.Page object.</param>
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    virtual bool AppearanceSupported();
    /// <summary>
    /// Creates operators sequence for drawing of appearance of the button.
    /// </summary>
    /// <param name="parameters">Parameters of the appearance. </param>
    /// <param name="annotation">Annotation for which appearance is generated.</param>
    /// <returns></returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    virtual System::SharedPtr<Field> CreateCopy();
    
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
    /// <summary>
    /// Returns button caption 
    /// </summary>
    /// <returns></returns>
    System::String getCaption();
    /// <summary>
    /// Add image to the button appearance
    /// </summary>
    /// <param name="appearance">Appearance where images will be added.</param>
    /// <param name="image">Image stream</param>
    /// <param name="position">Array with image position [x, y ,width, height]</param>
    void AddImageToAppearance(System::SharedPtr<XForm> appearance, System::SharedPtr<System::IO::Stream> image, System::ArrayPtr<double> position);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


