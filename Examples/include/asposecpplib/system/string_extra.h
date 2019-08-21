/// @file system/string_extra.h
#pragma once

#include <system/string.h>
#include <system/array.h>
#include <system/convert.h>


namespace System
{
namespace StringExtra
{

/// Concatenates string array.
/// @param parts Array of strings to join.
/// @return Joint string.
ASPOSECPP_SHARED_API String Concat(const ArrayPtr<String>& parts);
/// Concatenates strings.
/// @param str0 First string to concatenate.
/// @param str1 Second string to concatenate.
/// @return Joint parameter strings.
ASPOSECPP_SHARED_API String Concat(const String & str0, const String & str1);
/// Concatenates strings.
/// @param str0 First string to concatenate.
/// @param str1 Second string to concatenate.
/// @param str2 Third string to concatenate.
/// @return Joint parameter strings.
ASPOSECPP_SHARED_API String Concat(const String & str0, const String & str1, const String & str2);
/// Concatenates strings.
/// @param str0 First string to concatenate.
/// @param str1 Second string to concatenate.
/// @param str2 Third string to concatenate.
/// @param str3 Fourth string to concatenate.
/// @return Joint parameter strings.
ASPOSECPP_SHARED_API String Concat(const String & str0, const String & str1, const String & str2, const String & str3);
/// Converts multiple objects to string and concatenates resulting strings.
/// Specialization for SmartPtr types.
/// @param args Object to convert and join.
/// @return String value joint from string representations of all objects passed.
template <typename T>
std::enable_if_t<IsSmartPtr<T>::value, String> Concat(const ArrayPtr<T>& args)
{
    ArrayPtr<String> parts = System::MakeObject<Array<String>>(args->get_Length());
    std::transform(args->data().begin(), args->data().end(), parts->data().begin(), [](const T& value)
    {
        return value->ToString();
    });
    return Concat(parts);
}

/// Converts multiple objects to string and concatenates resulting strings.
/// Specialization for arithmetic types.
/// @param args Object to convert and join.
/// @return String value joint from string representations of all objects passed.
template <typename T>
std::enable_if_t<std::is_arithmetic<T>::value, String> Concat(const ArrayPtr<T>& args)
{
    ArrayPtr<String> parts = System::MakeObject<Array<String>>(args->get_Length());
    std::transform(args->data().begin(), args->data().end(), parts->data().begin(), [](const T& value)
    {
        return System::Convert::ToString(value);
    });
    return Concat(parts);
}

/// Converts multiple objects to string and concatenates resulting strings.
/// Specialization for structures and other value types.
/// @param args Object to convert and join.
/// @return String value joint from string representations of all objects passed.
template <typename T>
std::enable_if_t<!IsSmartPtr<T>::value && !std::is_arithmetic<T>::value, String> Concat(const ArrayPtr<T>& args)
{
    ArrayPtr<String> parts = System::MakeObject<Array<String>>(args->get_Length());
    std::transform(args->data().begin(), args->data().end(), parts->data().begin(), [](const T& value)
    {
        return value.ToString();
    });
    return Concat(parts);
}

}
}

