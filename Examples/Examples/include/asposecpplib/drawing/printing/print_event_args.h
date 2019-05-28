/// @file drawing/printing/print_event_args.h
#ifndef _System_Drawing_Printing_PrintEventArgs_h_
#define _System_Drawing_Printing_PrintEventArgs_h_

#include <system/exceptions.h>
#include <system/component_model/cancel_event_args.h>
#include <drawing/printing/print_action.h>

namespace System { namespace Drawing { namespace Printing {

/// Provides data for the BeginPrint and EndPrint events.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS PrintEventArgs : public System::ComponentModel::CancelEventArgs
{
    /// An alias for this type.
    typedef PrintEventArgs ThisType;
    /// An alias for a base type.
    typedef System::ComponentModel::CancelEventArgs BaseType;

    RTTI_INFO(System::Drawing::Printing::PrintEventArgs, ::System::BaseTypesInfo<BaseType>);

public:
    /// Constructs a new instance of PrintEventArgs object.
    PrintEventArgs() : System::ComponentModel::CancelEventArgs()
    {
    }

    /// Returns a value that specify a print action represented by the
    /// current objet.
    ASPOSECPP_SHARED_API PrintAction get_PrintAction();

};

}}}

#endif // _System_Drawing_Printing_PrintEventArgs_h_
