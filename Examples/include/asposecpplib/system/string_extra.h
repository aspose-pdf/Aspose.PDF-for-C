#pragma once

#include <system/string.h>
#include <system/array.h>
#include <system/convert.h>


namespace System
{
    namespace StringExtra
    {
        String Concat(const ArrayPtr<String>& parts);
        String Concat(const String & str0, const String & str1);
        String Concat(const String & str0, const String & str1, const String & str2);

        template <typename T>
        std::enable_if_t<IsSharedPtr<T>::value, String> Concat(const ArrayPtr<T>& args)
        {
            ArrayPtr<String> parts = System::MakeObject<Array<String>>(args->get_Length());
            std::transform(args->data().begin(), args->data().end(), parts->data().begin(), [](const T& value)
            {
                return value->ToString();
            });
            return Concat(parts);
        }

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

        template <typename T>
        std::enable_if_t<!IsSharedPtr<T>::value && !std::is_arithmetic<T>::value, String> Concat(const ArrayPtr<T>& args)
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

