#ifndef _aspose_testing_test_context_h_
#define _aspose_testing_test_context_h_

#include <system/string.h>
#include <gtest/gtest.h>
#include <vector>
#include <string>

namespace NUnit { namespace Framework {

    struct TestContext
    {
        static TestContext* get_CurrentContext();

        static System::String get_TestDirectory_static()
        {
            const auto argvs = testing::internal::GetArgvs();

            if (argvs.empty() || argvs[0].empty())
            {
                return System::String(L"");
            }

            testing::internal::FilePath filePath(argvs[0]);
            const auto directoryName = filePath.RemoveFileName();
            return System::String::FromUtf8(directoryName.string());
        }

        System::String get_TestDirectory()
        {
            return get_TestDirectory_static();
        }
    };

    static TestContext testContext;

    TestContext* TestContext::get_CurrentContext()
    {
        return &testContext;
    }

}}

#endif //_aspose_testing_test_context_h_
