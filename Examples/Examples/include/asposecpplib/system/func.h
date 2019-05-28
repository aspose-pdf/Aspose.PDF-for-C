/// @file system/func.h
/// Contains the declaration of System::Func class and supporting classes.
#ifndef _aspose_system_func_h_
#define _aspose_system_func_h_

#include "defines.h"
#include <functional>
#include <tuple>


namespace System
{
namespace Detail {
    /// Helper structure to change System::Function template arguments order into std::function order and to wrap std::function into replacement acceptable for ported code.
    /// @tparam RemainingArgsTuple Tuple of remaining arguments to parse.
    /// @tparam ParsedArgsTuple Tuple of function arguments that were already parsed.
    template <class RemainingArgsTuple, class ParsedArgsTuple> class FuncArgsParser;

    /// Specialization which parses all argument types (but not the return type).
    /// @tparam FirstArg First argument to parse.
    /// @tparam RemainingArgs Remaining arguments to be parsed via inheritance.
    /// @tparam ParsedArgs Arguments that are already parsed.
    template <class FirstArg, class ...RemainingArgs, class ...ParsedArgs>
    class FuncArgsParser<std::tuple<FirstArg, RemainingArgs...>, std::tuple<ParsedArgs...>> : public FuncArgsParser<std::tuple<RemainingArgs...>, std::tuple<ParsedArgs..., FirstArg>>
    {
    protected:
        /// Creates function object
        /// @tparam T Substitution for std::function<...> typename as we don't have full valid typename at this point.
        /// @param arg Function initializer.
        template <typename T>
        FuncArgsParser(const T &arg) 
            : FuncArgsParser<std::tuple<RemainingArgs...>, std::tuple<ParsedArgs..., FirstArg>>(arg) 
        {}
    };

    /// Specialization to parse the last argument (which is return type).
    /// @tparam TResult Function return type.
    /// @tparam ParsedArgs Function arguments type.
    template <class TResult, class ...ParsedArgs>
    class FuncArgsParser<std::tuple<TResult>, std::tuple<ParsedArgs...>>
    {
    protected:
        /// Creates function object.
        /// @param f Function initializer.
        FuncArgsParser(const std::function<TResult(ParsedArgs...)>& f) : m_func(f)
        {}

    public:
        /// Calls wrapped function.
        /// @param args Function arguments.
        /// @return Value returned by wrapped function.
        TResult operator() (const ParsedArgs&... args) const
        {
            return m_func(args...);
        }

    private:
        /// Actual function being called.
        std::function<TResult(ParsedArgs...)> m_func;
    };
}

/// Function delegate.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
template <class ...T> class Func : public Detail::FuncArgsParser<std::tuple<T...>, std::tuple<>>
{
public:
    // We don't have a good way of referring to the final arguments of std::function() so use a template which gets resolved at the bottom level
    /// Initializes function delegate with a function reference.
    /// @tparam Arg Should be proper specialization of std::function; we don't have valid typename at this point, so use a template instead.
    /// @param arg Function initializer.
    template <typename Arg>
    Func(const Arg &arg)
        : Detail::FuncArgsParser<std::tuple<T...>, std::tuple<>>(arg)
    {}
};

} // namespace System

#endif // _func_h_
