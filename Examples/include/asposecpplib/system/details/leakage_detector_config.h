#ifndef _leakage_detector_config_h_
#define _leakage_detector_config_h_


#include <porter_interface/reporters/leakage_detector.h>
#include <system/object.h>


namespace System { namespace Details {

class LeakageDetectorConfig
{
public:
    using ReportHandler = PorterInterface::Reporters::LeakageDetector::ReportHandler;
    static void SetReportHandler(ReportHandler handler);
    static void Report(const System::SharedPtr<System::Object> &obj, const System::String &constructor, int leaks);

private:
    static ReportHandler s_handler;
};

} } // namespace System::Details

#endif // _leakage_detector_config_h_
