/// @file testing/TestContext.h
#ifndef _aspose_testing_test_context_h_
#define _aspose_testing_test_context_h_

#include <system/object.h>
#include <system/shared_ptr.h>
#include <system/string.h>
#include <gtest/gtest.h>
#include <vector>
#include <string>

namespace NUnit { namespace Framework {

/// Context in which testing takes place.
struct TestContext
{
    /// TestAdapter adapts a Test for consumption by the user test code.
    class TestAdapter : public System::Object
    {
        /// Unhides constructor.
        FRIEND_FUNCTION_System_MakeObject;
    public:
        /// Gets full name of the test.
        /// @return Test full name.
        System::String get_FullName()
        {
            return m_full_name;
        }
            
        /// Gets name of the test.
        /// @return Name of the test.
        System::String get_Name()
        {
            return m_name;
        }

    private:
        /// Constructor.
        /// @param full_name Full name of the test.
        /// @param name Name of the test.
        TestAdapter(const System::String& full_name, const System::String& name) :m_full_name(full_name), m_name(name) {}
        /// Test full name.
        System::String m_full_name;
        /// Test short name.
        System::String m_name;
    };
        
    /// Returns current test context.
    /// @return Test context object pointer. No deletion is required.
    static TestContext* get_CurrentContext()
    {
        static TestContext testContext;
        return &testContext;
    }

    /// Returns test directory.
    /// @return Directory where testing executable is located, if available, or empty string.
    System::String get_TestDirectory()
    {
        const auto test_dir = get_TestDirectory_static();
        return test_dir;
    }

    /// Returns current test info.
    /// @return TestInfo object.
    System::SharedPtr<TestContext::TestAdapter> get_Test()
    {
        const auto info = ::testing::UnitTest::GetInstance()->current_test_info();
        const auto& name = System::String::FromUtf8(info->name());
        const auto& full_name = System::String::FromUtf8(info->test_case_name()) + u"." + name; // Namespace missing
        return System::MakeObject<TestAdapter>(full_name, name);
    }

private:
    /// Gets location of test executable, if available.
    /// @return Test executable location or "" if not available.
    static System::String get_TestDirectory_static()
    {
        const auto argvs = ::testing::internal::GetArgvs();

        if (argvs.empty() || argvs[0].empty())
        {
            return System::String(u"");
        }

        ::testing::internal::FilePath filePath(argvs[0]);
        const auto directoryName = filePath.RemoveFileName();
        return System::String::FromUtf8(directoryName.string());
    }
};

}}

#endif //_aspose_testing_test_context_h_
