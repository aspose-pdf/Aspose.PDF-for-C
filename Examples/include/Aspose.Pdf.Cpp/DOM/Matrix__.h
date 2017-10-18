#ifndef _Aspose_Pdf_DOM_Matrix___h_
#define _Aspose_Pdf_DOM_Matrix___h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "NamespaceDoc"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_A();
    void set_A(double value);
    double get_B();
    void set_B(double value);
    double get_C();
    void set_C(double value);
    double get_D();
    void set_D(double value);
    double get_E();
    void set_E(double value);
    double get_F();
    void set_F(double value);
    
    Matrix();
    Matrix(System::ArrayPtr<double> matrixArray);
    Matrix(System::SharedPtr<Matrix> matrix);
    
    virtual System::String ToString();
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    static System::SharedPtr<Matrix> Rotation(double alpha);
    static double GetAngle(Aspose::Pdf::Rotation rotation);
    System::SharedPtr<Matrix> Multiply(System::SharedPtr<Matrix> other);
    System::SharedPtr<Matrix> Add(System::SharedPtr<Matrix> other);
    System::SharedPtr<Point> Transform(System::SharedPtr<Point> p);
    System::SharedPtr<Aspose::Pdf::Rectangle> Transform(System::SharedPtr<Aspose::Pdf::Rectangle> rect);
    
    Matrix(double a, double b, double c, double d, double e, double f);
    
    System::SharedPtr<Matrix> Reverse();
    virtual int32_t GetHashCode();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> getMatrix(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    static System::SharedPtr<Matrix> Skew(double alpha, double beta);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Matrix"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::ArrayPtr<double> matrixArray;
    
    System::ArrayPtr<double> getFullMatrix();
    
};

} // namespace DOM
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_DOM_Matrix___h_

