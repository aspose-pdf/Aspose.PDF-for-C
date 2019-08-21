/// @file system/threading/interlocked.h
#pragma once
#include "system/threading/thread.h"

namespace System { namespace Threading {

/// Provides API for thread-safe operations.
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
class Interlocked
{
public:
    /// Increments value atomically.
    /// @param location Variable reference to increment.
    /// @return Value of variable right after it was incremented.
    static int32_t Increment(int32_t& location)
    {
        return Add(location, 1);
    }
    /// Increments value atomically.
    /// @param location Variable reference to increment.
    /// @return Value of variable right after it was incremented.
    static int64_t Increment(int64_t& location)
    {
        return Add(location, 1);
    }
    /// Decrements value atomically.
    /// @param location Variable reference to decrement.
    /// @return Value of variable right after it was decremented.
    static int32_t Decrement(int32_t& location)
    {
        return Add(location, -1);
    }
    /// Decrements value atomically.
    /// @param location Variable reference to decrement.
    /// @return Value of variable right after it was decremented.
    static int64_t Decrement(int64_t& location)
    {
        return Add(location, -1);
    }

    /// Increases value atomically.
    /// @param location1 Variable reference to increase.
    /// @param value Value to add to @p location1.
    /// @return Value of variable right after it was increased.
    static int32_t Add(int32_t& location1, int32_t value)
    {
        return ExchangeAdd(location1, value) + value;
    }
    /// Increases value atomically.
    /// @param location1 Variable reference to increase.
    /// @param value Value to add to @p location1.
    /// @return Value of variable right after it was increased.
    static int64_t Add(int64_t& location1, int64_t value)
    {
        return ExchangeAdd(location1, value) + value;
    }

    /// Increases value atomically via exchange-add procedure.
    /// @param location1 Variable reference to increase.
    /// @param value Value to add to @p location1.
    /// @return Value of variable right after it was increased.
    static ASPOSECPP_SHARED_API int32_t ExchangeAdd(int32_t& location1, int32_t value);
    /// Increases value atomically via exchange-add procedure.
    /// @param location1 Variable reference to increase.
    /// @param value Value to add to @p location1.
    /// @return Value of variable right after it was increased.
    static ASPOSECPP_SHARED_API int64_t ExchangeAdd(int64_t& location1, int64_t value);

    /// Exchanges value on variable: stores new value and returns the value variable had immediately before storing.
    /// @param location1 Variable reference to change.
    /// @param value Value to store.
    /// @return Value of variable right before it was changed.
    static ASPOSECPP_SHARED_API int32_t Exchange(int32_t& location1, int32_t value);
    /// Exchanges value on variable: stores new value and returns the value variable had immediately before storing.
    /// @param location1 Variable reference to change.
    /// @param value Value to store.
    /// @return Value of variable right before it was changed.
    static ASPOSECPP_SHARED_API int64_t Exchange(int64_t& location1, int64_t value);
    /// Exchanges value on variable: stores new value and returns the value variable had immediately before storing.
    /// @param location1 Variable reference to change.
    /// @param value Value to store.
    /// @return Value of variable right before it was changed.
    static ASPOSECPP_SHARED_API float Exchange(float& location1, float value);
    /// Exchanges value on variable: stores new value and returns the value variable had immediately before storing.
    /// @param location1 Variable reference to change.
    /// @param value Value to store.
    /// @return Value of variable right before it was changed.
    static ASPOSECPP_SHARED_API double Exchange(double& location1, double value);

    /// Exchanges value on variable: stores new value and returns the value variable had immediately before storing. Not implemented.
    /// @tparam T Variable type.
    /// @param location Variable reference to change.
    /// @param value Value to store.
    /// @return Value of variable right before it was changed.
    template <typename T>
    static T Exchange(T &location, T value)
    {
        throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }

    /// Compare-exchanges value on variable: checks if variable is equal to specific value and stores the new value only if stored value matches expected.
    /// @param location1 Variable reference to change.
    /// @param value Value to store.
    /// @param comparand Value to compare variable's value to before exchanging.
    /// @return Value of variable on operation start regardless whether it was changed or not.
    static ASPOSECPP_SHARED_API int32_t CompareExchange(int32_t& location1, int32_t value, int32_t comparand);
    /// Compare-exchanges value on variable: checks if variable is equal to specific value and stores the new value only if stored value matches expected.
    /// @param location1 Variable reference to change.
    /// @param value Value to store.
    /// @param comparand Value to compare variable's value to before exchanging.
    /// @return Value of variable on operation start regardless whether it was changed or not.
    static ASPOSECPP_SHARED_API int64_t CompareExchange(int64_t& location1, int64_t value, int64_t comparand);
    /// Compare-exchanges value on variable: checks if variable is equal to specific value and stores the new value only if stored value matches expected.
    /// @param location1 Variable reference to change.
    /// @param value Value to store.
    /// @param comparand Value to compare variable's value to before exchanging.
    /// @return Value of variable on operation start regardless whether it was changed or not.
    static ASPOSECPP_SHARED_API float CompareExchange(float& location1, float value, float comparand);
    /// Compare-exchanges value on variable: checks if variable is equal to specific value and stores the new value only if stored value matches expected.
    /// @param location1 Variable reference to change.
    /// @param value Value to store.
    /// @param comparand Value to compare variable's value to before exchanging.
    /// @return Value of variable on operation start regardless whether it was changed or not.
    static ASPOSECPP_SHARED_API double CompareExchange(double& location1, double value, double comparand);

    /// Compare-exchanges value on variable: checks if variable is equal to specific value and stores the new value only if stored value matches expected. Not implemented.
    /// @tparam T1 Variable type.
    /// @tparam T2 Replacement value type.
    /// @tparam T3 Comparand type.
    /// @param location1 Variable reference to change.
    /// @param value Value to store.
    /// @param comparand Value to compare variable's value to before exchanging.
    /// @return Value of variable on operation start regardless whether it was changed or not.
    template <typename T1, typename T2, typename T3>
    static T2 CompareExchange(T1 &location1, T2 value, T3 comparand)
    {
        throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }

    /// Compare-exchanges value on variable: checks if variable is equal to specific value and stores the new value only if stored value matches expected.
    /// @param location1 Variable reference to change.
    /// @param value Value to store.
    /// @param comparand Value to compare variable's value to before exchanging.
    /// @param succeeded Reference to variable which is set to true if exchange took place and to false otherwise.
    /// @return Value of variable on operation start regardless whether it was changed or not.
    static ASPOSECPP_SHARED_API int32_t CompareExchange(int32_t& location1, int32_t value, int32_t comparand, bool& succeeded);
};

}}
