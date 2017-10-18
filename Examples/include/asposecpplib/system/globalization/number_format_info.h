#ifndef _number_format_info_h_
#define _number_format_info_h_
#include "system/string.h"
#include "system/iformatprovider.h"
#include "system/exceptions.h"
#include "system/details/culture_data_ptr.h"

namespace System
{
    namespace Globalization
    {
        class NumberFormatInfo;
        typedef SharedPtr<NumberFormatInfo> NumberFormatInfoPtr;
        class NumberFormatInfo : virtual public Object, public IFormatProvider
        {
            FRIEND_FUNCTION_System_MakeObject;
            RTTI_INFO(NumberFormatInfo, ::System::BaseTypesInfo<System::Object>)

        public:
            NumberFormatInfo();

            NumberFormatInfoPtr Clone();

            const String& get_NumberDecimalSeparator() const;
            void set_NumberDecimalSeparator(const String& value);

            int get_NumberDecimalDigits();
            void set_NumberDecimalDigits(int value);

            const String& get_NumberGroupSeparator() const;
            void set_NumberGroupSeparator(const String& value);

            const String& get_PercentSymbol() const;
            void set_PercentSymbol(const String& value);

            const String& get_PerMilleSymbol() const;
            void set_PerMilleSymbol(const String& value);

            const String& get_CurrencySymbol() const;
            void set_CurrencySymbol(const String& value);

            const String& get_PositiveSign() const;
            void set_PositiveSign(const String& value);

            const String& get_NegativeSign() const;
            void set_NegativeSign(const String& value);

            const String& get_LocaleName() const;

            String get_CurrencyGroupSeparator();
            void set_CurrencyGroupSeparator(const String& value);

            String get_CurrencyDecimalSeparator();
            void set_CurrencyDecimalSeparator(const String& value);

            int get_CurrencyDecimalDigits();
            void set_CurrencyDecimalDigits(int digits);

            ArrayPtr<int> get_CurrencyGroupSizes();
            void set_CurrencyGroupSizes(ArrayPtr<int> value);

            int get_CurrencyNegativePattern();
            void set_CurrencyNegativePattern(int value);

            int get_CurrencyPositivePattern();
            void set_CurrencyPositivePattern(int value);

            String get_NaNSymbol();
            void set_NaNSymbol(const String& value);

            String get_PositiveInfinitySymbol();
            void set_PositiveInfinitySymbol(const String& value);

            String get_NegativeInfinitySymbol();
            void set_NegativeInfinitySymbol(const String& value);

            ArrayPtr<int> get_NumberGroupSizes();
            void set_NumberGroupSizes(ArrayPtr<int> value);

            int get_NumberNegativePattern();
            void set_NumberNegativePattern(int value);

            int get_PercentDecimalDigits();
            void set_PercentDecimalDigits(int value);

            String get_PercentDecimalSeparator();
            void set_PercentDecimalSeparator(const String& value);

            String get_PercentGroupSeparator();
            void set_PercentGroupSeparator(const String& value);

            ArrayPtr<int> get_PercentGroupSizes();
            void set_PercentGroupSizes(ArrayPtr<int> value);

            int get_PercentNegativePattern();
            void set_PercentNegativePattern(int value);

            int get_PercentPositivePattern();
            void set_PercentPositivePattern(int value);

            bool IsInvariant() const;
            bool get_IsReadOnly() const;

            static SharedPtr<NumberFormatInfo> get_CurrentInfo();
            static SharedPtr<NumberFormatInfo> get_InvariantInfo();

            // IFormatProvider interface
            SharedPtr<Object> GetFormat(const TypeInfo &formatType) override;

            static NumberFormatInfoPtr GetInstance(const IFormatProviderPtr& formatProvider);
            static NumberFormatInfoPtr ReadOnly(NumberFormatInfoPtr numberFormatInfo);

        private:
            friend class CultureInfo;
            friend class Details::CultureData;
            NumberFormatInfo(Details::CultureDataPtr cultureData);

            void set_IsReadOnly(bool value);

            String m_positiveSign;
            String m_negativeSign;

            String m_numberDecimalSeparator;
            String m_numberGroupSeparator;

            int m_numberDecimalDigits;
            int m_numberNegativePattern;

            std::vector<int> m_numberGroupSizes;

            String m_currencyGroupSeparator;
            String m_currencyDecimalSeparator;
            String m_currencySymbol;

            int m_currencyDecimalDigits;
            int m_currencyPositivePattern;
            int m_currencyNegativePattern;

            std::vector<int> m_currencyGroupSizes;

            String m_nanSymbol;
            String m_positiveInfinitySymbol;
            String m_negativeInfinitySymbol;

            String m_percentSymbol;
            String m_percentDecimalSeparator;
            String m_percentGroupSeparator;

            int m_percentPositivePattern;
            int m_percentNegativePattern;
            int m_percentDecimalDigits;

            std::vector<int> m_percentGroupSizes;

            String m_perMilleSymbol;

            String m_localeName;

            std::vector<String> m_nativeDigits;

            bool m_isInvariant;
            bool m_isReadOnly = false;
        };
    }
}
#endif // _number_format_info_h_
