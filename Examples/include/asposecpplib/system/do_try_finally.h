#pragma once

#include <exception>
#include <functional>
#include <system/details/value_init.h>

#ifdef _MSC_VER
#include "details/optional.h"
#else
#include <experimental/optional>
#endif

#include <system/details/is_lambda.h>


namespace System
{
namespace Details
{

template <typename F>
class FinallyGuard
{
public:
    FinallyGuard(std::exception_ptr& exception, F&& finallyBlock)
        : mException(exception), mFinallyBlock(std::move(finallyBlock))
    {}

    ~FinallyGuard()
    {
        try
        {
            mFinallyBlock();
        }
        catch (...)
        {
            mException = std::current_exception();
        }
    }
private:
    std::exception_ptr& mException;
    F mFinallyBlock;
};

template<typename F>
FinallyGuard<F> MakeFinallyGuard(std::exception_ptr& exception, F&& f)
{
    return FinallyGuard<F>(exception, std::move(f));
}

template <typename T, typename F>
void DoTryFinallyImpl(T&& tryBlock, F&& finallyBlock)
{
    std::exception_ptr exception;
    {
        auto finally_guard = MakeFinallyGuard(exception, std::move(finallyBlock));

        try
        {
            tryBlock();
        }
        catch (...)
        {
            exception = std::current_exception();
        }
    }

    if (exception)
    {
        std::rethrow_exception(exception);
    }
}


} // namespace Details

// lambda - [](){}
template<typename T, typename F>
std::enable_if_t<Details::is_lambda_void_void<T>::value>
DoTryFinally(T&& tryBlock, F&& finallyBlock)
{
    Details::DoTryFinallyImpl(tryBlock, finallyBlock);
}

// lambda - [](bool&){}
template<typename T, typename F>
std::enable_if_t<Details::is_lambda_void_boolref<T>::value, bool>
DoTryFinally(T&& tryBlock, F&& finallyBlock)
{
    bool isReturned = true;
    Details::DoTryFinallyImpl([&]() { tryBlock(isReturned); }, finallyBlock);
    return isReturned;
}

// lambda - [](bool&) -> type {}
template<typename T, typename F>
std::enable_if_t<Details::is_lambda_nonovoid_boolref<T>::value, std::experimental::optional<std::result_of_t<T(bool&)>>>
DoTryFinally(T&& tryBlock, F&& finallyBlock)
{
    using ReturnValueType = std::result_of_t<T(bool&)>;
    ReturnValueType returnValue;

    bool isReturned = true;

    Details::DoTryFinallyImpl([&]() { returnValue = tryBlock(isReturned); }, finallyBlock);

    return isReturned ? std::experimental::optional<ReturnValueType>(returnValue) : std::experimental::nullopt;
}

} // namespace System