#ifndef _System_ComponentModel_PropertyChangedEventArgs_h_
#define _System_ComponentModel_PropertyChangedEventArgs_h_

#include <system/string.h>
#include <system/eventargs.h>

namespace System {

namespace ComponentModel {

class PropertyChangedEventArgs : public System::EventArgs
{
    typedef PropertyChangedEventArgs ThisType;
    typedef System::EventArgs BaseType;

    RTTI_INFO(System::ComponentModel::PropertyChangedEventArgs, ::System::BaseTypesInfo<System::EventArgs>);

public:

    virtual String get_PropertyName()
    {
        return _propertyName;
    }

    PropertyChangedEventArgs(String propertyName) : System::EventArgs()
    {
        _propertyName = propertyName;
    }

private:

    String _propertyName;

};

} // namespace ComponentModel
} // namespace System

#endif // _System_ComponentModel_PropertyChangedEventArgs_h_
