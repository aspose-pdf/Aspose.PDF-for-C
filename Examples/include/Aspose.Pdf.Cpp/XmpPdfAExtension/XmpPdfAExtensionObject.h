#ifndef _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionObject_h_
#define _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionObject_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_element.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class XmpPdfAExtensionField; } }
namespace Aspose { namespace Pdf { class XmpPdfAExtensionValueType; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the base class for field, property, value type instances.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT XmpPdfAExtensionObject : public System::Object
{
    typedef XmpPdfAExtensionObject ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::XmpPdfAExtensionField;
    friend class Aspose::Pdf::XmpPdfAExtensionValueType;
    
public:

    /// <summary>
    /// Gets the description.
    /// </summary>
    System::String get_Description();
    /// <summary>
    /// Gets or sets the value.
    /// </summary>
    System::String get_Value();
    /// <summary>
    /// Gets or sets the value.
    /// </summary>
    void set_Value(System::String value);
    
    /// <summary>
    /// Returns the list of xml elements that represent object in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>>The list of xml elements.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument) = 0;
    
protected:

    /// <summary>
    /// Initializes new object.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <param name="description">The description.</param>
    XmpPdfAExtensionObject(System::String value, System::String description);
    
private:

    System::String _description;
    System::String _value;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionObject_h_

