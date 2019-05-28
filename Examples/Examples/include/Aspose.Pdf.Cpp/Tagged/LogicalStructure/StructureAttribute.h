#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/nullable.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureAttributes; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class AttributeKey; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class AttributeName; } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents attribute of structure element.
/// </summary>
class ASPOSE_PDF_SHARED_API StructureAttribute : public System::Object
{
    typedef StructureAttribute ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::StructureAttributes;
    
public:

    /// <summary>
    ///     Gets attribute key.
    /// </summary>
    /// <value>Attribute Key.</value>
    System::SharedPtr<AttributeKey> get_Key();
    /// <summary>
    ///     Gets status of structure attribute value. True if value is set.
    /// </summary>
    bool get_IsInitializedValue();
    
    /// <summary>
    ///     Gets Value Name.
    /// </summary>
    /// <returns>Value Name.</returns>
    System::SharedPtr<AttributeName> GetNameValue();
    /// <summary>
    ///     Gets Value String.
    /// </summary>
    /// <returns>Value String.</returns>
    System::String GetStringValue();
    /// <summary>
    ///     Gets Value Number.
    /// </summary>
    /// <returns>Value Number.</returns>
    System::Nullable<double> GetNumberValue();
    /// <summary>
    ///     Gets Value Name Array.
    /// </summary>
    /// <returns>Value Name Array.</returns>
    System::ArrayPtr<System::SharedPtr<AttributeName>> GetArrayValue();
    /// <summary>
    ///     Gets Value Number Array.
    /// </summary>
    /// <returns>Value Number Array.</returns>
    System::ArrayPtr<System::Nullable<double>> GetArrayNumberValue();
    /// <summary>
    ///     Sets Value Name.
    /// </summary>
    /// <param name="name">Allowable Value Name.</param>
    void SetNameValue(System::SharedPtr<AttributeName> name);
    /// <summary>
    ///     Sets Value String.
    /// </summary>
    /// <param name="value">Value String.</param>
    void SetStringValue(System::String value);
    /// <summary>
    ///     Sets Value Number.
    /// </summary>
    /// <param name="number">Value Number.</param>
    void SetNumberValue(double number);
    /// <summary>
    ///     Sets Value Name Array.
    /// </summary>
    /// <param name="array">Array of allowable Value Names.</param>
    void SetArrayValue(System::ArrayPtr<System::SharedPtr<AttributeName>> array);
    /// <summary>
    ///     Sets Value Number Array.
    /// </summary>
    /// <param name="arrayNumber">Array of Numbers.</param>
    void SetArrayNumberValue(System::ArrayPtr<System::Nullable<double>> arrayNumber);
    /// <summary>
    ///     Sets Value Color.
    /// </summary>
    /// <param name="color">Color.</param>
    void SetColorValue(System::SharedPtr<Color> color);
    /// <summary>
    ///     Sets Value Rectangle.
    /// </summary>
    /// <param name="rectangle">Rectangle.</param>
    void SetRectangleValue(System::SharedPtr<Rectangle> rectangle);
    
    /// <summary>
    ///     Initializes a new instance of the StructureAttribute.
    /// </summary>
    /// <param name="attributeKey">Attribute Key</param>
    StructureAttribute(System::SharedPtr<AttributeKey> attributeKey);
    
protected:

    StructureAttribute(System::SharedPtr<AttributeKey> attributeKey, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEntity);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<AttributeKey> _attributeKey;
    bool _canName;
    bool _canString;
    bool _canNumber;
    bool _canArray;
    bool _canArrayNumber;
    int32_t _arrayCapacity;
    System::SharedPtr<AttributeName> _valueName;
    System::String _valueString;
    System::Nullable<double> _valueNumber;
    System::ArrayPtr<System::SharedPtr<AttributeName>> _valueArray;
    System::ArrayPtr<System::Nullable<double>> _valueArrayNumber;
    
    void ClearValue();
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


