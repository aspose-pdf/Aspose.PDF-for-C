#pragma once
#include "system/threading/thread.h"

namespace System { namespace Threading {

    class Interlocked
    {
    public:
        static int32_t Increment(int32_t& location)
        {
            return Add(location, 1);
        }

        static int64_t Increment(int64_t& location)
        {
            return Add(location, 1);
        }

        static int32_t Decrement(int32_t& location)
        {
            return Add(location, -1);
        }

        static int64_t Decrement(int64_t& location)
        {
            return Add(location, -1);
        }

        static int32_t Add(int32_t& location1, int32_t value)
        {
            return ExchangeAdd(location1, value) + value;
        }

        static int64_t Add(int64_t& location1, int64_t value)
        {
            return ExchangeAdd(location1, value) + value;
        }

        static int32_t ExchangeAdd(int32_t& location1, int32_t value);
        static int64_t ExchangeAdd(int64_t& location1, int64_t value);
        static int32_t Exchange(int32_t& location1, int32_t value);
        static int64_t Exchange(int64_t& location1, int64_t value);
        static float Exchange(float& location1, float value);
        static double Exchange(double& location1, double value);

        template <typename T>
        static T Exchange(T &location, T value)
        {
            throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }

        static int32_t CompareExchange(int32_t& location1, int32_t value, int32_t comparand);
        static int64_t CompareExchange(int64_t& location1, int64_t value, int64_t comparand);
        static float CompareExchange(float& location1, float value, float comparand);
        static double CompareExchange(double& location1, double value, double comparand);

        template <typename T1, typename T2, typename T3>
        static T2 CompareExchange(T1 &location1, T2 value, T3 comparand)
        {
            throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }

        static int32_t CompareExchange(int32_t& location1, int32_t value, int32_t comparand, bool& succeeded);
    };


}}