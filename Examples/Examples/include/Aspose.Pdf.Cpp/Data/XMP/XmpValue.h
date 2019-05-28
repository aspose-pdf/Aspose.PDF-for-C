#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/iformatprovider.h>
#include <system/date_time.h>
#include <system/collections/keyvalue_pair.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpArray; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpDataCollection; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpField; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpPacket; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpStructure; } } } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfXmpMetadata; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class PdfXmpMetadataTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace Data { namespace XMP { class XmpArrayTests; } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace Data { namespace XMP { class XmpMetadataTests; } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace Data { namespace XMP { class XmpPacketTests; } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace Data { namespace XMP { class XmpStructureTests; } } } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents XMP value 
/// </summary>
class ASPOSE_PDF_SHARED_API XmpValue : public System::Object
{
    typedef XmpValue ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpArray;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpDataCollection;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpField;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpPacket;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpStructure;
    friend class Aspose::Pdf::Facades::PdfXmpMetadata;
    friend class Aspose::Pdf::Tests::Facades::PdfXmpMetadataTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpArrayTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpMetadataTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpPacketTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpStructureTests;
    
public:

    /// <summary>
    /// Returns true if value is string.
    /// </summary>
    bool get_IsString();
    /// <summary>
    /// Returns true if value is integer.
    /// </summary>
    bool get_IsInteger();
    /// <summary>
    /// Returns true if value is floating point value.
    /// </summary>
    bool get_IsDouble();
    /// <summary>
    /// Returns true if value is DateTime.
    /// </summary>
    bool get_IsDateTime();
    /// <summary>
    /// Returns true if XmpValue is field.
    /// </summary>
    bool get_IsField();
    /// <summary>
    /// Returns true if XmpValue is named value.
    /// </summary>
    bool get_IsNamedValue();
    /// <summary>
    /// Returns true is XmpValue represents named values.
    /// </summary>
    bool get_IsNamedValues();
    /// <summary>
    /// Returns true is XmpValue represents structure.
    /// </summary>
    bool get_IsStructure();
    /// <summary>
    /// Returns true is XmpValue is array.
    /// </summary>
    bool get_IsArray();
    
    /// <summary>
    /// Constructor for string value.
    /// </summary>
    /// <param name="value">String value.</param>
    XmpValue(System::String value);
    /// <summary>
    /// Consructor for integer value.
    /// </summary>
    /// <param name="value">Integer value.</param>
    XmpValue(int32_t value);
    /// <summary>
    /// Constructor for floating point Value.
    /// </summary>
    /// <param name="value">Double value.</param>
    XmpValue(double value);
    /// <summary>
    /// Constructor for date time value.
    /// </summary>
    /// <param name="value">Date time value.</param>
    XmpValue(System::DateTime value);
    /// <summary>
    /// Constructor for array value.
    /// </summary>
    /// <param name="array">Array value.</param>
    XmpValue(System::ArrayPtr<System::SharedPtr<XmpValue>> array);
    
    /// <summary>
    /// Converts to string.
    /// </summary>
    /// <returns></returns>
    System::String ToStringValue();
    /// <summary>
    /// Converts to integer.
    /// </summary>
    /// <returns></returns>
    int32_t ToInteger();
    /// <summary>
    /// Converts to double.
    /// </summary>
    /// <returns></returns>
    double ToDouble();
    /// <summary>
    /// Converts to date time.
    /// </summary>
    /// <returns></returns>
    System::DateTime ToDateTime();
    /// <summary>
    /// Returns array.
    /// </summary>
    /// <returns></returns>
    System::ArrayPtr<System::SharedPtr<XmpValue>> ToArray();
    /// <summary>
    /// REturs string representation of XmpValue.
    /// </summary>
    /// <returns></returns>
    virtual System::String ToString();
    /// <summary>
    /// Returns string representation.
    /// </summary>
    /// <param name="formatProvider"></param>
    /// <returns></returns>
    System::String ToString(System::SharedPtr<System::IFormatProvider> formatProvider);
    
    static System::SharedPtr<XmpValue> to_XmpValue(System::String value);
    static System::SharedPtr<XmpValue> to_XmpValue(int32_t value);
    static System::SharedPtr<XmpValue> to_XmpValue(double value);
    static System::SharedPtr<XmpValue> to_XmpValue(System::DateTime value);
    static System::SharedPtr<XmpValue> to_XmpValue(System::ArrayPtr<System::SharedPtr<System::Object>> value);
    static System::ArrayPtr<System::SharedPtr<XmpValue>> to_XmpValueArray(System::SharedPtr<XmpValue> value);
    static System::String to_String(System::SharedPtr<XmpValue> value);
    static System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> to_KeyValuePair(System::SharedPtr<XmpValue> value);
    static System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> to_KeyValuePairArray(System::SharedPtr<XmpValue> value);
    
protected:

    XmpValue(System::SharedPtr<Engine::Data::XMP::XmpField> field);
    XmpValue(System::ArrayPtr<System::SharedPtr<Engine::Data::XMP::XmpField>> structure);
    XmpValue(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> dictionaryEntry);
    XmpValue(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> dictionaryEntries);
    XmpValue(System::SharedPtr<System::Object> value);
    
    System::ArrayPtr<System::SharedPtr<Engine::Data::XMP::XmpField>> ToStructure();
    System::SharedPtr<Engine::Data::XMP::XmpField> ToField();
    System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> ToNamedValue();
    System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> ToNamedValues();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _stringValue;
    int32_t _intValue;
    double _doubleValue;
    System::DateTime _dateTime;
    System::SharedPtr<Engine::Data::XMP::XmpField> _field;
    System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> _dictionaryEntry;
    System::ArrayPtr<System::SharedPtr<Engine::Data::XMP::XmpField>> _structureValue;
    System::ArrayPtr<System::SharedPtr<XmpValue>> _arrayValue;
    System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> _dictionaryEntries;
    bool _isInteger;
    bool _isDouble;
    bool _isDateTime;
    bool _isDictionaryEntry;
    
    template <typename T>
    void FillArray(System::ArrayPtr<T> array)
    {
        _arrayValue = System::MakeArray<System::SharedPtr<Aspose::Pdf::XmpValue>>(array->get_Length());
        for (int32_t i = 0; i < array->get_Length(); i++)
        {
            _arrayValue[i] = System::MakeObject<XmpValue>(array[i]);
        }
    }
    
    
};

} // namespace Pdf
} // namespace Aspose


