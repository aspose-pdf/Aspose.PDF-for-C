/// @file system/details/lazy.h
#pragma once

#include <stdexcept>
#include <type_traits>

#include <system/details/call_once.h>

namespace System { namespace Details {

/// Specifies how a Lazy instance stores the value.
enum class LazyValueStorageType
{
    /// Value allocated as part of the Lazy instance (no dynamic memory allocation).
    Static,

    /// Value allocated using dynamic memory.
    Dynamic
};

template <typename T, LazyValueStorageType storage_type>
class LazyValueStorage;

template <typename T>
class LazyValueStorage<T, LazyValueStorageType::Static> final
{
public:
    LazyValueStorage() = default;

    LazyValueStorage(const LazyValueStorage&) = delete;
    LazyValueStorage& operator=(const LazyValueStorage&) = delete;

    template <typename... Args>
    void create(Args&&... args)
    {
        new(&m_storage) T(std::forward<Args>(args)...);
    }

    template <typename Arg>
    void create(std::initializer_list<Arg> args)
    {
        new(&m_storage) T(args);
    }

    void destroy()
    {
        get().~T();
    }

    T& get()
    {
        return *reinterpret_cast<T*>(&m_storage);
    }

    const T& get() const
    {
        return *reinterpret_cast<const T*>(&m_storage);
    }

private:
    std::aligned_storage_t<sizeof(T), std::alignment_of<T>::value> m_storage;
};

template <typename T>
class LazyValueStorage<T, LazyValueStorageType::Dynamic> final
{
public:
    LazyValueStorage()
        : m_value_ptr(nullptr)
    {}

    LazyValueStorage(const LazyValueStorage&) = delete;
    LazyValueStorage& operator=(const LazyValueStorage&) = delete;

    template <typename... Args>
    void create(Args&&... args)
    {
        m_value_ptr = new T(std::forward<Args>(args)...);
    }

    template <typename Arg>
    void create(std::initializer_list<Arg> args)
    {
        m_value_ptr = new T(args);
    }

    void destroy()
    {
        delete m_value_ptr;
        m_value_ptr = nullptr;
    }

    T& get()
    {
        return *m_value_ptr;
    }

    const T& get() const
    {
        return *m_value_ptr;
    }

private:
    T* m_value_ptr;
};

/// Provides low-level support for lazy initialization.
template <typename T, CallOnceThreadSafetyMode thread_safety_mode = CallOnceThreadSafetyMode::ThreadSafe,
    LazyValueStorageType storage_type = LazyValueStorageType::Static>
class Lazy final
{
public:
    /// Default constructor.
    constexpr Lazy() noexcept
    {}

    /// Constructor for Lazy<T, CallOnceThreadSafetyMode::Customizable>
    template <typename Dummy = void, typename = std::enable_if_t<thread_safety_mode == CallOnceThreadSafetyMode::Customizable, Dummy>>
    constexpr Lazy(bool is_thread_safe) noexcept
        : m_call_once(is_thread_safe)
    {}

    /// Copy constructor.
    Lazy(const Lazy& other)
    {
        if (other.initialized())
        {
            initialize(other.m_value.get());
        }
    }

    ~Lazy()
    {
        if (initialized())
        {
            m_value.destroy();
        }
    }

    Lazy& operator=(const Lazy&) = delete;

    /// Initialize lazy value with @args.
    /// @param args Arguments for value constructor.
    /// @throws std::logic_error If value already initialized.
    template <typename... Args>
    void initialize(Args&&... args)
    {
        auto initializer = [&]()
        {
            m_value.create(std::forward<Args>(args)...);
        };

        if (!m_call_once(initializer))
            throw std::logic_error("Lazy: value already initialized");
    }

    /// Initialize lazy value with @args.
    /// @param args Arguments for value constructor.
    /// @throws std::logic_error If value already initialized.
    template <typename Arg>
    void initialize(std::initializer_list<Arg> args)
    {
        auto initializer = [&]()
        {
            m_value.create(args);
        };

        if (!m_call_once(initializer))
            throw std::logic_error("Lazy: value already initialized");
    }

    /// Initialize lazy value with @arg or assign @arg to the value if it's already initialized.
    /// @param arg Argument for value constructor or operator=.
    template <typename Arg, typename = std::enable_if_t<!std::is_const<T>::value, Arg>>
    void initialize_or_assign(Arg&& arg)
    {
        auto initializer = [&]()
        {
            m_value.create(std::forward<Arg>(arg));
        };

        if (!m_call_once(initializer))
            m_value.get() = arg;
    }

    /// Initialize lazy value with @arg or assign @arg to the value if it's already initialized.
    /// @param arg Argument for constructor or operator=.
    template <typename Arg, typename = std::enable_if_t<!std::is_const<T>::value, Arg>>
    T& operator=(Arg&& arg)
    {
        initialize_or_assign(std::forward<Arg>(arg));
        return m_value.get();
    }

    /// Returns value reference.
    /// @throw std::logic_error If value not initialized.
    T& get()
    {
        verify_initialized();
        return m_value.get();
    }

    /// Returns value reference.
    /// @throw std::logic_error If value not initialized.
    const T& get() const
    {
        verify_initialized();
        return m_value.get();
    }

    /// Initialize value if it's not initialized and returns reference to the value.
    /// @param user_initializer Initialization function.
    template <typename Initializer>
    T& get(Initializer&& user_initializer)
    {
        return get_or_initialize_from(std::forward<Initializer>(user_initializer));
    }

    /// Initialize value if it's not initialized and returns reference to the value.
    /// @param user_initializer Initialization function.
    template <typename Initializer>
    T& get_or_initialize_from(Initializer&& user_initializer)
    {
        auto initializer = [&]()
        {
            m_value.create(user_initializer());
        };

        m_call_once(initializer);
        return m_value.get();
    }

    /// Initialize value if it's not initialized and returns reference to the value.
    /// @param user_initializer Initialization function.
    /// @param run_initializer_simultaneously Flag indicating that all threads are allowed to run @user_initializer simultaneously.
    template <typename Initializer>
    T& get_or_initialize_from(Initializer&& user_initializer, bool run_initializer_simultaneously)
    {
        if (run_initializer_simultaneously)
        {
            if (!initialized())
            {
                const T result = user_initializer();
                auto initializer = [&]()
                {
                    m_value.create(result);
                };

                m_call_once(initializer);
            }
            return m_value.get();
        }
        else
        {
            return get_or_initialize_from(user_initializer);
        }
    }
    
    /// Initialize value if it's not initialized and returns reference to the value.
    /// @param args Arguments for value constructor.
    template <typename... Args>
    T& get_or_initialize(Args&&... args)
    {
        auto initializer = [&]()
        {
            m_value.create(std::forward<Args>(args)...);
        };

        m_call_once(initializer);
        return m_value.get();
    }

    /// Initialize value if it's not initialized and returns reference to the value.
    /// @param args Arguments for value constructor.
    template <typename Arg>
    T& get_or_initialize(std::initializer_list<Arg> args)
    {
        auto initializer = [&]()
        {
            m_value.create(args);
        };

        m_call_once(initializer);
        return m_value.get();
    }

    /// Checks if value is initialized.
    explicit operator bool() const noexcept
    {
        return initialized(std::memory_order_consume);
    }

    /// Checks if value is not initialized.
    bool operator !() const noexcept
    {
        return !operator bool();
    }

private:
    CallOnce<thread_safety_mode> m_call_once;
    LazyValueStorage<T, storage_type> m_value;

    bool initialized(std::memory_order order = std::memory_order_acquire) const
    {
        return m_call_once.called(order);
    }

    void verify_initialized() const
    {
        if (!initialized())
            throw std::logic_error("Lazy: value not initialized");
    }
};

template <typename T, LazyValueStorageType storage_type = LazyValueStorageType::Static>
using ThreadSafeLazy = Lazy<T, CallOnceThreadSafetyMode::ThreadSafe, storage_type>;

template <typename T, LazyValueStorageType storage_type = LazyValueStorageType::Static>
using NotThreadSafeLazy = Lazy<T, CallOnceThreadSafetyMode::NotThreadSafe, storage_type>;

template <typename T, LazyValueStorageType storage_type = LazyValueStorageType::Static>
using CustomizableLazy = Lazy<T, CallOnceThreadSafetyMode::Customizable, storage_type>;

}} // namespace System::Details
