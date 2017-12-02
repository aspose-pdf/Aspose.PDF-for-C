#ifndef _Aspose_Pdf_DOM_Matrix___h_
#define _Aspose_Pdf_DOM_Matrix___h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { enum class Rotation; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace DOM {

/// <summary>
/// The <b>Aspose.Pdf.DOM</b> namespace provides several aditional support classes for DOM.
/// </summary>
class ASPOSE_PDF_SHARED_API NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Class represents transformation matrix. 
/// </summary>
class ASPOSE_PDF_SHARED_API Matrix FINAL : public System::Object
{
    typedef Matrix ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::XForm;
    
public:

    /// <summary>
    /// A member of the transformation matrix.
    /// </summary>
    double get_A();
    /// <summary>
    /// A member of the transformation matrix.
    /// </summary>
    void set_A(double value);
    /// <summary>
    /// B member of the transformation matrix.
    /// </summary>
    double get_B();
    /// <summary>
    /// B member of the transformation matrix.
    /// </summary>
    void set_B(double value);
    /// <summary>
    /// C member of the transformation matrix.
    /// </summary>
    double get_C();
    /// <summary>
    /// C member of the transformation matrix.
    /// </summary>
    void set_C(double value);
    /// <summary>
    /// D member of the transformation matrix.
    /// </summary>
    double get_D();
    /// <summary>
    /// D member of the transformation matrix.
    /// </summary>
    void set_D(double value);
    /// <summary>
    /// E member of the transformation matrix.
    /// </summary>
    double get_E();
    /// <summary>
    /// E member of the transformation matrix.
    /// </summary>
    void set_E(double value);
    /// <summary>
    /// F member of the transformation matrix.
    /// </summary>
    double get_F();
    /// <summary>
    /// F member of the transformation matrix.
    /// </summary>
    void set_F(double value);
    
    /// <summary>
    /// Constructor
    /// creates stanrard 1 to 1 matrix:
    /// [ A B C D E F ] = [ 1, 0, 0, 1, 0, 0]
    /// </summary>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> m = System::MakeObject<Aspose::Pdf::DOM::Matrix>();
    /// </code>
    /// </example>
    Matrix();
    /// <summary>
    /// Constructor
    /// accepts a matrix with following array representation:
    /// [ A B C D E F ]
    /// </summary>
    /// <param name="matrixArray">Matrix data array.</param>
    /// <example>
    /// 
    /// <code>
    /// System::ArrayPtr<double> c = System::MakeArray<double>({1, 0, 0, 1, 10, 20});
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> m = System::MakeObject<Aspose::Pdf::DOM::Matrix>(c);
    /// </code>
    /// </example>
    Matrix(System::ArrayPtr<double> matrixArray);
    /// <summary>
    /// Constructor
    /// accepts a matrix to create a copy
    /// </summary>
    /// <param name="matrix">Matrix object.</param>
    Matrix(System::SharedPtr<Matrix> matrix);
    
    /// <summary>
    /// Returns text reporesentation of the matrix. 
    /// </summary>
    /// <returns>String representation for the matrix</returns>
    virtual System::String ToString();
    /// <summary>
    /// Compares matrix agains other object.
    /// </summary>
    /// <param name="obj">Object to compare.</param>
    /// <returns>Returns true is other object is Matrix and all matrix member are equal to correspondim members of the matrix</returns>
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    /// <summary>
    /// Creates matrix for given rotation angle. 
    /// </summary>
    /// <param name="alpha">Rotation angle in radians.</param>
    /// <returns>Transformation matrix.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> m = Aspose::Pdf::DOM::Matrix::Rotation(System::Math::PI / 2);
    /// </code>
    /// </example>
    static System::SharedPtr<Matrix> Rotation(double alpha);
    /// <summary>
    /// Transaltes rotation into angle (degrees)
    /// </summary>
    /// <param name="rotation">Rotation value.</param>
    /// <example>
    /// 
    /// <code>
    /// double angle = Aspose::Pdf::DOM::Matrix::GetAngle(Aspose::Pdf::Rotation::on90);
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> m = Aspose::Pdf::DOM::Matrix::Rotation(angle);
    /// </code>
    /// </example>
    /// <returns>Angle value.</returns>
    static double GetAngle(Aspose::Pdf::Rotation rotation);
    /// <summary>
    /// Multiplies the matrix by other matrix.
    /// </summary>
    /// <param name="other">Multiplier matrix.</param>
    /// <returns>Result of multiplication.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> a = System::MakeObject<Aspose::Pdf::DOM::Matrix>(System::MakeArray<double>({1, 0, 0, 1, 10, 20}));
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> b = System::MakeObject<Aspose::Pdf::DOM::Matrix>(System::MakeArray<double>({0, -1, 1, 0, 0, 0}));
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> c = a->Multiply(b);
    /// </code>
    /// </example>
    System::SharedPtr<Matrix> Multiply(System::SharedPtr<Matrix> other);
    /// <summary>
    /// Adds matrix to other matrix.
    /// </summary>
    /// <param name="other">Matrix to be added.</param>
    /// <returns>Result of matrix add.</returns>
    System::SharedPtr<Matrix> Add(System::SharedPtr<Matrix> other);
    /// <summary>
    /// Transforms point using this matrix.
    /// </summary>
    /// <param name="p">Point which will be transformed.</param>
    /// <returns>Transformation result.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> m = System::MakeObject<Aspose::Pdf::DOM::Matrix>(System::MakeArray<double>({1, 0, 0, 1, 10, 20}));
    /// System::SharedPtr<Aspose::Pdf::Point> p = System::MakeObject<Aspose::Pdf::Point>(5, 5);
    /// System::SharedPtr<Aspose::Pdf::Point> p1 = m->Transform(p);
    /// </code>
    /// </example>
    System::SharedPtr<Point> Transform(System::SharedPtr<Point> p);
    /// <summary>
    /// Transformes rectangle.
    /// If angle is not 90 * N degrees then bounding rectangle is returned.
    /// </summary>
    /// <param name="rect">Rectangle to be transformed.</param>
    /// <returns>Transformed rectangle.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> m = System::MakeObject<Aspose::Pdf::DOM::Matrix>(System::MakeArray<double>({1, 0, 0, 1, 10, 20}));
    /// System::SharedPtr<Aspose::Pdf::Rectangle> r = System::MakeObject<Aspose::Pdf::Rectangle>(0, 0, 100, 100);
    /// System::SharedPtr<Aspose::Pdf::Rectangle> r1 = m->Transform(r);
    /// </code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::Rectangle> Transform(System::SharedPtr<Aspose::Pdf::Rectangle> rect);
    
    /// <summary>
    /// Initializes transformation matrix with specified coefficients.
    /// </summary>
    /// <param name="a">A matrix value.</param>
    /// <param name="b">B matrix value.</param>
    /// <param name="c">C matrix value.</param>
    /// <param name="d">D matrix value.</param>
    /// <param name="e">E matrix value.</param>
    /// <param name="f">F matrix value.</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> m = System::MakeObject<Aspose::Pdf::DOM::Matrix>(1, 0, 0, 1, 3, 3);
    /// </code>
    /// </example>
    Matrix(double a, double b, double c, double d, double e, double f);
    
    /// <summary>
    /// Calculates reverse matrix.
    /// </summary>
    /// <returns>Reverse matrix.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> m = Aspose::Pdf::DOM::Matrix::Rotation(System::Math::PI / 2);
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> m1 = m->Reverse();
    /// </code>
    /// </example>
    System::SharedPtr<Matrix> Reverse();
    /// <summary>
    /// Hash-code for object.
    /// </summary>
    /// <returns>Hash-code.</returns>
    virtual int32_t GetHashCode();
    
protected:

    /// <summary>
    /// Translates matrix into PDF array obect.
    /// </summary>
    /// <param name="trailer">Trailerable object</param>
    /// <returns>Result of converting</returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> getMatrix(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    /// <summary>
    /// Creates matrix for given rotation angle. 
    /// </summary>
    /// <param name="alpha">Skew x angle in radians.</param>
    /// <param name="beta">Skew y angle in radians.</param>
    /// <returns>Transformation matrix.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::DOM::Matrix> m = Aspose::Pdf::DOM::Matrix::Skew(System::Math::PI / 2, System::Math::PI / 2);
    /// </code>
    /// </example>
    static System::SharedPtr<Matrix> Skew(double alpha, double beta);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<double> matrixArray;
    
    /// <summary>
    /// Returns full matrix (3x3) corresponding the given matrix. 
    /// </summary>
    /// <returns>Array containing matrix data. Data situated "by lines" i.e. all element of 1st line, all elements of 2nd line... </returns>
    System::ArrayPtr<double> getFullMatrix();
    
};

} // namespace DOM
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_DOM_Matrix___h_

