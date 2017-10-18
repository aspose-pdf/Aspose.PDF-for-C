#ifndef _random_h_
#define _random_h_

#include <random>
#include "system/array.h"

namespace System {

class Random
{
    std::mt19937 m_seed;

public:

    bool IsNull() const { return false; }

    // Initializes a new instance, using a time-dependent default seed value.
    Random();

    // Initializes a new instance of the System.Random class, using the specified seed value.
    Random(int seed);

    // Returns a nonnegative random number less then int32 max value.
    int Next();

    // Returns a nonnegative random number less than the specified maximum.
    int Next(int maxValue);

    // Returns a random number within a specified range.
    int Next(int minValue, int maxValue);

    // Fills the elements of a specified array of bytes with random numbers.
    void NextBytes(ArrayPtr<uint8_t> buffer);

    // Returns a random number between 0.0 and 1.0.
    double NextDouble();

    inline Random& operator=(std::nullptr_t) { return *this;    }
};

} // namespace System

#endif // _random_