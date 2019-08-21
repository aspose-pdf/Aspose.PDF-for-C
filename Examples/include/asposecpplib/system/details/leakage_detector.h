/// @file system/details/leakage_detector.h
#ifndef _leakage_detector_h_
#define _leakage_detector_h_

#include <string>


namespace System
{
    class Object;
    class String;
}


namespace System { namespace Details {

/// Checks if count of shared pointers to passed object differ when constructing LeakageDetector instance and when destructing it.
/// Used by insert_leakage_detectors option. When placed in the very beginning of class constructor, makes a good indicator of constructor leaking in shared pointers.
/// Normally, all this-pointers passed to contained objects' fields should be of weak mode, otherwise there are loop references and object won't ever be deleted.
class LeakageDetector
{
public:
    /// Constructs leakage detector. Remembers number of shared references to object at this point.
    /// @param self Reference to object under the check.
    /// @param constructorSignature Human-readable signature of constructor to report.
    ASPOSECPP_SHARED_API LeakageDetector(Object *self, const String& constructorSignature);
    /// Actually checks for the leak and reports if found. Only reports once per signature per number of leaked pointers, doesn't spam output.
    ASPOSECPP_SHARED_API ~LeakageDetector();
private:
    LeakageDetector(const LeakageDetector&) = delete;
    void operator = (const LeakageDetector&) = delete;

    /// Object to check
    Object *const m_self;
    /// Human-readable constructor signature
    const std::string m_signature;
    /// Number of shared references at LeakageDetector object creation
    const int m_refsAtCreation;
};

} } // namespace System::Details

#endif // _leakage_detector_h_
