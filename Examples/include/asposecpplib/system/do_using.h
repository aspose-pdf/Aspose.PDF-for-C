#pragma once

#include <type_traits>
#include <functional>
#include <tuple>

#include <system/idisposable.h>
#include "details/is_lambda.h"
#include "details/value_init.h"

#ifdef _MSC_VER
#include "details/optional.h"
#include "details/apply.h"
#else
#include <experimental/optional>
#include <experimental/tuple>
#endif

namespace System {
namespace Details {

// type traits
template<typename T, typename Enable = void>
struct has_dispose_method : std::false_type {};

template<typename T>
struct has_dispose_method<
    T
    , decltype((void)(std::declval<T>()->Dispose()))
> : std::true_type {};


// Dispose Guards
template<typename Rs>
class DirectDisposeGuard
{
public:
    DirectDisposeGuard(std::exception_ptr& exception, const Rs& resource)
        : mException(exception), mResource(resource) {}

    ~DirectDisposeGuard()
    {
        if (mResource)
        {
            try
            {
                mResource->Dispose();
            }
            catch (...)
            {
                mException = std::current_exception();
            }
        }
    }

private:
    std::exception_ptr& mException;
    const Rs& mResource;
};


template<typename Rs>
class CastDisposeGuard
{
public:
    CastDisposeGuard(std::exception_ptr& exception, const Rs& resource)
        : mException(exception), mResource(resource) {}

    ~CastDisposeGuard()
    {
        auto disposable = DynamicCast_noexcept<System::IDisposable>(mResource);
        if (disposable)
        {
            try
            {
                disposable->Dispose();
            }
            catch (...)
            {
                mException = std::current_exception();
            }
        }
    }

private:
    std::exception_ptr& mException;
    const Rs& mResource;
};

// if Rs has Dispose() method
template<typename Rs>
std::enable_if_t<has_dispose_method<Rs>::value, DirectDisposeGuard<Rs>>
MakeDisposeGuard(std::exception_ptr& exception, const Rs& resource)
{
    return DirectDisposeGuard<Rs>(exception, resource);
}

// if Rs doesn't have Dispose() method
template<typename Rs>
std::enable_if_t<!has_dispose_method<Rs>::value, CastDisposeGuard<Rs>>
MakeDisposeGuard(std::exception_ptr& exception, const Rs& resource)
{
    return CastDisposeGuard<Rs>(exception, resource);
}

template<typename Base, typename Rs>
struct UsingHolder : Base
{
    using ResourceType = Rs;

    template<typename... Args>
    UsingHolder(std::exception_ptr& exception, Args&&... args)
        : Base(std::forward<Args>(args)...)
        , mException(exception)
    {}

    template<typename Tuple>
    void DoUsingImpl(Tuple&& resources)
    {
        Base::DoUsingBlock(std::forward<Tuple>(resources));
    }

    template<typename Tuple, typename E, typename... Acq>
    void DoUsingImpl(Tuple&& resources, E&& expression, Acq&&... acqs)
    {
#ifndef _MSC_VER
        using namespace std::experimental;
#endif
        ResourceType resource = apply(expression, resources);
        auto guard = MakeDisposeGuard(mException, resource);
        DoUsingImpl(std::tuple_cat(std::move(resources), std::make_tuple(std::cref(resource))), std::forward<Acq>(acqs)...);
    }

    template<typename E, typename... Acq>
    void DoUsing(E&& expression, Acq&&... acqs)
    {
        ResourceType resource = expression();
        auto guard = MakeDisposeGuard(mException, resource);
        DoUsingImpl(std::make_tuple(std::cref(resource)), std::forward<Acq>(acqs)...);
    }

    std::exception_ptr& mException;
};

template<typename F>
struct WithoutReturn
{
    WithoutReturn(F&& usingBlock) : mUsingBlock(std::move(usingBlock)) {}

    template<typename Tuple>
    void DoUsingBlock(Tuple&& resources)
    {
#ifndef _MSC_VER
        using namespace std::experimental;
#endif
        apply(mUsingBlock, resources);
    }

    F mUsingBlock;
};


template<typename F>
struct WithVoidReturn
{
    WithVoidReturn(F&& usingBlock, bool& isReturned) : mUsingBlock(std::move(usingBlock)), mIsReturned(isReturned) {}

    template<typename Tuple>
    void DoUsingBlock(Tuple&& resources)
    {
#ifndef _MSC_VER
        using namespace std::experimental;
#endif
        apply(mUsingBlock, std::tuple_cat(std::make_tuple(std::ref(mIsReturned)), resources));
    }

    F mUsingBlock;
    bool& mIsReturned;
};

template<typename F, typename Rv>
struct WithValueReturn
{
    WithValueReturn(F&& usingBlock, bool& isReturned, Rv& returnValue) 
        : mUsingBlock(std::move(usingBlock))
        , mIsReturned(isReturned)
        , mReturnValue(returnValue)
    {}

    template<typename Tuple>
    void DoUsingBlock(Tuple&& resources)
    {
#ifndef _MSC_VER
        using namespace std::experimental;
#endif
        mReturnValue = apply(mUsingBlock, std::tuple_cat(std::make_tuple(std::ref(mIsReturned)), resources));
    }

    F mUsingBlock;
    bool& mIsReturned;
    Rv& mReturnValue;
};

}

template <typename Rs, typename F>
void DoUsingImpl(const Rs& resource, F&& usingBlock)
{
    std::exception_ptr exception;
    {
        auto guard = Details::MakeDisposeGuard(exception, resource);

        try
        {
            usingBlock();
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

template <typename Rs, typename F>
std::enable_if_t<Details::is_lambda_void_void<F>::value>
DoUsing(const Rs& resource, F&& usingBlock)
{
    DoUsingImpl(resource, usingBlock);
}

template <typename Rs, typename F>
std::enable_if_t<Details::is_lambda_void_arg<F, Rs>::value>
DoUsing(const Rs& resource, F&& usingBlock)
{
    DoUsingImpl(resource, [&] { usingBlock(resource); });
}

template <typename Rs, typename F>
std::enable_if_t<Details::is_lambda_void_boolref<F>::value, bool>
DoUsingWithReturn(const Rs& resource, F&& usingBlock)
{
    bool isReturned = true;
    DoUsingImpl(resource, [&] { usingBlock(isReturned); });
    return isReturned;
}

template <typename Rs, typename F, typename RV = std::result_of_t<F(bool&)>>
std::enable_if_t<Details::is_lambda_nonovoid_boolref<F>::value, std::experimental::optional<RV>>
DoUsingWithReturn(const Rs& resource, F&& usingBlock)
{
    RV returnValue;
    bool isReturned = true;

    DoUsingImpl(resource, [&] { returnValue = usingBlock(isReturned); });

    return isReturned ? std::experimental::optional<RV>(returnValue) : std::experimental::nullopt;
}

template <typename Rs, typename F>
std::enable_if_t<Details::is_lambda_void_bool_arg<F,Rs>::value, bool>
DoUsingWithReturn(const Rs& resource, F&& usingBlock)
{
    bool isReturned = true;
    DoUsingImpl(resource, [&] { usingBlock(isReturned, resource); });
    return isReturned;
}

template <typename Rs, typename F, typename RV = std::result_of_t<F(bool&, const Rs&)>>
std::enable_if_t<Details::is_lambda_nonvoid_bool_arg<F,Rs>::value, std::experimental::optional<RV>>
DoUsingWithReturn(const Rs& resource, F&& usingBlock)
{
    RV returnValue;
    bool isReturned = true;

    DoUsingImpl(resource, [&] { returnValue = usingBlock(isReturned, resource); });

    return isReturned ? std::experimental::optional<RV>(returnValue) : std::experimental::nullopt;
}

template<typename Rs, typename F, typename... Acq>
void DoUsingMultiple(F&& usingBlock, Acq&&... acqs)
{
    std::exception_ptr exception;

    try
    {
        auto usingHolder = Details::UsingHolder<Details::WithoutReturn<F>, Rs>(exception, std::forward<F>(usingBlock));
        usingHolder.DoUsing(std::forward<Acq>(acqs)...);
    }
    catch (...)
    {
        exception = std::current_exception();
    }

    if (exception)
    {
        std::rethrow_exception(exception);
    }
}

template<typename Rs, typename F, typename... Acq>
bool DoUsingMultipleWithVoidReturn(F&& usingBlock, Acq&&... acqs)
{
    std::exception_ptr exception;
    bool isReturned = true;

    try
    {
        auto usingHolder = Details::UsingHolder<Details::WithVoidReturn<F>, Rs>(exception, std::forward<F>(usingBlock), isReturned);
        usingHolder.DoUsing(std::forward<Acq>(acqs)...);
    }
    catch (...)
    {
        exception = std::current_exception();
    }

    if (exception)
    {
        std::rethrow_exception(exception);
    }

    return isReturned;
}

template<typename Rs, typename Rv, typename F, typename... Acq>
std::experimental::optional<Rv> DoUsingMultipleWithValueReturn(F&& usingBlock, Acq&&... acqs)
{
    std::exception_ptr exception;
    bool isReturned = true;
    Rv returnValue;

    try
    {
        auto usingHolder = Details::UsingHolder<Details::WithValueReturn<F, Rv>, Rs>(exception, std::forward<F>(usingBlock), isReturned, returnValue);
        usingHolder.DoUsing(std::forward<Acq>(acqs)...);
    }
    catch (...)
    {
        exception = std::current_exception();
    }

    if (exception)
    {
        std::rethrow_exception(exception);
    }

    return isReturned ? std::experimental::optional<Rv>(returnValue) : std::experimental::nullopt;
}


}