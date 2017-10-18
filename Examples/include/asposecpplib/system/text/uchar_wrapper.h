#ifndef _aspose_system_text_uchar_wrapper_h_
#define _aspose_system_text_uchar_wrapper_h_


#include <unicode/ustring.h>
#include "system/enum_helpers.h"
#include <vector>


namespace System { namespace Text {
    enum class UCharWrapperDirection
    {
        None = 0,
        Input = 1,
        Output = 2,
        Both = Input | Output
    };

    DECLARE_ENUM_OPERATORS(UCharWrapperDirection)

    namespace Details {
        template <typename Same>
        inline void ConvertUChar(const Same *source, const Same *destination, int length) {}

        #if U_SIZEOF_WCHAR_T == 4
        void ConvertUChar(const UChar *source, wchar_t *destination, int length);
        void ConvertUChar(const wchar_t *source, UChar *destination, int length);
        void ConvertUChar(const UChar *source, const wchar_t *destination, int length);
        void ConvertUChar(const wchar_t *source, const UChar *destination, int length);
        #endif

        template <typename External, UCharWrapperDirection direction, bool NoOutput = (direction & UCharWrapperDirection::Output) == UCharWrapperDirection::None>
        struct UCharWrapperExternalArgument
        {
            typedef External* type;
        };
        template <typename External, UCharWrapperDirection direction>
        struct UCharWrapperExternalArgument<External, direction, true>
        {
            typedef const External* type;
        };
    }

    template <typename External, typename Internal, UCharWrapperDirection direction>
    class UCharWrapper
    {
    private:
        typename Details::UCharWrapperExternalArgument<External, direction>::type const m_external;
        std::vector<Internal> m_internal;

    public:
        typename Details::UCharWrapperExternalArgument<Internal, direction>::type m_data;
        int m_count;
        typename Details::UCharWrapperExternalArgument<Internal, direction>::type m_limit;

        UCharWrapper(typename Details::UCharWrapperExternalArgument<External, direction>::type data, int count)
            : m_external(data), m_internal((typename std::vector<Internal>::size_type)count), m_data(&m_internal[0]), m_count(count), m_limit(&m_internal[0] + m_count)
        {
            if ((direction & UCharWrapperDirection::Input) != UCharWrapperDirection::None)
                Details::ConvertUChar(m_external, &m_internal[0], m_count);
        }
        ~UCharWrapper()
        {
            if ((direction & UCharWrapperDirection::Output) != UCharWrapperDirection::None)
                Details::ConvertUChar(&m_internal[0], m_external, m_count);
        }

        int GetUsed() const
        {
            return (int)(m_data - &m_internal[0]);
        }
    };

    template <typename Same, UCharWrapperDirection direction>
    class UCharWrapper<Same, Same, direction>
    {
    private:
        typename Details::UCharWrapperExternalArgument<Same, direction>::type m_start;
    public:
        typename Details::UCharWrapperExternalArgument<Same, direction>::type m_data;
        int m_count;
        typename Details::UCharWrapperExternalArgument<Same, direction>::type m_limit;

        UCharWrapper(typename Details::UCharWrapperExternalArgument<Same, direction>::type data, int count)
            : m_start(data), m_data(data), m_count(count), m_limit(m_data + m_count)
        {}

        int GetUsed() const
        {
            return (int)(m_data - m_start);
        }
    };

} } //namespace System::Text


#endif