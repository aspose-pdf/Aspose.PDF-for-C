#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Data/IPdfPrimitive.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Encoding { class IPdfEncoding; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfStringExtractionInfo; } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Data {

/// <summary>
/// This interface represents pdf string.
/// </summary>
class IPdfString : public virtual Aspose::Pdf::Engine::Data::IPdfPrimitive
{
    typedef IPdfString ThisType;
    typedef Aspose::Pdf::Engine::Data::IPdfPrimitive BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets a value indicating whether this instance is hexadecimal.
    /// </summary>
    /// <value>
    /// 	<c>true</c> if this instance is hexadecimal; otherwise, <c>false</c>.
    /// </value>
    virtual bool get_IsHexadecimal() = 0;
    /// <summary>
    /// Gets a value indicating whether this instance is hexadecimal.
    /// </summary>
    /// <value>
    /// 	<c>true</c> if this instance is hexadecimal; otherwise, <c>false</c>.
    /// </value>
    virtual void set_IsHexadecimal(bool value) = 0;
    /// <summary>
    /// Gets the string (ANSII).
    /// </summary>
    /// <value>The string.</value>
    virtual System::String get_String() = 0;
    /// <summary>
    /// Gets the human readable string (BE-16/PDFDocEncoding).
    /// </summary>
    /// <value>The human readable string.</value>
    virtual System::String get_ExtractedString() = 0;
    /// <summary>
    /// Gets the human readable string (BE-16/PDFDocEncoding).
    /// </summary>
    /// <value>The human readable string.</value>
    virtual System::String get_ExtractedStringLigaturized() = 0;
    /// <summary>
    /// Gets or sets the encoding.
    /// </summary>
    /// <value>The encoding.</value>
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Encoding::IPdfEncoding> get_Encoding() = 0;
    /// <summary>
    /// Gets or sets the encoding.
    /// </summary>
    /// <value>The encoding.</value>
    virtual void set_Encoding(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Encoding::IPdfEncoding> value) = 0;
    /// <summary>
    /// Returns gids count
    /// </summary>
    virtual int32_t get_GidsCount() = 0;
    /// <summary>
    /// returns additional extraction info.
    /// </summary>
    virtual System::SharedPtr<IPdfStringExtractionInfo> get_ExtractionInfo() = 0;
    /// <summary>
    /// Gets or sets the value.
    /// </summary>
    /// <value>The string value.</value>
    virtual System::String get_Value() = 0;
    /// <summary>
    /// Gets or sets the value.
    /// </summary>
    /// <value>The string value.</value>
    virtual void set_Value(System::String value) = 0;
    
    /// <summary>
    /// returns extracted character of the string
    /// </summary>
    /// <param name="charIndex"></param>
    /// <returns></returns>
    virtual char16_t GetExtractedChar(int32_t charIndex) = 0;
    virtual void ResetEncoding() = 0;
    /// <summary>
    /// Gets a string representation of a value.
    /// </summary>
    virtual System::String ToString() = 0;
    
};

/// <summary>
/// This interface represents additional info about decoded string.
/// </summary>
class IPdfStringExtractionInfo : public System::Object
{
    typedef IPdfStringExtractionInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual System::ArrayPtr<uint32_t> get_RawCodes() = 0;
    
};

} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


