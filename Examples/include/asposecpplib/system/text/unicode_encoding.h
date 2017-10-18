#ifndef __UnicodeEncoding_h__
#define __UnicodeEncoding_h__

#include "system/string.h"
#include "system/text/icu_encoding.h"

namespace System { namespace Text {
    class UnicodeEncoding : public ICUEncoding
    {
    public:
        enum : int
        {
            UNICODE_CODE_PAGE = 1200,
            BIG_UNICODE_CODE_PAGE = 1201
        };

        UnicodeEncoding();
        UnicodeEncoding(bool bigEndian, bool byteOrderMark);
        UnicodeEncoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes);

        virtual int GetHashCode() const override;
        virtual bool Equals(ptr obj) override;

        ArrayPtr<uint8_t> GetPreamble() override;
        int GetMaxCharCount(int byteCount) override;
        int GetMaxByteCount(int charCount) override;

        bool operator==(const UnicodeEncoding&) const;

        virtual int get_CodePage()  override { return m_bigEndian ? BIG_UNICODE_CODE_PAGE: UNICODE_CODE_PAGE;  };
        virtual String get_WebName()  override { return m_bigEndian ? L"utf-16BE" : L"utf-16"; }

    private:
        bool m_isThrowException = false;
        bool m_bigEndian = false;
        bool m_byteOrderMark = true;

    };
}}

#endif
