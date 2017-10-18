#ifndef _aspose_system_text_string_builder_h_
#define _aspose_system_text_string_builder_h_

#include <system/exceptions.h>
#include <system/string.h>
#include <system/array.h>
#include <system/enum.h>
#include <system/convert.h>

namespace System { namespace Text {

    class StringBuilder: public Object
    {
    public:

        StringBuilder();
        StringBuilder(int capacity);
        StringBuilder(const String& str);
        ~StringBuilder();

        int get_Length() const;
        void set_Length(int len);

        int get_Capacity() const;

        wchar_t operator[](int index) const;

        wchar_t idx_get(int index) const;
        void    idx_set(int index, wchar_t c);

        StringBuilder* Append(wchar_t c);
        StringBuilder* Append(wchar_t c, int count);
        StringBuilder* Append(ArrayPtr<wchar_t> arr);
        StringBuilder* Append(ArrayPtr<wchar_t> arr, int startIndex, int charCount);
        StringBuilder* Append(const String& str);
        StringBuilder* Append(const String& str, int startIndex, int charCount);
        StringBuilder* Append(const ObjectHolder& obj) { return Append(obj.objectPtr()->ToString()); }
        StringBuilder* Append(SharedPtr<StringBuilder> builder);

        StringBuilder* Append(float f);
        StringBuilder* Append(double df);
        StringBuilder* Append(int i);

        template<typename T>
        typename std::enable_if<std::is_arithmetic<T>::value, StringBuilder*>::type Append(T value)
        {
            Append(Convert::ToString(value));
            return this;
        }

        template<class E>
        typename std::enable_if< std::is_enum<E>::value, StringBuilder*>::type Append(E e)
        {
            // If you got error here it means that enum E was translated without metainformation
            // Add [CsToCppPorter.CppEnumEnableMetadata] attribute to fix the problem.
            return Append(Enum<E>::GetName(e));
        }

        template<class... TArgs>
        StringBuilder* AppendFormat(const String& format, const TArgs&... args)
        {
            return Append(String::Format(format, args...));
        }

        template<class... TArgs>
        StringBuilder* AppendFormat(SharedPtr<IFormatProvider>, const String& format, const TArgs&... args)
        {
            return Append(String::Format(format, args...));
        }

        StringBuilder* AppendLine();
        StringBuilder* AppendLine(const String& str);

        StringBuilder* Insert(int startIndex, const String& str);
        StringBuilder* Insert(int32_t index, const String& value, int32_t count);
        StringBuilder* Insert(int startIndex, wchar_t ch);
        StringBuilder* Insert(int index, System::ArrayPtr<wchar_t> chars, int startIndex, int charCount);

        template<typename T>
        typename std::enable_if<std::is_arithmetic<T>::value, StringBuilder*>::type Insert(int startIndex, T value)
        {
            Insert(startIndex, Convert::ToString(value));
            return this;
        }

        StringBuilder* Replace(const String& oldString, const String& newString);
        StringBuilder* Replace(const String& oldString, const String& newString, int position, int count);
        StringBuilder* Replace(wchar_t oldChar, wchar_t newChar);
        StringBuilder* Replace(wchar_t oldChar, wchar_t newChar, int startIndex, int count);

        StringBuilder* Remove(int startIndex, int length);

        String ToString() ASPOSE_CONST override;
        String ToString(int startIndex, int length) const;

        void CopyTo(int sourceIndex, System::ArrayPtr<wchar_t> const& destination, int destinationIndex, int count);

    private:

        System::Detail::UnicodeStringHolder m_storage;

        void CheckBounds(int index, int count) const;
    };

}}

#endif // _aspose_system_text_string_builder_h_
