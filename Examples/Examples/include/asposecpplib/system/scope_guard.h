/// @file system/scope_guard.h
/// Contains the declaration System::ScopeGuard class.
#ifndef _aspose_system_scope_guard_h_
#define _aspose_system_scope_guard_h_

namespace System
{

/// The service class that provides services for running a particular function object
/// when an instance of the class goes out of scope.
/// @tparam F The type of the function object invoked by the instances of the ScopedGuard class
template <typename F>
struct ScopeGuard
{
    /// Constructs an instance that is set up to invoke the specified function object.
    /// @param f The function object to be invoked in the destructor of the object being constructed.
    ScopeGuard(F f) : f(f) {}
    /// Invokes the function object passed to the constructor.
    ~ScopeGuard() { f(); }

private:
    /// The function object to be inovked in the destructor.
    F f;
};

// auto guard = MakeScopeGuard([&](){
//     .....
// });
/// A factory function that creates instances of ScopedGuard class.
/// @param f The function object to pass to ScopedGuard class' constructor.
/// @returns A new instance of ScopedGuard class
/// @tparam The type of the function object to be invoked by the constructed ScopedGuard object
template <typename F>
ScopeGuard<F> MakeScopeGuard(F f)
{
    return ScopeGuard<F>(f);
};

} // namespace System
#endif // _aspose_system_scope_guard_h_
