#ifndef __UTF7Encoding_h__
#define __UTF7Encoding_h__

#include "system/text/encoding.h"

//#include "Decoder.h"

namespace System { namespace Text {

    class UTF7Encoding : public Encoding
    {
    private:
        class UTF7Decoder : public Decoder
        {
        private:
            // Internal state.
            int leftOver;

        public:
            // Constructor.
            UTF7Decoder();

            // Override inherited methods.
            virtual int GetCharCount(const uint8_t *bytes, int count, bool flush) override;
            virtual void Convert(const uint8_t* bytes, int byteCount, char_t *chars, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed)  override;


        private:
            void InitializeInstanceFields();
        }; // class UTF7Decoder

    private:
        class UTF7Encoder : public Encoder
        {
        private:
            bool allowOptionals;
            int leftOver;
            bool isInShifted;

        public:
            UTF7Encoder(bool allowOptionals);

            // Override inherited methods.
            virtual int GetByteCount(const char_t *chars, int count, bool flush) override;
            virtual void Convert(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush, int &charsUsed, int &bytesUsed, bool &completed) override;

        private:
            void InitializeInstanceFields();
        }; // class UTF7Encoder

    public:
        // Magic number used by Windows for UTF-7.
        enum : int { UTF7_CODE_PAGE = 65000 };

        // Internal state.
    private:
        bool allowOptionals;

        // Encoding rule table for 0x00-0x7F.
        // 0 - full encode, 1 - direct, 2 - optional, 3 - encode plus.
        static const ArrayPtr<uint8_t> encodingRules;

        // Characters to use to encode 6-bit values in base64.
        static const String base64Chars;

        // Map bytes in base64 to 6-bit values.
        static const ArrayPtr<char> base64Values;

        // Constructors.
    public:

        //ORIGINAL LINE: public UTF7Encoding() : this(false)
        UTF7Encoding();

        UTF7Encoding(bool allowOptionals);

        bool operator==(const UTF7Encoding& other) const;
        virtual bool Equals(ptr obj);
        virtual int GetHashCode() const override;

        virtual String get_EncodingName() override { return L"utf-7"; }
        virtual int get_CodePage() override { return UTF7_CODE_PAGE; };
        virtual bool get_IsSingleByte() override { return true;  };

        // Get the number of bytes needed to encode a character buffer.
        virtual int GetByteCount(ArrayPtr<char_t> chars, int index, int count)  override { return Encoding::GetByteCount(chars, index, count); };

        // Get the bytes that result from encoding a character buffer.
        virtual int GetBytes(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex) override;

        // Get the number of characters needed to decode a uint8_t buffer.
        virtual int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count) override;


    public:
        // Get the characters that result from decoding a uint8_t buffer.
        virtual int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex)  override;

        // Get the maximum number of bytes needed to encode a specified number of characters.
        virtual int GetMaxByteCount(int charCount)  override;

        // Get the maximum number of characters needed to decode a specified number of bytes.
        virtual int GetMaxCharCount(int byteCount)  override;

        // Get a UTF7-specific decoder that is attached to this instance.
        virtual DecoderPtr GetDecoder()  override;

        // Get a UTF7-specific encoder that is attached to this instance.
        virtual EncoderPtr GetEncoder()  override;

        // UTF-7 decoder implementation.
        // UTF-7 encoder implementation.
        // a bunch of practically missing implementations (but should just work)

        virtual int GetByteCount(const char_t *chars, int count)  override;
        virtual int GetByteCount(const String &s)  override { return Encoding::GetByteCount(s);  };

        virtual int GetBytes(const char_t *chars, int charCount, uint8_t *bytes, int byteCount)  override;
        virtual int GetBytes(const String &s, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex)  override;
        virtual ArrayPtr<uint8_t> GetBytes(const String &s)  override { return Encoding::GetBytes(s);  };

        virtual int GetCharCount(const uint8_t *bytes, int count)  override;
        virtual int GetChars(const uint8_t *bytes, int byteCount, char_t *chars, int charCount)  override;

        virtual String GetString(ArrayPtr<uint8_t> bytes, int index, int count)  override;

    private:
        void InitializeInstanceFields();

        // Internal version of "GetByteCount" that can handle a rolling state between calls.
        static int InternalGetByteCount(const char_t* chars, int charsCount, int index, int count, bool flush, int leftOver, bool isInShifted, bool allowOptionals);
        // Internal version of "GetBytes" that can handle a rolling state between calls.
        static int InternalGetBytes(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, bool flush, int &leftOver, bool &isInShifted, bool allowOptionals);
        static int InternalGetBytes(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush, int &leftOver, bool &isInShifted, bool allowOptionals);

        // Internal version of "GetCharCount" that can handle a rolling state between call.s
        static int InternalGetCharCount(const uint8_t *bytes, int bytesCount, int index, int count, int leftOver);
        // Internal version of "GetChars" that can handle a rolling state between calls.
        static int InternalGetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex, int &leftOver);
        int InternalGetChars(const uint8_t* bytes, int byteCount, char_t* chars, int charCount, int &leftOver);



    }; // class UTF7Encoding

}}


#endif
