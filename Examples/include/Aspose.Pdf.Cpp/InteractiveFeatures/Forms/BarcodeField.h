#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_BarcodeField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_BarcodeField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Forms/TextBoxField.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class Symbology; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class represents barcode field.
/// </summary>
class ASPOSE_PDF_SHARED_API BarcodeField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField
{
    typedef BarcodeField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    
public:

    int32_t get_Resolution();
    System::String get_Caption();
    Aspose::Pdf::InteractiveFeatures::Forms::Symbology get_Symbology();
    int32_t get_XSymWidth();
    int32_t get_XSymHeight();
    int32_t get_ECC();
    
    BarcodeField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    BarcodeField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    BarcodeField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    virtual void UpdateAppearance(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BarcodeField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    void assertPMD();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> getPMD();
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_BarcodeField_h_

