#ifndef __aspose_system_utf8_ncoding_h__
#define __aspose_system_utf8_ncoding_h__

#include <system/text/encoding.h>
#include <system/text/icu_encoding.h>
#include <system/array.h>

namespace System { namespace Text {
    class UTF8Encoding : public ICUEncoding
    {
        RTTI_INFO(System::Text::UTF8Encoding, ::System::BaseTypesInfo<System::Text::ICUEncoding>)

    public:
        enum : int { UTF8_CODE_PAGE = 65001 };


        UTF8Encoding();
        UTF8Encoding(bool encoderShouldEmitUTF8Idetifier);
        UTF8Encoding(bool encoderShouldEmitUTF8Identifier, bool  throwOnInvalidBytes);

        bool operator==(const UTF8Encoding& other) const;

        virtual bool Equals(ptr obj) override;
        virtual int GetHashCode() const override;

        virtual ArrayPtr<uint8_t> GetPreamble();

        virtual String get_WebName() const { return L"utf-8"; }

    private:
        bool m_encoderShouldEmitUTF8Identifier;
        bool m_throwOnInvalidBytes;
    };
}}

#endif // __aspose_system_utf8_ncoding_h__
