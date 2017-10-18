#ifndef _aspose_system_scope_guard_h_
#define _aspose_system_scope_guard_h_

namespace System
{
    template <typename F>
    struct ScopeGuard
    {
        ScopeGuard(F f) : f(f) {}
        ~ScopeGuard() { f(); }

    private:
        F f;
    };

    // auto guard = MakeScopeGuard([&](){
    //     .....
    // });
    template <typename F>
    ScopeGuard<F> MakeScopeGuard(F f)
    {
        return ScopeGuard<F>(f);
    };

} // namespace System
#endif // _aspose_system_scope_guard_h_