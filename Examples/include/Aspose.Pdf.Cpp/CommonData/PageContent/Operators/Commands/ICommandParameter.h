#ifndef _Aspose_Pdf_CommonData_PageContent_Operators_Commands_ICommandParameter_h_
#define _Aspose_Pdf_CommonData_PageContent_Operators_Commands_ICommandParameter_h_



#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/event.h>
#include <system/array.h>
#include <cstdint>

#include "CommonData/PageContent/Operators/Commands/IConvertible.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class CommandParameterChangedEventArgs; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class CommandParameterChangingEventArgs; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace Stream { class IPdfStreamWriter; } } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace CommonData {

namespace PageContent {

namespace Operators {

namespace Commands {

/// <summary>
/// This interface represents a command's parameter.
/// </summary>
//<<-- REFACTORING: Old Code: internal interface ICommandParameter : IConvertible
class ASPOSE_PDF_SHARED_API ICommandParameter : public Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::IConvertible
{
    typedef ICommandParameter ThisType;
    typedef Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::IConvertible BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the name.
    /// </summary>
    /// <value>The name.</value>
    virtual System::String get_Name() = 0;
    
    /// <summary>
    /// Gets or sets the value.
    /// </summary>
    /// <value>The value.</value>
    //<<-- REFACTORING: Commanted
    //object Value { get; set; }
    //....
    virtual System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> get_IPdfPrimitive() = 0;
    virtual bool is_IPdfPrimitive() = 0;
    virtual uint8_t get_byte() = 0;
    virtual bool is_byte() = 0;
    virtual System::ArrayPtr<uint8_t> get_byte_array() = 0;
    virtual bool is_byte_array() = 0;
    virtual System::String get_string() = 0;
    virtual bool is_string() = 0;
    virtual double get_double() = 0;
    virtual bool is_double() = 0;
    virtual int32_t get_int() = 0;
    virtual bool is_int() = 0;
    virtual float get_float() = 0;
    virtual bool is_float() = 0;
    virtual bool is_null() = 0;
    virtual System::String valueToString() = 0;
    
    /// <summary>
    /// Occurs when command's parameter has been changed.
    /// </summary>
    System::Event<void(System::SharedPtr<System::Object>, System::SharedPtr<CommandParameterChangedEventArgs>)> CommandParameterChanged;
    /// <summary>
    /// Occurs when command parameter is changinging.
    /// </summary>
    System::Event<void(System::SharedPtr<System::Object>, System::SharedPtr<CommandParameterChangingEventArgs>)> CommandParameterChanging;
    
    /// <summary>
    /// Resets this instance.
    /// </summary>
    virtual void Reset() = 0;
    /// <summary>
    /// Serializes the specified writer.
    /// </summary>
    /// <param name="writer">The writer.</param>
    virtual void Serialize(System::SharedPtr<Aspose::Pdf::Engine::IO::Stream::IPdfStreamWriter> writer) = 0;
    
};

} // namespace Commands
} // namespace Operators
} // namespace PageContent
} // namespace CommonData
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_PageContent_Operators_Commands_ICommandParameter_h_

