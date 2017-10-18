#ifndef _Aspose_Pdf_Rectangle___h_
#define _Aspose_Pdf_Rectangle___h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <drawing/rectangle_f.h>
#include <drawing/rectangle.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Redaction; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextPostReplaceFixer; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class CaretAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class CommonFigureAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class ScreenAnnotation; } } } }
namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class PdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { enum class Rotation; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents rectangle.
/// </summary>
//REFACTOR
class ASPOSE_PDF_SHARED_API Rectangle FINAL : public System::Object
{
    typedef Rectangle ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Redaction;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::CaretAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::CommonFigureAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::ScreenAnnotation;
    friend class Aspose::Pdf::ApsUsingConverter;
    
public:

    double get_Width();
    double get_Height();
    double get_LLX();
    void set_LLX(double value);
    double get_LLY();
    void set_LLY(double value);
    double get_URX();
    void set_URX(double value);
    double get_URY();
    void set_URY(double value);
    
    static System::SharedPtr<Rectangle> Empty;
    
    static System::SharedPtr<Rectangle> get_Trivial();
    bool get_IsTrivial();
    bool get_IsEmpty();
    bool get_IsPoint();
    
    Rectangle(double llx, double lly, double urx, double ury);
    
    System::Drawing::Rectangle ToRect();
    static System::SharedPtr<Rectangle> FromRect(System::Drawing::Rectangle src);
    virtual System::String ToString();
    static System::SharedPtr<Rectangle> Parse(System::String value);
    bool Equals(System::SharedPtr<Rectangle> other);
    System::SharedPtr<Rectangle> Intersect(System::SharedPtr<Rectangle> otherRect);
    void Rotate(Rotation angle);
    void Rotate(int32_t angle);
    System::SharedPtr<Rectangle> Clone();
    
protected:

    System::Drawing::RectangleF ToRectangleF();
    System::SharedPtr<Engine::Data::PdfArray> ToArray(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    void _Intersect(System::SharedPtr<Rectangle> otherRect);
    bool IsIntersect(System::SharedPtr<Rectangle> otherRect);
    static void __FreeStaticPointers();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Rectangle"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double _llx;
    double _lly;
    double _urx;
    double _ury;
    bool _isEmpty;
    
    Rectangle(double llx, double lly, double urx, double ury, bool isEmpty);
    
    void normalize();
    System::ArrayPtr<double> GetIntersect(double l1, double r1, double l2, double r2);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Rectangle___h_

