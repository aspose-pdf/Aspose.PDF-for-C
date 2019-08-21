#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DView; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { enum class Rotation; } }

namespace Aspose {

namespace Pdf {

/*
    /// <summary>
    /// The <b>Aspose.Pdf.DOM</b> namespace provides several aditional support classes for DOM.
    /// </summary>
    [System.Runtime.CompilerServices.CompilerGeneratedAttribute()]
    class NamespaceDoc
    {
    } */
/// <summary>
/// Class represents transformation matrix. 
/// </summary>
class ASPOSE_PDF_SHARED_API Matrix3D FINAL : public System::Object
{
    typedef Matrix3D ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PDF3DView;
    
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
    /// G member of the transformation matrix.
    /// </summary>
    double get_G();
    /// <summary>
    /// G member of the transformation matrix.
    /// </summary>
    void set_G(double value);
    /// <summary>
    /// H member of the transformation matrix.
    /// </summary>
    double get_H();
    /// <summary>
    /// H member of the transformation matrix.
    /// </summary>
    void set_H(double value);
    /// <summary>
    /// I member of the transformation matrix.
    /// </summary>
    double get_I();
    /// <summary>
    /// I member of the transformation matrix.
    /// </summary>
    void set_I(double value);
    /// <summary>
    /// Tx member of the transformation matrix.
    /// </summary>
    double get_Tx();
    /// <summary>
    /// Tx member of the transformation matrix.
    /// </summary>
    void set_Tx(double value);
    /// <summary>
    /// Ty member of the transformation matrix.
    /// </summary>
    double get_Ty();
    /// <summary>
    /// Ty member of the transformation matrix.
    /// </summary>
    void set_Ty(double value);
    /// <summary>
    /// Tz member of the transformation matrix.
    /// </summary>
    double get_Tz();
    /// <summary>
    /// Tz member of the transformation matrix.
    /// </summary>
    void set_Tz(double value);
    
    /// <summary>
    /// Constructor
    /// creates stanrard 1 to 1 matrix:
    /// [ A B C D E F G H I Tx Ty Tz] = [ 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 , 0]
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// Matrix3D m = new Matrix3D();
    /// </code>
    /// </example>
    Matrix3D();
    /// <summary>
    /// Constructor
    /// accepts a matrix with following array representation:
    /// [ A B C D E F G H I Tx Ty Tz]
    /// </summary>
    /// <param name="matrix3DArray">Matrix data array.</param>
    /// <example>
    /// <code lang="C#">
    /// double[] c = new double[] { 1, 0, 0, 1, 10, 20, 1, 0, 0, 17, 40, 13 };
    /// Matrix3D m = new Matrix3D(c);
    /// </code>
    /// </example>
    Matrix3D(System::ArrayPtr<double> matrix3DArray);
    /// <summary>
    /// Constructor
    /// accepts a matrix to create a copy
    /// </summary>
    /// <param name="matrix">Matrix3D object.</param>
    Matrix3D(System::SharedPtr<Matrix3D> matrix);
    
    /// <summary>
    /// Returns text reporesentation of the matrix. 
    /// </summary>
    /// <returns>String representation for the matrix</returns>
    virtual System::String ToString();
    /// <summary>
    /// Compares matrix agains other object.
    /// </summary>
    /// <param name="obj">Object to compare.</param>
    /// <returns>Returns true is other object is Matrix3D and all matrix members are equal to corresponding members of the matrix</returns>
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    /// <summary>
    /// Creates matrix for given rotation angle. 
    /// </summary>
    /// <param name="alpha">Rotation angle in radians.</param>
    /// <returns>Transformation matrix.</returns>
    /// <example>
    /// <code lang="C#">
    /// Matrix m = Matrix.Rotation(Math.PI / 2);
    /// </code>
    /// </example>
    //public static Matrix Rotation(double alpha)
    //{
    //   return new Matrix(new double[] {Math.Cos(alpha), Math.Sin(alpha), -Math.Sin(alpha), Math.Cos(alpha), 0, 0});
    //}
    /// <summary>
    /// Creates matrix for given rotation angle. 
    /// </summary>
    /// <param name="alpha">Skew x angle in radians.</param>
    /// <param name="beta">Skew y angle in radians.</param>
    /// <returns>Transformation matrix.</returns>
    /// <example>
    /// <code lang="C#">
    /// Matrix m = Matrix.Skew(Math.PI / 2, Math.PI / 2);
    /// </code>
    /// </example>
    //internal static Matrix Skew(double alpha, double beta)
    //{
    //    return new Matrix(new double[] { 1, Math.Tan(alpha), Math.Tan(alpha), 1, 0, 0 });
    //}
    /// <summary>
    /// Creates matrix for given scale. 
    /// </summary>
    /// <param name="x">Scale x.</param>
    /// <param name="y">Scale y.</param>
    /// <returns>Transformation matrix.</returns>
    /// <example>
    /// <code lang="C#">
    /// Matrix m = Matrix.Scale(x, y);
    /// </code>
    /// </example>
    //internal static Matrix Scale(double x, double y)
    //{
    //    return new Matrix(new double[] { x, 0, 0, y, 0, 0 });
    //}
    /// <summary>
    /// Transaltes rotation into angle (degrees)
    /// </summary>
    /// <param name="rotation">Rotation value.</param>
    /// <example>
    /// <code lang="C#">
    /// double angle = Matrix.GetAngle(Rotation.on90);
    /// Matrix m = Matrix.Rotation(angle);
    /// </code>
    /// </example>
    /// <returns>Angle value.</returns>
    static double GetAngle(Rotation rotation);
    /// <summary>
    /// Multiplies the matrix by other matrix.
    /// </summary>
    /// <param name="other">Multiplier matrix.</param>
    /// <returns>Result of multiplication.</returns>
    /// <example>
    /// <code lang="C#">
    /// Matrix a = new Matrix(new double[] { 1, 0, 0, 1, 10, 20 });
    /// Matrix b = new Matrix(new double[] { 0, -1, 1, 0, 0, 0 } );
    /// Matrix c= a.Multiply(b);
    /// </code>
    /// </example>
    //public Matrix3D Multiply(Matrix3D other)
    //{
    //    double[] m1 = getFullMatrix3D();
    //    double[] m2 = other.getFullMatrix3D();
    //    double[] m = new double[9];
    //    const int N = 3;
    //    for (int row = 0; row < N; row++)
    //    {
    //        for (int col = 0; col < N; col++)
    //        {
    //            double r = 0;
    //            for (int k = 0; k < N; k++)
    //            {
    //                r += m1[row*N + k]*m2[k*N + col];
    //            }
    //            m[row*N + col] = r;
    //        }
    //    }
    //    return new Matrix3D(new double[] {m[0], m[1], m[3], m[4], m[6], m[7]});
    //}
    /// <summary>
    /// Adds matrix to other matrix.
    /// </summary>
    /// <param name="other">Matrix to be added.</param>
    /// <returns>Result of matrix add.</returns>
    System::SharedPtr<Matrix3D> Add(System::SharedPtr<Matrix3D> other);
    
    /// <summary>
    /// Transforms point using this matrix.
    /// </summary>
    /// <param name="p">Point which will be transformed.</param>
    /// <returns>Transformation result.</returns>
    /// <example>
    /// <code lang="C#">
    /// Matrix m = new Matrix(new double[] { 1, 0, 0, 1, 10, 20 } );
    /// Point p = new Point(5, 5);
    /// Point p1 = m.Transform(p);
    /// </code>
    /// </example>
    //public Point Transform(Point p)
    //{
    //    return new Point(p.X*A + p.Y*C + E, p.X*B + p.Y*D + F);
    //}
    /// <summary>
    /// Transformes rectangle.
    /// If angle is not 90 * N degrees then bounding rectangle is returned.
    /// </summary>
    /// <param name="rect">Rectangle to be transformed.</param>
    /// <returns>Transformed rectangle.</returns>
    /// <example>
    /// <code lang="C#">
    /// Matrix m = new Matrix(new double[] { 1, 0, 0, 1, 10, 20 } );
    /// Rectangle r = new Rectangle(0, 0, 100, 100);
    /// Rectangle r1 = m.Transform(r1);
    /// </code>
    /// </example>
    //public Aspose.Pdf.Rectangle Transform(Aspose.Pdf.Rectangle rect)
    //{
    //    Point[] points = new Point[]
    //    {
    //        new Point(rect.LLX, rect.LLY),
    //        new Point(rect.LLX, rect.URY),
    //        new Point(rect.URX, rect.LLY),
    //        new Point(rect.URX, rect.URY)
    //    };
    //    double x1 = 0;
    //    double x2 = 0;
    //    double y1 = 0;
    //    double y2 = 0;
    //    for (int i = 0; i < points.Length; i++)
    //    {
    //        Point transformedPoint = Transform(points[i]);
    //        if (i == 0)
    //        {
    //            x1 = x2 = transformedPoint.X;
    //            y1 = y2 = transformedPoint.Y;
    //        }
    //        else
    //        {
    //            x1 = Math.Min(x1, transformedPoint.X);
    //            x2 = Math.Max(x2, transformedPoint.X);
    //            y1 = Math.Min(y1, transformedPoint.Y);
    //            y2 = Math.Max(y2, transformedPoint.Y);
    //        }
    //    }
    //    return new Aspose.Pdf.Rectangle(x1, y1, x2, y2);
    //}
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
    /// <code lang="C#">
    /// Matrix m = new Matrix(1, 0, 0, 1, 3, 3);
    /// </code>
    /// </example>
    Matrix3D(double a, double b, double c, double d, double e, double f, double g, double h, double i, double tx, double ty, double tz);
    
    /// <summary>
    /// Calculates reverse matrix.
    /// </summary>
    /// <returns>Reverse matrix.</returns>
    /// <example>
    /// <code lang="C#">
    /// Matrix m = Matrix.Rotation(Math.PI / 2);
    /// Matrix m1 = m.Reverse();
    /// </code>
    /// </example>
    //public Matrix Reverse()
    //{
    //    double det = A*D - C*B;
    //    return new Matrix(
    //        D/det,
    //        -B/det,
    //        -C/det,
    //        A/det,
    //        (C*F - E*D)/det,
    //        -(A*F - E*B)/det);
    //}
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
    System::SharedPtr<Engine::Data::IPdfArray> getMatrix3D(System::SharedPtr<Engine::Data::ITrailerable> trailer);
    System::SharedPtr<Engine::Data::IPdfArray> ToPdfArray(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    
    Matrix3D(System::SharedPtr<Engine::Data::IPdfArray> data);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<double> matrix3DArray;
    
    /// <summary>
    /// Returns full matrix (4x4) corresponding the given matrix. 
    /// </summary>
    /// <returns>Array containing matrix data. Data situated "by lines" i.e. all element of 1st line, all elements of 2nd line... </returns>
    System::ArrayPtr<double> getFullMatrix3D();
    
};

} // namespace Pdf
} // namespace Aspose


