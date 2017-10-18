#ifndef __fwd_h__
#define __fwd_h__

#include <cstddef>
#include <cstdint>
#include <type_traits>
#include <locale>
#include <codecvt>
#include <string>

template<class T>
struct EnumMetaInfo; // declared out of System namespace

//fw's
namespace System {

    class IFormatProvider;

    template<class T>
    class SharedPtr;

    namespace Text {
        class DecoderFallback;
        class DecoderFallbackBuffer;
        class DecoderReplacementFallback;
        class EncoderFallback;
        class EncoderFallbackBuffer;
        class Encoder;
        class Decoder;
        class Encoding;
        class EncoderReplacementFallbackBuffer;
        class EncoderReplacementFallback;
    }

    namespace IO {
        class Stream;
        class FileStream;
        class MemoryStream;
        class StreamReader;
        class StreamWriter;
        class FileInfo;
        class FileSystemInfo;
        class DirectoryInfo;
    }


    namespace Drawing {
        class SizeF;
        class PointF;
        class Size;
        class Point;
        class Rectangle;
        class RectangleF;
    }

    namespace Globalization
    {
        class CultureInfo;
    }
}

//typedef's

typedef System::SharedPtr<System::IFormatProvider>                          IFormatProviderPtr;

typedef System::SharedPtr<System::Text::DecoderFallback>                    DecoderFallbackPtr;
typedef System::SharedPtr<System::Text::DecoderFallbackBuffer>              DecoderFallbackBufferPtr;
typedef System::SharedPtr<System::Text::DecoderReplacementFallback>         DecoderReplacementFallbackPtr;
typedef System::SharedPtr<System::Text::EncoderFallback>                    EncoderFallbackPtr;
typedef System::SharedPtr<System::Text::EncoderFallbackBuffer>              EncoderFallbackBufferPtr;
typedef System::SharedPtr<System::Text::Encoder>                            EncoderPtr;
typedef System::SharedPtr<System::Text::Decoder>                            DecoderPtr;
typedef System::SharedPtr<System::Text::EncoderReplacementFallbackBuffer>   EncoderReplacementFallbackBufferPtr;
typedef System::SharedPtr<System::Text::EncoderReplacementFallback>         EncoderReplacementFallbackPtr;
typedef System::SharedPtr<System::Text::Encoding>                           EncodingPtr;

typedef System::SharedPtr<System::IO::Stream>                               StreamPtr;
typedef System::SharedPtr<System::IO::FileStream>                           FileStreamPtr;
typedef System::SharedPtr<System::IO::MemoryStream>                         MemoryStreamPtr;
typedef System::SharedPtr<System::IO::StreamReader>                         StreamReaderPtr;
typedef System::SharedPtr<System::IO::StreamWriter>                         StreamWriterPtr;

typedef System::SharedPtr<System::IO::FileInfo>                             FileInfoPtr;
typedef System::SharedPtr<System::IO::FileSystemInfo>                       FileSystemInfoPtr;
typedef System::SharedPtr<System::IO::DirectoryInfo>                        DirectoryInfoPtr;

//common typedef's
typedef wchar_t char_t;

struct IntPtr_helper
    : std::enable_if<sizeof(void*) == sizeof(uint32_t), uint32_t>
    , std::enable_if<sizeof(void*) == sizeof(uint64_t), uint64_t>
{};
typedef IntPtr_helper::type IntPtr;
static_assert(sizeof(void*) == sizeof(IntPtr), "Failed to set up IntPtr type");
const IntPtr IntPtrZero = 0;

#define _T(x) L##x

#define HACK_ELLIPSE_PASS_BEGIN() { \
    struct va_pass_ { \
        /*Dirty hack here, but I suppose that 1Kb will be enough \
        anyway the object va_pass_ will not be created*/ \
        char buf[1024]; \
    }; \
    va_list va_;

#define HACK_ELLIPSE_PASS(format) \
    *(va_pass_*)(va_start(va_, format), va_)

#define HACK_ELLIPSE_PASS_END() \
    va_end(va_); }


#define __WIDEN2(quote) L##quote
#define __WIDEN(quote) __WIDEN2(quote)

#if defined(__GNUC__)
    // under gcc __PRETTY_FUNCTION__ is a variable, so it is impossible to widen :(
    #define ASPOSE_CURRENT_FUNCTION std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>().from_bytes(__PRETTY_FUNCTION__).c_str()
#elif defined(_MSC_VER)
    #define ASPOSE_CURRENT_FUNCTION __WIDEN(__FUNCSIG__)
#else
    #define ASPOSE_CURRENT_FUNCTION L""
    #pragma message("ASPOSE_CURRENT_FUNCTION is undefined!")
#endif

#endif // __fwd_h__
