/// @file testing/test_case_data.h
#pragma once

#include <tuple>
#include <system/object.h>
#include <system/shared_ptr.h>
#include <system/string.h>
#include <gtest/gtest.h>

namespace NUnit {
namespace Framework {

/// The TestCaseData class provides extended test case information for a parameterized test.
template <class TReturn, class... TArgs>
class TestCaseData : public System::Object
{
public:
    /// Initializes a new instance of the TestCaseData class.
    /// @param args The arguments.
    TestCaseData(TArgs... args) : arguments(std::make_tuple(args...))
    {
    }

    /// Sets the expected result for the test.
    /// @param result The expected result.
    /// @return A modified TestCaseData.
    System::SharedPtr<TestCaseData> Returns(TReturn result)
    {
        TestCaseData::expectedResult = result;
        return System::MakeSharedPtr(this);
    }

    /// Call @p callback and check the result.
    /// @param callback Tested function.
    template <class TCallback>
    void test(const TCallback& callback)
    {
        auto actualResult = callTuple(callback, std::index_sequence_for<TArgs...>());
        if (actualResult != expectedResult)
        {
            FAIL() << (System::String::Format(u"Expected: {0}, but was: {1}.", expectedResult, actualResult)).ToUtf8String();
        }
    }

private:
    /// Call @p callback with arguments.
    template <class TCallback, std::size_t... Indices>
    auto callTuple(TCallback& callback, std::index_sequence<Indices...>)
    {
        return callback(std::get<Indices>(arguments)...);
    }

private:
    /// The tuple of arguments to be provided to the test.
    std::tuple<TArgs...> arguments;
    /// The expected result to be returned.
    TReturn expectedResult;
};

/// Partially specialized TestCaseData class for void functions testing
template <class... TArgs>
class TestCaseData<void, TArgs...> : public System::Object
{
public:
    /// Initializes a new instance of the TestCaseData class.
    /// @param args The arguments.
    TestCaseData(TArgs... args) : arguments(std::make_tuple(args...))
    {
    }

    /// Call @p callback.
    /// @param callback Tested function.
    template <class TCallback>
    void test(const TCallback& callback)
    {
        callTuple(callback, std::index_sequence_for<TArgs...>());
    }

private:
    /// Call @p callback with arguments.
    template <class TCallback, std::size_t... Indices>
    auto callTuple(TCallback& callback, std::index_sequence<Indices...>)
    {
        callback(std::get<Indices>(arguments)...);
    }

private:
    /// The tuple of arguments to be provided to the test.
    std::tuple<TArgs...> arguments;
};

} // namespace Framework
} // namespace NUnit
