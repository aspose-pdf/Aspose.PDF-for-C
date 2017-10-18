#ifndef _Aspose_Pdf_Stamp__h_
#define _Aspose_Pdf_Stamp__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    bool get_Background();
    void set_Background(bool value);
    double get_Opacity();
    void set_Opacity(double value);
    double get_OutlineOpacity();
    void set_OutlineOpacity(double value);
    double get_OutlineWidth();
    void set_OutlineWidth(double value);
    Rotation get_Rotate();
    void set_Rotate(Rotation value);
    double get_XIndent();
    void set_XIndent(double value);
    double get_YIndent();
    void set_YIndent(double value);
    Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    double get_LeftMargin();
    void set_LeftMargin(double value);
    double get_RightMargin();
    void set_RightMargin(double value);
    double get_BottomMargin();
    void set_BottomMargin(double value);
    double get_TopMargin();
    void set_TopMargin(double value);
    double get_ZoomX();
    void set_ZoomX(double value);
    virtual double get_Width();
    virtual void set_Width(double value);
    virtual double get_Height();
    virtual void set_Height(double value);
    double get_ZoomY();
    void set_ZoomY(double value);
    double get_Zoom();
    void set_Zoom(double value);
    double get_RotateAngle();
    void set_RotateAngle(double value);
    
    virtual void Put(System::SharedPtr<Page> page) = 0;
    void setStampId(int32_t value);
    int32_t getStampId();
    
    Stamp();
    
protected:

    Aspose::Pdf::HorizontalAlignment _horizontalAlignment;
    Aspose::Pdf::VerticalAlignment _verticalAlignment;
    
    virtual System::SharedPtr<Rectangle> getRect() = 0;
    System::SharedPtr<Point> getPoint(System::SharedPtr<Page> page);
    void UpdateCache(System::SharedPtr<Document> doc);
    virtual void ClearCache();
    System::SharedPtr<Engine::Data::IPdfDictionary> GetParentResources(System::SharedPtr<Engine::Data::IPdfDictionary> dict);
    System::SharedPtr<Engine::Data::IPdfDictionary> GetResources(System::SharedPtr<Page> page);
    System::String addExtGState(System::SharedPtr<Page> page);
    virtual System::SharedPtr<DOM::Matrix> getMatrix(System::SharedPtr<Page> page);
    virtual System::SharedPtr<DOM::Matrix> getStampRotationMatrix();
    virtual System::SharedPtr<DOM::Matrix> getPageRotationMatrix(System::SharedPtr<Page> page);
    virtual System::SharedPtr<DOM::Matrix> getScaleMatrix();
    virtual System::SharedPtr<DOM::Matrix> getSizeMatrix();
    virtual void drawStampOnPage(System::SharedPtr<Page> page, System::String name);
    void updateStampId(System::SharedPtr<Engine::Data::IPdfPrimitive> instance);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Stamp"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

