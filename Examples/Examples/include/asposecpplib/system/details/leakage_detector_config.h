/// @file system/details/leakage_detector_config.h
#ifndef _leakage_detector_config_h_
#define _leakage_detector_config_h_


#include <porter_interface/reporters/leakage_detector.h>
#include <system/object.h>


namespace System { namespace Details {

/// Service type to set callbacks for leakage detection mechanism (aka Object::LeakageDetector).
/// Used e. g. for testing.
/// Doens't do anything with default (reporting) behavior, simply adds another callback to work alongside with it.
class LeakageDetectorConfig
{
public:
    /// Report handler type.
    using ReportHandler = PorterInterface::Reporters::LeakageDetector::ReportHandler;
    /// Sets report handler.
    /// @param handler Handler to call on leakage detection.
    static ASPOSECPP_SHARED_API void SetReportHandler(ReportHandler handler);
    /// Calls leakage detector if set.
    /// @param obj Object being constructed.
    /// @param constructor Constructor signature.
    /// @param leaks Number of self-pointers leaked during construction.
    static ASPOSECPP_SHARED_API void Report(const System::SharedPtr<System::Object> &obj, const System::String &constructor, int leaks);

private:
    /// Current handler.
    static ReportHandler s_handler;
};

} } // namespace System::Details

#endif // _leakage_detector_config_h_
