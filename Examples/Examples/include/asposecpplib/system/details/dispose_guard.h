/// @file system/details/dispose_guard.h
#ifndef _aspose_system_details_dispose_guard_h_
#define _aspose_system_details_dispose_guard_h_

#include <system/shared_ptr.h>
#include <system/idisposable.h>
#include <array>

namespace System { namespace Details {

/// Service class to handle 'using' statement translation responsible for calling Dispose() method and some other duties.
/// @tparam N The exact number of objects the class should store pointers to and call Dispose() on.
template<int N>
class DisposeGuard
{
public:
    /// Constructs a new instance of DisposeGuard class that handles the specified objects.
    /// @param a An array of shared pointers to objects to be handled by the instance being created
    DisposeGuard(std::array<SharedPtr<Object>, N>&& a)
    {
        m_objects = std::move(a);
    }

    /// Saves exception information to enable re-throwing after calling Dispose() methods.
    /// @param current_exception Current exception
    void SetCurrentException(const std::exception_ptr& current_exception)
    {
        m_current_exception = current_exception;
    }

    /// Destructor; calls Dispose() methods, then re-throws last exception (same as in C#).
    ~DisposeGuard() noexcept(false)
    {
        auto rend = m_objects.rend();
        for (auto it = m_objects.rbegin(); it != rend; ++it)
        {
            SharedPtr<Object>& obj = *it;
            if (obj)
            {
                auto disposable = dynamic_cast<IDisposable*>(obj.get());

                try
                {
                    if (disposable != nullptr)
                        disposable->Dispose();
                }
                catch (...)
                {
                    // Each new exception smothers privous one. This
                    // is consitent with C#'s rules.
                    m_current_exception = std::current_exception();
                }
            }
        }

        if (m_current_exception)
            std::rethrow_exception(m_current_exception);
    }

private:
    /// Disables cloning.
    DisposeGuard(const DisposeGuard&) = delete;
    /// Disables changing.
    void operator = (const DisposeGuard&) = delete;
    /// Objects to guard (to call Dispose() for).
    std::array<SharedPtr<Object>, N> m_objects;
    /// Information on latest exception thrown that requires re-throwing.
    std::exception_ptr m_current_exception;
};

}} // System::Details

#endif // _aspose_system_details_dispose_guard_h_
