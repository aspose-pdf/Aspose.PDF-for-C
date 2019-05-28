/// @file system/component_model/property_changed_event_args.h
#ifndef _System_ComponentModel_PropertyChangedEventArgs_h_
#define _System_ComponentModel_PropertyChangedEventArgs_h_

#include <system/string.h>
#include <system/eventargs.h>

namespace System {

namespace ComponentModel {

/// Arguments of PropertyChanged event.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS PropertyChangedEventArgs : public System::EventArgs
{
    /// This type.
    typedef PropertyChangedEventArgs ThisType;
    /// Parent type.
    typedef System::EventArgs BaseType;
    /// RTTI information.
    RTTI_INFO(System::ComponentModel::PropertyChangedEventArgs, ::System::BaseTypesInfo<System::EventArgs>);

public:
    /// Gets name of property associated with event.
    /// @return String name of the property.
    virtual String get_PropertyName()
    {
        return _propertyName;
    }
    /// Initializes PropertyChanged event arguments.
    /// @param propertyName Name of changed property.
    PropertyChangedEventArgs(const String& propertyName) : System::EventArgs()
    {
        _propertyName = propertyName;
    }

private:
    /// Name of changed property.
    String _propertyName;
};

} // namespace ComponentModel
} // namespace System

#endif // _System_ComponentModel_PropertyChangedEventArgs_h_
