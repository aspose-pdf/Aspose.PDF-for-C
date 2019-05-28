/// @file system/do_try_finally.h
/// Contains the definition of service functions used to emulate the behavior of C#'s try-catch-finally statement.
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

/// Reprsents an ivocation agent that invokes particular function object in the destructor.
/// @tparam F The type of the function object to be invoked in the destructor
template <typename F>
class FinallyGuard
{
public:
    /// Constructs an instance of the FunallyGuard class.
    /// @param exception A reference to an std::exception_ptr object which 
    /// will be assigned any exception that is thrown by the specified function object 
    /// when it is invoked
    /// @param finallyBlock The function object to be invoked in the destructor 
    /// of the object being constructed
    FinallyGuard(std::exception_ptr& exception, F&& finallyBlock)
        : mException(exception), mFinallyBlock(std::move(finallyBlock))
    {}

    /// Destructor.
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
    /// The reference to the exception_ptr object through which 
    /// the exception thrown by the @mFinallyBlock function object
    /// is passed to the user of the current object.
    std::exception_ptr& mException;

    /// The function object that is invoked in the destructor of the 
    /// current object.
    F mFinallyBlock;
};

/// The factory function that constructs instances of FinallyGuard class.
/// @param exception A reference to an std::exception_ptr object that 
/// is passed to the constructor of FinallyGuard class
/// @param f The function object that is passed to the FinallyGuard class
/// @tparam F The template parameter that specifies the template instance 
/// of the FinallyGuard<> class object of which is created by the factory function
template<typename F>
FinallyGuard<F> MakeFinallyGuard(std::exception_ptr& exception, F&& f)
{
    return FinallyGuard<F>(exception, std::move(f));
}

/// Implements the main functionality provided by DoTryFinally() function.
/// @param tryBlock The function object whose body contains the implementation of the try[-catch] part
/// of the try[-catch]-finally statemet being emulated
/// @param finallyBlock The function object whose body contains the implementation of the finally part
/// of the try[-catch]-finally statement being emulated
/// @tparam T The type of the function object that implements the try[-catch] part of the
/// try[-catch]-finally statement being emulated
/// @tparam F The type of the function object that implements the finally part of the
/// try[-catch]-finally statement being emulated
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
/// The sigle function that emulates behavior of C#'s try[-catch]-finally statement. 
/// During Porting of C#'s try[-catch]-finally statement with Porter's option 
/// finally_statement_as_lambda set to true, the statement is translated 
/// into the invocation of this method.
/// @param tryBlock The function object whose body contains the implementation of the try[-catch] part
/// of the try[-catch]-finally statemet being emulated
/// @param finallyBlock The function object whose body contains the implementation of the finally part
/// of the try[-catch]-finally statement being emulated
/// @tparam T The type of the function object that implements the try[-catch] part of the
/// try[-catch]-finally statement being emulated
/// @tparam F The type of the function object that implements the finally part of the
/// try[-catch]-finally statement being emulated
template<typename T, typename F>
std::enable_if_t<Details::is_lambda_void_void<T>::value>
DoTryFinally(T&& tryBlock, F&& finallyBlock)
{
    Details::DoTryFinallyImpl(tryBlock, finallyBlock);
}

// lambda - [](bool&){}
/// The sigle function that emulates behavior of C#'s try[-catch]-finally statement. 
/// During Porting of C#'s try[-catch]-finally statement with Porter's option 
/// finally_statement_as_lambda set to true, the statement is translated 
/// into the invocation of this method. This overload handles the case in which the return value of
/// the function object that implements the try[-catch] part of the try[-catch]-finally statement
/// is bool.
/// @param tryBlock The function object whose body contains the implementation of the try[-catch] part
/// of the try[-catch]-finally statemet being emulated
/// @param finallyBlock The function object whose body contains the implementation of the finally part
/// of the try[-catch]-finally statement being emulated
/// @tparam T The type of the function object that implements the try[-catch] part of the
/// try[-catch]-finally statement being emulated
/// @tparam F The type of the function object that implements the finally part of the
/// try[-catch]-finally statement being emulated
template<typename T, typename F>
std::enable_if_t<Details::is_lambda_void_boolref<T>::value, bool>
DoTryFinally(T&& tryBlock, F&& finallyBlock)
{
    bool isReturned = true;
    Details::DoTryFinallyImpl([&]() { tryBlock(isReturned); }, finallyBlock);
    return isReturned;
}

// lambda - [](bool&) -> type {}
/// The sigle function that emulates behavior of C#'s try[-catch]-finally statement. 
/// During Porting of C#'s try[-catch]-finally statement with Porter's option 
/// finally_statement_as_lambda set to true, the statement is translated 
/// into the invocation of this method. This overload handles the case in which the return value of
/// the function object that implements the try[-catch] part of the try[-catch]-finally statement
/// is bool&.
/// @param tryBlock The function object whose body contains the implementation of the try[-catch] part
/// of the try[-catch]-finally statemet being emulated
/// @param finallyBlock The function object whose body contains the implementation of the finally part
/// of the try[-catch]-finally statement being emulated
/// @tparam T The type of the function object that implements the try[-catch] part of the
/// try[-catch]-finally statement being emulated
/// @tparam F The type of the function object that implements the finally part of the
/// try[-catch]-finally statement being emulated
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
