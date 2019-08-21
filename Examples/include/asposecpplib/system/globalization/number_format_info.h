/// @file system/globalization/number_format_info.h
#pragma once

#include <system/iformatprovider.h>
#include <system/icloneable.h>
#include <system/nullable.h>
#include <system/globalization/digit_shapes.h>
#include <system/globalization/details/number_format_data_ptr.h>
#include <system/globalization/details/culture_data_ptr.h>
#include <system/details/spin_lock.h>

namespace System { namespace Globalization {

namespace Details { 
    class NumberFormatInfoReader; 
}

class NumberFormatInfo;
/// NumberFormatInfo pointer.
typedef SharedPtr<NumberFormatInfo> NumberFormatInfoPtr;

/// Holds information on how to format numbers.
/// Setter operations are only enabled on non-read-only objects.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS NumberFormatInfo final
    : virtual public Object
    , public IFormatProvider
    , public ICloneable
{
    /// RTTI information.
    RTTI_INFO(NumberFormatInfo, ::System::BaseTypesInfo<System::Object>)

    /// Enables construction with MakeObject().
    FRIEND_FUNCTION_System_MakeObject;

    /// Default constructor (invariant NumberFormatInfo).
    ASPOSECPP_SHARED_API NumberFormatInfo();

public:
    /// Checks if format is read-only.
    /// @return True if format is read-only, false otherwise.
    ASPOSECPP_SHARED_API bool get_IsReadOnly() const;

    // ICloneable interface
    /// Clones format info.
    /// @return New object copied from the current NumberFormatInfo.
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

    /// Gets decimal separator.
    /// @return Decimal separator.
    ASPOSECPP_SHARED_API String get_NumberDecimalSeparator() const;
    /// Sets decimal separator.
    /// @param value Decimal separator.
    ASPOSECPP_SHARED_API void set_NumberDecimalSeparator(const String& value);

    /// Gets number of decimal digits.
    /// @return Number of digits.
    ASPOSECPP_SHARED_API int get_NumberDecimalDigits() const;
    /// Sets number of decimal digits.
    /// @param value Number of digits.
    ASPOSECPP_SHARED_API void set_NumberDecimalDigits(int value);

    /// Gets number group separator.
    /// @return Group separator.
    ASPOSECPP_SHARED_API String get_NumberGroupSeparator() const;
    /// Sets number group separator.
    /// @param value Group separator.
    ASPOSECPP_SHARED_API void set_NumberGroupSeparator(const String& value);

    /// Gets percent symbol.
    /// @return Percent symbol.
    ASPOSECPP_SHARED_API String get_PercentSymbol() const;
    /// Sets percent symbol.
    /// @param value Percent symbol.
    ASPOSECPP_SHARED_API void set_PercentSymbol(const String& value);

    /// Gets permille symbol.
    /// @return Permille symbol.
    ASPOSECPP_SHARED_API String get_PerMilleSymbol() const;
    /// Sets permille symbol.
    /// @param value Permille symbol.
    ASPOSECPP_SHARED_API void set_PerMilleSymbol(const String& value);

    /// Gets currency symbol.
    /// @return Currency symbol.
    ASPOSECPP_SHARED_API String get_CurrencySymbol() const;
    /// Sets currency symbol.
    /// @param value Currency symbol.
    ASPOSECPP_SHARED_API void set_CurrencySymbol(const String& value);

    /// Gets positive sign.
    /// @return Positive sign.
    ASPOSECPP_SHARED_API String get_PositiveSign() const;
    /// Sets positive sign.
    /// @param value Positive sign.
    ASPOSECPP_SHARED_API void set_PositiveSign(const String& value);

    /// Gets negative sign.
    /// @return Negative sign.
    ASPOSECPP_SHARED_API String get_NegativeSign() const;
    /// Sets negative sign.
    /// @param value Negative sign.
    ASPOSECPP_SHARED_API void set_NegativeSign(const String& value);

    /// Gets currency group separator.
    /// @return Currency group separator.
    ASPOSECPP_SHARED_API String get_CurrencyGroupSeparator() const;
    /// Sets currency group separator.
    /// @param value Currency group separator.
    ASPOSECPP_SHARED_API void set_CurrencyGroupSeparator(const String& value);

    /// Gets currency decimal separator.
    /// @return Currency decimal separator.
    ASPOSECPP_SHARED_API String get_CurrencyDecimalSeparator() const;
    /// Sets currency decimal separator.
    /// @param value Currency decimal separator.
    ASPOSECPP_SHARED_API void set_CurrencyDecimalSeparator(const String& value);

    /// Gets number of currency decimal digits.
    /// @return Number of currency decimal digits.
    ASPOSECPP_SHARED_API int get_CurrencyDecimalDigits() const;
    /// Sets number of currency decimal digits.
    /// @param value Number of currency decimal digits.
    ASPOSECPP_SHARED_API void set_CurrencyDecimalDigits(int value);

    /// Gets number of currency decimal digits per group.
    /// @return Number of currency decimal digits per group.
    ASPOSECPP_SHARED_API ArrayPtr<int> get_CurrencyGroupSizes() const;
    /// Sets number of currency decimal digits per group.
    /// @param value Number of currency decimal digits per group.
    ASPOSECPP_SHARED_API void set_CurrencyGroupSizes(const ArrayPtr<int>& value);

    /// Gets currency negative pattern.
    /// @return Index of the pattern in array {"($n)", "-$n", "$-n", "$n-", "(n$)", "-n$", "n-$", "n$-", "-n $", "-$ n", "n $-", "$ n-", "$ -n", "n- $", "($ n)", "(n $)"}, where "n" is number, "-" is minus sign and "$" is currency symbol.
    ASPOSECPP_SHARED_API int get_CurrencyNegativePattern() const;
    /// Sets currency negative pattern.
    /// @param value Index of the pattern in array {"($n)", "-$n", "$-n", "$n-", "(n$)", "-n$", "n-$", "n$-", "-n $", "-$ n", "n $-", "$ n-", "$ -n", "n- $", "($ n)", "(n $)"}, where "n" is number, "-" is minus sign and "$" is currency symbol.
    ASPOSECPP_SHARED_API void set_CurrencyNegativePattern(int value);

    /// Gets currency positive pattern.
    /// @return Index of the pattern in array {"$n", "n$", "$ n", "n $"}, where "n" is number and "$" is currency symbol.
    ASPOSECPP_SHARED_API int get_CurrencyPositivePattern() const;
    /// Sets currency positive pattern.
    /// @param value Index of the pattern in array {"$n", "n$", "$ n", "n $"}, where "n" is number and "$" is currency symbol.
    ASPOSECPP_SHARED_API void set_CurrencyPositivePattern(int value);

    /// Gets Not-a-Number symbol.
    /// @return Not-a-Number symbol.
    ASPOSECPP_SHARED_API String get_NaNSymbol() const;
    /// Sets Not-a-Number symbol.
    /// @param value Not-a-Number symbol.
    ASPOSECPP_SHARED_API void set_NaNSymbol(const String& value);

    /// Gets positive infinity symbol.
    /// @return Positive infinity symbol.
    ASPOSECPP_SHARED_API String get_PositiveInfinitySymbol() const;
    /// Sets positive infinity symbol.
    /// @param value Positive infinity symbol.
    ASPOSECPP_SHARED_API void set_PositiveInfinitySymbol(const String& value);

    /// Gets negative infinity symbol.
    /// @return Negative infinity symbol.
    ASPOSECPP_SHARED_API String get_NegativeInfinitySymbol() const;
    /// Sets negative infinity symbol.
    /// @param value Negative infinity symbol.
    ASPOSECPP_SHARED_API void set_NegativeInfinitySymbol(const String& value);

    /// Gets numbers of digits per group.
    /// @return Array of digits per group, left to right; each element must be 1 to 9, last one can be 0 which means "combine all"; last element repeats.
    ASPOSECPP_SHARED_API ArrayPtr<int> get_NumberGroupSizes() const;
    /// Sets numbers of digits per group.
    /// @param value Array of digits per group, left to right; each element must be 1 to 9, last one can be 0 which means "combine all"; last element repeats.
    ASPOSECPP_SHARED_API void set_NumberGroupSizes(const ArrayPtr<int>& value);

    /// Gets number negative pattern.
    /// @return Index of the pattern in array {"(n)", "-n", "- n", "n-", "n -"}, where "n" is number and "-" is minus sign.
    ASPOSECPP_SHARED_API int get_NumberNegativePattern() const;
    /// Sets number negative pattern.
    /// @param value Index of the pattern in array {"(n)", "-n", "- n", "n-", "n -"}, where "n" is number and "-" is minus sign.
    ASPOSECPP_SHARED_API void set_NumberNegativePattern(int value);

    /// Gets number of decimal places in percent values.
    /// @return Number of decimal places in percent values.
    ASPOSECPP_SHARED_API int get_PercentDecimalDigits() const;
    /// Sets number of decimal places in percent values.
    /// @param value Number of decimal places in percent values.
    ASPOSECPP_SHARED_API void set_PercentDecimalDigits(int value);

    /// Gets decimal separator in percent values.
    /// @return Decimal separator in percent values.
    ASPOSECPP_SHARED_API String get_PercentDecimalSeparator() const;
    /// Sets decimal separator in percent values.
    /// @param value Decimal separator in percent values.
    ASPOSECPP_SHARED_API void set_PercentDecimalSeparator(const String& value);

    /// Gets group separator in percent values.
    /// @return Group separator in percent values.
    ASPOSECPP_SHARED_API String get_PercentGroupSeparator() const;
    /// Sets group separator in percent values.
    /// @param value Group separator in percent values.
    ASPOSECPP_SHARED_API void set_PercentGroupSeparator(const String& value);

    /// Gets numbers of digits per percent value group.
    /// @return Array of digits per group, left to right; each element must be 1 to 9, last one can be 0 which means "combine all"; last element repeats.
    ASPOSECPP_SHARED_API ArrayPtr<int> get_PercentGroupSizes() const;
    /// Sets numbers of digits per percent value group.
    /// @param value Array of digits per group, left to right; each element must be 1 to 9, last one can be 0 which means "combine all"; last element repeats.
    ASPOSECPP_SHARED_API void set_PercentGroupSizes(const ArrayPtr<int>& value);

    /// Gets percent negative pattern.
    /// @return Index of the pattern in array {"-n %", "-n%", "-%n", "%-n", "%n-", "n-%", "n%-", "-% n", "n %-", "% n-", "% -n", "n- %"}, where "n" is number, "%" is percent sign and "-" is minus sign.
    ASPOSECPP_SHARED_API int get_PercentNegativePattern() const;
    /// Sets percent negative pattern.
    /// @param value Index of the pattern in array {"-n %", "-n%", "-%n", "%-n", "%n-", "n-%", "n%-", "-% n", "n %-", "% n-", "% -n", "n- %"}, where "n" is number, "%" is percent sign and "-" is minus sign.
    ASPOSECPP_SHARED_API void set_PercentNegativePattern(int value);

    /// Gets percent positive pattern.
    /// @return Index of the pattern in array {"n %", "n%", "%n", "% n"}, where "n" is number and "%" is percent sign.
    ASPOSECPP_SHARED_API int get_PercentPositivePattern() const;
    /// Sets percent positive pattern.
    /// @param value Index of the pattern in array {"n %", "n%", "%n", "% n"}, where "n" is number and "%" is percent sign.
    ASPOSECPP_SHARED_API void set_PercentPositivePattern(int value);

    /// Gets digits symbols (0 through 9).
    /// @return Array of digit symbols.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_NativeDigits() const;
    /// Sets digits symbols (0 through 9).
    /// @param value Array of digit symbols.
    ASPOSECPP_SHARED_API void set_NativeDigits(const ArrayPtr<String>& value);

    /// Gets a value that specifies how to display shape of a digit.
    /// @return Value that specifies how to display shape of a digit.
    ASPOSECPP_SHARED_API DigitShapes get_DigitSubstitution() const;
    /// Sets a value that specifies how to display shape of a digit.
    /// @param value Value that specifies how to display shape of a digit.
    ASPOSECPP_SHARED_API void set_DigitSubstitution(DigitShapes value);

    // IFormatProvider interface
    /// Gets formatter of specific type.
    /// @param format_type Type of formatter to get; only NumberFormatInfo type is supported.
    /// @return Formatter or null if not availsable.
    ASPOSECPP_SHARED_API SharedPtr<Object> GetFormat(const TypeInfo &format_type) override;

    /// Gets current thread culture-defined number format info.
    /// @return Format info object.
    static ASPOSECPP_SHARED_API NumberFormatInfoPtr get_CurrentInfo();
    /// Gets invariant culture-defined number format info.
    /// @return Format info object.
    static ASPOSECPP_SHARED_API const NumberFormatInfoPtr& get_InvariantInfo();

    /// Gets formatter associated with format provider.
    /// @param provider Provider to get format for.
    /// @return Formatter associated with format provider or current thread's format if unavailable.
    static ASPOSECPP_SHARED_API NumberFormatInfoPtr GetInstance(const IFormatProviderPtr& provider);
    /// Gets read-only version of formatter.
    /// @param nfi Formatter to get read-only version of.
    /// @return if @p nfi is read-only, returns it, otherwise creates a copy of it and marks it as read-only.
    static ASPOSECPP_SHARED_API NumberFormatInfoPtr ReadOnly(NumberFormatInfoPtr nfi);

    NumberFormatInfo& operator=(const NumberFormatInfo&) = delete;

private:
    friend class Details::NumberFormatInfoReader;

    using Lock = System::Details::OptionalSpinLock;
    using LockContext = std::lock_guard<Lock>;

    /// Read only flag.
    const bool m_is_read_only;
    /// Invariant flag.
    const bool m_is_invariant;
    /// Culture data.
    const Details::CultureDataPtr m_culture_data;
    /// Number format data.
    Details::NumberFormatDataPtr m_data;
    /// Mutex to protect object data.
    mutable Lock m_lockable;
    /// Name of culture associated with format info.
    const String m_culture_name;

    /// Currency decimal digit count.
    mutable Nullable<int> m_currency_decimal_digits;
    /// Currency decimal separator.
    mutable String m_currency_decimal_separator;
    /// Currency group separator.
    mutable String m_currency_group_separator;
    /// Digits per group in currency values.
    mutable ArrayPtr<int> m_currency_group_sizes;
    /// Currency negative pattern.
    mutable Nullable<int> m_currency_negative_pattern;
    /// Currency positive pattern.
    mutable Nullable<int> m_currency_positive_pattern;
    /// Currency symbol.
    mutable String m_currency_symbol;
    /// Value that specifies how to display shape of a digit.
    mutable Nullable<DigitShapes> m_digit_substitution;
    /// NaN symbol.
    mutable String m_nan_symbol;
    /// Digits.
    mutable ArrayPtr<String> m_native_digits;
    /// Negative infinity symbol.
    mutable String m_negative_infinity_symbol;
    /// Negative sign.
    mutable String m_negative_sign;
    /// Decimal digits number.
    mutable Nullable<int> m_number_decimal_digits;
    /// Decimal separator.
    mutable String m_number_decimal_separator;
    /// Group separator.
    mutable String m_number_group_separator;
    /// Digits per group.
    mutable ArrayPtr<int> m_number_group_sizes;
    /// Negative pattern.
    mutable Nullable<int> m_number_negative_pattern;
    /// Percent decimal digit count.
    mutable Nullable<int> m_percent_decimal_digits;
    /// Percent decimal separator.
    mutable String m_percent_decimal_separator;
    /// Percent group separator.
    mutable String m_percent_group_separator;
    /// Digits per group in percent values.
    mutable ArrayPtr<int> m_percent_group_sizes;
    /// Percent negative pattern.
    mutable Nullable<int> m_percent_negative_pattern;
    /// Percent positive pattern.
    mutable Nullable<int> m_percent_positive_pattern;
    /// Percent symbol.
    mutable String m_percent_symbol;
    /// Permille symbol.
    mutable String m_permille_symbol;
    /// Positive infinity symbol.
    mutable String m_positive_infinity_symbol;
    /// Positive sign.
    mutable String m_positive_sign;

    // Calculated properties
    mutable Nullable<bool> m_has_standart_positive_and_negative_signs;

    /// Copy constructor.
    NumberFormatInfo(const NumberFormatInfo &copy,
        bool is_read_only = false, bool is_preload_all_data = false);
    /// Constructor.
    /// @param culture_data Culture to get information from.
    /// @param is_read_only Read-only flag.
    /// @param is_preload_all_data Flag that controls data loading strategy (True - all data is loaded in the constructor, False - data is loaded on demand).
    NumberFormatInfo(const Details::CultureDataPtr& culture_data, bool is_read_only = false, bool is_preload_all_data = false);

    /// Preload all DateTimeFormat data.
    void PreloadAllData();
    /// Verify that instance is not readonly.
    void VerifyWritable();
    /// Gets lockable object.
    Lock& Lockable() const { return m_lockable; }
    /// Gets internal data.
    Details::NumberFormatData& Data() const;
    /// Property change handler (for debug purpose).
    void OnChangeProperty(const LockContext&, const char16_t* property_name);

    const String& CultureName(const LockContext&) const;
    int CurrencyDecimalDigits(const LockContext&) const;
    const String& CurrencyDecimalSeparator(const LockContext&) const;
    const String& CurrencyGroupSeparator(const LockContext&) const;
    const ArrayPtr<int>& CurrencyGroupSizes(const LockContext&) const;
    int CurrencyNegativePattern(const LockContext&) const;
    int CurrencyPositivePattern(const LockContext&) const;
    const String& CurrencySymbol(const LockContext&) const;
    DigitShapes DigitSubstitution(const LockContext&) const;
    const String& NanSymbol(const LockContext&) const;
    const ArrayPtr<String>& NativeDigits(const LockContext&) const;
    const String& NegativeInfinitySymbol(const LockContext&) const;
    const String& NegativeSign(const LockContext&) const;
    int NumberDecimalDigits(const LockContext&) const;
    const String& NumberDecimalSeparator(const LockContext&) const;
    const String& NumberGroupSeparator(const LockContext&) const;
    const ArrayPtr<int>& NumberGroupSizes(const LockContext&) const;
    int NumberNegativePattern(const LockContext&) const;
    int PercentDecimalDigits(const LockContext&) const;
    const String& PercentDecimalSeparator(const LockContext&) const;
    const String& PercentGroupSeparator(const LockContext&) const;
    const ArrayPtr<int>& PercentGroupSizes(const LockContext&) const;
    int PercentNegativePattern(const LockContext&) const;
    int PercentPositivePattern(const LockContext&) const;
    const String& PercentSymbol(const LockContext&) const;
    const String& PerMilleSymbol(const LockContext&) const;
    const String& PositiveInfinitySymbol(const LockContext&) const;
    const String& PositiveSign(const LockContext&) const;

    bool HasStandartPositiveAndNegativeSigns(const LockContext&) const;

    static const NumberFormatInfoPtr& InvariantInfo();
};

}} // namespace System::Globalization
