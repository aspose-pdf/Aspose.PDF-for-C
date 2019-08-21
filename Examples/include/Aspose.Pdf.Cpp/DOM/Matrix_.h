#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <drawing/drawing2d/matrix.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class FixedPrint; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextPostReplaceFixer; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentState; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { enum class Rotation; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Fonts { class Matrix; } }

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
class ASPOSE_PDF_SHARED_API Matrix FINAL : public System::Object
{
    typedef Matrix ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::FixedPrint;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::XForm;
    
public:

    /// <summary>
    /// Gets data of Matrix as array.
    /// </summary>
    System::ArrayPtr<double> get_Data();
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
    /// Elements of the matrix.
    /// </summary>
    System::ArrayPtr<float> get_Elements();
    
    /// <summary>
    /// Constructor
    /// creates stanrard 1 to 1 matrix:
    /// [ A B C D E F ] = [ 1, 0, 0, 1, 0, 0]
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// Matrix m = new Matrix();
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
    /// <code lang="C#">
    /// double[] c = new double[] { 1, 0, 0, 1, 10, 20 };
    /// Matrix m = new Matrix(c);
    /// </code>
    /// </example>
    Matrix(System::ArrayPtr<double> matrixArray);
    /// <summary>
    /// Constructor
    /// accepts a matrix with following array representation:
    /// [ A B C D E F ]
    /// </summary>
    /// <param name="matrixArray">Matrix data array.</param>
    Matrix(System::ArrayPtr<float> matrixArray);
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
    /// <code lang="C#">
    /// Matrix m = Matrix.Rotation(Math.PI / 2);
    /// </code>
    /// </example>
    static System::SharedPtr<Matrix> Rotation(double alpha);
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
    static System::SharedPtr<Matrix> Skew(double alpha, double beta);
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
    static double GetAngle(Aspose::Pdf::Rotation rotation);
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
    /// <code lang="C#">
    /// Aspose.Pdf.DOM.Matrix m = new Aspose.Pdf.DOM.Matrix(new double[] { 1, 0, 0, 1, 10, 20 } );
    /// Aspose.Pdf.Rectangle r = new Aspose.Pdf.Rectangle(0, 0, 100, 100);
    /// Aspose.Pdf.Rectangle r1 = m.Transform(r);
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
    /// <code lang="C#">
    /// Matrix m = new Matrix(new double[] { 1, 0, 0, 1, 10, 20 } );
    /// Rectangle r = new Rectangle(0, 0, 100, 100);
    /// Rectangle r1 = m.Transform(r1);
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
    /// <code lang="C#">
    /// Matrix m = new Matrix(1, 0, 0, 1, 3, 3);
    /// </code>
    /// </example>
    Matrix(double a, double b, double c, double d, double e, double f);
    
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
    System::SharedPtr<Matrix> Reverse();
    /// <summary>
    /// Hash-code for object.
    /// </summary>
    /// <returns>Hash-code.</returns>
    virtual int32_t GetHashCode();
    
protected:

    Matrix(System::SharedPtr<System::Drawing::Drawing2D::Matrix> matrix);
    
    /// <summary>
    /// Translates matrix into PDF array obect.
    /// </summary>
    /// <param name="trailer">Trailerable object</param>
    /// <returns>Result of converting</returns>
    System::SharedPtr<Engine::Data::IPdfArray> getMatrix(System::SharedPtr<Engine::Data::ITrailerable> trailer);
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
    static System::SharedPtr<Matrix> Scale(double x, double y);
    /// <summary>
    /// Gets angle (radians) that corresponds rotation of specified Matrix.
    /// </summary>
    /// <param name="matrix">Matrix object.</param>
    /// <returns>Angle value in radians.</returns>
    static double GetAngleExactValue(System::SharedPtr<Matrix> matrix);
    System::SharedPtr<Engine::Data::IPdfArray> ToPdfArray(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    
    Matrix(System::SharedPtr<Engine::Data::IPdfArray> data);
    
    /// <summary>
    /// Creates matrix for given Aspose.Fonts.Matrix
    /// </summary>
    /// <param name="fontsMatrix">Aspose.Fonts.Matrix</param>
    /// <returns>Transformation matrix.</returns>
    static System::SharedPtr<Matrix> FromFontsMatrix(System::SharedPtr<Fonts::Matrix> fontsMatrix);
    static bool IsInt16(double value);
    bool IsInt16Values();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<double> matrixArray;
    
    /// <summary>
    /// Returns full matrix (3x3) corresponding the given matrix. 
    /// </summary>
    /// <returns>Array containing matrix data. Data situated "by lines" i.e. all element of 1st line, all elements of 2nd line... </returns>
    System::ArrayPtr<double> getFullMatrix();
    
};

} // namespace Pdf
} // namespace Aspose


