﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "XmpPdfAExtension/XmpPdfAExtensionField.h"

namespace Aspose { namespace Pdf { class XmpPdfAExtensionSchema; } }
namespace Aspose { namespace Pdf { enum class XmpPdfAExtensionCategoryType; } }
namespace Aspose { namespace Pdf { class XmpPdfAExtensionValueType; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Describes a single property. Schema namespace URI: http://www.aiim.org/pdfa/ns/property#
/// Required schema namespace prefix: pdfaProperty
/// </summary>
class ASPOSE_PDF_SHARED_API XmpPdfAExtensionProperty FINAL : public Aspose::Pdf::XmpPdfAExtensionField
{
    typedef XmpPdfAExtensionProperty ThisType;
    typedef Aspose::Pdf::XmpPdfAExtensionField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::XmpPdfAExtensionSchema;
    
public:

    /// <summary>
    /// Gets the property category.
    /// </summary>
    XmpPdfAExtensionCategoryType get_Category();
    
    /// <summary>
    /// Initializes new object.
    /// </summary>
    /// <param name="name">The property name.</param>
    /// <param name="value">The property value.</param>
    /// <param name="valueType">The property value type.</param>
    /// <param name="category">The property category.</param>
    /// <param name="description">The property description.</param>
    XmpPdfAExtensionProperty(System::String name, System::String value, System::String valueType, XmpPdfAExtensionCategoryType category, System::String description);
    
    /// <summary>
    /// Returns the list of xml elements that represent property in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The list of xml elements.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    
protected:

    /// <summary>
    /// Gets or sets the extension value type instance that contains Value of the property in case of user defined type used.
    /// </summary>
    System::SharedPtr<XmpPdfAExtensionValueType> get_ExtValueType();
    /// <summary>
    /// Gets or sets the extension value type instance that contains Value of the property in case of user defined type used.
    /// </summary>
    void set_ExtValueType(System::SharedPtr<XmpPdfAExtensionValueType> value);
    
    /// <summary>
    /// Returns the list of properties found in li element of xml tree. Used during loading of metadata.
    /// </summary>
    /// <param name="rootNode">The root node of properties in xml document.</param>
    /// <returns>Returns the list of properties.</returns>
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionProperty>>> CreateElements(System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Returns the property found in li element of xml tree. Used during loading of metadata.
    /// </summary>
    /// <param name="rootNode">The root node of property in xml document.</param>
    /// <returns>The new property object.</returns>
    static System::SharedPtr<XmpPdfAExtensionProperty> CreateElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Returns the list of xml elements that represent property value in case of user defined valueType.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The list of xml elements.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXmlForExtTypeValues(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    XmpPdfAExtensionCategoryType _category;
    System::SharedPtr<XmpPdfAExtensionValueType> _extType;
    
};

} // namespace Pdf
} // namespace Aspose


