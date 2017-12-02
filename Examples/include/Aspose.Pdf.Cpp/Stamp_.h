#ifndef _Aspose_Pdf_Stamp__h_
#define _Aspose_Pdf_Stamp__h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ImageStamp; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class PdfPageStamp; } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { enum class Rotation; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// An abstract class for various kinds of stamps which come as descendants.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT Stamp : public System::Object
{
    typedef Stamp ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::PdfPageStamp;
    
public:

    /// <summary>
    /// Sets or gets a bool value that indicates the content is stamped as background.
    /// If the value is true, the stamp content is layed at the bottom.
    /// By defalt, the value is false, the stamp content is layed at the top.
    /// </summary>
    bool get_Background();
    /// <summary>
    /// Sets or gets a bool value that indicates the content is stamped as background.
    /// If the value is true, the stamp content is layed at the bottom.
    /// By defalt, the value is false, the stamp content is layed at the top.
    /// </summary>
    void set_Background(bool value);
    /// <summary>
    /// Gets or sets a value to indicate the stamp opacity. The value is from 0.0 to 1.0.
    /// By default the value is 1.0.
    /// </summary>
    double get_Opacity();
    /// <summary>
    /// Gets or sets a value to indicate the stamp opacity. The value is from 0.0 to 1.0.
    /// By default the value is 1.0.
    /// </summary>
    void set_Opacity(double value);
    /// <summary>
    /// Gets or sets a value to indicate the stamp outline opacity. The value is from 0.0 to 1.0.
    /// By default the value is 1.0.
    /// </summary>
    double get_OutlineOpacity();
    /// <summary>
    /// Gets or sets a value to indicate the stamp outline opacity. The value is from 0.0 to 1.0.
    /// By default the value is 1.0.
    /// </summary>
    void set_OutlineOpacity(double value);
    /// <summary>
    /// Gets or sets a value of the stamp outline width.
    /// By default the value is 1.0.
    /// </summary>
    double get_OutlineWidth();
    /// <summary>
    /// Gets or sets a value of the stamp outline width.
    /// By default the value is 1.0.
    /// </summary>
    void set_OutlineWidth(double value);
    /// <summary>
    /// Sets or gets the rotation of stamp content according <see cref="Rotation"/> values.
    /// Note. This property is for set angles which are multiples of 90 degrees (0, 90, 180, 270 degrees).
    /// To set arbitrary angle use RotateAngle property. 
    /// If angle set by ArbitraryAngle is not multiple of 90 then Rotate property returns Rotation.None.
    /// </summary>
    Rotation get_Rotate();
    /// <summary>
    /// Sets or gets the rotation of stamp content according <see cref="Rotation"/> values.
    /// Note. This property is for set angles which are multiples of 90 degrees (0, 90, 180, 270 degrees).
    /// To set arbitrary angle use RotateAngle property. 
    /// If angle set by ArbitraryAngle is not multiple of 90 then Rotate property returns Rotation.None.
    /// </summary>
    void set_Rotate(Rotation value);
    /// <summary>
    /// Horizontal stamp coordinate, starting from the left.
    /// </summary>
    double get_XIndent();
    /// <summary>
    /// Horizontal stamp coordinate, starting from the left.
    /// </summary>
    void set_XIndent(double value);
    /// <summary>
    /// Vertical stamp coordinate, starting from the bottom.
    /// </summary>
    double get_YIndent();
    /// <summary>
    /// Vertical stamp coordinate, starting from the bottom.
    /// </summary>
    void set_YIndent(double value);
    /// <summary>
    /// Gets or sets Horizontal alignment of stamp on the page. 
    /// </summary>
    Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Gets or sets Horizontal alignment of stamp on the page. 
    /// </summary>
    void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets or sets vertical alignment of stamp on page.
    /// </summary>
    Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Gets or sets vertical alignment of stamp on page.
    /// </summary>
    void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// Gets or sets left margin of stamp.
    /// </summary>
    double get_LeftMargin();
    /// <summary>
    /// Gets or sets left margin of stamp.
    /// </summary>
    void set_LeftMargin(double value);
    /// <summary>
    /// Gets or sets right margin of stamp.
    /// </summary>
    double get_RightMargin();
    /// <summary>
    /// Gets or sets right margin of stamp.
    /// </summary>
    void set_RightMargin(double value);
    /// <summary>
    /// Gets or sets bottom margin of stamp.
    /// </summary>
    double get_BottomMargin();
    /// <summary>
    /// Gets or sets bottom margin of stamp.
    /// </summary>
    void set_BottomMargin(double value);
    /// <summary>
    /// Gets or sets top margin of stamp.
    /// </summary>
    double get_TopMargin();
    /// <summary>
    /// Gets or sets top margin of stamp.
    /// </summary>
    void set_TopMargin(double value);
    /// <summary>
    /// Horizontal zooming factor of the stamp. Allows to scale stamp horizontally.
    /// </summary>
    double get_ZoomX();
    /// <summary>
    /// Horizontal zooming factor of the stamp. Allows to scale stamp horizontally.
    /// </summary>
    void set_ZoomX(double value);
    /// <summary>
    /// Desired width of the stamp on the page. 
    /// </summary>
    virtual double get_Width();
    /// <summary>
    /// Desired width of the stamp on the page. 
    /// </summary>
    virtual void set_Width(double value);
    /// <summary>
    /// Desired height of the stamp on the page. 
    /// </summary>
    virtual double get_Height();
    /// <summary>
    /// Desired height of the stamp on the page. 
    /// </summary>
    virtual void set_Height(double value);
    /// <summary>
    /// Vertical zooming factor of the stamp. Allows to scale stamp vertically.
    /// </summary>
    double get_ZoomY();
    /// <summary>
    /// Vertical zooming factor of the stamp. Allows to scale stamp vertically.
    /// </summary>
    void set_ZoomY(double value);
    /// <summary>
    /// Zooming factor of the stamp. Allows to scale stamp.
    /// Please note that pair of properties ZoomX and ZoomY allows to set zoom factor for every axe separately. 
    /// Setting of this property changes both ZoomX and ZoomY properties. 
    /// If ZoomX and ZoomY are different then Zoom property returns ZoomX value.
    /// </summary>
    double get_Zoom();
    /// <summary>
    /// Zooming factor of the stamp. Allows to scale stamp.
    /// Please note that pair of properties ZoomX and ZoomY allows to set zoom factor for every axe separately. 
    /// Setting of this property changes both ZoomX and ZoomY properties. 
    /// If ZoomX and ZoomY are different then Zoom property returns ZoomX value.
    /// </summary>
    void set_Zoom(double value);
    /// <summary>
    /// Gets or sets rotate angle of stamp in degrees.
    /// This property allows to set arbitrary rotate angle. 
    /// </summary>
    double get_RotateAngle();
    /// <summary>
    /// Gets or sets rotate angle of stamp in degrees.
    /// This property allows to set arbitrary rotate angle. 
    /// </summary>
    void set_RotateAngle(double value);
    
    /// <summary>
    /// Adds stamp on the page.
    /// </summary>
    /// <param name="page">
    /// The page to add stamp.
    /// </param>
    virtual void Put(System::SharedPtr<Page> page) = 0;
    /// <summary>
    /// Sets stamp Id.
    /// </summary>
    /// <param name="value">New value of Stamp ID.</param>
    void setStampId(int32_t value);
    /// <summary>
    /// Returns stamp ID.
    /// </summary>
    /// <returns>Identifier of the stamp.</returns>
    int32_t getStampId();
    
    Stamp();
    
protected:

    Aspose::Pdf::HorizontalAlignment _horizontalAlignment;
    Aspose::Pdf::VerticalAlignment _verticalAlignment;
    
    /// <summary>
    /// Returns rectangle of the stamp on page.
    /// </summary>
    /// <returns>Stamp rectangle.</returns>
    virtual System::SharedPtr<Rectangle> getRect() = 0;
    /// <summary>
    /// Returns point if the stamp on the page.
    /// </summary>
    /// <param name="page">Page where the stamp is placed.</param>
    /// <returns>Point of the stamp.</returns>
    System::SharedPtr<Point> getPoint(System::SharedPtr<Page> page);
    /// <summary>
    /// This method checks document to which stamp is applied. If the document was changed then cached objects (for example Form XObject, Image, graphic state etc)
    /// Are cleared. This is made to avoid document damage (see for example 36049)
    /// </summary>
    /// <param name="doc"></param>
    void UpdateCache(System::SharedPtr<Document> doc);
    virtual void ClearCache();
    System::SharedPtr<Engine::Data::IPdfDictionary> GetParentResources(System::SharedPtr<Engine::Data::IPdfDictionary> dict);
    System::SharedPtr<Engine::Data::IPdfDictionary> GetResources(System::SharedPtr<Page> page);
    /// <summary>
    /// Add G state on the page for stamp.
    /// </summary>
    /// <param name="page">Page where </param>
    /// <returns>Name of added GState.</returns>
    System::String addExtGState(System::SharedPtr<Page> page);
    /// <summary>
    /// Calculates matrix of the stamp
    /// </summary>
    /// <param name="page">Page for which matrix is requested.</param>
    /// <returns>Matrix of the page.</returns>
    virtual System::SharedPtr<DOM::Matrix> getMatrix(System::SharedPtr<Page> page);
    /// <summary>
    /// Retuns matrix which used for rotation the stamp; 
    /// </summary>
    /// <returns>Rotation matrix for the stamp.</returns>
    virtual System::SharedPtr<DOM::Matrix> getStampRotationMatrix();
    /// <summary>
    /// Returns transformation matrix for page.
    /// </summary>
    /// <param name="page">Page where stamp is placed.</param>
    /// <returns>Rotation matrix of the stamp.</returns>
    virtual System::SharedPtr<DOM::Matrix> getPageRotationMatrix(System::SharedPtr<Page> page);
    /// <summary>
    /// Returns scaling matrix of the stamp.
    /// </summary>
    /// <returns>Scale matrix of the stamp.</returns>
    virtual System::SharedPtr<DOM::Matrix> getScaleMatrix();
    /// <summary>
    /// This matrix used in CM operator; it's must be different for Image Stamp
    /// </summary>
    /// <returns>Requested matrix.</returns>
    virtual System::SharedPtr<DOM::Matrix> getSizeMatrix();
    /// <summary>
    /// Write operators for showing stamp to the page contents.
    /// </summary>
    /// <param name="page">Page where stamp should be drawn.</param>
    /// <param name="name">Name of the stamp.</param>
    virtual void drawStampOnPage(System::SharedPtr<Page> page, System::String name);
    void updateStampId(System::SharedPtr<Engine::Data::IPdfPrimitive> instance);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool _background;
    double _nonstrokingOpacity;
    double _strokingOpacity;
    double _lineWidth;
    double _rotate;
    double _xindent;
    double _yindent;
    System::SharedPtr<DOM::Matrix> _rotationMatrix;
    System::SharedPtr<Rectangle> _stampRect;
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
    double _zoomX;
    double _zoomY;
    int32_t _stampId;
    System::SharedPtr<Engine::Data::IPdfObject> _gState;
    System::SharedPtr<Document> _attachedDocument;
    
    double NormalizeAngle(double angle);
    bool IsBracketed(System::SharedPtr<Page> page);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Stamp__h_

