#pragma once

#include <system/object_ext.h>

#include <iostream>
#include <stdexcept>

namespace System { namespace Details {

/// Checks if provided type has unordered_map semantics.
/// @tparam T Tested type.
template<typename T, typename = void>
struct is_unordered_map : std::false_type
{
};

template<typename T>
struct is_unordered_map<T, decltype(std::declval<T>().bucket_count(), void())> : std::true_type
{
};

template <typename Map>
std::enable_if_t<!is_unordered_map<Map>::value, void>
CheckHashFunctionQuality(const Map&, const bool = false, const double = 0)
{
}

/// Checks if provided unordered_map has good enough hash function to store elements in the best way.
/// @param map The unordered_map to check.
/// @param do_throw Throw an exception if too many hash collisions were found.
/// @param threshold The threshold that is used to assess the hash function quality, must not be less than 1,05.
template <typename Map>
std::enable_if_t<is_unordered_map<Map>::value, void>
CheckHashFunctionQuality(const Map& map, const bool do_throw = true, const double threshold = 2.5)
{
    if (map.size() < 16)
        return;

    double sum = 0;
    const auto bucket_count = map.bucket_count();
    for (size_t i = 0; i < bucket_count; ++i)
    {
        const auto bucket_size = map.bucket_size(i);
        const double numerator = bucket_size * (bucket_size + 1) / 2.0;
        const double denominator = (map.size() / (2.0 * bucket_count)) * (map.size() + 2.0 * bucket_count - 1);
        sum += numerator / denominator;
    }
    if (sum > threshold)
    {
        std::cout << "Bad quality hash function detected:\n";
        std::cout << "map size = " << map.size() << ", bucket count = " << bucket_count << '\n';
        for (size_t i = 0; i < bucket_count; ++i)
        {
            const auto bucket_size = map.bucket_size(i);
            if (bucket_size != 0)
                std::cout << "bucket #" << i << " size = " << bucket_size << '\n';
        }

        for (const auto& pair: map)
        {
            const auto key = pair.first;
            std::cout << "element hash = " << System::ObjectExt::GetHashCode(key) << '\n';
        }
        std::cout << std::endl;

        if (do_throw)
            throw std::runtime_error("Bad quality hash function detected");
    }
}

}} // System::Details
