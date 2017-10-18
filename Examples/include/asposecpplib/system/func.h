#ifndef _aspose_system_func_h_
#define _aspose_system_func_h_

#include "defines.h"
#include <functional>
#include <tuple>


namespace System
{
namespace Detail {
    template <class RemainingArgsTuple, class ParsedArgsTuple> class FuncArgsParser;

    template <class FirstArg, class ...RemainingArgs, class ...ParsedArgs>
    class FuncArgsParser<std::tuple<FirstArg, RemainingArgs...>, std::tuple<ParsedArgs...>> : public FuncArgsParser<std::tuple<RemainingArgs...>, std::tuple<ParsedArgs..., FirstArg>>
    {
    protected:
        template <typename T>
        FuncArgsParser(const T &arg) 
            : FuncArgsParser<std::tuple<RemainingArgs...>, std::tuple<ParsedArgs..., FirstArg>>(arg) 
        {}
    };

    template <class TResult, class ...ParsedArgs>
    class FuncArgsParser<std::tuple<TResult>, std::tuple<ParsedArgs...>>
    {
    protected:
        FuncArgsParser(const std::function<TResult(ParsedArgs...)>& f) : m_func(f)
        {}

    public:
        TResult operator() (const ParsedArgs&... args) const
        {
            return m_func(args...);
        }

    private:
        std::function<TResult(ParsedArgs...)> m_func;
    };
}


template <class ...T> class Func : public Detail::FuncArgsParser<std::tuple<T...>, std::tuple<>>
{
public:
    // We don't have a good way of referring to the final arguments of std::function() so use a template which gets resolved at the bottom level
    template <typename Arg>
    Func(const Arg &arg)
        : Detail::FuncArgsParser<std::tuple<T...>, std::tuple<>>(arg)
    {}
};

} // namespace System

#endif // _func_h_
