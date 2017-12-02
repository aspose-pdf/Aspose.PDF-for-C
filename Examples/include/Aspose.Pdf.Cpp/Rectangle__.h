#ifndef _Aspose_Pdf_Rectangle___h_
#define _Aspose_Pdf_Rectangle___h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Width of rectangle.
    /// </summary>
    double get_Width();
    /// <summary>
    /// Height of rectangle.
    /// </summary>
    double get_Height();
    /// <summary>
    /// X-coordinate of lower - left corner.
    /// </summary>
    double get_LLX();
    /// <summary>
    /// X-coordinate of lower - left corner.
    /// </summary>
    void set_LLX(double value);
    /// <summary>
    /// Y - coordinate of lower-left corner.
    /// </summary>
    double get_LLY();
    /// <summary>
    /// Y - coordinate of lower-left corner.
    /// </summary>
    void set_LLY(double value);
    /// <summary>
    /// X - coordinate of upper-right corner.
    /// </summary>
    double get_URX();
    /// <summary>
    /// X - coordinate of upper-right corner.
    /// </summary>
    void set_URX(double value);
    /// <summary>
    /// Y - coordinate of upper-right corner.
    /// </summary>
    double get_URY();
    /// <summary>
    /// Y - coordinate of upper-right corner.
    /// </summary>
    void set_URY(double value);
    
    static System::SharedPtr<Rectangle> Empty;
    
    /// <summary>
    /// Initializes trivial rectangle i.e. rectangle with zero position and size.
    /// </summary>
    static System::SharedPtr<Rectangle> get_Trivial();
    /// <summary>
    /// Checks if rectangle is trivial i.e. has zero size and position.
    /// </summary>
    bool get_IsTrivial();
    /// <summary>
    /// Checks if rectangle is empty.
    /// </summary>
    bool get_IsEmpty();
    /// <summary>
    /// Checks if rectangle is point i.e. LLX is equal URX and LLY is equal URY.
    /// </summary>
    bool get_IsPoint();
    
    /// <summary>
    /// Constructor of Rectangle.
    /// </summary>
    /// <param name="llx">X of lower left corner.</param>
    /// <param name="lly">Y of lower left corner.</param>
    /// <param name="urx">X of upper right corner.</param>
    /// <param name="ury">Y of upper right corner.</param>        
    Rectangle(double llx, double lly, double urx, double ury);
    
    /// <summary>
    /// Converts rectangle to instance of System.Drawing.Rectangle. Floating-point positions and size are truncated.
    /// </summary>
    /// <returns>Result of conversion.</returns>
    System::Drawing::Rectangle ToRect();
    /// <summary>
    /// Initializes new rectangle from given instance of System.Drawing.Rectangle.
    /// </summary>
    /// <param name="src">Source rectangle which position and size will be set to new rectangle.</param>
    /// <returns>New rectangle.</returns>
    static System::SharedPtr<Rectangle> FromRect(System::Drawing::Rectangle src);
    /// <summary>
    /// Gets rectangle string representation.
    /// </summary>
    /// <returns>
    /// String has format llx,lly,urx,ury.
    /// </returns>
    virtual System::String ToString();
    /// <summary>
    /// Try to parse string and extract from it rectangle components llx, lly, urx, ury.
    /// </summary>
    /// <param name="value">
    /// String to parse.
    /// </param>
    /// <returns>
    /// Rectangle object.
    /// </returns>
    static System::SharedPtr<Rectangle> Parse(System::String value);
    /// <summary>
    /// Check if rectangles are equal i.e. hase same position and sizes.
    /// </summary>
    /// <param name="other">Rectangle which will be compared.</param>
    /// <returns>True if rectangles are eqals, false otherwise.</returns>
    bool Equals(System::SharedPtr<Rectangle> other);
    /// <summary>
    /// Intersects to rectangles. 
    /// </summary>
    /// <param name="otherRect">Rectangle to which this recatangle be intersected.</param>
    /// <returns>Intersection of rectangles; null if rectangles are not intersected.</returns>
    System::SharedPtr<Rectangle> Intersect(System::SharedPtr<Rectangle> otherRect);
    /// <summary>
    /// Rotate rectangle by the specified angle.
    /// </summary>
    /// <param name="angle">Angle of rotation. Member of Rotation enumeration.</param>
    void Rotate(Rotation angle);
    /// <summary>
    /// Rotate rectangle by the specified angle.
    /// </summary>
    /// <param name="angle">Angle of rotation in degrees between 0 and 360.</param>
    void Rotate(int32_t angle);
    /// <summary>
    /// Clones the Rectangle object.
    /// </summary>
    /// <returns>Clone object.</returns>
    System::SharedPtr<Rectangle> Clone();
    
protected:

    System::Drawing::RectangleF ToRectangleF();
    System::SharedPtr<Engine::Data::PdfArray> ToArray(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    /// <summary>
    /// Intersects rectangles. OBolsete method. Please use Intersect instead. 
    /// </summary>
    /// <param name="otherRect"></param>
    /// <returns></returns>
    void _Intersect(System::SharedPtr<Rectangle> otherRect);
    /// <summary>
    /// Determines whether this rectangle intersects with other rectangle.
    /// </summary>
    /// <param name="otherRect">Intersection will be tested with specified rectangle.</param>
    /// <returns>True if this rectangle intersects with specified rectangle. Otherwise false.</returns>
    bool IsIntersect(System::SharedPtr<Rectangle> otherRect);
    static void __FreeStaticPointers();
    
private:

    double _llx;
    double _lly;
    double _urx;
    double _ury;
    bool _isEmpty;
    
    /// <summary>
    /// Constructor of Rectangle.
    /// </summary>
    /// <param name="llx">X of lower left corner.</param>
    /// <param name="lly">Y of lower left corner.</param>
    /// <param name="urx">X of upper right corner.</param>
    /// <param name="ury">Y of upper right corner.</param>        
    Rectangle(double llx, double lly, double urx, double ury, bool isEmpty);
    
    void normalize();
    System::ArrayPtr<double> GetIntersect(double l1, double r1, double l2, double r2);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Rectangle___h_

