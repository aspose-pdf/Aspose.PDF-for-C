#pragma once


#include <system/decimal.h>

#include <cstdint>
#include <type_traits>
#include <limits>


namespace System { namespace Details {

/// For two arguments of arithmetic types (integers, floats and Decimals) defines the type calculation should be done for.
/// In C#, such type differs from the one calculated using C++ rules for some types (e. g. int + uint = long long).
/// The resulting type, if exists (operation allowed), is stored into 'type' member type.
/// @tparam LHS Left operand type.
/// @tparam RHS Right operand type.
template <typename LHS, typename RHS>
struct BinaryOperatorType {};

template<> struct BinaryOperatorType<std::int8_t, std::int8_t>   { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int8_t, std::uint8_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int8_t, std::int16_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int8_t, std::uint16_t> { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int8_t, std::int32_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int8_t, std::uint32_t> { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::int8_t, std::int64_t>  { typedef std::int64_t type; };
//template<> struct BinaryOperatorType<std::int8_t, std::uint64_t> { typedef std::int128_t type; }; // Doesn't exist
template<> struct BinaryOperatorType<std::int8_t, float>         { typedef float type; };
template<> struct BinaryOperatorType<std::int8_t, double>        { typedef double type; };
template<> struct BinaryOperatorType<std::int8_t, Decimal>       { typedef Decimal type; };

template<> struct BinaryOperatorType<std::uint8_t, std::int8_t>   { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::uint8_t, std::uint8_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::uint8_t, std::int16_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::uint8_t, std::uint16_t> { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::uint8_t, std::int32_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::uint8_t, std::uint32_t> { typedef std::uint32_t type; };
template<> struct BinaryOperatorType<std::uint8_t, std::int64_t>  { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::uint8_t, std::uint64_t> { typedef std::uint64_t type; };
template<> struct BinaryOperatorType<std::uint8_t, float>         { typedef float type; };
template<> struct BinaryOperatorType<std::uint8_t, double>        { typedef double type; };
template<> struct BinaryOperatorType<std::uint8_t, Decimal>       { typedef Decimal type; };

template<> struct BinaryOperatorType<std::int16_t, std::int8_t>   { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int16_t, std::uint8_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int16_t, std::int16_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int16_t, std::uint16_t> { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int16_t, std::int32_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int16_t, std::uint32_t> { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::int16_t, std::int64_t>  { typedef std::int64_t type; };
//template<> struct BinaryOperatorType<std::int16_t, std::uint64_t> { typedef std::int128_t type; }; // Doesn't exist
template<> struct BinaryOperatorType<std::int16_t, float>         { typedef float type; };
template<> struct BinaryOperatorType<std::int16_t, double>        { typedef double type; };
template<> struct BinaryOperatorType<std::int16_t, Decimal>       { typedef Decimal type; };

template<> struct BinaryOperatorType<std::uint16_t, std::int8_t>   { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::uint16_t, std::uint8_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::uint16_t, std::int16_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::uint16_t, std::uint16_t> { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::uint16_t, std::int32_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::uint16_t, std::uint32_t> { typedef std::uint32_t type; };
template<> struct BinaryOperatorType<std::uint16_t, std::int64_t>  { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::uint16_t, std::uint64_t> { typedef std::uint64_t type; };
template<> struct BinaryOperatorType<std::uint16_t, float>         { typedef float type; };
template<> struct BinaryOperatorType<std::uint16_t, double>        { typedef double type; };
template<> struct BinaryOperatorType<std::uint16_t, Decimal>       { typedef Decimal type; };
 
template<> struct BinaryOperatorType<std::int32_t, std::int8_t>   { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int32_t, std::uint8_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int32_t, std::int16_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int32_t, std::uint16_t> { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int32_t, std::int32_t>  { typedef std::int32_t type; };
template<> struct BinaryOperatorType<std::int32_t, std::uint32_t> { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::int32_t, std::int64_t>  { typedef std::int64_t type; };
//template<> struct BinaryOperatorType<std::int32_t, std::uint64_t> { typedef std::int128_t type; }; // Doesn't exist
template<> struct BinaryOperatorType<std::int32_t, float>         { typedef float type; };
template<> struct BinaryOperatorType<std::int32_t, double>        { typedef double type; };
template<> struct BinaryOperatorType<std::int32_t, Decimal>       { typedef Decimal type; };

template<> struct BinaryOperatorType<std::uint32_t, std::int8_t>   { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::uint32_t, std::uint8_t>  { typedef std::uint32_t type; };
template<> struct BinaryOperatorType<std::uint32_t, std::int16_t>  { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::uint32_t, std::uint16_t> { typedef std::uint32_t type; };
template<> struct BinaryOperatorType<std::uint32_t, std::int32_t>  { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::uint32_t, std::uint32_t> { typedef std::uint32_t type; };
template<> struct BinaryOperatorType<std::uint32_t, std::int64_t>  { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::uint32_t, std::uint64_t> { typedef std::uint64_t type; };
template<> struct BinaryOperatorType<std::uint32_t, float>         { typedef float type; };
template<> struct BinaryOperatorType<std::uint32_t, double>        { typedef double type; };
template<> struct BinaryOperatorType<std::uint32_t, Decimal>       { typedef Decimal type; };

template<> struct BinaryOperatorType<std::int64_t, std::int8_t>   { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::int64_t, std::uint8_t>  { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::int64_t, std::int16_t>  { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::int64_t, std::uint16_t> { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::int64_t, std::int32_t>  { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::int64_t, std::uint32_t> { typedef std::int64_t type; };
template<> struct BinaryOperatorType<std::int64_t, std::int64_t>  { typedef std::int64_t type; };
//template<> struct BinaryOperatorType<std::int64_t, std::uint64_t> { typedef std::int128_t type; }; // Doesn't exist
template<> struct BinaryOperatorType<std::int64_t, float>         { typedef float type; };
template<> struct BinaryOperatorType<std::int64_t, double>        { typedef double type; };
template<> struct BinaryOperatorType<std::int64_t, Decimal>       { typedef Decimal type; };

//template<> struct BinaryOperatorType<std::uint64_t, std::int8_t>   { typedef std::int128_t type; }; // Doesn't exist
template<> struct BinaryOperatorType<std::uint64_t, std::uint8_t>  { typedef std::uint64_t type; };
//template<> struct BinaryOperatorType<std::uint64_t, std::int16_t>  { typedef std::int128_t type; }; // Doesn't exist
template<> struct BinaryOperatorType<std::uint64_t, std::uint16_t> { typedef std::uint64_t type; };
//template<> struct BinaryOperatorType<std::uint64_t, std::int32_t>  { typedef std::int128_t type; }; // Doesn't exist
template<> struct BinaryOperatorType<std::uint64_t, std::uint32_t> { typedef std::uint64_t type; };
//template<> struct BinaryOperatorType<std::uint64_t, std::int64_t>  { typedef std::int128_t type; }; // Doesn't exist
template<> struct BinaryOperatorType<std::uint64_t, std::uint64_t> { typedef std::uint64_t type; };
template<> struct BinaryOperatorType<std::uint64_t, float>         { typedef float type; };
template<> struct BinaryOperatorType<std::uint64_t, double>        { typedef double type; };
template<> struct BinaryOperatorType<std::uint64_t, Decimal>       { typedef Decimal type; };

template<> struct BinaryOperatorType<float, std::int8_t>   { typedef float type; };
template<> struct BinaryOperatorType<float, std::uint8_t>  { typedef float type; };
template<> struct BinaryOperatorType<float, std::int16_t>  { typedef float type; };
template<> struct BinaryOperatorType<float, std::uint16_t> { typedef float type; };
template<> struct BinaryOperatorType<float, std::int32_t>  { typedef float type; };
template<> struct BinaryOperatorType<float, std::uint32_t> { typedef float type; };
template<> struct BinaryOperatorType<float, std::int64_t>  { typedef float type; };
template<> struct BinaryOperatorType<float, std::uint64_t> { typedef float type; };
template<> struct BinaryOperatorType<float, float>         { typedef float type; };
template<> struct BinaryOperatorType<float, double>        { typedef double type; };
//template<> struct BinaryOperatorType<float, Decimal>       { typedef Decimal type; }; // Not allowed

template<> struct BinaryOperatorType<double, std::int8_t>   { typedef double type; };
template<> struct BinaryOperatorType<double, std::uint8_t>  { typedef double type; };
template<> struct BinaryOperatorType<double, std::int16_t>  { typedef double type; };
template<> struct BinaryOperatorType<double, std::uint16_t> { typedef double type; };
template<> struct BinaryOperatorType<double, std::int32_t>  { typedef double type; };
template<> struct BinaryOperatorType<double, std::uint32_t> { typedef double type; };
template<> struct BinaryOperatorType<double, std::int64_t>  { typedef double type; };
template<> struct BinaryOperatorType<double, std::uint64_t> { typedef double type; };
template<> struct BinaryOperatorType<double, float>         { typedef double type; };
template<> struct BinaryOperatorType<double, double>        { typedef double type; };
//template<> struct BinaryOperatorType<double, Decimal>       { typedef Decimal type; }; // Not allowed

template<> struct BinaryOperatorType<Decimal, std::int8_t>   { typedef Decimal type; };
template<> struct BinaryOperatorType<Decimal, std::uint8_t>  { typedef Decimal type; };
template<> struct BinaryOperatorType<Decimal, std::int16_t>  { typedef Decimal type; };
template<> struct BinaryOperatorType<Decimal, std::uint16_t> { typedef Decimal type; };
template<> struct BinaryOperatorType<Decimal, std::int32_t>  { typedef Decimal type; };
template<> struct BinaryOperatorType<Decimal, std::uint32_t> { typedef Decimal type; };
template<> struct BinaryOperatorType<Decimal, std::int64_t>  { typedef Decimal type; };
template<> struct BinaryOperatorType<Decimal, std::uint64_t> { typedef Decimal type; };
//template<> struct BinaryOperatorType<Decimal, float>         { typedef Decimal type; }; // Not allowed
//template<> struct BinaryOperatorType<Decimal, double>        { typedef double type; }; // Not allowed
template<> struct BinaryOperatorType<Decimal, Decimal>       { typedef Decimal type; };


/// Calculates binary operator result using C# type conversion rules.
/// @tparam Operator STL wrapper for corresponding operator (e. g. std::less or std::plus).
/// @tparam LHS Left operand type.
/// @tparam RHS Right operand type.
/// @tparam TargetType Type to do calculation into; calculated.
/// @param lhs Left operand.
/// @param rhs Right operand.
/// @return Result of applying given operator to two operands, calculated as per C# rules.
template <
    template <typename T> class Operator,
    typename LHS,
    typename RHS,
    typename TargetType = typename BinaryOperatorType<LHS, RHS>::type
>
constexpr typename Operator<TargetType>::result_type BinaryOperatorWithCast(const LHS &lhs, const RHS &rhs)
{
    return Operator<TargetType>()(static_cast<TargetType>(lhs), static_cast<TargetType>(rhs));
}


/// Service structure to allow compile-type expressions to become unsigned, depending on context, same as in C#.
/// @tparam LiteralType Type of the expression.
/// @tparam literal_value Value of the expression.
/// @tparam CounterArgumentType Type of second argument, depending on which expression type can be changed.
/// @tparam ShouldDropSign Defines whether the sign should be dropped; calculated.
template <typename LiteralType, LiteralType literal_value, typename CounterArgumentType,
    bool ShouldDropSign = ((sizeof(CounterArgumentType) >= sizeof(LiteralType)) && (literal_value >= static_cast<LiteralType>(0)))>
struct UnsignLiteralIfPossible
{
    /// Resulting expression value.
    static constexpr LiteralType value()
    {
        return literal_value;
    }
};
/// Specialization for the case when the sign gets actually dropped.
template <typename LiteralType, LiteralType literal_value, typename CounterArgumentType>
struct UnsignLiteralIfPossible<LiteralType, literal_value, CounterArgumentType, true>
{
    /// Literal type after unsiging success.
    typedef typename std::make_unsigned<LiteralType>::type value_type;
    /// Resulting expression value in unsigned format.
    static constexpr typename std::make_unsigned<LiteralType>::type value()
    {
        return static_cast<typename std::make_unsigned<LiteralType>::type>(literal_value);
    }
};

} }

