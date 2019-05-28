#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class WatermarkAnnotation; } } }
namespace Aspose { namespace Pdf { class Matrix; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represent Fixed print data of Watermark Annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API FixedPrint : public System::Object
{
    typedef FixedPrint ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    
public:

    System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix();
    void set_Matrix(System::SharedPtr<Aspose::Pdf::Matrix> value);
    double get_HorizontalTranslation();
    void set_HorizontalTranslation(double value);
    double get_VerticalTranslation();
    void set_VerticalTranslation(double value);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDictionary();
    
    FixedPrint(System::SharedPtr<WatermarkAnnotation> owner);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Matrix> _matrix;
    double _h;
    double _v;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDictionary;
    System::SharedPtr<WatermarkAnnotation> _owner;
    
    System::SharedPtr<WatermarkAnnotation> get_Owner();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


