#ifndef _Aspose_Pdf_Data_XMP_XmpValue_h_
#define _Aspose_Pdf_Data_XMP_XmpValue_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/date_time.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpArray; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpDataCollection; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpField; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpPacket; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpStructure; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class PdfXmpMetadataTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace Data { namespace XMP { class XmpArrayTests; } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace Data { namespace XMP { class XmpMetadataTests; } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace Data { namespace XMP { class XmpPacketTests; } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace Data { namespace XMP { class XmpStructureTests; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpNamedValue; } } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Data {

namespace XMP {

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
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Tests::Facades::PdfXmpMetadataTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpArrayTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpMetadataTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpPacketTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpStructureTests;
    
public:

    bool get_IsDouble();
    bool get_IsField();
    bool get_IsNamedValue();
    bool get_IsArray();
    bool get_IsNamedValues();
    bool get_IsString();
    bool get_IsInteger();
    bool get_IsStructure();
    bool get_IsDateTime();
    
    XmpValue(System::String value);
    XmpValue(System::ArrayPtr<System::SharedPtr<XmpValue>> array);
    XmpValue(int32_t value);
    XmpValue(double value);
    
    double ToDouble();
    
    XmpValue(System::DateTime value);
    
    System::DateTime ToDateTime();
    System::ArrayPtr<System::SharedPtr<XmpValue>> ToArray();
    System::String ToStringValue();
    int32_t ToInteger();
    virtual System::String ToString();
    
protected:

    XmpValue(System::ArrayPtr<System::SharedPtr<XmpField>> structure);
    XmpValue(System::SharedPtr<XmpField> field);
    XmpValue(System::SharedPtr<XmpNamedValue> dictionaryEntry);
    XmpValue(System::ArrayPtr<System::SharedPtr<XmpNamedValue>> dictionaryEntries);
    
    System::ArrayPtr<System::SharedPtr<XmpField>> ToStructure();
    System::SharedPtr<XmpField> ToField();
    System::SharedPtr<XmpNamedValue> ToNamedValue();
    System::ArrayPtr<System::SharedPtr<XmpNamedValue>> ToNamedValues();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _stringValue;
    System::ArrayPtr<System::SharedPtr<XmpValue>> _arrayValue;
    System::ArrayPtr<System::SharedPtr<XmpField>> _structureValue;
    System::SharedPtr<XmpField> _field;
    System::SharedPtr<XmpNamedValue> _dictionaryEntry;
    bool _isDictionaryEntry;
    System::ArrayPtr<System::SharedPtr<XmpNamedValue>> _dictionaryEntries;
    int32_t _intValue;
    double _doubleValue;
    bool _isInteger;
    bool _isDouble;
    System::DateTime _dateTime;
    bool _isDateTime;
    
};

} // namespace XMP
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Data_XMP_XmpValue_h_

