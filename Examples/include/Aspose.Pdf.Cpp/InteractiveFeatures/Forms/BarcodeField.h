#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_BarcodeField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_BarcodeField_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets the resolution, in dots-per-inch (dpi), at which the barcode object is rendered.
    /// </summary>
    int32_t get_Resolution();
    /// <summary>
    /// Gets the caption of the barcode object.
    /// </summary>
    System::String get_Caption();
    /// <summary>
    /// Specifies which barcode or glyph technology is to be used on this annotation,
    /// see <see cref="Symbology"/> for details.
    /// </summary>
    Aspose::Pdf::InteractiveFeatures::Forms::Symbology get_Symbology();
    /// <summary>
    /// Gets The horizontal distance, in pixels, between two barcode modules.
    /// </summary>
    int32_t get_XSymWidth();
    /// <summary>
    /// Gets the the vertical distance between two barcode modules, measured in pixels. 
    /// The ratio XSymHeight/XSymWidth shall be an integer value. 
    /// For PDF417, the acceptable ratio range is from 1 to 4. For QRCode and DataMatrix, 
    /// this ratio shall always be 1
    /// </summary>
    int32_t get_XSymHeight();
    /// <summary>
    /// Gets an integer value representing the error correction coefficient. 
    /// For PDF417, shall be from 0 to 8. For QRCode, shall be from 0 to 3 
    /// (0 for �L�, 1 for �M�, 2 for �Q�, and 3 for �H�).
    /// </summary>
    int32_t get_ECC();
    
    /// <summary>
    /// Initializes new instance of the <see cref="BarcodeField"/> class.
    /// </summary>
    /// <param name="page">
    /// The page where to place new barcode.
    /// </param>
    /// <param name="rect">
    /// Barcode sizes given in rectangle.
    /// </param>
    BarcodeField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initializes new instance of the <see cref="BarcodeField"/> class.
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    /// <param name="rect">Rectangle where field will be placed on the page.</param>
    BarcodeField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    BarcodeField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    virtual void UpdateAppearance(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    
private:

    void assertPMD();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> getPMD();
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_BarcodeField_h_

