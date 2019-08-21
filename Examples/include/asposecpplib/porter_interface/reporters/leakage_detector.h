#pragma once

#include <system/multicast_delegate.h>
#include <system/object.h>
#include <system/string.h>


namespace PorterInterface { namespace Reporters {

class LeakageDetector : public System::Object
{
public:
    using ReportHandler = System::MulticastDelegate<void(System::SharedPtr<System::Object>, System::String, int)>;
    static bool SetHandler(ReportHandler handler);
};

} } // namespace PorterInterface::Reporters

