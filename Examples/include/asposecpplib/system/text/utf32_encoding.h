#ifndef __UTF32Encoding_h__
#define __UTF32Encoding_h__

#include "system/text/icu_encoding.h"
#include "system/string.h"

namespace System { namespace Text {

    class UTF32Encoding : public ICUEncoding
    {
    public:
        enum : int
        {
            UTF32_CODE_PAGE = 12000,
            BIG_UTF32_CODE_PAGE = 12001
        };

        UTF32Encoding();
        UTF32Encoding(bool bigEndian, bool byteOrderMark);
        UTF32Encoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters);

        bool operator==(const UTF32Encoding& other) const;
        virtual int GetHashCode() const override;
        virtual bool Equals(ptr obj) override;

        // Get the UTF32 preamble.
        virtual ArrayPtr<uint8_t> GetPreamble() override;

        virtual int get_CodePage() override { return m_bigEndian ? BIG_UTF32_CODE_PAGE : UTF32_CODE_PAGE; };
        virtual String get_EncodingName() override;


    private:
        bool m_emitUTF32ByteOrderMark = false;
        bool m_isThrowException = false;
        bool m_bigEndian = false;
    };
}}

#endif
