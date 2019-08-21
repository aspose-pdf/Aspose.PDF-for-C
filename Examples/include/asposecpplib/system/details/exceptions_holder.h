#pragma once

#include <mutex>
#include <map>
#include <exception>

namespace System { namespace Details {

/// Key-value storage for thrown exceptions.
template <typename Key, typename Lockable = std::mutex>
class ExceptionsHolder final
{
public:
    ExceptionsHolder() = default;

    ExceptionsHolder(const ExceptionsHolder&) = delete;
    ExceptionsHolder& operator=(const ExceptionsHolder&) = delete;

    void store_current_exception_for(const Key& key)
    {
        const auto exception = std::current_exception();
        if (!exception)
            throw std::logic_error("no exception");

        std::lock_guard<Lockable> lock(m_lockable);

        m_exceptions[key] = exception;
    }

    void rethrow_exception_for(const Key& key)
    {
        std::lock_guard<Lockable> lock(m_lockable);

        const auto it = m_exceptions.find(key);
        if (it != m_exceptions.end())
            std::rethrow_exception(it->second);
    }

private:
    std::map<Key, std::exception_ptr> m_exceptions;
    Lockable m_lockable;
};

}} // namespace System::Details
