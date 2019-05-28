/// @file system/globalization/number_format_info.h
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
/// Number format info pointer.
typedef SharedPtr<NumberFormatInfo> NumberFormatInfoPtr;

/// Holds information on how to format numbers.
/// Setter operations are only enabled on non-read-only objects.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS NumberFormatInfo : virtual public Object, public IFormatProvider
{
    /// Enables construction with MakeObject().
    FRIEND_FUNCTION_System_MakeObject;
    /// RTTI information.
    RTTI_INFO(NumberFormatInfo, ::System::BaseTypesInfo<System::Object>)

public:
    /// Constructs invariant format info.
    ASPOSECPP_SHARED_API NumberFormatInfo();
    /// Clones format info.
    ASPOSECPP_SHARED_API NumberFormatInfoPtr Clone();

    /// Gets decimal separator.
    /// @return Decimal separator.
    ASPOSECPP_SHARED_API const String& get_NumberDecimalSeparator() const;
    /// Sets decimal separator.
    /// @param value Decimal separator.
    ASPOSECPP_SHARED_API void set_NumberDecimalSeparator(const String& value);
    /// Gets number of decimal digits.
    /// @return Number of digits.
    ASPOSECPP_SHARED_API int get_NumberDecimalDigits();
    /// Sets number of decimal digits.
    /// @param value Number of digits.
    ASPOSECPP_SHARED_API void set_NumberDecimalDigits(int value);
    /// Gets number group separator.
    /// @return Group separator.
    ASPOSECPP_SHARED_API const String& get_NumberGroupSeparator() const;
    /// Sets number group separator.
    /// @param value Group separator.
    ASPOSECPP_SHARED_API void set_NumberGroupSeparator(const String& value);
    /// Gets percent symbol.
    /// @return Percent symbol.
    ASPOSECPP_SHARED_API const String& get_PercentSymbol() const;
    /// Sets percent symbol.
    /// @param value Percent symbol.
    ASPOSECPP_SHARED_API void set_PercentSymbol(const String& value);
    /// Gets permille symbol.
    /// @return Permille symbol.
    ASPOSECPP_SHARED_API const String& get_PerMilleSymbol() const;
    /// Sets permille symbol.
    /// @param value Permille symbol.
    ASPOSECPP_SHARED_API void set_PerMilleSymbol(const String& value);
    /// Gets currency symbol.
    /// @return Currency symbol.
    ASPOSECPP_SHARED_API const String& get_CurrencySymbol() const;
    /// Sets currency symbol.
    /// @param value Currency symbol.
    ASPOSECPP_SHARED_API void set_CurrencySymbol(const String& value);
    /// Gets positive sign.
    /// @return Positive sign.
    ASPOSECPP_SHARED_API const String& get_PositiveSign() const;
    /// Sets positive sign.
    /// @param value Positive sign.
    ASPOSECPP_SHARED_API void set_PositiveSign(const String& value);
    /// Gets negative sign.
    /// @return Negative sign.
    ASPOSECPP_SHARED_API const String& get_NegativeSign() const;
    /// Sets negative sign.
    /// @param value Negative sign.
    ASPOSECPP_SHARED_API void set_NegativeSign(const String& value);

    /// Gets locale name.
    /// @return Name of locale associated with format info.
    ASPOSECPP_SHARED_API const String& get_LocaleName() const;

    /// Gets currency group separator.
    /// @return Currency group separator.
    ASPOSECPP_SHARED_API String get_CurrencyGroupSeparator();
    /// Sets currency group separator.
    /// @param value Currency group separator.
    ASPOSECPP_SHARED_API void set_CurrencyGroupSeparator(const String& value);
    /// Gets currency decimal separator.
    /// @return Currency decimal separator.
    ASPOSECPP_SHARED_API String get_CurrencyDecimalSeparator();
    /// Sets currency decimal separator.
    /// @param value Currency decimal separator.
    ASPOSECPP_SHARED_API void set_CurrencyDecimalSeparator(const String& value);
    /// Gets number of currency decimal digits.
    /// @return Number of currency decimal digits.
    ASPOSECPP_SHARED_API int get_CurrencyDecimalDigits();
    /// Sets number of currency decimal digits.
    /// @param digits Number of currency decimal digits.
    ASPOSECPP_SHARED_API void set_CurrencyDecimalDigits(int digits);
    /// Gets number of currency decimal digits per group.
    /// @return Number of currency decimal digits per group.
    ASPOSECPP_SHARED_API ArrayPtr<int> get_CurrencyGroupSizes();
    /// Sets number of currency decimal digits per group.
    /// @param value Number of currency decimal digits per group.
    ASPOSECPP_SHARED_API void set_CurrencyGroupSizes(const ArrayPtr<int>& value);
    /// Gets currency negative pattern.
    /// @return Index of the pattern in array {"($n)", "-$n", "$-n", "$n-", "(n$)", "-n$", "n-$", "n$-", "-n $", "-$ n", "n $-", "$ n-", "$ -n", "n- $", "($ n)", "(n $)"}, where "n" is number, "-" is minus sign and "$" is currency symbol.
    ASPOSECPP_SHARED_API int get_CurrencyNegativePattern();
    /// Sets currency negative pattern.
    /// @param value Index of the pattern in array {"($n)", "-$n", "$-n", "$n-", "(n$)", "-n$", "n-$", "n$-", "-n $", "-$ n", "n $-", "$ n-", "$ -n", "n- $", "($ n)", "(n $)"}, where "n" is number, "-" is minus sign and "$" is currency symbol.
    ASPOSECPP_SHARED_API void set_CurrencyNegativePattern(int value);
    /// Gets currency positive pattern.
    /// @return Index of the pattern in array {"$n", "n$", "$ n", "n $"}, where "n" is number and "$" is currency symbol.
    ASPOSECPP_SHARED_API int get_CurrencyPositivePattern();
    /// Sets currency positive pattern.
    /// @param value Index of the pattern in array {"$n", "n$", "$ n", "n $"}, where "n" is number and "$" is currency symbol.
    ASPOSECPP_SHARED_API void set_CurrencyPositivePattern(int value);
    /// Gets Not-a-Number symbol.
    /// @return Not-a-Number symbol.
    ASPOSECPP_SHARED_API String get_NaNSymbol();
    /// Sets Not-a-Number symbol.
    /// @param value Not-a-Number symbol.
    ASPOSECPP_SHARED_API void set_NaNSymbol(const String& value);
    /// Gets positive infinity symbol.
    /// @return Positive infinity symbol.
    ASPOSECPP_SHARED_API String get_PositiveInfinitySymbol();
    /// Sets positive infinity symbol.
    /// @param value Positive infinity symbol.
    ASPOSECPP_SHARED_API void set_PositiveInfinitySymbol(const String& value);
    /// Gets negative infinity symbol.
    /// @return Negative infinity symbol.
    ASPOSECPP_SHARED_API String get_NegativeInfinitySymbol();
    /// Sets negative infinity symbol.
    /// @param value Negative infinity symbol.
    ASPOSECPP_SHARED_API void set_NegativeInfinitySymbol(const String& value);

    /// Gets numbers of digits per group.
    /// @return Array of digits per group, left to right; each element must be 1 to 9, last one can be 0 which means "combine all"; last element repeats.
    ASPOSECPP_SHARED_API ArrayPtr<int> get_NumberGroupSizes();
    /// Sets numbers of digits per group.
    /// @param value Array of digits per group, left to right; each element must be 1 to 9, last one can be 0 which means "combine all"; last element repeats.
    ASPOSECPP_SHARED_API void set_NumberGroupSizes(const ArrayPtr<int>& value);
    /// Gets number negative pattern.
    /// @return Index of the pattern in array {"(n)", "-n", "- n", "n-", "n -"}, where "n" is number and "-" is minus sign.
    ASPOSECPP_SHARED_API int get_NumberNegativePattern();
    /// Sets number negative pattern.
    /// @param value Index of the pattern in array {"(n)", "-n", "- n", "n-", "n -"}, where "n" is number and "-" is minus sign.
    ASPOSECPP_SHARED_API void set_NumberNegativePattern(int value);
    /// Gets number of decimal places in percent values.
    /// @return Number of decimal places in percent values.
    ASPOSECPP_SHARED_API int get_PercentDecimalDigits();
    /// Sets number of decimal places in percent values.
    /// @param value Number of decimal places in percent values.
    ASPOSECPP_SHARED_API void set_PercentDecimalDigits(int value);
    /// Gets decimal separator in percent values.
    /// @return Decimal separator in percent values.
    ASPOSECPP_SHARED_API String get_PercentDecimalSeparator();
    /// Sets decimal separator in percent values.
    /// @param value Decimal separator in percent values.
    ASPOSECPP_SHARED_API void set_PercentDecimalSeparator(const String& value);
    /// Gets group separator in percent values.
    /// @return Group separator in percent values.
    ASPOSECPP_SHARED_API String get_PercentGroupSeparator();
    /// Sets group separator in percent values.
    /// @param value Group separator in percent values.
    ASPOSECPP_SHARED_API void set_PercentGroupSeparator(const String& value);
    /// Gets numbers of digits per percent value group.
    /// @return Array of digits per group, left to right; each element must be 1 to 9, last one can be 0 which means "combine all"; last element repeats.
    ASPOSECPP_SHARED_API ArrayPtr<int> get_PercentGroupSizes();
    /// Sets numbers of digits per percent value group.
    /// @param value Array of digits per group, left to right; each element must be 1 to 9, last one can be 0 which means "combine all"; last element repeats.
    ASPOSECPP_SHARED_API void set_PercentGroupSizes(const ArrayPtr<int>& value);
    /// Gets percent negative pattern.
    /// @return Index of the pattern in array {"-n %", "-n%", "-%n", "%-n", "%n-", "n-%", "n%-", "-% n", "n %-", "% n-", "% -n", "n- %"}, where "n" is number, "%" is percent sign and "-" is minus sign.
    ASPOSECPP_SHARED_API int get_PercentNegativePattern();
    /// Sets percent negative pattern.
    /// @param value Index of the pattern in array {"-n %", "-n%", "-%n", "%-n", "%n-", "n-%", "n%-", "-% n", "n %-", "% n-", "% -n", "n- %"}, where "n" is number, "%" is percent sign and "-" is minus sign.
    ASPOSECPP_SHARED_API void set_PercentNegativePattern(int value);
    /// Gets percent positive pattern.
    /// @return Index of the pattern in array {"n %", "n%", "%n", "% n"}, where "n" is number and "%" is percent sign.
    ASPOSECPP_SHARED_API int get_PercentPositivePattern();
    /// Sets percent positive pattern.
    /// @param value Index of the pattern in array {"n %", "n%", "%n", "% n"}, where "n" is number and "%" is percent sign.
    ASPOSECPP_SHARED_API void set_PercentPositivePattern(int value);

    /// Checks if related culture is invariant.
    /// @return True if format info's culture is invariant, false otherwise.
    ASPOSECPP_SHARED_API bool IsInvariant() const;
    /// Checks if format is read-only.
    /// @return True if format is read-only, false otherwise.
    ASPOSECPP_SHARED_API bool get_IsReadOnly() const;

    /// Gets current thread culture-defined number format info.
    /// @return Format info object.
    static ASPOSECPP_SHARED_API SharedPtr<NumberFormatInfo> get_CurrentInfo();
    /// Gets invariant culture-defined number format info.
    /// @return Format info object.
    static ASPOSECPP_SHARED_API SharedPtr<NumberFormatInfo> get_InvariantInfo();

    // IFormatProvider interface
    /// Gets formatter of specific type.
    /// @param formatType Type of formatter to get; only NumberFormatInfo type is supported.
    /// @return Formatter or null if not availsable.
    ASPOSECPP_SHARED_API SharedPtr<Object> GetFormat(const TypeInfo &formatType) override;

    /// Gets formatter associated with format provider.
    /// @param formatProvider Provider to get format for.
    /// @return Formatter associated with format provider or current thread's format if unavailable.
    static ASPOSECPP_SHARED_API NumberFormatInfoPtr GetInstance(const IFormatProviderPtr& formatProvider);
    /// Gets read-only version of formatter.
    /// @param numberFormatInfo Formatter to get read-only version of.
    /// @return if @p numberFormatInfo is read-only, returns it, otherwise creates a copy of it and marks it as read-only.
    static ASPOSECPP_SHARED_API NumberFormatInfoPtr ReadOnly(NumberFormatInfoPtr numberFormatInfo);

private:
    /// Friendship to optimize implementation.
    friend class CultureInfo;
    /// Friendship to optimize implementation.
    friend class Details::CultureData;
    /// Constructor.
    /// @param cultureData Culture to get data for.
    NumberFormatInfo(Details::CultureDataPtr cultureData);

    /// Toggles read-only sign.
    /// @param value True to make object read-only, false otherwise.
    void set_IsReadOnly(bool value);

    /// Positive sign.
    String m_positiveSign;
    /// Negative sign.
    String m_negativeSign;
    /// Decimal separator.
    String m_numberDecimalSeparator;
    /// Group separator.
    String m_numberGroupSeparator;
    /// Decimal digits number.
    int m_numberDecimalDigits;
    /// Negative pattern.
    int m_numberNegativePattern;
    /// Digits per group.
    std::vector<int> m_numberGroupSizes;

    /// Currency group separator.
    String m_currencyGroupSeparator;
    /// Currency decimal separator.
    String m_currencyDecimalSeparator;
    /// Currency symbol.
    String m_currencySymbol;
    /// Currency decimal digit count.
    int m_currencyDecimalDigits;
    /// Currency positive pattern.
    int m_currencyPositivePattern;
    /// Currency negative pattern.
    int m_currencyNegativePattern;
    /// Digits per group in currency values.
    std::vector<int> m_currencyGroupSizes;

    /// NaN symbol.
    String m_nanSymbol;
    /// Positive infinity symbol.
    String m_positiveInfinitySymbol;
    /// Negative infinity symbol.
    String m_negativeInfinitySymbol;

    /// Percent symbol.
    String m_percentSymbol;
    /// Percent decimal separator.
    String m_percentDecimalSeparator;
    /// Percent group separator.
    String m_percentGroupSeparator;
    /// Percent positive pattern.
    int m_percentPositivePattern;
    /// Percent negative pattern.
    int m_percentNegativePattern;
    /// Percent decimal digit count.
    int m_percentDecimalDigits;
    /// Digits per group in percent values.
    std::vector<int> m_percentGroupSizes;

    /// Permille symbol.
    String m_perMilleSymbol;

    /// Locale name.
    String m_localeName;

    /// Digits.
    std::vector<String> m_nativeDigits;
    
    /// Invariant culture flag.
    bool m_isInvariant;
    /// Read only flag.
    bool m_isReadOnly = false;
};

}
}
#endif // _number_format_info_h_
