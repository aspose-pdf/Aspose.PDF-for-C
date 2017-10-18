#ifndef _System_Drawing_Printing_PrintEventArgs_h_
#define _System_Drawing_Printing_PrintEventArgs_h_

#include <system/exceptions.h>
#include <system/component_model/cancel_event_args.h>
#include <drawing/printing/print_action.h>

namespace System { namespace Drawing { namespace Printing {

class PrintEventArgs : public System::ComponentModel::CancelEventArgs
{
    typedef PrintEventArgs ThisType;
    typedef System::ComponentModel::CancelEventArgs BaseType;

    RTTI_INFO(System::Drawing::Printing::PrintEventArgs, ::System::BaseTypesInfo<BaseType>);

public:

    PrintEventArgs() : System::ComponentModel::CancelEventArgs()
    {
    }

    PrintAction get_PrintAction();

};

}}}

#endif // _System_Drawing_Printing_PrintEventArgs_h_
